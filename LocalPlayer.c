

int __fastcall LocalPlayer::updateAi(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int v2; // r7@1
  int v3; // r5@1
  ClientInstance **v4; // r8@1
  int v5; // r6@1
  char v6; // r0@4
  char v10; // r0@12
  Options *v15; // r0@18
  bool v16; // r1@21
  int v18; // [sp+0h] [bp-38h]@8
  int v19; // [sp+4h] [bp-34h]@8
  __int64 v20; // [sp+8h] [bp-30h]@8
  __int64 v21; // [sp+10h] [bp-28h]@8
  __int64 v22; // [sp+18h] [bp-20h]@1

  v1 = this;
  Player::updateAi(this);
  v2 = 0;
  v3 = ClientInstance::getMoveTurnInput(*((ClientInstance **)v1 + 1329));
  v22 = 0LL;
  v4 = (ClientInstance **)((char *)v1 + 5316);
  v5 = 0;
  if ( ClientInstance::isInGame(*((ClientInstance **)v1 + 1329)) == 1 )
  {
    v5 = *(_QWORD *)(v3 + 4) >> 32;
    v2 = *(_QWORD *)(v3 + 4);
    v22 = *(_QWORD *)(v3 + 4);
  }
  if ( *(_BYTE *)(v3 + 67) )
    v6 = 1;
  else
    v6 = 0;
    if ( *((_DWORD *)v1 + 1360) > 0 )
      v6 = 1;
  *((_BYTE *)v1 + 4080) = v6;
  if ( ClientInstance::isRealityFullVRMode(*v4) == 1 )
    v18 = v2;
    v19 = v5;
    mce::MathUtility::rotateVec2((int)&v20, (int)&v18, *((_DWORD *)v1 + 1484));
    v2 = v20;
    v21 = v20;
    _R0 = &v21;
    _R0 = &v22;
  __asm { VLDR            S2, [R0,#4] }
  _R0 = v2 & 0x7FFFFFFF;
  __asm
    VLDR            S0, =0.1
    VMOV            S4, R0
  *((_DWORD *)v1 + 1037) = v2;
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
    VSTR            S2, [R0]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VABS.F32        S2, S2 }
    v10 = 0;
    __asm
    {
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v10 = 1;
    *((_BYTE *)v1 + 4160) = v10;
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF && !*((_BYTE *)v1 + 5397) )
      _R7 = (LocalPlayer *)((char *)v1 + 5392);
      __asm
      {
        VLDR            S2, [R7]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        v15 = (Options *)ClientInstance::getOptions(*v4);
        Options::getVRHeadSteering(v15);
      *(_DWORD *)_R7 = 0;
      *((_BYTE *)v1 + 5397) = 1;
    *((_BYTE *)v1 + 4160) = 1;
    v16 = 1;
    v16 = 0;
      v16 = 1;
  Mob::setJumping(v1, v16);
  return (*(int (__fastcall **)(LocalPlayer *, _DWORD))(*(_DWORD *)v1 + 788))(v1, *(_BYTE *)(v3 + 60));
}


PlayerChunkSource *__fastcall LocalPlayer::requestChunkRadius(LocalPlayer *this, unsigned int a2)
{
  LocalPlayer *v2; // r4@1
  void *v4; // r0@2
  int v5; // r6@4
  int (__fastcall *v6)(int, int); // r7@4
  int v7; // r0@4
  Level *v16; // r0@4
  int v17; // r3@5
  PlayerChunkSource *result; // r0@5
  void **v19; // [sp+0h] [bp-28h]@5
  int v20; // [sp+4h] [bp-24h]@5
  int v21; // [sp+8h] [bp-20h]@5
  char v22; // [sp+Ch] [bp-1Ch]@5
  unsigned int v23; // [sp+10h] [bp-18h]@5

  v2 = this;
  _R5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = *(_DWORD *)v4;
  v6 = *(int (__fastcall **)(int, int))(**(_DWORD **)v4 + 200);
  v7 = ClientInstance::getSplitScreenCount(*((ClientInstance **)v2 + 1329));
  _R0 = v6(v5, v7);
  __asm
  {
    VMOV            S0, R5
    VMOV            S2, R0
    VCVT.F32.U32    S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R5, S0
  v16 = (Level *)Entity::getLevel(v2);
  if ( Level::isClientSide(v16) )
    Player::getClientSubId(v2);
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26DA5A8;
    v23 = _R5;
    result = (PlayerChunkSource *)(*(int (__cdecl **)(_DWORD, void ***, _DWORD, int, void **))(**((_DWORD **)v2 + 1231)
                                                                                             + 8))(
                                    *((_DWORD *)v2 + 1231),
                                    &v19,
                                    *(_DWORD *)(**((_DWORD **)v2 + 1231) + 8),
                                    v17,
                                    &off_26DA5A8);
    result = j_j_j__ZN6Player14setChunkRadiusEj(v2, _R5);
  return result;
}


int __fastcall LocalPlayer::registerFramewiseActionOrStop(int result)
{
  _BYTE *v1; // r4@2
  Options *v7; // r0@3

  if ( !*(_BYTE *)(result + 5397) )
  {
    v1 = (_BYTE *)(result + 5397);
    _R5 = (_DWORD *)(result + 5392);
    __asm
    {
      VLDR            S0, =0.1
      VLDR            S2, [R5]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(result + 5316));
      Options::getVRHeadSteering(v7);
    *_R5 = 0;
    result = 1;
    *v1 = 1;
  }
  return result;
}


LocalPlayer *__fastcall LocalPlayer::~LocalPlayer(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  void *v4; // r0@3
  void *v5; // r0@5
  int v6; // r0@7
  void *v7; // r0@9
  void *v8; // r0@11
  int v9; // r0@13
  void *v10; // r0@15
  void *v11; // r0@17
  int v12; // r0@19
  void *v13; // r0@21
  void *v14; // r0@23
  int v15; // r0@25
  void *v16; // r0@27
  void *v17; // r0@29
  int v18; // r0@31
  int v19; // r1@33
  void *v20; // r0@33
  void *v21; // r0@34
  void *v22; // r0@36
  void *v23; // r0@38
  void *v24; // r0@40
  int v25; // r0@42
  unsigned int *v27; // r2@45
  signed int v28; // r1@47

  v1 = this;
  v2 = (char *)this + 6028;
  *(_DWORD *)this = &off_26D9FA0;
  v3 = *((_DWORD *)this + 1507);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *(_DWORD *)v2 = 0;
  v4 = (void *)*((_DWORD *)v1 + 1499);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 1495);
  if ( v5 )
    operator delete(v5);
  v6 = *((_DWORD *)v1 + 1488);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 1488) = 0;
  v7 = (void *)*((_DWORD *)v1 + 1479);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 1475);
  if ( v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 1468);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 1468) = 0;
  v10 = (void *)*((_DWORD *)v1 + 1461);
  if ( v10 )
    operator delete(v10);
  v11 = (void *)*((_DWORD *)v1 + 1457);
  if ( v11 )
    operator delete(v11);
  v12 = *((_DWORD *)v1 + 1450);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  *((_DWORD *)v1 + 1450) = 0;
  v13 = (void *)*((_DWORD *)v1 + 1443);
  if ( v13 )
    operator delete(v13);
  v14 = (void *)*((_DWORD *)v1 + 1439);
  if ( v14 )
    operator delete(v14);
  v15 = *((_DWORD *)v1 + 1432);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  *((_DWORD *)v1 + 1432) = 0;
  v16 = (void *)*((_DWORD *)v1 + 1425);
  if ( v16 )
    operator delete(v16);
  v17 = (void *)*((_DWORD *)v1 + 1421);
  if ( v17 )
    operator delete(v17);
  v18 = *((_DWORD *)v1 + 1414);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *((_DWORD *)v1 + 1414) = 0;
  v19 = *((_DWORD *)v1 + 1407);
  v20 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  }
  v21 = (void *)*((_DWORD *)v1 + 1398);
  if ( v21 )
    operator delete(v21);
  v22 = (void *)*((_DWORD *)v1 + 1389);
  if ( v22 )
    operator delete(v22);
  v23 = (void *)*((_DWORD *)v1 + 1377);
  if ( v23 )
    operator delete(v23);
  v24 = (void *)*((_DWORD *)v1 + 1373);
  if ( v24 )
    operator delete(v24);
  v25 = *((_DWORD *)v1 + 1366);
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  *((_DWORD *)v1 + 1366) = 0;
  InventoryMenu::~InventoryMenu((LocalPlayer *)((char *)v1 + 5276));
  Player::~Player(v1);
  return v1;
}


int __fastcall LocalPlayer::slotChanged(Entity *a1, Entity *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  int v7; // r6@1
  Entity *v8; // r7@1
  Entity *v9; // r4@1
  Level *v10; // r0@1
  int result; // r0@1
  bool v12; // zf@2
  char v13; // r0@6
  __int16 v14; // [sp+5h] [bp-BBh]@0
  char v15; // [sp+7h] [bp-B9h]@0
  int v16; // [sp+8h] [bp-B8h]@6
  char v17; // [sp+Ch] [bp-B4h]@6
  __int16 v18; // [sp+Dh] [bp-B3h]@6
  char v19; // [sp+Fh] [bp-B1h]@6
  int v20; // [sp+10h] [bp-B0h]@6
  int v21; // [sp+14h] [bp-ACh]@6
  int v22; // [sp+18h] [bp-A8h]@6
  int v23; // [sp+20h] [bp-A0h]@16
  void *v24; // [sp+3Ch] [bp-84h]@14
  void *v25; // [sp+4Ch] [bp-74h]@12
  int v26; // [sp+60h] [bp-60h]@6
  int v27; // [sp+68h] [bp-58h]@10
  void *v28; // [sp+84h] [bp-3Ch]@8
  void *ptr; // [sp+94h] [bp-2Ch]@6

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = (Level *)Entity::getLevel(a1);
  result = Level::isClientSide(v10);
  if ( (Entity *)((char *)v9 + 5280) != v8 )
  {
    v12 = a6 == 0;
    if ( !a6 )
    {
      result ^= 1u;
      v12 = result == 0;
    }
    if ( v12 )
      v13 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 8))(v8);
      v16 = 0;
      v17 = v13;
      v19 = v15;
      v18 = v14;
      v20 = 0;
      v21 = v7;
      ItemInstance::ItemInstance((ItemInstance *)&v22, v6);
      ItemInstance::ItemInstance((ItemInstance *)&v26, a5);
      InventoryTransactionManager::addAction((int)v9 + 5152, (int)&v16);
      if ( ptr )
        operator delete(ptr);
      if ( v28 )
        operator delete(v28);
      if ( v27 )
        (*(void (**)(void))(*(_DWORD *)v27 + 4))();
      v27 = 0;
      if ( v25 )
        operator delete(v25);
      if ( v24 )
        operator delete(v24);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      result = 0;
  }
  return result;
}


void __fastcall LocalPlayer::openAnvil(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openAnvil(this, a2);
}


void __fastcall LocalPlayer::setPlayerGameTypeWithoutServerNotification(int a1, int a2)
{
  LocalPlayer::setPlayerGameTypeWithoutServerNotification(a1, a2);
}


signed int __fastcall LocalPlayer::changeDimension(LocalPlayer *this, const ChangeDimensionPacket *a2)
{
  LocalPlayer *v2; // r5@1
  const ChangeDimensionPacket *v3; // r7@1
  int v4; // r0@1
  int v5; // r9@1
  int v6; // r6@1
  _DWORD *v8; // r4@6
  int v9; // r12@6
  int v10; // r2@6
  int v11; // r3@6
  int v12; // r8@6
  ClientInstance **v13; // r10@6
  int v14; // r7@6
  Level *v15; // r0@6
  int v16; // r0@6
  int v17; // r6@6
  unsigned int *v18; // r1@7
  unsigned int v19; // r0@9
  unsigned int *v20; // r7@13
  unsigned int v21; // r0@15
  ClientInstance *v22; // r6@20
  void *v28; // r0@20
  int v29; // r0@21
  void *v30; // r4@21
  int v31; // r0@22
  int v32; // r0@25
  int v33; // r0@25
  void (__fastcall *v35)(LocalPlayer *, int *); // r2@25
  signed int result; // r0@25
  unsigned int *v37; // r2@26
  signed int v38; // r1@28
  int v39; // [sp+4h] [bp-84h]@25
  int v40; // [sp+8h] [bp-80h]@25
  int v41; // [sp+Ch] [bp-7Ch]@25
  void *v42; // [sp+10h] [bp-78h]@21
  int v43; // [sp+18h] [bp-70h]@20
  char v44; // [sp+1Ch] [bp-6Ch]@6
  int v45; // [sp+20h] [bp-68h]@6
  char v46; // [sp+24h] [bp-64h]@25

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 524))();
  v5 = *((_DWORD *)v3 + 4);
  v6 = v4;
  _ZF = v4 == 1;
  if ( v4 != 1 )
    _ZF = v5 == 1;
  if ( _ZF )
    *((_DWORD *)v2 + 113) = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v2 + 516))(v2);
  v8 = operator new(0x20u);
  *v8 = 0;
  v8[1] = v6;
  v8[2] = v5;
  v9 = (int)(v8 + 3);
  v10 = *((_DWORD *)v3 + 6);
  v11 = *((_DWORD *)v3 + 7);
  *(_DWORD *)v9 = *((_DWORD *)v3 + 5);
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *((_BYTE *)v8 + 24) = 0;
  *((_BYTE *)v8 + 25) = 0;
  v8[7] = 0;
  *((_DWORD *)v2 + 1383) = 0;
  v12 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
  v13 = (ClientInstance **)((char *)v2 + 5316);
  v14 = ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
  v15 = (Level *)Entity::getLevel(v2);
  v16 = Level::isClientSide(v15);
  SceneFactory::createDimensionChangeProgressScreen((unsigned __int64 *)&v44, v14, v16 ^ 1, v5);
  SceneStack::pushScreen(v12, (int)&v44, 0);
  v17 = v45;
  if ( v45 )
  {
    v18 = (unsigned int *)(v45 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  }
  v22 = *v13;
  sub_119C884((void **)&v43, "portal.travel");
  _R0 = Random::_genRandInt32((LocalPlayer *)((char *)v2 + 552));
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.4
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.8
    VADD.F32        S0, S0, S2
    VMOV            R3, S0
  ClientInstance::playUI((int)v22);
  v28 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v43 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = Entity::getLevel(v2);
  v42 = v8;
  Level::requestPlayerChangeDimension(v29, (unsigned int)v2, (int *)&v42);
  v30 = v42;
  if ( v42 )
    v31 = *((_DWORD *)v42 + 7);
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    operator delete(v30);
  v42 = 0;
  v32 = ClientInstance::getHoloInput(*v13);
  (*(void (**)(void))(*(_DWORD *)v32 + 132))();
  v33 = ClientInstance::getHoloInput(*v13);
  HolographicPlatform::getTransform((int)&v46, v33, 20, 15, 0);
  _R0 = mce::MathUtility::getBestHorizDirFromViewMatrix((int)&v46);
    VNEG.F32        S0, S0
    VSTR            S0, [R0]
  *((_DWORD *)v2 + 1330) = 4;
  v35 = *(void (__fastcall **)(LocalPlayer *, int *))(*(_DWORD *)v2 + 116);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v35(v2, &v39);
  result = 1;
  *((_BYTE *)v2 + 353) = 1;
  return result;
}


void __fastcall LocalPlayer::openCommandBlock(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openCommandBlock(this, a2);
}


void __fastcall LocalPlayer::startCrafting(LocalPlayer *this, const BlockPos *a2, bool a3)
{
  LocalPlayer *v3; // r6@1
  const BlockPos *v4; // r5@1
  bool v5; // r4@1
  int v6; // r7@2
  const BlockPos *v7; // r0@2
  int v8; // r4@2
  unsigned int *v9; // r1@3
  unsigned int v10; // r0@5
  unsigned int *v11; // r5@9
  unsigned int v12; // r0@11
  int v13; // [sp+0h] [bp-20h]@2
  int v14; // [sp+4h] [bp-1Ch]@2

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v6 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 1329));
    v7 = (const BlockPos *)ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1329));
    SceneFactory::createWorkbenchScreen((SceneFactory *)&v13, v7, (int)v4, v5);
    SceneStack::pushScreen(v6, (int)&v13, 0);
    v8 = v14;
    if ( v14 )
    {
      v9 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
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
    }
  }
}


int __fastcall LocalPlayer::getItemActivationOffsetX(LocalPlayer *this)
{
  int result; // r0@1

  _R0 = (char *)this + 6020;
  __asm
  {
    VLDR            S0, [R0]
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall LocalPlayer::_setRideInputFor(LocalPlayer *this, Entity *a2)
{
  Entity *v2; // r5@1
  LocalPlayer *v3; // r4@1
  int v4; // r0@3
  int v5; // r0@6
  signed int v6; // r0@7

  v2 = a2;
  v3 = this;
  if ( Entity::hasCategory((int)a2, 0x20000) == 1 )
  {
    if ( ClientInstance::isInGame(*((ClientInstance **)v3 + 1329)) == 1 )
    {
      v4 = ClientInstance::getInput(*((ClientInstance **)v3 + 1329));
      j_j_j__ZN18ClientInputHandler15updateInputModeE17GamePlayInputMode(v4, 1);
      return;
    }
    v6 = 5536;
  }
  else
    if ( Entity::hasCategory((int)v2, 0x10000) != 1 )
      v5 = ClientInstance::getInput(*((ClientInstance **)v3 + 1329));
      j_j_j__ZN18ClientInputHandler15updateInputModeE17GamePlayInputMode(v5, 4);
    v6 = 5537;
  *((_BYTE *)v3 + v6) = 1;
}


void __fastcall LocalPlayer::openHopper(int a1, __int64 *a2)
{
  LocalPlayer::openHopper(a1, a2);
}


int __fastcall LocalPlayer::applyFinalFriction(LocalPlayer *this, float a2)
{
  LocalPlayer *v2; // r4@1
  float v3; // r5@1
  int v4; // r0@1
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*((ClientInstance **)this + 1329));
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 76))() == 1 && Abilities::isFlying((LocalPlayer *)((char *)v2 + 4320)) )
  {
    result = 0;
    *((_DWORD *)v2 + 27) = 0;
    *((_DWORD *)v2 + 29) = 0;
  }
  else
    result = j_j_j__ZN3Mob18applyFinalFrictionEf(v2, v3);
  return result;
}


__int64 __fastcall LocalPlayer::getControllingPlayer(LocalPlayer *this, Entity *a2)
{
  LocalPlayer *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = *(_QWORD *)Entity::getUniqueID(a2);
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall LocalPlayer::_isPaddle(LocalPlayer *this, const ItemInstance *a2)
{
  return 1;
}


int __fastcall LocalPlayer::closeScreen(LocalPlayer *this)
{
  SceneStack *v1; // r0@1

  v1 = (SceneStack *)ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1329));
  return j_j_j__ZN10SceneStack17schedulePopScreenEi_0(v1, 1);
}


void __fastcall LocalPlayer::openHopper(int a1, __int64 *a2)
{
  int v2; // r5@1
  __int64 *v3; // r4@1
  int v4; // r6@2
  int v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*(ClientInstance **)(v2 + 5316));
    v5 = ClientInstance::getSceneFactory(*(ClientInstance **)(v2 + 5316));
    SceneFactory::createHopperScreen((unsigned __int64 *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::die(LocalPlayer *this, const EntityDamageSource *a2)
{
  LocalPlayer::die(this, a2);
}


signed int __fastcall LocalPlayer::_fireDimensionChanged(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  Player::_fireDimensionChanged(this);
  ClientInstance::onDimensionChanged(*((ClientInstance **)v1 + 1329));
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 1329)) + 800) = 0;
  result = -1;
  *((_DWORD *)v1 + 130) = -1;
  *((_DWORD *)v1 + 131) = -1;
  return result;
}


void __fastcall LocalPlayer::openCommandBlock(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createCommandBlockScreen((SceneFactory *)&v11, v5, v2, (int)v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::readAdditionalSaveData(LocalPlayer *this, const CompoundTag *a2)
{
  LocalPlayer::readAdditionalSaveData(this, a2);
}


unsigned int __fastcall LocalPlayer::resetLastHmdAngle(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int v2; // r0@1
  unsigned int result; // r0@1
  char v4; // [sp+8h] [bp-50h]@1

  v1 = this;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 1329));
  HolographicPlatform::getTransform((int)&v4, v2, 20, 15, 0);
  result = mce::MathUtility::getBestHorizDirFromViewMatrix((int)&v4) ^ 0x80000000;
  *((_DWORD *)v1 + 1345) = result;
  return result;
}


void __fastcall LocalPlayer::openBeacon(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openBeacon(this, a2);
}


int __fastcall LocalPlayer::clearMovementState(LocalPlayer *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getMoveTurnInput(*((ClientInstance **)this + 1329));
  return (*(int (**)(void))(*(_DWORD *)v1 + 24))();
}


void __fastcall LocalPlayer::handleEntityEvent(Player *this, signed int a2, signed int a3, unsigned int a4)
{
  LocalPlayer::handleEntityEvent(this, a2, a3, a4);
}


void __fastcall LocalPlayer::openContainer(int a1, __int64 *a2)
{
  int v2; // r4@1
  __int64 *v3; // r5@1
  int v4; // r6@2
  int v5; // r0@2
  int v6; // r3@2
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r5@9
  unsigned int v11; // r0@11
  char v12; // [sp+Ch] [bp-1Ch]@2
  int v13; // [sp+10h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*(ClientInstance **)(v2 + 5316));
    v5 = ClientInstance::getSceneFactory(*(ClientInstance **)(v2 + 5316));
    SceneFactory::createChestScreen((unsigned __int64 *)&v12, v5, v2, v6, *v3);
    SceneStack::pushScreen(v4, (int)&v12, 0);
    v7 = v13;
    if ( v13 )
    {
      v8 = (unsigned int *)(v13 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
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
    }
  }
}


int __fastcall LocalPlayer::deleteContainerManager(LocalPlayer *this)
{
  LocalPlayer *v1; // r5@1
  int v2; // r7@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  int v8; // r0@11
  int v9; // r6@11
  unsigned int *v10; // r2@14
  unsigned int v11; // r1@16
  Level *v12; // r0@22
  int v13; // r0@22
  signed int v14; // r1@22
  char v15; // r0@25
  int result; // r0@26
  unsigned int *v17; // r1@27
  unsigned int *v18; // r5@33
  void **v19; // [sp+4h] [bp-2Ch]@25
  int v20; // [sp+8h] [bp-28h]@25
  int v21; // [sp+Ch] [bp-24h]@25
  char v22; // [sp+10h] [bp-20h]@25
  char v23; // [sp+11h] [bp-1Fh]@25
  int v24; // [sp+14h] [bp-1Ch]@1
  int v25; // [sp+18h] [bp-18h]@1

  v1 = this;
  Player::getContainerManager((Player *)&v24, (int)this);
  v2 = v25;
  if ( v25 )
  {
    v3 = *(_DWORD *)(v25 + 4);
    v4 = (unsigned int *)(v25 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
        {
          v7 = 1;
          v2 = 0;
          goto LABEL_11;
        }
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = __strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    v7 = 0;
    if ( !*v4 )
      v7 = 1;
LABEL_11:
    v8 = v25;
    v9 = v24;
    if ( v7 )
      v9 = 0;
    if ( v25 )
      v10 = (unsigned int *)(v25 + 8);
      if ( &pthread_create )
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  }
  else
    v9 = 0;
    v2 = 0;
  v12 = (Level *)Entity::getLevel(v1);
  v13 = Level::isClientSide(v12);
  v14 = v9;
  if ( v9 )
    v14 = 1;
  if ( (v13 & v14) == 1 )
    v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
    v20 = 2;
    v21 = 1;
    v22 = 0;
    v19 = &off_26DA6C0;
    v23 = v15;
    (*(void (**)(void))(**((_DWORD **)v1 + 1231) + 8))();
  result = Player::deleteContainerManager(v1);
  if ( v2 )
    v17 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
    else
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall LocalPlayer::causeFallDamage(LocalPlayer *this, float a2)
{
  MobEffectInstance *v4; // r0@1
  AttributeInstance *v10; // r0@4
  char v14; // r6@5
  void (__fastcall *v15)(LocalPlayer *, signed int, char *, signed int); // r7@5
  signed int v16; // r1@5
  int v18; // r5@13
  float v19; // r1@13
  int v20; // r6@13
  float v22; // r1@13
  int v23; // r7@13
  float v24; // r1@13
  int v25; // r0@13
  void (__fastcall *v26)(LocalPlayer *, signed int, char *, _DWORD); // r5@13
  int result; // r0@14
  int v28; // r5@15
  float v29; // r1@15
  int v30; // r0@15
  int v31; // r6@15
  float v33; // r1@15
  int v34; // r7@15
  float v35; // r1@15
  int v36; // r0@15
  int (__fastcall *v37)(LocalPlayer *, signed int, char *, _DWORD); // r6@15
  char v38; // [sp+4h] [bp-94h]@15
  char v39; // [sp+10h] [bp-88h]@13
  unsigned __int8 v40; // [sp+1Ch] [bp-7Ch]@13
  char v41; // [sp+20h] [bp-78h]@11
  int v42; // [sp+24h] [bp-74h]@11
  char v43; // [sp+28h] [bp-70h]@9
  int v44; // [sp+2Ch] [bp-6Ch]@11
  char v45; // [sp+30h] [bp-68h]@7
  void **v46; // [sp+38h] [bp-60h]@7
  signed int v47; // [sp+3Ch] [bp-5Ch]@7
  signed int v48; // [sp+40h] [bp-58h]@7
  char v49; // [sp+44h] [bp-54h]@7
  __int64 v50; // [sp+48h] [bp-50h]@7
  char v51; // [sp+54h] [bp-44h]@9
  char v52; // [sp+5Ch] [bp-3Ch]@5

  _R4 = this;
  _R5 = a2;
  v4 = (MobEffectInstance *)Mob::getEffect(this, (const MobEffect *)MobEffect::JUMP);
  __asm { VMOV            S18, R5 }
  if ( v4 )
  {
    _R0 = MobEffectInstance::getAmplifier(v4) + 1;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
  }
  else
    __asm { VLDR            S16, =0.0 }
  v10 = (AttributeInstance *)(*(int (__fastcall **)(LocalPlayer *, void *))(*(_DWORD *)_R4 + 1004))(
                               _R4,
                               &SharedAttributes::FALL_DAMAGE);
  _R0 = AttributeInstance::getCurrentValue(v10);
  __asm
    VMOV.F32        S0, #-3.0
    VMOV            S2, R0
    VMUL.F32        S2, S2, S18
    VSUB.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  _R0 = ceilf(_R0);
    VMOV            S16, R0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v28 = Entity::getRegion(_R4);
    v30 = mce::Math::floor(*((mce::Math **)_R4 + 18), v29);
    __asm { VLDR            S0, =-0.2 }
    v31 = v30;
      VLDR            S2, [R4,#0x4C]
      VLDR            S4, [R4,#0x13C]
      VADD.F32        S0, S2, S0
      VSUB.F32        S0, S0, S4
      VMOV            R0, S0
    v34 = mce::Math::floor(_R0, v33);
    v36 = mce::Math::floor(*((mce::Math **)_R4 + 20), v35);
    BlockSource::getBlockID((BlockSource *)&v46, v28, v31, v34, v36);
    v37 = *(int (__fastcall **)(LocalPlayer *, signed int, char *, _DWORD))(*(_DWORD *)_R4 + 556);
    Entity::getAttachPos((AABB *)&v38, (int)_R4, 0, 0);
    result = v37(_R4, 35, &v38, (unsigned __int8)v46);
    v14 = 0;
    v15 = *(void (__fastcall **)(LocalPlayer *, signed int, char *, signed int))(*(_DWORD *)_R4 + 556);
    Entity::getAttachPos((AABB *)&v52, (int)_R4, 0, 0);
    __asm { VMOV.F32        S0, #4.0 }
    v16 = 25;
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v16 = 24;
    v15(_R4, v16, &v52, -1);
    __asm { VLDR            S20, [R4,#0x4C] }
    Entity::getRuntimeID((Entity *)&v45, (int)_R4);
      VCMPE.F32       S20, #0.0
    v47 = 2;
    v48 = 1;
    v49 = 0;
    v46 = &off_26DA788;
    v50 = *(_QWORD *)&v45;
    __asm { VSTR            S18, [SP,#0x98+var_48] }
    if ( _NF ^ _VF )
      v14 = 1;
    v51 = v14;
    (*(void (__cdecl **)(_DWORD))(**((_DWORD **)_R4 + 1231) + 8))(*((_DWORD *)_R4 + 1231));
    EntityDamageSource::EntityDamageSource((int)&v43, 5);
      EntityDamageSource::EntityDamageSource((int)&v41, 12);
      v44 = v42;
      EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v41);
      VCVTR.S32.F32   S0, S16
      VMOV            R2, S0
    Entity::hurt(_R4, (const EntityDamageSource *)&v43, _R2, 1, 0);
    if ( !(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 288))(_R4) )
      v18 = Entity::getRegion(_R4);
      v20 = mce::Math::floor(*((mce::Math **)_R4 + 18), v19);
      __asm
      {
        VLDR            S0, =-0.2
        VLDR            S2, [R4,#0x4C]
        VLDR            S4, [R4,#0x13C]
        VADD.F32        S0, S2, S0
        VSUB.F32        S0, S0, S4
        VMOV            R0, S0
      }
      v23 = mce::Math::floor(_R0, v22);
      v25 = mce::Math::floor(*((mce::Math **)_R4 + 20), v24);
      BlockSource::getBlockID((BlockSource *)&v40, v18, v20, v23, v25);
      v26 = *(void (__fastcall **)(LocalPlayer *, signed int, char *, _DWORD))(*(_DWORD *)_R4 + 556);
      Entity::getAttachPos((AABB *)&v39, (int)_R4, 0, 0);
      v26(_R4, 9, &v39, v40);
    result = EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v43);
  return result;
}


InstantaneousAttributeBuff *__fastcall LocalPlayer::hurtTo(LocalPlayer *this, int a2)
{
  LocalPlayer *v2; // r4@1
  InstantaneousAttributeBuff *result; // r0@6
  int v5; // r0@7
  AttributeInstance *v10; // r4@7
  __int64 v11; // r2@7
  int v13; // [sp+0h] [bp-58h]@4
  char v14; // [sp+8h] [bp-50h]@7

  v2 = this;
  _R5 = Mob::getHealth(this) - a2;
  if ( _R5 <= 0 )
  {
    v5 = (*(int (__fastcall **)(LocalPlayer *, void *))(*(_DWORD *)v2 + 1000))(v2, &SharedAttributes::HEALTH);
    __asm { VMOV            S0, R5 }
    v10 = (AttributeInstance *)v5;
    LODWORD(v11) = 9;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    }
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v14, _R1, v11);
    AttributeInstance::addBuff(v10, (const AttributeBuff *)&v14);
    result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v14);
  }
  else
    *((_DWORD *)v2 + 1018) = _R5;
    *((_DWORD *)v2 + 857) = Mob::getHealth(v2);
    if ( *((_BYTE *)v2 + 4829) )
      *((_DWORD *)v2 + 105) = 20;
    EntityDamageSource::EntityDamageSource((int)&v13, 0);
    (*(void (__fastcall **)(LocalPlayer *, int, int *, signed int))(*(_DWORD *)v2 + 852))(v2, _R5, &v13, 1);
      *((_DWORD *)v2 + 858) = 10;
      *((_DWORD *)v2 + 859) = 10;
    result = (InstantaneousAttributeBuff *)EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v13);
  return result;
}


char *__fastcall LocalPlayer::getInventoryMenu(LocalPlayer *this)
{
  return (char *)this + 5276;
}


void __fastcall LocalPlayer::openChalkboard(LocalPlayer *this, ChalkboardBlockEntity *a2, bool a3)
{
  LocalPlayer::openChalkboard(this, a2, a3);
}


int __fastcall LocalPlayer::setInventoryOptions(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  __int64 v4; // r0@1
  __int16 v5; // r2@1

  v2 = a1;
  v3 = a2;
  EntityInteraction::setInteractText((int *)(a1 + 5628), a2);
  v4 = *(_QWORD *)(v3 + 1);
  v5 = *((_WORD *)v3 + 6);
  *(_BYTE *)(v2 + 5642) = *((_BYTE *)v3 + 14);
  *(_WORD *)(v2 + 5640) = v5;
  *(_QWORD *)(v2 + 5632) = v4;
  return v4;
}


void __fastcall LocalPlayer::openEnchanter(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createEnchantingScreen((SceneFactory *)&v11, v5, v2, (int)v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::openHorseInventory(int a1, __int64 *a2)
{
  LocalPlayer::openHorseInventory(a1, a2);
}


void __fastcall LocalPlayer::openPortfolio(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int v2; // r5@2
  int v3; // r0@2
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r5@9
  unsigned int v8; // r0@11
  int v9; // [sp+0h] [bp-18h]@2
  int v10; // [sp+4h] [bp-14h]@2

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v2 = ClientInstance::getClientSceneStack(*((ClientInstance **)v1 + 1329));
    v3 = ClientInstance::getSceneFactory(*((ClientInstance **)v1 + 1329));
    SceneFactory::createPortfolioScreen((SceneFactory *)&v9, v3);
    SceneStack::pushScreen(v2, (int)&v9, 0);
    v4 = v10;
    if ( v10 )
    {
      v5 = (unsigned int *)(v10 + 4);
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
        v7 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    }
  }
}


void __fastcall LocalPlayer::openChalkboard(LocalPlayer *this, ChalkboardBlockEntity *a2, bool a3)
{
  LocalPlayer *v3; // r6@1
  bool v4; // r8@1
  BlockEntity *v5; // r5@1
  int v6; // r7@1
  const BlockPos *v7; // r6@1
  char *v8; // r0@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  int v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1329));
  v7 = (const BlockPos *)ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1329));
  v8 = BlockEntity::getPosition(v5);
  SceneFactory::createChalkboardScreen((SceneFactory *)&v14, v7, (int)v8, v4);
  SceneStack::pushScreen(v6, (int)&v14, 0);
  v9 = v15;
  if ( v15 )
  {
    v10 = (unsigned int *)(v15 + 4);
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
  }
}


signed int __fastcall LocalPlayer::setArmor(int a1, int a2, ItemInstance *a3)
{
  int v3; // r4@1
  ItemInstance *v4; // r5@1
  int v5; // r6@1
  ItemInstance *v6; // r0@1
  signed int result; // r0@1
  int v8; // r3@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (ItemInstance *)(*(int (**)(void))(*(_DWORD *)a1 + 1028))();
  result = ItemInstance::operator==(v4, v6);
  if ( !result )
  {
    Player::setArmor(v3, v5, (int)v4);
    result = ItemInstance::isNull(v4);
    if ( !result )
    {
      MinecraftEventing::fireEventItemUsed(v3, v4, 0);
      MinecraftEventing::fireEventItemEquipped((MinecraftEventing *)v3, v4, (const ItemInstance *)(v5 + 2), v8);
      result = ItemInstance::getId((ItemInstance *)(v3 + 3664));
      if ( result == *(_WORD *)(Item::mHelmet_iron + 18) )
      {
        result = ItemInstance::getId((ItemInstance *)(v3 + 3736));
        if ( result == *(_WORD *)(Item::mChestplate_iron + 18) )
        {
          result = ItemInstance::getId((ItemInstance *)(v3 + 3808));
          if ( result == *(_WORD *)(Item::mLeggings_iron + 18) )
          {
            result = ItemInstance::getId((ItemInstance *)(v3 + 3880));
            if ( result == *(_WORD *)(Item::mBoots_iron + 18) )
              result = j_j_j__ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE(v3, 21);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall LocalPlayer::sendInput(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@1
  char v4; // r7@1
  char v5; // r0@1
  void **v7; // [sp+0h] [bp-30h]@1
  signed int v8; // [sp+4h] [bp-2Ch]@1
  signed int v9; // [sp+8h] [bp-28h]@1
  char v10; // [sp+Ch] [bp-24h]@1
  int v11; // [sp+10h] [bp-20h]@1
  int v12; // [sp+14h] [bp-1Ch]@1
  char v13; // [sp+18h] [bp-18h]@1
  char v14; // [sp+19h] [bp-17h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 1038);
  v3 = *((_DWORD *)this + 1037);
  v4 = *((_BYTE *)this + 4080);
  v5 = (*(int (**)(void))(*(_DWORD *)this + 312))();
  v8 = 2;
  v9 = 1;
  v10 = 0;
  v7 = &off_26DA710;
  v11 = v3;
  v12 = v2;
  v13 = v4;
  v14 = v5;
  return (*(int (__cdecl **)(_DWORD, void ***, _DWORD, signed int, void **, signed int, signed int))(**((_DWORD **)v1 + 1231) + 8))(
           *((_DWORD *)v1 + 1231),
           &v7,
           *(_DWORD *)(**((_DWORD **)v1 + 1231) + 8),
           2,
           &off_26DA710,
           1);
}


signed int __fastcall LocalPlayer::addLevels(LocalPlayer *this, int a2)
{
  LocalPlayer *v2; // r5@1
  int v3; // r4@1

  v2 = this;
  v3 = a2;
  ClientInstance::onGameEventNotification(*((_DWORD *)this + 1329));
  return j_j_j__ZN6Player9addLevelsEi(v2, v3);
}


InstantaneousAttributeBuff *__fastcall LocalPlayer::addExperience(LocalPlayer *this, int a2)
{
  LocalPlayer *v2; // r5@1
  int v3; // r4@1

  v2 = this;
  v3 = a2;
  ClientInstance::onGameEventNotification(*((_DWORD *)this + 1329));
  return j_j_j__ZN6Player13addExperienceEi(v2, v3);
}


int __fastcall LocalPlayer::checkSuperSonic(Entity *a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  BlockSource *v5; // r0@1
  BlockSource *v6; // r7@1
  Block *v7; // r0@1
  int v8; // r1@2
  int v9; // r2@2
  Block *v10; // r9@2
  int v11; // r1@2
  int v12; // r2@2
  Block *v13; // r5@2
  int v14; // r2@2
  int v15; // r8@2
  int v16; // r2@2
  Block *v17; // r11@2
  int v18; // r1@2
  int v19; // r2@2
  Block *v20; // r10@2
  int v21; // r1@2
  int v22; // r2@2
  int v23; // r6@2
  Block *v24; // r0@6
  Block *v25; // r0@11
  int v27; // [sp+4h] [bp-6Ch]@2
  int v28; // [sp+8h] [bp-68h]@2
  int v29; // [sp+Ch] [bp-64h]@2
  int v30; // [sp+10h] [bp-60h]@2
  int v31; // [sp+14h] [bp-5Ch]@2
  int v32; // [sp+18h] [bp-58h]@2
  __int64 v33; // [sp+1Ch] [bp-54h]@2
  int v34; // [sp+24h] [bp-4Ch]@2
  __int64 v35; // [sp+28h] [bp-48h]@2
  int v36; // [sp+30h] [bp-40h]@2
  int v37; // [sp+34h] [bp-3Ch]@2
  int v38; // [sp+38h] [bp-38h]@2
  int v39; // [sp+3Ch] [bp-34h]@2
  int v40; // [sp+40h] [bp-30h]@2
  int v41; // [sp+44h] [bp-2Ch]@2
  int v42; // [sp+48h] [bp-28h]@2

  v3 = a3;
  v4 = a2;
  v5 = (BlockSource *)Entity::getRegion(a1);
  v6 = v5;
  v7 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)v4);
  if ( Block::isSolid(v7) )
    return 0;
  v8 = *(_DWORD *)(v4 + 4);
  v9 = *(_DWORD *)(v4 + 8);
  v40 = *(_DWORD *)v4 - 1;
  v41 = v8;
  v42 = v9;
  v10 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v40);
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *(_DWORD *)(v4 + 8);
  v37 = *(_DWORD *)v4 + 1;
  v38 = v11;
  v39 = v12;
  v13 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v37);
  v14 = *(_DWORD *)(v4 + 8);
  v35 = *(_QWORD *)v4;
  v36 = v14 + 1;
  v15 = BlockSource::getBlock(v6, (const BlockPos *)&v35);
  v16 = *(_DWORD *)(v4 + 8);
  v33 = *(_QWORD *)v4;
  v34 = v16 - 1;
  v17 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v33);
  v18 = *(_DWORD *)(v4 + 4);
  v19 = *(_DWORD *)(v4 + 8);
  v30 = *(_DWORD *)v4;
  v31 = v18 + 1;
  v32 = v19;
  v20 = (Block *)BlockSource::getBlock(v6, (const BlockPos *)&v30);
  v21 = *(_DWORD *)(v4 + 4);
  v22 = *(_DWORD *)(v4 + 8);
  v27 = *(_DWORD *)v4;
  v28 = v21 - 1;
  v29 = v22;
  v23 = BlockSource::getBlock(v6, (const BlockPos *)&v27);
  if ( v3 == 2 )
  {
    if ( Block::isSolid(v13) != 1 )
      return 0;
    v24 = v10;
    goto LABEL_9;
  }
  if ( v3 != 1 )
    if ( v3 || Block::isSolid(v17) != 1 )
    v24 = (Block *)v15;
LABEL_9:
    if ( Block::isSolid(v24) == 1 && Block::isSolid(v20) == 1 )
    {
      v25 = (Block *)v23;
      return Block::isSolid(v25);
    }
  if ( Block::isSolid(v13) == 1 && Block::isSolid(v10) == 1 && Block::isSolid(v17) == 1 )
    v25 = (Block *)v15;
    return Block::isSolid(v25);
  return 0;
}


void __fastcall LocalPlayer::openBeacon(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@1
  Player *v5; // r0@1
  int v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r0@4
  unsigned int *v9; // r5@8
  unsigned int v10; // r0@10
  char v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1329));
  v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
  SceneFactory::createBeaconScreen((SceneFactory *)&v11, v5, v2, v3);
  SceneStack::pushScreen(v4, (int)&v11, 0);
  v6 = v12;
  if ( v12 )
  {
    v7 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
}


int __fastcall LocalPlayer::aiStep(LocalPlayer *this)
{
  signed int v2; // r0@1
  LocalPlayer *v3; // r8@1
  int v9; // r5@6
  void *v12; // r0@6
  MobEffectInstance *v13; // r0@11
  signed int v14; // r0@13
  __int64 v16; // r10@23
  ClientInputHandler *v17; // r0@23
  int v18; // r0@23
  int v20; // r7@28
  AttributeInstance *v23; // r0@28
  int v26; // r9@31
  signed int v27; // r0@34
  bool v28; // zf@36
  signed int v29; // r7@43
  int v30; // r0@45
  int v31; // r0@50
  bool v32; // zf@50
  signed int v33; // r1@64
  float v34; // r3@68
  signed int v35; // r0@70
  signed int v38; // r0@77
  signed int v39; // r6@83
  _BOOL4 v40; // r0@85
  Ability *v41; // r0@88
  Ability *v42; // r7@88
  char v43; // r0@88
  Level *v44; // r0@90
  Level *v45; // r0@91
  int v46; // r0@91
  signed int v47; // r0@92
  float v48; // r2@95
  int v49; // r10@96
  int v50; // r6@96
  unsigned int v51; // r11@96
  unsigned int v53; // r7@96
  LocalPlayer *v54; // r8@98
  int v55; // r0@117
  int v56; // r6@117
  int v57; // r0@117
  bool v58; // zf@117
  const ItemInstance *v59; // r1@120
  Level *v60; // r0@123
  int v61; // r0@126
  int v62; // r6@126
  int v63; // r0@126
  bool v64; // zf@126
  const ItemInstance *v65; // r1@129
  int v66; // r6@132
  int v67; // r6@134
  int v68; // r6@134
  int v69; // r0@136
  signed int v70; // r1@136
  Level *v71; // r0@141
  int *v72; // r7@143
  signed int v73; // r0@143
  int v74; // r6@149
  float v75; // r1@149
  int v76; // r0@151
  int v78; // r5@153
  bool v79; // zf@153
  int v82; // r0@156
  float v84; // r1@156
  Level *v91; // r0@162
  Level *v92; // r0@163
  int v93; // r0@163
  int v94; // r3@163
  Level *v95; // r0@164
  int result; // r0@164
  unsigned int *v97; // r2@167
  signed int v98; // r1@169
  mce::Math *v99; // [sp+10h] [bp-140h]@28
  mce::Math *v100; // [sp+10h] [bp-140h]@82
  int v101; // [sp+14h] [bp-13Ch]@23
  char v102; // [sp+18h] [bp-138h]@163
  void **v103; // [sp+4Ch] [bp-104h]@156
  signed int v104; // [sp+50h] [bp-100h]@156
  signed int v105; // [sp+54h] [bp-FCh]@156
  char v106; // [sp+58h] [bp-F8h]@156
  int v107; // [sp+5Ch] [bp-F4h]@156
  char v108; // [sp+60h] [bp-F0h]@142
  void **v109; // [sp+68h] [bp-E8h]@142
  int v110; // [sp+6Ch] [bp-E4h]@142
  int v111; // [sp+70h] [bp-E0h]@142
  char v112; // [sp+74h] [bp-DCh]@142
  int v113; // [sp+78h] [bp-D8h]@142
  int v114; // [sp+7Ch] [bp-D4h]@142
  int v115; // [sp+80h] [bp-D0h]@142
  int v116; // [sp+84h] [bp-CCh]@142
  int v117; // [sp+88h] [bp-C8h]@142
  __int64 v118; // [sp+90h] [bp-C0h]@142
  char v119; // [sp+98h] [bp-B8h]@124
  void **v120; // [sp+A0h] [bp-B0h]@124
  int v121; // [sp+A4h] [bp-ACh]@124
  int v122; // [sp+A8h] [bp-A8h]@124
  char v123; // [sp+ACh] [bp-A4h]@124
  int v124; // [sp+B0h] [bp-A0h]@124
  int v125; // [sp+B4h] [bp-9Ch]@124
  int v126; // [sp+B8h] [bp-98h]@124
  int v127; // [sp+BCh] [bp-94h]@124
  int v128; // [sp+C0h] [bp-90h]@124
  __int64 v129; // [sp+C8h] [bp-88h]@124
  char v130; // [sp+D0h] [bp-80h]@91
  int v131; // [sp+108h] [bp-48h]@6

  _R4 = this;
  v2 = *((_DWORD *)this + 1359);
  v3 = (LocalPlayer *)((char *)_R4 + 5436);
  if ( v2 >= 1 )
    *(_DWORD *)v3 = v2 - 1;
  _R0 = *((_DWORD *)_R4 + 1327);
  _R7 = (signed int *)((char *)_R4 + 5308);
  *((_DWORD *)_R4 + 1328) = _R0;
  if ( *((_BYTE *)_R4 + 5398) )
  {
    __asm
    {
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      v9 = *((_DWORD *)_R4 + 1329);
      sub_119C884((void **)&v131, "portal.trigger");
      _R0 = Random::_genRandInt32((LocalPlayer *)((char *)_R4 + 552));
      __asm
      {
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VLDR            S2, =0.4
        VMUL.F32        S0, S0, S2
        VLDR            S2, =0.8
        VADD.F32        S0, S0, S2
        VMOV            R3, S0
      }
      ClientInstance::playUI(v9);
      v12 = (void *)(v131 - 12);
      if ( (int *)(v131 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v131 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
        }
        else
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      __asm { VLDR            S0, [R7] }
      VLDR            S2, =0.0125
      VADD.F32        S0, S0, S2
      VMOV.F32        S2, #1.0
      VSTR            S0, [R7]
      VCMPE.F32       S0, S2
    if ( !(_NF ^ _VF) )
      goto LABEL_13;
  }
  else if ( Mob::hasEffect(_R4, (const MobEffect *)MobEffect::CONFUSION) != 1
         || (v13 = (MobEffectInstance *)Mob::getEffect(_R4, (const MobEffect *)MobEffect::CONFUSION),
             MobEffectInstance::getDuration(v13) < 61) )
      VLDR            S0, [R7]
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VLDRGT          S2, =-0.05
        VADDGT.F32      S0, S0, S2
        VSTRGT          S0, [R7]
    if ( _NF ^ _VF )
      v14 = 0;
      goto LABEL_19;
  else
      VLDR            S0, =0.0066667
      VLDR            S2, [R7]
      VADD.F32        S0, S2, S0
LABEL_13:
      v14 = 1065353216;
LABEL_19:
      *_R7 = v14;
      goto LABEL_20;
LABEL_20:
  if ( *((_BYTE *)_R4 + 221) != *(_BYTE *)(Block::mPortal + 4) && !*((_BYTE *)_R4 + 5645) )
    *((_BYTE *)_R4 + 5398) = 0;
    *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 1329)) + 800) = 0;
  _R5 = ClientInstance::getMoveTurnInput(*((ClientInstance **)_R4 + 1329));
  --*((_DWORD *)_R4 + 1331);
  --*((_DWORD *)_R4 + 1332);
  --*((_DWORD *)_R4 + 1333);
  LODWORD(v16) = Entity::isRiding(_R4);
  __asm { VLDR            S16, [R5,#8] }
  HIDWORD(v16) = *(_BYTE *)(_R5 + 60);
  v101 = *(_BYTE *)(_R5 + 67);
  v17 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R4 + 1329));
  ClientInputHandler::updatePlayerState(v17, _R4);
  (*(void (__fastcall **)(int, LocalPlayer *))(*(_DWORD *)_R5 + 8))(_R5, _R4);
  v18 = Player::isUsingItem(_R4);
  _ZF = (_DWORD)v16 == 0;
  if ( !(_DWORD)v16 )
    _ZF = v18 == 1;
  if ( _ZF )
      VLDR            S0, =0.35
      VLDR            S2, [R5,#4]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R5,#4]
      VLDR            S2, [R5,#8]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R5,#8]
    *(_DWORD *)v3 = 0;
  v99 = (LocalPlayer *)((char *)_R4 + 5436);
  v20 = ClientInstance::isInGame(*((ClientInstance **)_R4 + 1329));
  LODWORD(_R8) = *(_QWORD *)(_R5 + 4) >> 32;
  _R6 = (mce::Math *)*(_QWORD *)(_R5 + 4);
  v23 = (AttributeInstance *)(*(int (__fastcall **)(LocalPlayer *, void *))(*(_DWORD *)_R4 + 1004))(
                               _R4,
                               &Player::HUNGER);
  _R0 = AttributeInstance::getCurrentValue(v23);
  __asm { VMOV            S2, R0 }
    _R6 = (mce::Math *)v20;
    _R8 = *(float *)&v20;
  _R1 = &FoodConstants::FOOD_SPRINT_LEVEL;
  __asm
    VLDR            S0, [R1]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v26 = Abilities::getBool((int)_R4 + 4320, (int **)&Abilities::MAYFLY);
    v26 = 1;
  if ( *((_BYTE *)_R4 + 216) )
    __asm { VLDR            S0, =0.8 }
    v27 = 0;
      VCMPE.F32       S16, S0
      v27 = 1;
    HIDWORD(v16) = HIDWORD(v16) != 0;
    v28 = v16 == 0;
    if ( !v16 )
      v28 = v27 == 0;
    if ( v28 )
        VMOV            S2, R8
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
LABEL_50:
        v31 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 792))(_R4);
        v32 = v31 == 0;
        if ( !v31 )
          v32 = v26 == 1;
        if ( v32 && !Player::isUsingItem(_R4) && !Mob::hasEffect(_R4, (const MobEffect *)MobEffect::BLINDNESS) )
          if ( *(_DWORD *)v99 > 0 || *(_BYTE *)(_R5 + 61) )
            (*(void (__fastcall **)(LocalPlayer *, signed int))(*(_DWORD *)_R4 + 796))(_R4, 1);
          else
            *(_DWORD *)v99 = 7;
        goto LABEL_59;
    __asm { VLDR            S18, =0.8 }
    v29 = 0;
      VMOV            S20, R8
      VCMPE.F32       S16, S18
      v29 = 1;
    v30 = Abilities::getBool((int)_R4 + 4320, (int **)&Abilities::FLYING);
    __asm { VCMPE.F32       S20, S18 }
    if ( !_ZF )
      HIDWORD(v16) = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( !(_NF ^ _VF) && !(v30 ^ 1 | HIDWORD(v16) | (unsigned int)v16) && !v29 )
      goto LABEL_50;
LABEL_59:
  if ( !(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 792))(_R4) )
      VLDR            S0, =0.8
      VMOV            S2, R8
      VCMPE.F32       S2, S0
    if ( !(_NF ^ _VF)
      && v26 == 1
      && !Player::isUsingItem(_R4)
      && !Mob::hasEffect(_R4, (const MobEffect *)MobEffect::BLINDNESS) )
      v33 = 0;
      if ( !*(_BYTE *)(_R5 + 61) )
        v33 = 1;
      if ( !((unsigned int)v16 | v33) )
        (*(void (__fastcall **)(LocalPlayer *, signed int))(*(_DWORD *)_R4 + 796))(_R4, 1);
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 792))(_R4) == 1 )
      VMOV            S0, R6
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S0, S0
      VADD.F32        S2, S2, S4
      VSQRT.F32       S4, S2
      VLDR            S2, =0.8
      VCMPE.F32       S4, S2
      goto LABEL_81;
    __asm { VABS.F32        S0, S0 }
    v35 = 0;
      v35 = 1;
    if ( v35 | (unsigned int)v16 )
    _R10 = (int)_R4 + 6040;
    _R7 = (int)_R4 + 6048;
      VLDR            S0, [R10]
      VABS.F32        S4, S0
      VABS.F32        S6, S2
      VCMPE.F32       S6, S4
      if ( mce::MathUtility::floatEqualsEpsilon(*((mce::MathUtility **)_R4 + 20), *((float *)_R4 + 1515), 0.00005, v34) )
LABEL_81:
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)_R4 + 796))(_R4, 0);
        goto LABEL_82;
        VLDR            S2, [R7]
        VLDR            S0, [R10]
      VABS.F32        S2, S2
      VABS.F32        S0, S0
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v38 = 0;
    else
      v38 = mce::MathUtility::floatEqualsEpsilon(*((mce::MathUtility **)_R4 + 18), *((float *)_R4 + 1513), 0.00005, v34);
    if ( v38 || (v26 ^ 1) == 1 )
LABEL_82:
  *((_DWORD *)_R4 + 1001) = 1065353216;
  v100 = _R6;
  if ( Abilities::getBool((int)_R4 + 4320, (int **)&Abilities::MAYFLY) == 1 )
    v39 = 0;
    if ( !v101 )
      v39 = 1;
    v40 = Entity::isRiding(_R4);
    if ( *(_BYTE *)(_R5 + 67) && (!v40 & v39) == 1 )
      if ( *((_DWORD *)_R4 + 1331) <= 0 )
        v47 = 7;
      else
        v41 = (Ability *)Abilities::getAbility((int)_R4 + 4320, (int **)&Abilities::FLYING);
        v42 = v41;
        v43 = Ability::getBool(v41);
        Ability::setBool(v42, v43 ^ 1);
        if ( Ability::getBool(v42) == 1 )
          (*(void (__fastcall **)(LocalPlayer *, _DWORD))(*(_DWORD *)_R4 + 788))(_R4, 0);
        v44 = (Level *)Entity::getLevel(_R4);
        if ( Level::isClientSide(v44) == 1 )
          v45 = (Level *)Entity::getLevel(_R4);
          v46 = Level::getAdventureSettings(v45);
          AdventureSettingsPacket::AdventureSettingsPacket(
            (int)&v130,
            v46,
            (int)_R4 + 4320,
            0,
            *((_QWORD *)_R4 + 7),
            *((_QWORD *)_R4 + 7) >> 32,
            0);
          (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
        v47 = 0;
        *((_DWORD *)_R4 + 56) = 0;
      *((_DWORD *)_R4 + 1331) = v47;
  if ( Abilities::isFlying((LocalPlayer *)((char *)_R4 + 4320)) == 1 )
    v49 = *(_BYTE *)(_R5 + 64);
    v50 = *(_BYTE *)(_R5 + 65);
    v51 = *(_WORD *)(_R5 + 62);
    _R0 = mce::Math::absMax(v100, _R8, v48);
      VLDR            S0, =0.01
      VMOV            S2, R0
    v53 = v51 >> 8;
      v54 = (LocalPlayer *)((char *)_R4 + 4004);
      if ( (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 652))(_R4) == 1 )
        *(_DWORD *)v54 = 1052770304;
        if ( !((v50 | v51 | v53 | v49) & 0xFF) )
          __asm
          {
            VMOV.F32        S0, #0.375
            VLDR            S2, [R4,#0x70]
            VMUL.F32        S0, S2, S0
            VSTR            S0, [R4,#0x70]
          }
        *(_DWORD *)v54 = 1061158912;
    if ( (_BYTE)v51 )
        VLDRNE          S0, =0.15
        VLDRNE          S2, [R4,#0x70]
        VADDNE.F32      S0, S2, S0
        VSTRNE          S0, [R4,#0x70]
    if ( v50 )
        VLDRNE          S0, =0.05
    if ( v53 )
        VLDRNE          S0, =-0.22
    if ( v49 )
        VLDRNE          S0, =-0.15
  if ( !v101 )
    if ( *(_BYTE *)(_R5 + 67) )
      if ( !*((_BYTE *)_R4 + 216) )
        __asm
          VLDR            S0, [R4,#0x70]
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          if ( !Mob::isGliding(_R4) && !Abilities::isFlying((LocalPlayer *)((char *)_R4 + 4320)) )
            v55 = (*(int (__fastcall **)(LocalPlayer *, signed int))(*(_DWORD *)_R4 + 1028))(_R4, 1);
            v56 = v55;
            v57 = *(_BYTE *)(v55 + 15);
            v58 = v57 == 0;
            if ( v57 )
              v58 = *(_DWORD *)v56 == 0;
            if ( !v58 && !ItemInstance::isNull((ItemInstance *)v56) )
            {
              if ( *(_BYTE *)(v56 + 14) )
              {
                if ( ArmorItem::isFlyEnabled((ArmorItem *)v56, v59) == 1 )
                {
                  Player::startGliding(_R4);
                  v60 = (Level *)Entity::getLevel(_R4);
                  if ( Level::isClientSide(v60) == 1 )
                  {
                    Entity::getRuntimeID((Entity *)&v119, (int)_R4);
                    v121 = 2;
                    v122 = 1;
                    v123 = 0;
                    v120 = &off_26DA670;
                    v126 = 0;
                    v127 = 0;
                    v124 = 0;
                    v125 = 0;
                    v128 = 15;
                    v129 = *(_QWORD *)&v119;
                    (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
                  }
                }
              }
            }
  if ( Mob::isGliding(_R4) == 1 )
    v61 = (*(int (__fastcall **)(LocalPlayer *, signed int))(*(_DWORD *)_R4 + 1028))(_R4, 1);
    v62 = v61;
    v63 = *(_BYTE *)(v61 + 15);
    v64 = v63 == 0;
    if ( v63 )
      v64 = *(_DWORD *)v62 == 0;
    v66 = v64
       || ItemInstance::isNull((ItemInstance *)v62)
       || !*(_BYTE *)(v62 + 14)
       || !ArmorItem::isFlyEnabled((ArmorItem *)v62, v65);
    v67 = v66 | Entity::onLadder(_R4, 1);
    v68 = v67 | (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 208))(_R4);
    if ( v101 || !*(_BYTE *)(_R5 + 67) )
      if ( v68 != 1 )
        goto LABEL_143;
      v69 = Mob::getGlidingTicks(_R4);
      v70 = 0;
      if ( v69 > 10 )
        v70 = 1;
      if ( !(v68 | v70) )
    Player::stopGliding(_R4);
    v71 = (Level *)Entity::getLevel(_R4);
    if ( Level::isClientSide(v71) == 1 )
      Entity::getRuntimeID((Entity *)&v108, (int)_R4);
      v110 = 2;
      v111 = 1;
      v112 = 0;
      v109 = &off_26DA670;
      v115 = 0;
      v116 = 0;
      v113 = 0;
      v114 = 0;
      v117 = 16;
      v118 = *(_QWORD *)&v108;
      (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
LABEL_143:
  v72 = (int *)((char *)_R4 + 5448);
  v73 = *((_DWORD *)_R4 + 1362);
  if ( v73 <= -1 )
    *v72 = v73 + 1;
    if ( v73 >= -1 )
      *((_DWORD *)_R4 + 1363) = 0;
  if ( v101 )
    if ( Entity::isRiding(_R4) == 1 && Entity::isWASDControlled(*((Entity **)_R4 + 128)) == 1 )
      v74 = Entity::getControllingSeat(*((Entity **)_R4 + 128));
      if ( v74 == Entity::getRiderIndex(*((Entity **)_R4 + 128), _R4) )
        if ( *(_BYTE *)(_R5 + 67) )
          v76 = *v72;
          _R1 = *v72 + 1;
          *v72 = _R1;
          if ( _R1 > 9 )
            _R0 = v76 - 8;
            __asm
              VLDR            S2, =0.2
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VDIV.F32        S0, S2, S0
              VLDR            S2, =0.8
              VADD.F32        S0, S0, S2
              VMOV            S0, R1
              VLDR            S2, =0.1
              VMUL.F32        S0, S0, S2
          __asm { VSTR            S0, [R0] }
          v78 = *((_DWORD *)_R4 + 128);
          *v72 = -10;
          v79 = *(_BYTE *)(v78 + 216) == 0;
          if ( !*(_BYTE *)(v78 + 216) )
            v79 = *(_DWORD *)(v78 + 512) == 0;
          if ( !v79 )
            _R6 = (int)_R4 + 5452;
              VLDR            S16, =100.0
              VLDR            S0, [R6]
              VMUL.F32        S0, S0, S16
              VMOV            R0, S0
            v82 = mce::Math::floor(_R0, v75);
            Mob::onPlayerJump((Mob *)v78, v82);
            v104 = 2;
            v105 = 1;
            v106 = 0;
            v103 = &off_26DA698;
            v107 = mce::Math::floor(_R0, v84);
            (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
  Mob::aiStep(_R4);
  Player::aiStep(_R4);
  Mob::_applyRidingRotationLimits(_R4);
  _R0 = *((_DWORD *)_R4 + 31);
  *((_DWORD *)_R4 + 855) = _R0;
  _R2 = *((_DWORD *)_R4 + 1401);
  *((_DWORD *)_R4 + 1404) = *((_DWORD *)_R4 + 1402);
  *((_DWORD *)_R4 + 1403) = _R2;
    VMOV            S2, R2
    VLDR            S0, [R4,#0x78]
  _R5 = (int)_R4 + 5608;
    VLDR            S16, =0.4
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VMOV            S2, R0
    VSTR            S0, [R1]
    VLDR            S0, [R5]
    VSUB.F32        S0, S2, S0
    VMOV            R0, S0
  _R0 = mce::Math::wrapDegrees(_R0, COERCE_FLOAT((LocalPlayer *)((char *)_R4 + 5604)));
    VMOV            S0, R0
    VLDR            S2, [R5]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R5]
    if ( Abilities::getBool((int)_R4 + 4320, (int **)&Abilities::FLYING) == 1
      && !(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 652))(_R4) )
      Abilities::setAbility((int)_R4 + 4320, (int **)&Abilities::FLYING, 0);
      v91 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v91) == 1 )
        v92 = (Level *)Entity::getLevel(_R4);
        v93 = Level::getAdventureSettings(v92);
        AdventureSettingsPacket::AdventureSettingsPacket(
          (int)&v102,
          v93,
          (int)_R4 + 4320,
          v94,
          *((_QWORD *)_R4 + 7),
          *((_QWORD *)_R4 + 7) >> 32,
          0);
        (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
  v95 = (Level *)Entity::getLevel(_R4);
  result = Level::isClientSide(v95);
  if ( result == 1 )
    result = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 1136))(_R4);
  return result;
}


void __fastcall LocalPlayer::~LocalPlayer(LocalPlayer *this)
{
  LocalPlayer::~LocalPlayer(this);
}


signed int __fastcall LocalPlayer::isHostingPlayer(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  NetworkHandler *v2; // r5@1
  char *v3; // r6@1
  char v5; // [sp+7h] [bp-11h]@1

  v1 = this;
  v2 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*((ClientInstance **)this + 1329));
  v3 = Player::getClientId(v1);
  v5 = Player::getClientSubId(v1);
  return NetworkHandler::isHostingPlayer(v2, (const NetworkIdentifier *)v3, (const unsigned __int8 *)&v5);
}


int __fastcall LocalPlayer::resetPos(LocalPlayer *this, int a2)
{
  LocalPlayer *v2; // r4@1
  int v3; // r0@1
  int result; // r0@1

  v2 = this;
  Player::resetPos(this, a2);
  v3 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 1329));
  result = (*(int (**)(void))(*(_DWORD *)v3 + 76))();
  if ( result == 1 )
    result = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v2 + 1244))(v2);
  return result;
}


void __fastcall LocalPlayer::openBrewingStand(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createBrewingStandScreen((SceneFactory *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


int __fastcall LocalPlayer::setPortalEffectTime(int result, float a2)
{
  *(float *)(result + 5308) = a2;
  return result;
}


int __fastcall LocalPlayer::tickWorld(Entity *this, __int64 *a2)
{
  Entity *v2; // r4@1
  char *v3; // r7@1
  Level *v5; // r0@4
  int v6; // r6@5
  void (__fastcall *v7)(int, int); // r5@5
  int v8; // r0@5
  int v9; // r0@6
  Level *v14; // r0@14
  Level *v15; // r0@18
  unsigned int v16; // r3@20
  unsigned int v17; // kr00_4@20
  Player *v18; // r0@21
  Level *v19; // r2@21
  int v20; // r6@22
  ClientInputHandler *v21; // r0@22
  int v22; // r0@22

  v2 = this;
  v3 = (char *)this + 5320;
  if ( *((_DWORD *)this + 1330) == 512 )
    _R8 = 1;
  else
    _R8 = Player::tickWorld(this, a2);
  v5 = (Level *)Entity::getLevel(v2);
  if ( Level::isClientSide(v5) == 1 )
  {
    v6 = Entity::getLevel(v2);
    v7 = *(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 76);
    v8 = Entity::getRegion(v2);
    v7(v6, v8);
  }
  v9 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 2 )
    Entity::getLevel(v2);
    __asm
    {
      VMOV            S0, R8
      VLDR            S2, =0.0087719
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0]
    }
    if ( !(_NF ^ _VF) )
      if ( *((_BYTE *)v2 + 4821) )
      {
        v14 = (Level *)Entity::getLevel(v2);
        if ( !Level::isClientSide(v14) )
        {
          ClientInstance::onPlayerLoaded(*((ClientInstance **)v2 + 1329), v2);
          (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1240))(v2);
          (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1420))(v2);
          ClientInstance::initializeTrialWorld(*((ClientInstance **)v2 + 1329), v2);
        }
      }
  else if ( v9 == 4 )
    if ( !(_NF ^ _VF) && !*((_DWORD *)v2 + 1073) )
      *(_DWORD *)v3 = 16;
      v15 = (Level *)Entity::getLevel(v2);
      if ( Level::isClientSide(v15) == 1 )
        (*(void (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v2 + 1248))(v2, 0);
  else if ( v9 == 512 )
    if ( _ZF )
  v16 = *((_DWORD *)v2 + 1387);
  v17 = *((_DWORD *)v2 + 1386);
  ++*((_QWORD *)v2 + 693);
  if ( !((__PAIR__(v16, v17) + 1) % 0x4B0) )
    v18 = (Player *)Entity::getLevel(v2);
    MinecraftEventing::fireEventEndOfDay(v2, v18, v19);
  v20 = ClientInstance::getOptions(*((ClientInstance **)v2 + 1329));
  v21 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)v2 + 1329));
  v22 = ClientInputHandler::getCurrentInputMode(v21);
  *((_BYTE *)v2 + 5444) = Options::getAutoJump(v20, v22);
  return _R8;
}


void __fastcall LocalPlayer::setPlayerGameType(Entity *this, int a2)
{
  MinecraftEventing *v2; // r4@1
  int v3; // r5@1
  Level *v4; // r0@2
  Player *v5; // r1@5
  void **v6; // [sp+4h] [bp-24h]@4
  int v7; // [sp+8h] [bp-20h]@4
  int v8; // [sp+Ch] [bp-1Ch]@4
  char v9; // [sp+10h] [bp-18h]@4
  int v10; // [sp+14h] [bp-14h]@4

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 1308) != a2 )
  {
    v4 = (Level *)Entity::getLevel(this);
    if ( Level::isClientSide(v4) == 1 )
    {
      if ( (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 604))(v2) )
      {
        v7 = 2;
        v8 = 1;
        v9 = 0;
        v6 = &off_26DA760;
        v10 = v3;
        (*(void (**)(void))(**((_DWORD **)v2 + 1231) + 8))();
      }
    }
  }
  Player::setPlayerGameType((int)v2, v3);
  MinecraftEventing::fireEventGameTypeChanged(v2, v5);
}


LocalPlayer *__fastcall LocalPlayer::displayItemActivation(LocalPlayer *this, const ItemInstance *a2)
{
  LocalPlayer *v2; // r4@1
  LocalPlayer *result; // r0@1

  v2 = this;
  ItemInstance::operator=((int)this + 5944, (int)a2);
  *((_DWORD *)v2 + 1504) = 40;
  _R0 = Random::_genRandInt32((LocalPlayer *)((char *)v2 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S18, #-1.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VADD.F32        S0, S0, S18
    VSTR            S0, [R0]
  }
  __asm { VMOV            S0, R0 }
  result = (LocalPlayer *)((char *)v2 + 6024);
  return result;
}


char *__fastcall LocalPlayer::getActivatedItem(LocalPlayer *this)
{
  return (char *)this + 5944;
}


void __fastcall LocalPlayer::openContainer(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openContainer(this, a2);
}


void __fastcall LocalPlayer::openContainer(int a1, __int64 *a2)
{
  LocalPlayer::openContainer(a1, a2);
}


void __fastcall LocalPlayer::openSign(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openSign(this, a2);
}


int __fastcall LocalPlayer::checkIfAchievedSuperSonic(LocalPlayer *this, float _R1)
{
  LocalPlayer *v3; // r8@1
  float v5; // r1@1
  float v6; // r2@1
  int v13; // r6@4
  bool v14; // zf@9
  bool v15; // nf@9
  unsigned __int8 v16; // vf@9
  float v23; // r1@22
  int result; // r0@22
  unsigned int v25; // r5@22
  unsigned int v26; // r4@23
  int v27; // [sp+0h] [bp-60h]@22
  int v28; // [sp+4h] [bp-5Ch]@25
  int v29; // [sp+8h] [bp-58h]@25
  float v30; // [sp+Ch] [bp-54h]@22
  float v31; // [sp+10h] [bp-50h]@22
  float v32; // [sp+14h] [bp-4Ch]@22
  int v33; // [sp+18h] [bp-48h]@22
  int v34; // [sp+1Ch] [bp-44h]@25
  int v35; // [sp+20h] [bp-40h]@25
  float v36; // [sp+24h] [bp-3Ch]@16
  float v37; // [sp+28h] [bp-38h]@8
  float v38; // [sp+2Ch] [bp-34h]@8
  float v39; // [sp+30h] [bp-30h]@1
  float v40; // [sp+34h] [bp-2Ch]@1
  float v41; // [sp+38h] [bp-28h]@1
  float v42; // [sp+3Ch] [bp-24h]@1

  __asm
  {
    VLDR            S0, =-0.05
    VMOV            S2, R1
  }
  v3 = this;
    VMUL.F32        S0, S2, S0
    VMOV            R5, S0
  Entity::getInterpolatedPosition((Entity *)&v42, *(float *)&this, _R5);
  v5 = *((float *)v3 + 19);
  v6 = *((float *)v3 + 20);
  v39 = *((float *)v3 + 18);
  v40 = v5;
  v41 = v6;
    VLDR            S4, [SP,#0x60+var_30]
    VLDR            S6, [SP,#0x60+var_24]
    VLDR            S2, [SP,#0x60+var_2C]
    VLDR            S8, [SP,#0x60+var_20]
    VSUB.F32        S4, S6, S4
    VLDR            S0, [SP,#0x60+var_28]
    VLDR            S10, [SP,#0x60+var_1C]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S0, S10, S0
    VABS.F32        S10, S4
    VABS.F32        S8, S2
    VABS.F32        S6, S0
    VCVTR.S32.F32   S6, S6
    VSTR            S4, [SP,#0x60+var_3C]
    VCVTR.S32.F32   S8, S8
    VCVTR.S32.F32   S10, S10
    VSTR            S2, [SP,#0x60+var_38]
    VSTR            S0, [SP,#0x60+var_34]
    VMOV            R0, S6
    VMOV            R1, S8
    VMOV            R2, S10
  _VF = __OFSUB__(_R2, _R1);
  _ZF = _R2 == _R1;
  _NF = _R2 - _R1 < 0;
  if ( _R2 > _R1 )
    _VF = __OFSUB__(_R2, _R0);
    _ZF = _R2 == _R0;
    _NF = _R2 - _R0 < 0;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v16 = __OFSUB__(_R1, _R2);
    v14 = _R1 == _R2;
    v15 = _R1 - _R2 < 0;
    if ( _R1 > _R2 )
    {
      v16 = __OFSUB__(_R1, _R0);
      v14 = _R1 == _R0;
      v15 = _R1 - _R0 < 0;
    }
    if ( (unsigned __int8)(v15 ^ v16) | v14 )
      __asm
      {
        VCMPE.F32       S0, #0.0
        VLDR            S2, =0.0
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S4, #-1.0
        VMOV.F32        S0, #1.0
      }
      v13 = 2;
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S2, S4 }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S2, S0 }
      __asm { VSTR            S2, [SP,#0x60+var_34] }
      v36 = 0.0;
      v37 = 0.0;
    else
        VCMPE.F32       S2, #0.0
        VLDR            S0, =0.0
        VMOV.F32        S2, #1.0
      v13 = 1;
        __asm { VMOVLT.F32      S0, S4 }
        __asm { VMOVGT.F32      S0, S2 }
      __asm { VSTR            S0, [SP,#0x60+var_38] }
      v38 = 0.0;
  else
    __asm
      VCMPE.F32       S4, #0.0
      VLDR            S0, =0.0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S2, #-1.0
    v13 = 0;
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
    __asm { VMOV.F32        S2, #1.0 }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VSTR            S0, [SP,#0x60+var_3C] }
    v37 = 0.0;
    v38 = 0.0;
  BlockPos::BlockPos((int)&v33, (int)&v36);
  Entity::getAttachPos((AABB *)&v30, (int)v3, 3, 0);
  v39 = v30;
  v40 = v31;
  v41 = v32;
  BlockPos::BlockPos((int)&v27, (int)&v39);
  result = mce::Math::ceil((mce::Math *)(_R5 & 0x7FFFFFFF), v23);
  v25 = result;
  if ( result )
    v26 = 0;
    while ( LocalPlayer::checkSuperSonic(v3, (int)&v27, v13) != 1 )
      ++v26;
      v27 += v33;
      v28 += v34;
      result = v35 + v29;
      v29 += v35;
      if ( v26 >= v25 )
        return result;
    result = MinecraftEventing::fireEventAwardAchievement((int)v3, 65);
  return result;
}


void __fastcall LocalPlayer::openStructureEditor(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openStructureEditor(this, a2);
}


int __fastcall LocalPlayer::localPlayerTurn(int a1, _QWORD *a2)
{
  _QWORD *v3; // r5@1
  int v4; // r8@1
  signed int v11; // r6@1
  int v12; // r0@1
  ClientInstance **v13; // r5@1
  int v14; // r0@5
  int v15; // r6@5
  float v21; // r11@5
  float v22; // r9@5
  ItemInstance *v24; // r0@5
  ItemInstance *v25; // r7@5
  int v26; // r0@5
  int v28; // r0@11
  Options *v29; // r9@16
  Level *v31; // r0@18
  int v34; // r0@25
  int v47; // r0@40
  float v54; // r1@47
  Options *v55; // r0@50
  float v56; // r1@51
  GameRenderer *v57; // r0@52
  float v60; // r1@53
  int v63; // r0@57
  float v65; // r1@57
  float v67; // r1@57
  int v70; // r0@61
  float v73; // r1@61
  float v76; // r1@61
  int result; // r0@61
  Options *v78; // [sp+8h] [bp-140h]@5
  ClientInstance **v79; // [sp+Ch] [bp-13Ch]@5
  __int64 v80; // [sp+20h] [bp-128h]@5
  __int64 v81; // [sp+28h] [bp-120h]@5
  __int64 v82; // [sp+30h] [bp-118h]@5
  __int64 v83; // [sp+38h] [bp-110h]@5
  __int64 v84; // [sp+40h] [bp-108h]@5
  __int64 v85; // [sp+48h] [bp-100h]@5
  __int64 v86; // [sp+50h] [bp-F8h]@5
  float v87; // [sp+58h] [bp-F0h]@5
  int v88; // [sp+5Ch] [bp-ECh]@5
  __int64 v89; // [sp+60h] [bp-E8h]@5
  float v90; // [sp+68h] [bp-E0h]@5
  int v91; // [sp+6Ch] [bp-DCh]@5
  int v92; // [sp+70h] [bp-D8h]@5
  float v93; // [sp+74h] [bp-D4h]@5
  float v94; // [sp+78h] [bp-D0h]@5
  __int64 v95; // [sp+7Ch] [bp-CCh]@5
  float v96; // [sp+84h] [bp-C4h]@5
  float v97; // [sp+88h] [bp-C0h]@5
  __int64 v98; // [sp+8Ch] [bp-BCh]@5
  int v99; // [sp+94h] [bp-B4h]@5
  int v100; // [sp+98h] [bp-B0h]@5
  int v101; // [sp+9Ch] [bp-ACh]@5
  __int64 v102; // [sp+A0h] [bp-A8h]@5
  float v103; // [sp+A8h] [bp-A0h]@5
  int v104; // [sp+ACh] [bp-9Ch]@5
  int v105; // [sp+B0h] [bp-98h]@5
  float v106; // [sp+B4h] [bp-94h]@5
  float v107; // [sp+B8h] [bp-90h]@5
  __int64 v108; // [sp+BCh] [bp-8Ch]@5
  float v109; // [sp+C4h] [bp-84h]@5
  float v110; // [sp+C8h] [bp-80h]@5
  __int64 v111; // [sp+CCh] [bp-7Ch]@5
  int v112; // [sp+D4h] [bp-74h]@5
  int v113; // [sp+D8h] [bp-70h]@5
  int v114; // [sp+DCh] [bp-6Ch]@5

  _R4 = a1;
  v3 = a2;
  v4 = ClientInstance::getOptions(*(ClientInstance **)(a1 + 5316));
  *(_QWORD *)&_R9 = *v3;
  _R0 = ClientInstance::getGameRenderer(*(ClientInstance **)(_R4 + 5316));
  __asm { VLDR            S18, [R0,#0x30C] }
  v11 = ClientInstance::isHoloRealityMode(*(ClientInstance **)(_R4 + 5316));
  v12 = ClientInstance::isShowingMenu(*(ClientInstance **)(_R4 + 5316));
  __asm { VMOV            S16, R10 }
  v13 = (ClientInstance **)(_R4 + 5316);
  if ( v12 )
    goto LABEL_64;
  __asm
  {
    VABS.F32        S0, S18
    VLDR            S18, =0.0001
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) || v11 != 1 )
LABEL_64:
    _R6 = LODWORD(_R10);
    *(_DWORD *)(ClientInstance::getGameRenderer(*v13) + 788) = 0;
    *(_DWORD *)(_R4 + 5936) = 0;
  else
    v78 = (Options *)v4;
    v14 = ClientInstance::getHoloInput(*v13);
    HolographicPlatform::getTransform((int)&v89, v14, 20, 15, 0);
    _aeabi_memclr8(&v80, 60);
    v79 = (ClientInstance **)(_R4 + 5316);
    v80 = *(_QWORD *)&Matrix::IDENTITY;
    v81 = qword_27E89F0;
    v82 = qword_27E89F8;
    v83 = qword_27E8A00;
    v84 = qword_27E8A08;
    v85 = qword_27E8A10;
    v86 = *(_QWORD *)&qword_27E8A18;
    v15 = *((_DWORD *)&qword_27E8A20 + 1);
    v87 = qword_27E8A20;
    _R0 = ClientInstance::getGameRenderer(*v13);
    __asm
    {
      VLDR            S0, =-0.017453
      VLDR            S2, [R0,#0x318]
      VMUL.F32        S0, S2, S0
      VMOV            R7, S0
    }
    _R0 = cosf(_R7);
    __asm { VMOV            S20, R0 }
    _R0 = sinf(_R7);
      VLDR            S0, [SP,#0x148+var_118]
      VMOV            S10, R0
      VLDR            S2, [SP,#0x148+var_118+4]
      VLDR            S4, [SP,#0x148+var_110]
      VMUL.F32        S3, S0, S20
      VLDR            S6, [SP,#0x148+var_110+4]
      VMUL.F32        S12, S2, S20
      VLDR            S8, [SP,#0x148+var_108+4]
      VMUL.F32        S7, S4, S20
      VLDR            S1, [SP,#0x148+var_108]
      VMUL.F32        S15, S6, S20
      VLDR            S5, [SP,#0x148+var_100]
      VMUL.F32        S14, S8, S10
      VLDR            S11, [SP,#0x148+var_100+4]
      VMUL.F32        S9, S1, S10
      VMUL.F32        S13, S5, S10
      VMUL.F32        S22, S11, S10
      VMUL.F32        S0, S0, S10
      VMUL.F32        S1, S1, S20
      VMUL.F32        S2, S2, S10
      VMUL.F32        S8, S8, S20
      VMUL.F32        S4, S4, S10
      VMUL.F32        S5, S5, S20
      VMUL.F32        S6, S6, S10
      VMUL.F32        S10, S11, S20
      VADD.F32        S3, S9, S3
      VADD.F32        S12, S14, S12
      VADD.F32        S14, S13, S7
      VADD.F32        S7, S22, S15
      VSUB.F32        S0, S1, S0
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S5, S4
      VSUB.F32        S6, S10, S6
      VSTR            S3, [SP,#0x148+var_118]
      VSTR            S12, [SP,#0x148+var_118+4]
      VSTR            S14, [SP,#0x148+var_110]
      VSTR            S7, [SP,#0x148+var_110+4]
      VSTR            S0, [SP,#0x148+var_108]
      VSTR            S2, [SP,#0x148+var_108+4]
      VSTR            S4, [SP,#0x148+var_100]
      VSTR            S6, [SP,#0x148+var_100+4]
    v88 = v15;
    glm::detail::operator*<float>((int)&v102, (int)&v89, (int)&v80);
    _R8 = v109;
    v89 = v102;
    v90 = v103;
    v91 = v104;
    v92 = v105;
    v93 = v106;
    v94 = v107;
    v21 = v110;
    v95 = v108;
    v22 = *((float *)&v108 + 1);
    v96 = v109;
    v97 = v110;
    v98 = v111;
    v99 = v112;
    v100 = v113;
    v101 = v114;
    _R6 = mce::MathUtility::getBestHorizDirFromViewMatrix((int)&v89);
    v24 = (ItemInstance *)Player::getSelectedItem((Player *)_R4);
    v25 = v24;
    v26 = *((_BYTE *)v24 + 15);
    _ZF = v26 == 0;
    if ( v26 )
      _ZF = *(_DWORD *)v25 == 0;
    if ( !_ZF
      && !ItemInstance::isNull(v25)
      && *((_BYTE *)v25 + 14)
      && (ItemInstance::isThrowable(v25)
       || (v28 = *(_DWORD *)v25, *(_DWORD *)v25 == Item::mFishingRod)
       || v28 == Item::mSign
       || v28 == Item::mSkull)
      || Player::isUsingItem((Player *)_R4) == 1 && *(_DWORD *)Player::getItemInUse((Player *)_R4) == Item::mBow )
      v13 = (ClientInstance **)(_R4 + 5316);
      v31 = (Level *)ClientInstance::getLevel(*v79);
      _R0 = Level::getHitResult(v31);
      __asm
      {
        VLDR            S0, [R4,#0x48]
        VMOV.F32        S20, #1.0
        VLDR            S6, [R0,#0x14]
        VLDR            S2, [R4,#0x4C]
        VLDR            S8, [R0,#0x18]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [R4,#0x50]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [R0,#0x1C]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S6, S0, S0
        VMUL.F32        S8, S2, S2
        VMUL.F32        S10, S4, S4
        VADD.F32        S6, S8, S6
        VLDR            S8, =1.1921e-7
        VADD.F32        S6, S6, S10
        VSQRT.F32       S6, S6
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VLDR            S18, =0.0
          VMOV.F32        S22, S20
          VMOV.F32        S24, S18
        }
      else
          VCMPE.F32       S6, S18
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          _R0 = &Vec3::ZERO;
          __asm
          {
            VLDR            S0, [R0]
            VLDR            S2, [R0,#4]
            VLDR            S4, [R0,#8]
          }
        else
            VDIV.F32        S4, S4, S6
            VDIV.F32        S2, S2, S6
            VDIV.F32        S0, S0, S6
          VNEG.F32        S18, S4
          VNEG.F32        S22, S2
          VNEG.F32        S24, S0
      v34 = ClientInstance::getHoloInput(*v79);
      HolographicPlatform::getRotation((int)&v102, v34, 2, 15, 10);
        VLDR            S0, [SP,#0x148+var_A8]
        VLDR            S2, [SP,#0x148+var_A0]
        VLDR            S4, [SP,#0x148+var_98]
        VMUL.F32        S0, S0, S24
        VLDR            S6, [SP,#0x148+var_90]
        VMUL.F32        S2, S2, S24
        VMUL.F32        S4, S4, S22
        VLDR            S8, [SP,#0x148+anonymous_1+4]
        VMUL.F32        S6, S6, S22
        VLDR            S10, [SP,#0x148+var_80]
        VMUL.F32        S8, S8, S18
        VLDR            S26, [SP,#0x148+var_A8+4]
        VLDR            S17, [SP,#0x148+var_74]
        VLDR            S19, [SP,#0x148+var_84]
        VLDR            S21, [SP,#0x148+var_94]
        VADD.F32        S0, S4, S0
        VADD.F32        S2, S6, S2
        VLDR            S6, [SP,#0x148+var_70]
        VMUL.F32        S4, S10, S18
        VADD.F32        S0, S0, S8
        VADD.F32        S2, S2, S4
        VLDR            S4, [SP,#0x148+var_78]
        VADD.F32        S28, S0, S4
        VADD.F32        S30, S2, S6
      _R6 = atan2f(v22, v21);
        VMOV            R0, S28
        VMOV            R1, S30
      _R0 = atan2f(_R0, _R1);
        VMUL.F32        S0, S26, S24
        VMUL.F32        S2, S21, S22
        VLDR            S6, =180.0
        VMUL.F32        S4, S19, S18
      v29 = v78;
      _R1 = &mce::Math::RADDEG;
        VADD.F32        S0, S2, S0
        VMOV            S2, R6
        VADD.F32        S0, S0, S4
        VMOV            S4, R0
        VADD.F32        S24, S0, S17
        VLDR            S0, [R1]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S4, S0
        VLDR            S4, =-180.0
        VSUB.F32        S2, S4, S2
        VADD.F32        S22, S0, S6
        VADD.F32        S18, S2, S22
      if ( !Options::getVRHeadSteering(v78) )
        __asm { VMOV.F32        S0, #1.0 }
        _R0 = _R4 + 5392;
          VLDR            S2, [R0]
          VSUB.F32        S20, S0, S2
      __asm { VMUL.F32        S0, S20, S18 }
      _R0 = _R4 + 5936;
        VMOV            R8, S24
        VLDR            S2, [R0]
        VSUB.F32        S0, S0, S2
        VMUL.F32        S0, S0, S20
        VADD.F32        S0, S0, S2
        VSTR            S0, [R0]
    else
      *(_DWORD *)(_R4 + 5936) = 0;
      __asm { VMOV            S22, R6 }
      __asm { VLDR            S18, =0.0 }
      VNEG.F32        S2, S22
      VMOV            S22, R8
    _R0 = _R4 + 5380;
      VMOV.F32        S20, #-1.0
      VNEG.F32        S6, S22
      VLDR            S0, [R0]
    _R6 = (_DWORD *)(_R4 + 5388);
      VLDR            S4, [R6]
      VSUB.F32        S0, S2, S0
      VMOV.F32        S24, S20
      VCMPE.F32       S6, S20
      VMRS            APSR_nzcv, FPSCR
      VADD.F32        S0, S0, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S24, S6 }
      VSTR            S0, [R6]
      VSTR            S2, [R0]
    if ( *(_BYTE *)(_R4 + 5396) )
      __asm { VMOV            R0, S0 }
      _R7 = mce::Math::wrapDegrees(_R0, COERCE_FLOAT(*(_BYTE *)(_R4 + 5396)));
      Options::getVRHeadSteering(v29);
        VMOV.F32        S4, #1.0
        VLDR            S26, =0.0
      _R0 = _R4 + 5392;
      __asm { VLDR            S0, =180.0 }
      if ( !_ZF )
        __asm { VMOVNE.F32      S0, S26 }
        VMOV            S2, R7
        VLDR            S6, [R0]
        VABS.F32        S10, S2
        VMUL.F32        S8, S0, S6
        VCMPE.F32       S6, S4
        __asm { VMOVLT.F32      S0, S8 }
        VCMPE.F32       S10, S0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          VCMPE.F32       S2, #0.0
          __asm { VADDLT.F32      S26, S0, S2 }
          __asm { VSUBGE.F32      S26, S2, S0 }
      if ( Entity::isRiding((Entity *)_R4) != 1
        || (v47 = Entity::getRide((Entity *)_R4), (*(int (**)(void))(*(_DWORD *)v47 + 488))() != 90) )
          VADD.F32        S0, S26, S16
          VMOV            R8, S0
        __asm { VSUB.F32        S26, S26, S16 }
        _R8 = 0;
        *(_DWORD *)(_R4 + 124) = -1028390912;
        VLDR            S0, [R6]
        VSUB.F32        S0, S0, S26
        VSTR            S0, [R6]
      *_R6 = 0;
      _R8 = (mce::Math *)LODWORD(_R10);
      *(_BYTE *)(_R4 + 5396) = 1;
      VCMPE.F32       S22, S20
      VNEG.F32        S0, S24
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S20 }
    __asm { VMOV            R7, S0 }
    ClientInstance::getGameRenderer(*v13);
      VLDR            S0, [R6]
      VADD.F32        S0, S0, S18
      VSTR            S0, [R0,#0x314]
    _R0 = asinf(_R7);
      VMOV            S4, R0
      VLDR            S0, =90.0
      VLDR            S6, [R4,#0x78]
    _R1 = &mce::Math::RADDEG;
      VADD.F32        S0, S6, S0
      VLDR            S2, [R1]
      VMUL.F32        S2, S4, S2
      VSUB.F32        S0, S0, S2
      VMOV            R0, S0
    _R0 = fmodf(_R0, 180.0);
      VMOV            S2, R0
      VLDR            S0, =180.0
      VCMPE.F32       S2, #0.0
      VADD.F32        S0, S2, S0
      __asm { VMOVLT.F32      S2, S0 }
      VLDR            S0, =-90.0
      VMOV            R9, S0
    _R6 = mce::Math::wrapDegrees(_R8, v54);
  v55 = (Options *)ClientInstance::getOptions(*v13);
  if ( Options::getStutterTurn(v55) != 1 || !ClientInstance::isRealityFullVRMode(*v13) )
    v57 = (GameRenderer *)ClientInstance::getGameRenderer(*v13);
    GameRenderer::adjustVRRotationSmoothTurningMode(v57, _R10);
    VMOV            S16, R9
    VLDR            S0, [R4,#0x80]
    VSUB.F32        S0, S0, S16
    VMOV            R0, S0
  _R0 = mce::Math::wrapDegrees(_R0, v56);
    VLDR            S18, =-90.0
    VMOV            S0, R0
    VMOV            S20, R6
    VLDR            S2, [R4,#0x84]
    VLDR            S22, =90.0
    VADD.F32        S2, S2, S20
    VMOV.F32        S4, S18
    VCMPE.F32       S0, S22
    VMOV            R0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S0 }
    VMOV            R5, S4
    _R5 = 1119092736;
  v63 = mce::Math::wrapDegrees(_R0, v60);
  *(_DWORD *)(_R4 + 128) = _R5;
  *(_DWORD *)(_R4 + 132) = v63;
    VLDR            S0, [R4,#0x78]
  _R0 = mce::Math::wrapDegrees(_R0, v65);
    VLDR            S2, [R4,#0x7C]
    __asm { VMOVGT.F32      S18, S0 }
    VMOV            R5, S18
  v70 = mce::Math::wrapDegrees(_R0, v67);
  *(_DWORD *)(_R4 + 120) = _R5;
  *(_DWORD *)(_R4 + 124) = v70;
  _R0 = _R4 + 3424;
    VLDR            S0, [R0]
    VADD.F32        S0, S0, S20
  *(_DWORD *)(_R4 + 3424) = mce::Math::wrapDegrees(_R0, v73);
  _R0 = _R4 + 3420;
  result = mce::Math::wrapDegrees(_R0, v76);
  *(_DWORD *)(_R4 + 3420) = result;
  return result;
}


char *__fastcall LocalPlayer::getOldLookBob(LocalPlayer *this)
{
  return (char *)this + 5612;
}


int __fastcall LocalPlayer::handleInsidePortal(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  Level *v4; // r0@3
  char *v5; // r0@3

  v2 = this;
  v3 = a2;
  if ( !*((_DWORD *)this + 113) )
  {
    *((_BYTE *)this + 5398) = 1;
    if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)this + 1329)) == 1 )
    {
      v4 = (Level *)Entity::getLevel(v2);
      v5 = Level::getLevelData(v4);
      if ( LevelData::getGameType((LevelData *)v5) == 1 )
      {
        *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 1329)) + 800) = 1065353216;
        *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 1329)) + 796) = 1065353216;
      }
    }
  }
  return j_j_j__ZN6Entity18handleInsidePortalERK8BlockPos(v2, v3);
}


signed int __fastcall LocalPlayer::setOffhandSlot(LocalPlayer *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  LocalPlayer *v3; // r5@1
  char *v4; // r0@1
  signed int result; // r0@1
  int v6; // r3@2

  v2 = a2;
  v3 = this;
  v4 = Mob::getOffhandSlot(this);
  result = ItemInstance::operator==(v2, (ItemInstance *)v4);
  if ( !result )
  {
    Player::setOffhandSlot(v3, v2);
    result = ItemInstance::isNull(v2);
    if ( !result )
      result = j_j_j__ZN17MinecraftEventing21fireEventItemEquippedEP6PlayerRK12ItemInstancei(
                 v3,
                 v2,
                 (const ItemInstance *)1,
                 v6);
  }
  return result;
}


signed int __fastcall LocalPlayer::changeDimension(unsigned int a1, int a2, char a3)
{
  unsigned int v3; // r5@1
  int v4; // r8@1
  char v5; // r7@1
  int v6; // r6@1
  void *v7; // r4@1
  __int64 v9; // r2@1
  const BlockPos *v10; // r0@5
  int v11; // r1@5
  int v12; // r7@6
  ClientInstance **v18; // r6@6
  void *v19; // r0@6
  int v20; // r7@7
  int v21; // r6@7
  Level *v22; // r0@7
  int v23; // r0@7
  int v24; // r6@7
  unsigned int *v25; // r1@8
  unsigned int v26; // r0@10
  unsigned int *v27; // r7@14
  unsigned int v28; // r0@16
  int v29; // r0@21
  void *v30; // r4@21
  int v31; // r0@22
  signed int result; // r0@25
  unsigned int *v33; // r2@26
  signed int v34; // r1@28
  void *v35; // [sp+4h] [bp-34h]@21
  char v36; // [sp+8h] [bp-30h]@7
  int v37; // [sp+Ch] [bp-2Ch]@7
  int v38; // [sp+14h] [bp-24h]@6
  char v39; // [sp+18h] [bp-20h]@5
  PortalBlock *v40; // [sp+19h] [bp-1Fh]@5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (*(int (**)(void))(*(_DWORD *)a1 + 524))();
  v7 = operator new(0x20u);
  _ZF = v4 == 1;
  *(_DWORD *)v7 = 0;
  *((_DWORD *)v7 + 1) = v6;
  *((_DWORD *)v7 + 2) = v4;
  v9 = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)v7 + 5) = dword_2822498;
  *(_QWORD *)((char *)v7 + 12) = v9;
  *((_BYTE *)v7 + 24) = v5;
  *((_BYTE *)v7 + 25) = 0;
  *((_DWORD *)v7 + 7) = 0;
  if ( v4 != 1 )
    _ZF = v6 == 1;
  if ( _ZF )
  {
    v10 = (const BlockPos *)Entity::getRegion((Entity *)v3);
    BlockSource::getBlockAndData((BlockSource *)&v39, v10, v3 + 456);
    *(_DWORD *)(v3 + 468) = PortalBlock::getAxis((PortalBlock *)(unsigned __int8)v40, v11);
    *(_DWORD *)(v3 + 456) = BlockPos::MAX;
    *(_DWORD *)(v3 + 460) = unk_2816260;
    *(_DWORD *)(v3 + 464) = dword_2816264;
  }
  *(_DWORD *)(v3 + 5532) = 0;
  v12 = *(_DWORD *)(v3 + 5316);
  sub_119C884((void **)&v38, "portal.travel");
  _R0 = Random::_genRandInt32((Random *)(v3 + 552));
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.4
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.8
    VADD.F32        S0, S0, S2
    VMOV            R3, S0
  ClientInstance::playUI(v12);
  v18 = (ClientInstance **)(v3 + 5316);
  v19 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v38 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = ClientInstance::getClientSceneStack(*v18);
  v21 = ClientInstance::getSceneFactory(*v18);
  v22 = (Level *)Entity::getLevel((Entity *)v3);
  v23 = Level::isClientSide(v22);
  SceneFactory::createDimensionChangeProgressScreen((unsigned __int64 *)&v36, v21, v23 ^ 1, v4);
  SceneStack::pushScreen(v20, (int)&v36, 0);
  v24 = v37;
  if ( v37 )
    v25 = (unsigned int *)(v37 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  v29 = Entity::getLevel((Entity *)v3);
  v35 = v7;
  Level::requestPlayerChangeDimension(v29, v3, (int *)&v35);
  v30 = v35;
  if ( v35 )
    v31 = *((_DWORD *)v35 + 7);
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    operator delete(v30);
  result = 5320;
  *(_DWORD *)(v3 + 5320) = 4;
  return result;
}


int __fastcall LocalPlayer::_PostJumpFrameOfReferenceAdjustCheck(int result, int a2)
{
  ClientInstance **v7; // r4@7
  int v8; // r0@7

  _R4 = result;
  if ( a2 == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#0xE0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VMOV.F32        S2, #-2.0
        VMOV.F32        S4, #1.0
        VADD.F32        S0, S0, S2
        VLDR            S2, =0.1
        VMUL.F32        S16, S0, S2
        VLDR            S0, =0.05
        VCMPE.F32       S16, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S4 }
        VCMPE.F32       S16, S0
        result = ClientInstance::isLivingroomMode(*(ClientInstance **)(result + 5316));
        if ( !result )
        {
          v7 = (ClientInstance **)(_R4 + 5316);
          v8 = ClientInstance::getHoloInput(*v7);
          __asm { VMOV            R1, S16 }
          (*(void (**)(void))(*(_DWORD *)v8 + 132))();
          result = ClientInstance::getGameRenderer(*v7);
          *(_BYTE *)(result + 814) = 1;
        }
  }
  return result;
}


unsigned __int64 *__fastcall LocalPlayer::_updateAutoJump(LocalPlayer *this, float a2, float a3, float a4, float a5)
{
  unsigned __int64 *result; // r0@1
  Level *v9; // r0@2
  int v11; // r1@8
  BlockSource *v21; // r8@15
  int v22; // r0@15
  int v23; // r0@16
  float *v24; // r0@17
  float *v25; // r2@17
  float *v26; // r6@17
  float *v27; // r3@17
  int v28; // r2@21
  int v29; // r0@25
  AABB *v31; // r11@27
  __int64 v32; // kr08_8@32
  int v33; // r10@32
  int v34; // r0@32
  int v35; // r0@35
  int v36; // [sp+10h] [bp-138h]@35
  int v37; // [sp+14h] [bp-134h]@35
  int v38; // [sp+18h] [bp-130h]@35
  int v39; // [sp+1Ch] [bp-12Ch]@32
  int v40; // [sp+20h] [bp-128h]@32
  int v41; // [sp+24h] [bp-124h]@32
  int v42; // [sp+28h] [bp-120h]@32
  int v43; // [sp+2Ch] [bp-11Ch]@32
  int v44; // [sp+30h] [bp-118h]@32
  int v45; // [sp+34h] [bp-114h]@32
  int v46; // [sp+38h] [bp-110h]@32
  int v47; // [sp+3Ch] [bp-10Ch]@32
  int v48; // [sp+40h] [bp-108h]@27
  int v49; // [sp+44h] [bp-104h]@27
  int v50; // [sp+48h] [bp-100h]@27
  float v51; // [sp+4Ch] [bp-FCh]@29
  float v52; // [sp+58h] [bp-F0h]@29
  float v53; // [sp+64h] [bp-E4h]@27
  float v58; // [sp+80h] [bp-C8h]@20
  float v59; // [sp+84h] [bp-C4h]@22
  float v60; // [sp+88h] [bp-C0h]@17
  float v61; // [sp+8Ch] [bp-BCh]@19
  float v62; // [sp+90h] [bp-B8h]@17
  char v63; // [sp+94h] [bp-B4h]@15
  int v64; // [sp+98h] [bp-B0h]@16
  char v65; // [sp+A0h] [bp-A8h]@15
  float v67; // [sp+BCh] [bp-8Ch]@14
  float v69; // [sp+C8h] [bp-80h]@27
  float v70; // [sp+CCh] [bp-7Ch]@27
  int v71; // [sp+D0h] [bp-78h]@27
  float v72; // [sp+D4h] [bp-74h]@23
  float v73; // [sp+D8h] [bp-70h]@23
  int v74; // [sp+DCh] [bp-6Ch]@23

  _R4 = this;
  result = (unsigned __int64 *)*((_BYTE *)this + 5444);
  _R6 = a3;
  _R5 = a2;
  if ( result )
  {
    v9 = (Level *)Entity::getLevel(_R4);
    result = (unsigned __int64 *)*(_BYTE *)(Level::getAdventureSettings(v9) + 4);
    if ( result )
    {
      result = (unsigned __int64 *)*((_DWORD *)_R4 + 1360);
      if ( (signed int)result <= 0 )
      {
        result = (unsigned __int64 *)*((_BYTE *)_R4 + 216);
        if ( *((_BYTE *)_R4 + 216) )
        {
          result = (unsigned __int64 *)(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 312))(_R4);
          if ( !result )
          {
            result = (unsigned __int64 *)Entity::isRiding(_R4);
            if ( !result )
            {
              _R8 = ClientInstance::getMoveTurnInput(*((ClientInstance **)_R4 + 1329));
              result = (unsigned __int64 *)ClientInstance::isInGame(*((ClientInstance **)_R4 + 1329));
              if ( result == (unsigned __int64 *)1 )
              {
                v11 = *(_DWORD *)(_R8 + 4);
                result = (unsigned __int64 *)0x7FFFFFFF;
                _ZF = (v11 & 0x7FFFFFFF) == 0;
                if ( !(v11 & 0x7FFFFFFF) )
                  _ZF = (*(_DWORD *)(_R8 + 8) & 0x7FFFFFFF) == 0;
                if ( !_ZF )
                {
                  __asm
                  {
                    VMOV            S26, R6
                    VMOV            S24, R5
                    VLDR            S18, [R4,#0x50]
                  }
                  _R9 = *((float *)_R4 + 67);
                  __asm { VLDR            S16, [R4,#0x48] }
                  _R0 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 820))(_R4);
                    VMUL.F32        S0, S24, S24
                    VLDR            S20, =0.001
                    VMUL.F32        S2, S26, S26
                    VMOV.F32        S17, S24
                    VMOV.F32        S22, S26
                    VMOV            S28, R0
                    VADD.F32        S30, S2, S0
                    VCMPE.F32       S30, S20
                    VMRS            APSR_nzcv, FPSCR
                  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                    goto LABEL_46;
                  __asm { VLDR            S0, [R4,#0x7C] }
                  _R0 = &mce::Math::DEGRAD;
                    VLDR            S2, [R0]
                    VMUL.F32        S0, S2, S0
                    VLDR            S2, [R8,#8]
                    VMUL.F32        S30, S2, S28
                    VMOV            R5, S0
                    VLDR            S0, [R8,#4]
                    VMUL.F32        S22, S0, S28
                  _R0 = sinf(_R5);
                  __asm { VMOV            S17, R0 }
                  result = COERCE_UNSIGNED_INT64__(cosf(_R5));
                    VMOV            S0, R0
                    VMUL.F32        S2, S17, S22
                    VMUL.F32        S4, S0, S30
                    VMUL.F32        S0, S0, S22
                    VMUL.F32        S6, S17, S30
                    VADD.F32        S22, S4, S2
                    VSUB.F32        S17, S0, S6
                    VMUL.F32        S0, S22, S22
                    VMUL.F32        S2, S17, S17
LABEL_46:
                    result = (unsigned __int64 *)Entity::buildForward((Entity *)&v67, (int)_R4);
                    __asm
                    {
                      VSQRT.F32       S30, S30
                      VMOV.F32        S0, #1.0
                      VLDR            S2, [SP,#0x148+var_84]
                      VDIV.F32        S0, S0, S30
                      VMUL.F32        S22, S0, S22
                      VMUL.F32        S20, S0, S17
                      VLDR            S0, [SP,#0x148+var_8C]
                      VMUL.F32        S2, S2, S22
                      VMUL.F32        S0, S0, S20
                      VADD.F32        S0, S2, S0
                      VLDR            S2, =-0.15
                      VCMPE.F32       S0, S2
                      VMRS            APSR_nzcv, FPSCR
                    }
                    if ( !(_NF ^ _VF) )
                      v21 = (BlockSource *)Entity::getRegion(_R4);
                      AABB::AABB((AABB *)&v65);
                      BlockPos::BlockPos(
                        (BlockPos *)&v63,
                        *((float *)_R4 + 18),
                        *((float *)_R4 + 70),
                        *((float *)_R4 + 20));
                      v22 = BlockSource::getBlock(v21, (const BlockPos *)&v63);
                      result = (unsigned __int64 *)(*(int (__cdecl **)(int))(*(_DWORD *)v22 + 12))(v22);
                      if ( !result )
                      {
                        ++v64;
                        v23 = BlockSource::getBlock(v21, (const BlockPos *)&v63);
                        result = (unsigned __int64 *)(*(int (__cdecl **)(int))(*(_DWORD *)v23 + 12))(v23);
                        if ( !result )
                        {
                          __asm { VMOV.F32        S4, #7.0 }
                          v24 = &v60;
                          __asm
                          {
                            VADD.F32        S0, S18, S26
                            VADD.F32        S2, S16, S24
                          }
                          v25 = &v60;
                          v26 = &v62;
                          v27 = &v62;
                            VMUL.F32        S4, S28, S4
                            VCMPE.F32       S4, S30
                            VMRS            APSR_nzcv, FPSCR
                          if ( _NF ^ _VF )
                            __asm { VMOVLT.F32      S4, S30 }
                            VSTR            S16, [SP,#0x148+var_B8]
                            VMUL.F32        S6, S20, S4
                          v61 = _R9;
                            VMUL.F32        S4, S22, S4
                            VSTR            S18, [SP,#0x148+var_C0]
                            VADD.F32        S2, S2, S6
                            VADD.F32        S0, S0, S4
                            VSTR            S2, [SP,#0x148+var_C4]
                            VCMPE.F32       S0, S18
                            VSTR            S0, [SP,#0x148+var_C8]
                            VCMPE.F32       S2, S16
                            v25 = &v58;
                            VCMPE.F32       S18, S0
                          v28 = *(_DWORD *)v25;
                            v27 = &v59;
                            VCMPE.F32       S16, S2
                          v72 = *v27;
                          v73 = v61;
                          v74 = v28;
                            v24 = &v58;
                          __asm { VMRS            APSR_nzcv, FPSCR }
                          v29 = *(_DWORD *)v24;
                            v26 = &v59;
                          v69 = *v26;
                          v70 = v61;
                          v71 = v29;
                          AABB::AABB((int)&v53, (int)&v72, (int)&v69);
                            VLDR            S0, [R4,#0x108]
                            VLDR            S2, [R4,#0x114]
                            VSUB.F32        S18, S2, S0
                            VLDR            S0, [SP,#0x148+var_E4]
                            VSUB.F32        S0, S0, S18
                            VSTR            S0, [SP,#0x148+var_E4]
                            VLDR            S0, [SP,#0x148+var_DC]
                            VSTR            S0, [SP,#0x148+var_DC]
                            VLDR            S0, [SP,#0x148+var_D8]
                            VADD.F32        S0, S0, S18
                            VSTR            S0, [SP,#0x148+var_D8]
                            VLDR            S0, [SP,#0x148+var_D0]
                            VSTR            S0, [SP,#0x148+var_D0]
                            VLDR            S0, [R4,#0x10C]
                            VLDR            S2, [R4,#0x118]
                            VSUB.F32        S0, S2, S0
                            VLDR            S2, [SP,#0x148+var_D4]
                            VADD.F32        S0, S0, S2
                            VSTR            S0, [SP,#0x148+var_D4]
                          result = (unsigned __int64 *)BlockSource::fetchCollisionShapes(
                                                         v21,
                                                         (const AABB *)&v53,
                                                         0,
                                                         1,
                                                         _R4);
                            VMOV.F32        S16, #0.5
                            VLDR            S2, =0.51
                            VMOV            S4, R9
                            VLDR            S6, [SP,#0x148+var_B8]
                            VLDR            S8, [SP,#0x148+var_C0]
                            VADD.F32        S2, S4, S2
                            VMUL.F32        S0, S18, S16
                            VSTR            S2, [SP,#0x148+var_BC]
                            VMUL.F32        S4, S0, S22
                            VMUL.F32        S0, S0, S20
                            VADD.F32        S10, S6, S4
                            VSUB.F32        S12, S8, S0
                            VSUB.F32        S6, S6, S4
                            VADD.F32        S8, S8, S0
                            VSTR            S10, [SP,#0x148+var_74]
                            VSTR            S2, [SP,#0x148+var_70]
                            VSTR            S12, [SP,#0x148+var_6C]
                            VLDR            S10, [SP,#0x148+var_C4]
                            VLDR            S12, [SP,#0x148+var_C8]
                            VADD.F32        S14, S10, S4
                            VSTR            S6, [SP,#0x148+var_F0]
                            VSUB.F32        S1, S12, S0
                            VSTR            S2, [SP,#0x148+var_EC]
                            VSUB.F32        S4, S10, S4
                            VSTR            S8, [SP,#0x148+var_E8]
                            VADD.F32        S0, S12, S0
                            VSTR            S14, [SP,#0x148+var_80]
                            VSTR            S2, [SP,#0x148+var_7C]
                            VSTR            S4, [SP,#0x148+var_FC]
                            VSTR            S2, [SP,#0x148+var_F8]
                            VSTR            S1, [SP,#0x148+var_78]
                            VSTR            S0, [SP,#0x148+var_F4]
                          v48 = 0;
                          v49 = 0;
                          v50 = 0;
                          v31 = (AABB *)(*result >> 32);
                          _R6 = (AABB *)*result;
                          if ( _R6 != v31 )
                            while ( !AABB::intersects(_R6, (const Vec3 *)&v72, (const Vec3 *)&v69) )
                            {
                              result = (unsigned __int64 *)AABB::intersects(_R6, (const Vec3 *)&v52, (const Vec3 *)&v51);
                              if ( result == (unsigned __int64 *)1 )
                                break;
                              _R6 = (AABB *)((char *)_R6 + 28);
                              if ( v31 == _R6 )
                                return result;
                            }
                            __asm { VLDR            S18, [R6,#0x10] }
                            AABB::getCenter((AABB *)&v45, (int)_R6);
                            v48 = v45;
                            v49 = v46;
                            v50 = v47;
                            BlockPos::BlockPos((int)&v42, (int)&v48);
                            v32 = *(_QWORD *)&v42;
                            v33 = v44;
                            v39 = v42;
                            v40 = v43 + 1;
                            v41 = v44;
                            v34 = BlockSource::getBlock(v21, (const BlockPos *)&v39);
                            result = (unsigned __int64 *)(*(int (__cdecl **)(int))(*(_DWORD *)v34 + 12))(v34);
                            if ( result != (unsigned __int64 *)1 )
                              goto LABEL_44;
                            __asm
                              VLDR            S18, [SP,#0x148+var_98]
                              VLDR            S0, [R4,#0x10C]
                              VLDR            S2, =1.2
                              VSUB.F32        S0, S18, S0
                              VCMPE.F32       S0, S2
                              VMRS            APSR_nzcv, FPSCR
                            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_44:
                              v36 = v32;
                              v37 = HIDWORD(v32) + 2;
                              v38 = v33;
                              v35 = BlockSource::getBlock(v21, (const BlockPos *)&v36);
                              result = (unsigned __int64 *)(*(int (__cdecl **)(int))(*(_DWORD *)v35 + 12))(v35);
                              if ( result != (unsigned __int64 *)1 )
                                goto LABEL_45;
                              __asm
                              {
                                VLDR            S18, [SP,#0x148+var_98]
                                VLDR            S0, [R4,#0x10C]
                                VLDR            S2, =1.2
                                VSUB.F32        S0, S18, S0
                                VCMPE.F32       S0, S2
                                VMRS            APSR_nzcv, FPSCR
                              }
                              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_45:
                                __asm
                                {
                                  VLDR            S0, =1.1755e-38
                                  VCMPE.F32       S18, S0
                                  VMRS            APSR_nzcv, FPSCR
                                }
                                if ( !_ZF )
                                  __asm
                                  {
                                    VLDR            S0, [R4,#0x10C]
                                    VSUB.F32        S0, S18, S0
                                    VCMPE.F32       S0, S16
                                    VMRS            APSR_nzcv, FPSCR
                                  }
                                  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                                    __asm
                                    {
                                      VCVT.F64.F32    D0, S0
                                      VLDR            D1, =1.2
                                      VCMPE.F64       D0, D1
                                      VMRS            APSR_nzcv, FPSCR
                                    }
                                    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                                      result = (unsigned __int64 *)1;
                                      *((_DWORD *)_R4 + 1360) = 1;
                        }
                      }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


void __fastcall LocalPlayer::openInventory(LocalPlayer *this)
{
  LocalPlayer::openInventory(this);
}


int __fastcall LocalPlayer::destroyRegion(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int *v2; // r7@1
  int *v3; // r5@1
  int v4; // t1@2

  v1 = this;
  v2 = (int *)*((_DWORD *)this + 1399);
  v3 = (int *)*((_DWORD *)this + 1398);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *v3;
      ++v3;
      (*(void (**)(void))(*(_DWORD *)v4 + 8))();
    }
    while ( v2 != v3 );
    v3 = (int *)*((_DWORD *)v1 + 1398);
  }
  *((_DWORD *)v1 + 1399) = v3;
  return j_j_j__ZN6Player13destroyRegionEv(v1);
}


int __fastcall LocalPlayer::sendInventoryTransaction(LocalPlayer *this, const InventoryTransaction *a2)
{
  LocalPlayer *v2; // r4@1
  void (__fastcall *v3)(LocalPlayer *, int *); // r6@1
  int result; // r0@1
  int v5; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = *(void (__fastcall **)(LocalPlayer *, int *))(*(_DWORD *)this + 1520);
  ComplexInventoryTransaction::fromType(&v5, 0, (int)a2);
  v3(v2, &v5);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


void __fastcall LocalPlayer::openHopper(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createHopperScreen((SceneFactory *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::openHorseInventory(int a1, __int64 *a2)
{
  int v2; // r5@1
  __int64 *v3; // r4@1
  int v4; // r6@2
  int v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*(ClientInstance **)(v2 + 5316));
    v5 = ClientInstance::getSceneFactory(*(ClientInstance **)(v2 + 5316));
    SceneFactory::createHorseScreen((unsigned __int64 *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::handleEntityEvent(MinecraftEventing *this, signed int a2, signed int a3, unsigned int a4)
{
  MinecraftEventing *v4; // r4@1
  int v5; // r0@4
  int v6; // r0@4
  Player *v13; // r1@4
  int v14; // r5@8
  MiningFatigueParticle *v15; // r6@8
  int v16; // r0@10
  ItemInstance *v17; // r5@11
  int v18; // r0@12
  MiningFatigueParticle *v19; // [sp+4h] [bp-24h]@8

  v4 = this;
  if ( a2 <= 65 )
  {
    if ( a2 != 35 )
    {
      if ( a2 == 65 )
      {
        v5 = ClientInstance::getLevelRenderer(*((ClientInstance **)this + 1329));
        ParticleEngine::createTrackingEmitter(*(_DWORD *)(v5 + 1568), v4, 43);
        v6 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v4 + 1104))(v4);
        ItemInstance::operator=((int)v4 + 5944, v6);
        *((_DWORD *)v4 + 1504) = 40;
        _R0 = Random::_genRandInt32((MinecraftEventing *)((char *)v4 + 552));
        __asm
        {
          VMOV            S0, R0
          VLDR            D8, =2.32830644e-10
          VMOV.F32        S18, #-1.0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D8
          VCVT.F32.F64    S0, D0
          VADD.F32        S0, S0, S0
          VADD.F32        S0, S0, S18
          VSTR            S0, [R0]
        }
        j_j_j__ZN17MinecraftEventing20fireEventPlayerSavedEP6Player(v4, v13);
        return;
      }
LABEL_19:
      j_j_j__ZN6Player17handleEntityEventE11EntityEventi(this, a2, (Mob *)a3);
      return;
    }
    v14 = *(_DWORD *)(ClientInstance::getLevelRenderer(*((ClientInstance **)this + 1329)) + 1568);
    v15 = (MiningFatigueParticle *)operator new(0xCu);
    MiningFatigueParticle::MiningFatigueParticle(v15);
    v19 = v15;
    ParticleEngine::addCustomParticle(v14, (int *)&v19);
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    v19 = 0;
    v16 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v4 + 52))(v4);
    Entity::playSound((int)v4, 104, v16);
    return;
  }
  if ( a2 != 66 )
    if ( a2 == 67 )
      j_j_j__ZN17MinecraftEventing22fireEventEntitySpawnedEP6Playerij(
        this,
        (Player *)(a3 >> 16),
        (unsigned __int16)a3,
        a4);
    goto LABEL_19;
  *((_BYTE *)this + 5940) = a3;
  v17 = (ItemInstance *)Player::getSelectedItem(this);
  if ( ItemInstance::getId(v17) == *(_WORD *)(Item::mFilledMap + 18) )
    v18 = *((_BYTE *)v4 + 5940);
    if ( v18 == 4 )
      if ( (unsigned __int16)ItemInstance::getAuxValue(v17) == 3 )
        goto LABEL_17;
      v18 = *((_BYTE *)v4 + 5940);
    if ( v18 != 8 || (unsigned __int16)ItemInstance::getAuxValue(v17) != 4 )
LABEL_17:
    j_j_j__ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE((int)v4, 67);
}


void __fastcall LocalPlayer::setPlayerGameTypeWithoutServerNotification(int a1, int a2)
{
  MinecraftEventing *v2; // r4@1
  Player *v3; // r1@1

  v2 = (MinecraftEventing *)a1;
  Player::setPlayerGameType(a1, a2);
  j_j_j__ZN17MinecraftEventing24fireEventGameTypeChangedEP6Player(v2, v3);
}


char *__fastcall LocalPlayer::addRegionListener(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r5@1
  int *v4; // r0@1
  int v5; // r10@1
  char *result; // r0@2
  void **v7; // r9@3
  _BYTE *v8; // r6@3
  unsigned int v9; // r2@3
  unsigned int v10; // r1@5
  unsigned int v11; // r4@5
  char *v12; // r7@11
  _DWORD *v13; // r11@13
  int v14; // r5@13
  int v15; // r5@15

  v2 = a2;
  v3 = a1;
  v4 = *(int **)(a1 + 5596);
  v5 = v3 + 5596;
  if ( v4 == *(int **)(v3 + 5600) )
  {
    v7 = (void **)(v3 + 5592);
    v8 = *(_BYTE **)(v3 + 5592);
    v9 = ((char *)v4 - v8) >> 2;
    if ( !v9 )
      v9 = 1;
    v10 = v9 + (((char *)v4 - v8) >> 2);
    v11 = v9 + (((char *)v4 - v8) >> 2);
    if ( 0 != v10 >> 30 )
      v11 = 0x3FFFFFFF;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x40000000 )
        sub_119C874();
      v12 = (char *)operator new(4 * v11);
      v8 = *v7;
      v4 = *(int **)v5;
    }
    else
      v12 = 0;
    v13 = (_DWORD *)(v3 + 5600);
    v14 = (int)&v12[(char *)v4 - v8];
    *(_DWORD *)&v12[(char *)v4 - v8] = v2;
    if ( 0 != ((char *)v4 - v8) >> 2 )
      _aeabi_memmove4(v12, v8);
    v15 = v14 + 4;
    if ( v8 )
      operator delete(v8);
    *v7 = v12;
    result = &v12[4 * v11];
    *(_DWORD *)v5 = v15;
    *v13 = result;
  }
  else
    *v4 = a2;
    result = (char *)(*(_DWORD *)v5 + 4);
    *(_DWORD *)v5 = result;
  return result;
}


int __fastcall LocalPlayer::stopRiding(LocalPlayer *this, int a2, int a3)
{
  LocalPlayer *v3; // r6@1
  int v4; // r10@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r1@1
  BlockSource *v13; // r0@3
  Level *v14; // r0@3
  int v16; // r3@3
  Level *v17; // r0@4
  int v19; // r3@4
  int result; // r0@5
  unsigned __int64 v21; // [sp+0h] [bp-28h]@0
  unsigned __int64 v22; // [sp+0h] [bp-28h]@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getInput(*((ClientInstance **)this + 1329));
  v7 = Abilities::isFlying((LocalPlayer *)((char *)v3 + 4320));
  if ( v7 )
    v7 = 2;
  ClientInputHandler::updateInputMode(v6, v7);
  *((_BYTE *)v3 + 4312) = 0;
  _R7 = (int)v3 + 5580;
  __asm { VLDR            S16, [R7] }
  v13 = (BlockSource *)Entity::getRegion(v3);
  v14 = (Level *)BlockSource::getLevel(v13);
  _R0 = (*(_QWORD *)Level::getCurrentTick(v14) - *((_QWORD *)v3 + 698)) / 0x14uLL;
  __asm { VCVTR.U32.F32   S0, S16 }
  v16 = HIDWORD(_R0);
  __asm { VMOV            R1, S0 }
  MinecraftEventing::fireEventVehicleExited(v3, (Player *)HIDWORD(_R0), _R0, v16, v21);
  if ( !v4 )
  {
    __asm { VLDR            S16, [R7] }
    v17 = (Level *)Entity::getLevel(v3);
    _R0 = (*(_QWORD *)Level::getCurrentTick(v17) - *((_QWORD *)v3 + 698)) / 0x14uLL;
    __asm { VCVTR.U32.F32   S0, S16 }
    v19 = HIDWORD(_R0);
    __asm { VMOV            R1, S0 }
    MinecraftEventing::fireEventVehicleExited(v3, (Player *)HIDWORD(_R0), _R0, v19, v22);
  }
  *((_DWORD *)v3 + 1362) = 0;
  *((_DWORD *)v3 + 1363) = 0;
  Mob::stopRiding(v3, v5, v4);
  result = ClientInstance::getGameRenderer(*((ClientInstance **)v3 + 1329));
  *(_BYTE *)(result + 814) = 1;
  return result;
}


int __fastcall LocalPlayer::chorusFruitTeleport(LocalPlayer *this)
{
  LocalPlayer *v1; // r5@1
  int v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r0@1
  int v9; // r8@1
  int result; // r0@6
  int v15; // r0@9
  int v16; // r0@10
  float v17; // [sp+Ch] [bp-74h]@1
  float v18; // [sp+10h] [bp-70h]@1
  int v19; // [sp+14h] [bp-6Ch]@1
  float v20; // [sp+18h] [bp-68h]@1
  __int64 v21; // [sp+1Ch] [bp-64h]@1

  v1 = this;
  v2 = 0;
  v3 = *(_QWORD *)((char *)this + 76);
  v20 = *((float *)v1 + 18);
  v21 = v3;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0;
  v4 = Entity::getRegion(v1);
  __asm
  {
    VMOV.F32        S0, #-8.0
    VLDR            S2, [SP,#0x80+var_68]
    VLDR            S4, [SP,#0x80+var_64]
  }
  v9 = v4;
    VLDR            S6, [SP,#0x80+var_64+4]
    VLDR            D11, =2.32830644e-10
    VMOV.F32        S24, #16.0
    VLDR            S26, =0.0
    VADD.F32        S16, S6, S0
    VADD.F32        S18, S4, S0
    VADD.F32        S20, S2, S0
  while ( 1 )
    _R0 = Random::_genRandInt32((LocalPlayer *)((char *)v1 + 552));
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D11
      VCVT.F32.F64    S0, D0
      VMUL.F32        S0, S0, S24
      VADD.F32        S0, S20, S0
      VSTR            S0, [SP,#0x80+var_74]
    }
      VMOV.F32        S4, S26
    _R0 = *(_WORD *)(v9 + 24) - 1;
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S18, S0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S4, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S4, S2 }
    __asm { VSTR            S4, [SP,#0x80+var_70] }
      VADD.F32        S0, S16, S0
      VSTR            S0, [SP,#0x80+var_6C]
    result = (*(int (__fastcall **)(LocalPlayer *, float *, signed int, signed int))(*(_DWORD *)v1 + 108))(
               v1,
               &v17,
               1,
               1);
    if ( result == 1 )
      break;
    if ( ++v2 > 15 )
      return result;
  v15 = Entity::getLevel(v1);
  Level::broadcastDimensionEvent(v15, (BlockSource *)v9, 1018, (int)&v20, 0);
  result = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v1 + 288))(v1);
  if ( result == 1 )
    v16 = Entity::getLevel(v1);
    result = Level::broadcastDimensionEvent(v16, (BlockSource *)v9, 1018, (int)v1 + 72, 0);
  return result;
}


signed int __fastcall LocalPlayer::displayLocalizableMessage(int a1, int *a2, unsigned __int64 *a3, char a4)
{
  int *v4; // r6@1
  char v5; // r4@1
  unsigned __int64 *v6; // r5@1
  int v7; // r0@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 5316));
  return j_j_j__ZN7GuiData25displayLocalizableMessageERKSsRKSt6vectorISsSaISsEEb(v7, v4, v6, v5);
}


int __fastcall LocalPlayer::onEffectRemoved(LocalPlayer *this, MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r4@1
  LocalPlayer *v3; // r5@1
  int v4; // r6@1

  v2 = a2;
  v3 = this;
  v4 = MobEffectInstance::getId(a2);
  if ( v4 == MobEffect::getId((MobEffect *)MobEffect::CONFUSION)
    && *((_BYTE *)v3 + 221) != *(_BYTE *)(Block::mPortal + 4) )
  {
    *((_DWORD *)v3 + 1327) = 0;
    *((_BYTE *)v3 + 5398) = 0;
  }
  return j_j_j__ZN3Mob15onEffectRemovedER17MobEffectInstance(v3, v2);
}


BlockSource *__fastcall LocalPlayer::outOfWorld(LocalPlayer *this)
{
  char *v2; // r6@1
  Level *v3; // r0@1
  BlockSource *result; // r0@2
  signed int v5; // r0@3
  BlockSource *v12; // [sp+8h] [bp-20h]@4
  BlockSource *v13; // [sp+10h] [bp-18h]@7

  _R4 = this;
  v2 = (char *)this + 4948;
  v3 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v3) )
  {
    result = 0;
    *(_DWORD *)v2 = 0;
  }
  else
    v5 = (*(_DWORD *)v2)++;
    if ( v5 >= 10 )
    {
      EntityDamageSource::EntityDamageSource((int)&v12, 12);
      Entity::hurt(_R4, (const EntityDamageSource *)&v12, 4, 1, 0);
      *(_DWORD *)v2 = 0;
      EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v12);
    }
    result = (BlockSource *)Mob::getHealth(_R4);
    if ( (signed int)result <= 0 )
      Player::getSpawnPosition((Player *)&v12, (int)_R4);
      __asm { VLDR            S0, [R4,#0x54] }
      result = v12;
      __asm
      {
        VCVTR.S32.F32   S0, S0
        VMOV            R1, S0
      }
      if ( v12 == _R1 )
        __asm { VLDR            S0, [R4,#0x5C] }
        result = v13;
        __asm
        {
          VCVTR.S32.F32   S0, S0
          VMOV            R1, S0
        }
        if ( v13 == _R1 )
          result = (BlockSource *)4823;
          if ( !*((_BYTE *)_R4 + 4823) )
          {
            *((_BYTE *)_R4 + 4823) = 1;
            result = Player::recheckSpawnPosition(_R4);
          }
  return result;
}


void __fastcall LocalPlayer::changeDimensionWithCredits(Entity *a1, int a2)
{
  LocalPlayer::changeDimensionWithCredits(a1, a2);
}


char *__fastcall LocalPlayer::getLookBob(LocalPlayer *this)
{
  return (char *)this + 5604;
}


int __fastcall LocalPlayer::setTeacher(int result)
{
  *(_BYTE *)(result + 5646) = 1;
  return result;
}


signed int __fastcall LocalPlayer::checkForTreasureHunter(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  ItemInstance *v2; // r0@1
  ItemInstance *v3; // r5@1
  signed int result; // r0@1

  v1 = this;
  v2 = (ItemInstance *)Player::getSelectedItem(this);
  v3 = v2;
  result = ItemInstance::getId(v2);
  if ( result == *(_WORD *)(Item::mFilledMap + 18) )
  {
    result = *((_BYTE *)v1 + 5940);
    if ( result == 4 )
    {
      if ( (unsigned __int16)ItemInstance::getAuxValue(v3) == 3 )
        return j_j_j__ZN17MinecraftEventing25fireEventAwardAchievementEP6PlayerNS_14AchievementIdsE((int)v1, 67);
      result = *((_BYTE *)v1 + 5940);
    }
    if ( result == 8 )
      result = (unsigned __int16)ItemInstance::getAuxValue(v3);
      if ( (unsigned __int16)result == 4 )
  }
  return result;
}


void __fastcall LocalPlayer::openNpcInteractScreen(LocalPlayer *this, Entity *a2)
{
  Entity *v2; // r5@1
  Entity *v3; // r8@1
  int v4; // r6@1
  Player *v5; // r7@1
  char v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  char v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1329));
  v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
  v6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 648))(v2);
  SceneFactory::createNpcInteractScreen((SceneFactory *)&v12, v5, v2, (int)v3, v6);
  SceneStack::pushScreen(v4, (int)&v12, 0);
  v7 = v13;
  if ( v13 )
  {
    v8 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
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
  }
}


int __fastcall LocalPlayer::_applyTurnDelta(int a1, float a2)
{
  float v10; // r1@1
  int v13; // r0@5
  float v15; // r1@5
  float v17; // r1@5
  int v20; // r0@9
  float v23; // r1@9
  float v26; // r1@9
  int result; // r0@9

  _R5 = a2;
  _R4 = a1;
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S2, [R4,#0x80]
    VSUB.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::wrapDegrees(_R0, a2);
    VLDR            S16, =-90.0
    VMOV            S0, R0
    VLDR            S2, [R4,#0x84]
    VCMPE.F32       S0, S16
    VLDR            S4, [R5,#4]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S6, S16
    VADD.F32        S2, S4, S2
    VLDR            S18, =90.0
    VCMPE.F32       S0, S18
    VMOV            R0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VMOV            R6, S6
    _R6 = 1119092736;
  v13 = mce::Math::wrapDegrees(_R0, v10);
  *(_DWORD *)(_R4 + 128) = _R6;
  *(_DWORD *)(_R4 + 132) = v13;
    VLDR            S2, [R4,#0x78]
  _R0 = mce::Math::wrapDegrees(_R0, v15);
    VLDR            S2, [R4,#0x7C]
    __asm { VMOVGT.F32      S16, S0 }
    VMOV            R6, S16
  v20 = mce::Math::wrapDegrees(_R0, v17);
  *(_DWORD *)(_R4 + 120) = _R6;
  *(_DWORD *)(_R4 + 124) = v20;
  _R0 = _R4 + 3424;
    VLDR            S2, [R5,#4]
    VLDR            S0, [R0]
    VADD.F32        S0, S2, S0
  *(_DWORD *)(_R4 + 3424) = mce::Math::wrapDegrees(_R0, v23);
  _R0 = _R4 + 3420;
  result = mce::Math::wrapDegrees(_R0, v26);
  *(_DWORD *)(_R4 + 3420) = result;
  return result;
}


int __fastcall LocalPlayer::rideTick(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  ClientInstance **v2; // r7@1
  signed int v3; // r8@2
  int v4; // r0@4
  _QWORD *v5; // r5@5
  signed int v6; // r5@5
  float v13; // r1@9
  signed int v14; // r0@11
  Player *v15; // r1@11
  int v18; // r0@24
  int v19; // r0@26
  float v20; // ST00_4@26
  int result; // r0@34
  int v22; // r0@35
  PlayerInventoryProxy *v23; // r0@37
  Entity *v24; // r6@37
  char *v25; // r0@37
  char *v26; // r5@37
  signed int v27; // r0@39
  char v28; // r1@39
  signed int v29; // r0@41
  int v30; // r0@42
  char v31; // r1@42
  char v32; // r1@45
  signed int v33; // r0@48
  float v34; // [sp+4h] [bp-54h]@0
  __int64 v35; // [sp+8h] [bp-50h]@37
  char v36; // [sp+14h] [bp-44h]@26

  v1 = this;
  v2 = (ClientInstance **)((char *)this + 5316);
  if ( ClientInstance::currentInputModeIsGamePadOrMotionController(*((ClientInstance **)this + 1329)) )
    v3 = 1;
  else
    v3 = ClientInstance::isHoloRealityMode(*v2);
  v4 = *((_DWORD *)v1 + 128);
  if ( v4 )
  {
    v5 = *(_QWORD **)(v4 + 500);
    v6 = *v5 != *(_QWORD *)Entity::getUniqueID(v1);
  }
    v6 = 1;
  if ( v3 != 1 || ClientInstance::isInGame(*v2) != 1 )
    v14 = ClientInstance::isHoloRealityMode(*v2);
    __asm { VLDR            S16, =0.0 }
    if ( v14 == 1 )
    {
      v15 = 0;
      *((_DWORD *)v1 + 1338) = 0;
      *((_DWORD *)v1 + 1339) = 0;
    }
    _R6 = ClientInstance::getMoveTurnInput(*v2);
    _R1 = &Vec2::ZERO;
    __asm
      VLDR            S16, [R1]
      VLDR            S20, [R1,#4]
    if ( ClientInstance::currentInputModeIsGamePadOrMotionController(*v2) == 1 )
      __asm
      {
        VLDR            S18, [R6,#4]
        VLDR            S0, [R6,#8]
      }
    else
      __asm { VMOV.F32        S0, #1.0 }
      LODWORD(v13) = *((_WORD *)v1 + 2680);
        VLDR            S2, =0.0
        VMOV.F32        S18, S2
      if ( _ZF )
        __asm
        {
          VMOVEQ.F32      S18, S0
          VMOVEQ.F32      S0, S2
        }
      if ( LODWORD(v13) <= 0xFF )
        __asm { VMOV.F32        S18, #-1.0 }
        if ( !LOBYTE(v13) )
          __asm
          {
            VMOVEQ.F32      S2, S20
            VMOVEQ.F32      S18, S16
          }
        __asm { VMOV.F32        S0, S2 }
      VCMPE.F32       S0, #0.0
      VLDR            S20, =0.0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S22, #1.0
      VMOV.F32        S2, S20
      VCMPE.F32       S0, S22
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
      VMUL.F32        S0, S18, S18
      __asm { VMOVGT.F32      S2, S22 }
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = mce::Math::sqrt(_R0, v13);
    __asm { VMOV            S16, R0 }
    if ( ClientInstance::isHoloRealityMode(*v2) == 1 )
      v18 = *((_DWORD *)v1 + 128);
      if ( v18 && Entity::hasCategory(v18, 131328) == 1 )
        v19 = ClientInstance::getHoloInput(*v2);
        HolographicPlatform::getTransformZDir((int)&v36, v19, 16, 2, 14);
          VSTR            S16, [SP,#0x58+var_58]
          VSTR            S18, [SP,#0x58+var_54]
        Boat::computePaddleForcesBasedOnGaze(
          *((float *)v1 + 128),
          COERCE_FLOAT(&v36),
          (float *)v1 + 1338,
          (float *)v1 + 1339,
          v20,
          v34);
        VMOV.F32        S0, #-1.0
        VSUB.F32        S2, S22, S18
        VMOV.F32        S4, S22
        VCMPE.F32       S18, S0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S18, #0.0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S18 }
        VADD.F32        S0, S0, S22
        VCMPE.F32       S18, S22
          VMOVGT.F32      S4, S2
          VMOVGT.F32      S0, S22
        VMUL.F32        S0, S0, S16
        __asm { VMOVGT.F32      S4, S20 }
        VSTR            S0, [R0]
        VMUL.F32        S2, S4, S16
        VSTR            S2, [R0]
  result = *((_DWORD *)v1 + 1330);
  if ( result == 16 )
    v22 = *((_DWORD *)v1 + 128);
    if ( v22 && !(Entity::hasCategory(v22, 131328) ^ 1 | v6) )
      v23 = (PlayerInventoryProxy *)Player::getSupplies(v1);
      PlayerInventoryProxy::getSelectedItem(v23);
      v24 = (Entity *)*((_DWORD *)v1 + 128);
      *((_BYTE *)v1 + 4312) = 0;
      (*(void (__fastcall **)(__int64 *, Entity *))(*(_DWORD *)v24 + 540))(&v35, v24);
      v25 = Entity::getUniqueID(v1);
      v26 = (char *)v1 + 4312;
      if ( *(_QWORD *)v25 == v35 )
        if ( v3 )
          v27 = Boat::setPaddleForce(v24, 0, *((_DWORD *)v1 + 1338));
          v28 = *v26;
          if ( v27 )
            v28 |= 1u;
          *v26 = v28;
          v29 = Boat::setPaddleForce(v24, 1, *((_DWORD *)v1 + 1339));
        else
          v30 = Boat::setPaddleState(v24, 0, *((_BYTE *)v1 + 5360));
          v31 = *v26;
          if ( v30 )
            v31 |= 1u;
          *v26 = v31;
          v29 = Boat::setPaddleState(v24, 1, *((_BYTE *)v1 + 5361));
        v32 = *v26;
        if ( v29 )
          v32 |= 1u;
        *v26 = v32;
      v33 = ClientInstance::isHoloRealityMode(*v2);
        VLDR            S0, =0.1
        VCMPE.F32       S16, S0
      if ( _NF ^ _VF )
        if ( v33 == 1 )
          *v26 = 0;
    result = Player::rideTick(v1, v15);
  return result;
}


int __fastcall LocalPlayer::getFieldOfViewModifier(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@2
  int v4; // r0@2
  AttributeInstance *v9; // r0@6
  int result; // r0@11

  v1 = this;
  v2 = (char *)this + 4320;
  if ( Abilities::isFlying((LocalPlayer *)((char *)this + 4320)) == 1 )
  {
    v3 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 1329));
    v4 = (*(int (**)(void))(*(_DWORD *)v3 + 76))();
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S16, =1.1
    }
    if ( v4 )
      __asm { VMOVNE.F32      S16, S0 }
  }
  else
    __asm { VMOV.F32        S16, #1.0 }
  v9 = (AttributeInstance *)(*(int (__fastcall **)(LocalPlayer *, void *))(*(_DWORD *)v1 + 1004))(
                              v1,
                              &SharedAttributes::MOVEMENT_SPEED);
  _R0 = AttributeInstance::getCurrentValue(v9);
  __asm { VMOV            S18, R0 }
  _R0 = Abilities::getFloat((int)v2, (int **)&Abilities::WALKSPEED);
  __asm
    VMOV            S0, R0
    VLDR            S2, =0.6
    VMOV.F32        S4, #0.5
    VDIV.F32        S0, S18, S0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VMUL.F32        S16, S0, S16
  if ( Player::isUsingItem(v1) == 1 && *(_DWORD *)Player::getItemInUse(v1) == Item::mBow )
    _R0 = Player::getTicksUsingItem(v1);
      VMOV            S0, R0
      VLDR            S2, =0.05
      VMOV.F32        S6, #1.0
      VLDR            S4, =-0.15
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VCMPE.F32       S0, S6
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S2, S0, S0
      VMUL.F32        S2, S2, S4
      VLDR            S4, =0.85
      VADD.F32        S2, S2, S6
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S4 }
    __asm { VMUL.F32        S16, S2, S16 }
  _R0 = (int)v1 + 4944;
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


signed int __fastcall LocalPlayer::isLocalPlayer(LocalPlayer *this)
{
  return 1;
}


void __fastcall LocalPlayer::addAdditionalSaveData(LocalPlayer *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  LocalPlayer *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Player::addAdditionalSaveData(this, a2);
  sub_119C884((void **)&v7, "Score");
  CompoundTag::putInt((int)v2, (const void **)&v7, *((_DWORD *)v3 + 1075));
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


void __fastcall LocalPlayer::openAnvil(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createAnvilScreen((SceneFactory *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


signed int __fastcall LocalPlayer::displayClientMessage(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 5316));
  return j_j_j__ZN7GuiData20displayClientMessageERKSs(v3, v2);
}


int __fastcall LocalPlayer::swing(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  Options *v7; // r0@3
  int result; // r0@5
  int v9; // r3@6
  void **v10; // [sp+0h] [bp-38h]@6
  int v11; // [sp+4h] [bp-34h]@6
  int v12; // [sp+8h] [bp-30h]@6
  char v13; // [sp+Ch] [bp-2Ch]@6
  int v14; // [sp+10h] [bp-28h]@6
  signed __int64 v15; // [sp+18h] [bp-20h]@6

  v1 = this;
  Mob::swing(this);
  if ( !*((_BYTE *)v1 + 5397) )
  {
    _R6 = (LocalPlayer *)((char *)v1 + 5392);
    __asm
    {
      VLDR            S0, =0.1
      VLDR            S2, [R6]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 1329));
      Options::getVRHeadSteering(v7);
    *(_DWORD *)_R6 = 0;
    *((_BYTE *)v1 + 5397) = 1;
  }
  result = *((_DWORD *)v1 + 998);
  if ( result == -1 )
    v11 = 2;
    v12 = 1;
    v13 = 0;
    v10 = &off_26DA6E8;
    Entity::getRuntimeID((Entity *)&v14, (int)v1);
    v15 = 1LL;
    result = (*(int (__cdecl **)(_DWORD, void ***, _DWORD, int))(**((_DWORD **)v1 + 1231) + 8))(
               *((_DWORD *)v1 + 1231),
               &v10,
               *(_DWORD *)(**((_DWORD **)v1 + 1231) + 8),
               v9);
  return result;
}


int *__fastcall LocalPlayer::normalTick(LocalPlayer *this)
{
  char *v1; // r6@0
  int v3; // r5@2
  int *result; // r0@5
  int v5; // r0@9
  int v6; // r0@12
  int v7; // r5@15
  int v8; // r0@15
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int v12; // r0@24
  signed int v20; // r1@38
  int v23; // r0@52
  signed int v24; // r5@52
  int v25; // r0@60
  PlayerInventoryProxy *v27; // r0@70
  ItemInstance *v28; // r0@70
  ItemInstance *v29; // r5@70
  int v30; // r0@70
  bool v31; // zf@70
  signed int v32; // r1@76
  int v33; // r0@76
  Level *v34; // r0@78
  signed int v35; // r0@79
  int v36; // r0@86
  __int64 v37; // r1@86
  int v38; // r1@86
  MoveEntityPacketData *v39; // r5@89
  const Vec3 *v40; // r0@89
  int v41; // r0@90
  int v42; // r2@90
  Level *v43; // r0@92
  int v44; // r0@92
  int v45; // r5@92
  int v46; // r7@92
  char v47; // r6@92
  char v48; // r0@92
  Level *v49; // r0@93
  PlayerInventoryProxy *v50; // r0@94
  signed int v51; // r5@94
  LocalPlayer *v52; // r6@95
  char v53; // r9@95
  int v54; // r7@95
  int v55; // r0@96
  int v56; // r0@97
  PlayerInventoryProxy *v57; // r0@99
  char v58; // r0@99
  PlayerInventoryProxy *v59; // r0@102
  int v60; // r0@104
  int v61; // r5@104
  PlayerInventoryProxy *v62; // r0@104
  char v63; // r6@104
  PlayerInventoryProxy *v64; // r0@104
  unsigned __int64 *v65; // r0@104
  PlayerInventoryProxy *v66; // r0@106
  ItemInstance *v67; // r6@106
  int v68; // r0@106
  PlayerInventoryProxy *v69; // r0@108
  __int64 v70; // r6@108
  char v71; // r5@108
  int v72; // r6@115
  unsigned int v73; // r1@116
  unsigned int *v74; // r0@116
  unsigned int v75; // r2@119
  unsigned int v76; // r3@120
  unsigned int v77; // r1@121
  signed int v78; // r3@121
  signed int v79; // r7@121
  int v80; // r7@125
  unsigned int *v81; // r5@134
  unsigned int v82; // r0@136
  int v83; // r0@141
  unsigned int *v84; // r2@142
  unsigned int v85; // r1@144
  GuiData *v86; // r0@152
  int v87; // [sp+8h] [bp-1A8h]@115
  int v88; // [sp+Ch] [bp-1A4h]@115
  char v89; // [sp+10h] [bp-1A0h]@108
  void **v90; // [sp+18h] [bp-198h]@108
  int v91; // [sp+1Ch] [bp-194h]@108
  int v92; // [sp+20h] [bp-190h]@108
  char v93; // [sp+24h] [bp-18Ch]@108
  __int64 v94; // [sp+28h] [bp-188h]@108
  int v95; // [sp+30h] [bp-180h]@108
  int v96; // [sp+38h] [bp-178h]@112
  void *v97; // [sp+54h] [bp-15Ch]@110
  void *v98; // [sp+64h] [bp-14Ch]@108
  __int64 v99; // [sp+78h] [bp-138h]@108
  char v100; // [sp+80h] [bp-130h]@108
  char v101; // [sp+81h] [bp-12Fh]@108
  char v102; // [sp+82h] [bp-12Eh]@108
  char v103; // [sp+83h] [bp-12Dh]@108
  char v104; // [sp+84h] [bp-12Ch]@108
  char v105; // [sp+8Ch] [bp-124h]@106
  int v106; // [sp+90h] [bp-120h]@107
  char v107; // [sp+94h] [bp-11Ch]@104
  int v108; // [sp+98h] [bp-118h]@104
  void **v109; // [sp+9Ch] [bp-114h]@104
  void *ptr; // [sp+B4h] [bp-FCh]@104
  char v111; // [sp+C0h] [bp-F0h]@97
  char v112; // [sp+C8h] [bp-E8h]@96
  int v113; // [sp+CCh] [bp-E4h]@96
  void **v114; // [sp+D0h] [bp-E0h]@86
  int v115; // [sp+D4h] [bp-DCh]@86
  int v116; // [sp+D8h] [bp-D8h]@86
  char v117; // [sp+DCh] [bp-D4h]@86
  int v118; // [sp+E0h] [bp-D0h]@86
  __int64 v119; // [sp+E8h] [bp-C8h]@86
  int v120; // [sp+F0h] [bp-C0h]@86
  __int64 v121; // [sp+F4h] [bp-BCh]@86
  int v122; // [sp+FCh] [bp-B4h]@86
  char v123; // [sp+100h] [bp-B0h]@86
  char v124; // [sp+101h] [bp-AFh]@86
  int v125; // [sp+108h] [bp-A8h]@87
  int v126; // [sp+10Ch] [bp-A4h]@91
  int v127; // [sp+110h] [bp-A0h]@92
  int v128; // [sp+114h] [bp-9Ch]@92
  char v129; // [sp+118h] [bp-98h]@88
  int v130; // [sp+120h] [bp-90h]@90
  int v131; // [sp+124h] [bp-8Ch]@90
  int v132; // [sp+128h] [bp-88h]@90
  int v133; // [sp+12Ch] [bp-84h]@90
  char v134; // [sp+130h] [bp-80h]@90
  int v135; // [sp+138h] [bp-78h]@79
  int v136; // [sp+13Ch] [bp-74h]@79
  void **v137; // [sp+140h] [bp-70h]@79
  signed int v138; // [sp+144h] [bp-6Ch]@79
  signed int v139; // [sp+148h] [bp-68h]@79
  char v140; // [sp+14Ch] [bp-64h]@79
  int v141; // [sp+150h] [bp-60h]@79
  int v142; // [sp+154h] [bp-5Ch]@79
  char v143; // [sp+158h] [bp-58h]@79
  int v144; // [sp+15Ch] [bp-54h]@79
  char v145; // [sp+164h] [bp-4Ch]@15
  int v146; // [sp+168h] [bp-48h]@15
  void **v147; // [sp+16Ch] [bp-44h]@92
  int v148; // [sp+170h] [bp-40h]@92
  int v149; // [sp+174h] [bp-3Ch]@92
  char v150; // [sp+178h] [bp-38h]@92
  int v151; // [sp+17Ch] [bp-34h]@92
  int v152; // [sp+180h] [bp-30h]@92
  char v153; // [sp+184h] [bp-2Ch]@92
  char v154; // [sp+185h] [bp-2Bh]@92

  _R4 = this;
  if ( *((_BYTE *)this + 5644) )
  {
    v1 = (char *)this + 5644;
    v3 = ClientInstance::getScreen(*((ClientInstance **)this + 1329));
    if ( (*(int (**)(void))(*(_DWORD *)v3 + 160))() == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 48))(v3);
    *v1 = 0;
  }
  result = (int *)*((_DWORD *)_R4 + 1330);
  if ( result == (int *)16 )
    result = (int *)*((_DWORD *)_R4 + 1073);
    if ( !result )
    {
      Player::normalTick(_R4);
      if ( *((_BYTE *)_R4 + 5536) && ClientInstance::isInGame(*((ClientInstance **)_R4 + 1329)) == 1 )
      {
        v1 = (char *)_R4 + 5536;
        v5 = ClientInstance::getInput(*((ClientInstance **)_R4 + 1329));
        ClientInputHandler::updateInputMode(v5, 1);
        *((_BYTE *)_R4 + 5536) = 0;
      }
      if ( *((_BYTE *)_R4 + 5537) )
        v1 = (char *)5316;
        if ( ClientInstance::isInGame(*((ClientInstance **)_R4 + 1329)) == 1 )
        {
          v6 = ClientInstance::getInput(*((ClientInstance **)_R4 + 1329));
          ClientInputHandler::updateInputMode(v6, 4);
          *((_BYTE *)_R4 + 5537) = 0;
        }
      if ( !(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 316))(_R4)
        && !ClientInstance::isShowingMenu(*((ClientInstance **)_R4 + 1329)) )
        *((_DWORD *)_R4 + 1206) = 0;
        v7 = ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 1329));
        v8 = ClientInstance::getSceneFactory(*((ClientInstance **)_R4 + 1329));
        v1 = &v145;
        SceneFactory::createDeathScreen((SceneFactory *)&v145, v8);
        SceneStack::pushScreen(v7, (int)&v145, 0);
        v9 = v146;
        if ( v146 )
          v10 = (unsigned int *)(v146 + 4);
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
            v1 = (char *)(v9 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex((unsigned int *)v1);
              while ( __strex(v12 - 1, (unsigned int *)v1) );
            }
            else
              v12 = (*(_DWORD *)v1)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      if ( Entity::isRiding(_R4) == 1 )
        _R1 = (int)_R4 + 5568;
        _R0 = (int)_R4 + 5572;
        __asm
          VLDR            S0, [R4,#0x48]
          VLDR            S6, [R1]
          VLDR            S8, [R0]
          VLDR            S2, [R4,#0x4C]
          VSUB.F32        S0, S0, S6
        _R0 = (int)_R4 + 5576;
          VLDR            S4, [R4,#0x50]
          VSUB.F32        S2, S2, S8
          VLDR            S6, [R0]
          VSUB.F32        S4, S4, S6
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VADD.F32        S0, S2, S0
          VADD.F32        S0, S0, S4
          VSQRT.F32       S16, S0
        _R5 = (int)_R4 + 5580;
        if ( Entity::hasCategory(*((_DWORD *)_R4 + 128), 65792) == 1 )
          __asm
            VLDR            S0, =500.0
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          if ( !(_NF ^ _VF) )
            __asm
              VLDR            S2, [R5]
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              MinecraftEventing::fireEventAwardAchievement((int)_R4, 29);
        __asm { VSTR            S16, [R5] }
      if ( (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 316))(_R4) != 1
        || (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 208))(_R4) != 1
        || (*(int (__fastcall **)(LocalPlayer *, signed int))(*(_DWORD *)_R4 + 220))(_R4, 5) != 1 )
        *((_DWORD *)_R4 + 1405) = 0;
      else
        v20 = *((_DWORD *)_R4 + 1405);
        *((_DWORD *)_R4 + 1405) = v20 + 1;
        if ( v20 >= 2400 )
          MinecraftEventing::fireEventAwardAchievement((int)_R4, 61);
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 316))(_R4) != 1
        || Mob::hasEffect(_R4, (const MobEffect *)MobEffect::LEVITATION) != 1
        || *((_DWORD *)_R4 + 1249) != 4194380 )
        *((_DWORD *)_R4 + 1406) = -1082130432;
        __asm { VLDR            S0, [R4,#0x4C] }
        _R0 = (int)_R4 + 5624;
          VLDR            S2, [R0]
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VSTR            S0, [R0] }
        else
            VSUB.F32        S0, S0, S2
            VLDR            S2, =50.0
            VCMPE.F32       S0, S2
            MinecraftEventing::fireEventAwardAchievement((int)_R4, 64);
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 316))(_R4) == 1 && Mob::isGliding(_R4) == 1 )
        _R1 = Entity::getSpeedInMetersPerSecond(_R4);
          VLDR            S0, =40.0
          VMOV            S2, R1
          VCMPE.F32       S2, S0
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          LocalPlayer::checkIfAchievedSuperSonic(_R4, *(float *)&_R1);
      v23 = *((_DWORD *)_R4 + 128);
      v24 = 0;
      if ( v23 && (*(int (**)(void))(*(_DWORD *)v23 + 488))() == 90 )
        v24 = 1;
        if ( *((_BYTE *)_R4 + 4080) )
          *((_BYTE *)_R4 + 4080) = 1;
        if ( (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 208))(_R4) == 1
          && (*(int (__fastcall **)(LocalPlayer *, signed int))(*(_DWORD *)_R4 + 220))(_R4, 5) == 1
          && (v25 = (*(int (**)(void))(**((_DWORD **)_R4 + 128) + 488))(),
              EntityClassTree::isTypeInstanceOf(v25, 256) == 1)
          || !v24 && *((_BYTE *)_R4 + 4080) && !(*(int (**)(void))(**((_DWORD **)_R4 + 128) + 384))() )
          (*(void (__fastcall **)(LocalPlayer *, signed int, _DWORD))(*(_DWORD *)_R4 + 596))(_R4, 1, 0);
      _ZF = *((_BYTE *)_R4 + 4847) == 0;
      if ( *((_BYTE *)_R4 + 4847) )
        v1 = (char *)_R4 + 4832;
        _ZF = *((_DWORD *)_R4 + 1208) == 0;
      if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v1) && *((_BYTE *)_R4 + 4846) )
        v27 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
        v28 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(v27);
        v29 = v28;
        v30 = *((_BYTE *)v28 + 15);
        v31 = v30 == 0;
        if ( v30 )
          v31 = *(_DWORD *)v29 == 0;
        if ( v31
          || ItemInstance::isNull(v29)
          || !*((_BYTE *)v29 + 14)
          || ItemInstance::operator==(v29, (ItemInstance *)v1) != 1 )
          Player::stopUsingItem(_R4);
          v32 = *((_DWORD *)_R4 + 1226);
          v33 = v32 - 1;
          *((_DWORD *)_R4 + 1226) = v32 - 1;
          if ( v32 <= 26 && !(v33 & 3) )
            v34 = (Level *)Entity::getLevel(_R4);
            if ( Level::isClientSide(v34) == 1 )
              Entity::getRuntimeID((Entity *)&v135, (int)_R4);
              v35 = ItemInstance::getId(v29);
              v138 = 2;
              v139 = 1;
              v140 = 0;
              v137 = &off_26DA5D0;
              v141 = v135;
              v142 = v136;
              v143 = 57;
              v144 = v35;
              (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
            v33 = *((_DWORD *)_R4 + 1226);
          if ( !v33 )
            (*(void (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 1260))(_R4);
      if ( !(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 784))(_R4) )
        if ( Entity::isRiding(_R4) )
          v115 = 2;
          v116 = 1;
          v117 = 0;
          v114 = &off_26DA5F8;
          Entity::getRuntimeID((Entity *)&v118, (int)_R4);
          v36 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 52))(_R4);
          v37 = *(_QWORD *)v36;
          v120 = *(_DWORD *)(v36 + 8);
          v119 = v37;
          v121 = *((_QWORD *)_R4 + 15);
          v122 = *((_DWORD *)_R4 + 855);
          v123 = 3;
          v124 = *((_BYTE *)_R4 + 216);
          v38 = *((_DWORD *)_R4 + 128);
          if ( v38 )
            Entity::getRuntimeID((Entity *)&v125, v38);
            v125 = 0;
            v126 = 0;
          v127 = 0;
          v128 = 0;
          v43 = (Level *)Entity::getLevel(_R4);
          v44 = Level::getPacketSender(v43);
          (*(void (**)(void))(*(_DWORD *)v44 + 8))();
          v45 = *((_DWORD *)_R4 + 1038);
          v46 = *((_DWORD *)_R4 + 1037);
          v47 = *((_BYTE *)_R4 + 4080);
          v48 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 312))(_R4);
          v148 = 2;
          v149 = 1;
          v150 = 0;
          v147 = &off_26DA710;
          v151 = v46;
          v152 = v45;
          v153 = v47;
          v154 = v48;
          (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
          MoveEntityPacketData::MoveEntityPacketData((Entity *)&v129, (int)_R4);
          if ( *((_BYTE *)_R4 + 4994) == 1
            || (v39 = (MoveEntityPacketData *)*((_DWORD *)_R4 + 48),
                v40 = (const Vec3 *)(*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 64))(_R4),
                MoveEntityPacketData::distantEnough(v39, (const MoveEntityPacketData *)&v129, v40, 1.0) == 1) )
            LocalPlayer::sendPosition(_R4);
            v41 = *((_DWORD *)_R4 + 48);
            *(_QWORD *)v41 = *(_QWORD *)&v129;
            *(_DWORD *)(v41 + 8) = v130;
            *(_DWORD *)(v41 + 12) = v131;
            *(_DWORD *)(v41 + 16) = v132;
            v42 = v133;
            *(_BYTE *)(v41 + 24) = v134;
            *(_DWORD *)(v41 + 20) = v42;
      v49 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v49) == 1 )
        (*(void (__fastcall **)(char *))(*((_DWORD *)_R4 + 1319) + 56))((char *)_R4 + 5276);
        v50 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
        v51 = PlayerInventoryProxy::getLinkedSlotsCount(v50);
        if ( v51 )
          v52 = (LocalPlayer *)((char *)_R4 + 5556);
          v53 = 0;
          v54 = 0;
          do
            v55 = Player::getSupplies(_R4);
            PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v112, v55);
            if ( v54 != v113 )
              v56 = Player::getSupplies(_R4);
              PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v111, v56);
              if ( v111 != 123 && *(_DWORD *)(*(_DWORD *)v52 + 4 * v54) == -1 )
              {
                v57 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
                _ZF = PlayerInventoryProxy::getLinkedSlot(v57, v54) == -1;
                v58 = 0;
                if ( !_ZF )
                  v58 = 1;
                v53 |= v58;
              }
            v59 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
            *(_DWORD *)(*(_DWORD *)v52 + 4 * v54) = PlayerInventoryProxy::getLinkedSlot(v59, v54);
            ++v54;
          while ( v51 != v54 );
          if ( v53 & 1 )
            v60 = Player::getSupplies(_R4);
            PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v107, v60);
            v61 = v108;
            v62 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
            v63 = PlayerInventoryProxy::getSelectedContainerId(v62);
            v64 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
            v65 = (unsigned __int64 *)PlayerInventoryProxy::getLinkedSlots(v64);
            PlayerHotbarPacket::PlayerHotbarPacket((int)&v109, v61, v63, v65, 1);
            (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
            v109 = &off_26DA620;
            if ( ptr )
              operator delete(ptr);
      v66 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
      v67 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(v66);
      v68 = Player::getSupplies(_R4);
      PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v105, v68);
      if ( ItemInstance::operator!=((LocalPlayer *)((char *)_R4 + 5456), v67) == 1 || *((_DWORD *)_R4 + 1382) != v106 )
        ItemInstance::operator=((int)_R4 + 5456, (int)v67);
        *((_DWORD *)_R4 + 1382) = v106;
        Entity::getRuntimeID((Entity *)&v89, (int)_R4);
        v69 = (PlayerInventoryProxy *)Player::getSupplies(_R4);
        LODWORD(v70) = PlayerInventoryProxy::getLinkedSlot(v69, v106);
        HIDWORD(v70) = *((_DWORD *)_R4 + 1382);
        v91 = 2;
        v92 = 1;
        v93 = 0;
        v90 = &off_26DA648;
        v71 = v105;
        v94 = *(_QWORD *)&v89;
        ItemInstance::ItemInstance((ItemInstance *)&v95, (int)_R4 + 5456);
        v99 = v70;
        v100 = 0;
        v101 = v71;
        v102 = v70;
        v103 = BYTE4(v70);
        v104 = v71;
        (*(void (**)(void))(**((_DWORD **)_R4 + 1231) + 8))();
        if ( v98 )
          operator delete(v98);
        if ( v97 )
          operator delete(v97);
        if ( v96 )
          (*(void (**)(void))(*(_DWORD *)v96 + 4))();
      if ( ClientInstance::isShowingMenu(*((ClientInstance **)_R4 + 1329)) )
        goto LABEL_153;
      Player::getContainerManager((Player *)&v87, (int)_R4);
      v72 = v88;
      if ( !v88 )
      v73 = *(_DWORD *)(v88 + 4);
      v74 = (unsigned int *)(v88 + 4);
      do
        while ( 1 )
          if ( !v73 )
            v80 = 0;
            goto LABEL_141;
          __dmb();
          v75 = __ldrex(v74);
          if ( v75 == v73 )
            break;
          __clrex();
          v73 = v75;
        v76 = __strex(v73 + 1, v74);
        v73 = v75;
      while ( v76 );
      __dmb();
      v77 = *v74;
      v78 = v87;
      v79 = *v74;
      if ( *v74 )
        v79 = 1;
      if ( v87 )
        v78 = 1;
      v80 = v79 & v78;
      if ( &pthread_create )
        __dmb();
        do
          v77 = __ldrex(v74);
        while ( __strex(v77 - 1, v74) );
        *v74 = v77 - 1;
      if ( v77 == 1 )
        v81 = (unsigned int *)(v72 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 8))(v72);
        if ( &pthread_create )
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v72 + 12))(v72);
LABEL_141:
      v83 = v88;
        goto LABEL_160;
      v84 = (unsigned int *)(v88 + 8);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 == 1 )
        (*(void (**)(void))(*(_DWORD *)v83 + 12))();
        if ( !v80 )
          goto LABEL_153;
LABEL_160:
        if ( v80 != 1 )
LABEL_153:
          if ( !*((_BYTE *)_R4 + 5397) )
            *((_DWORD *)_R4 + 1348) = 1065353216;
          *((_BYTE *)_R4 + 5397) = 0;
          Player::updateInventoryTransactions(_R4);
          result = (int *)*((_DWORD *)_R4 + 1504);
          if ( (signed int)result >= 1 )
            result = (int *)((char *)result - 1);
            *((_DWORD *)_R4 + 1504) = result;
            if ( !result )
              result = ItemInstance::setNull((LocalPlayer *)((char *)_R4 + 5944));
          return result;
      if ( !byte_27CC29C )
        v86 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)_R4 + 1329));
        GuiData::postError(v86, 1);
        byte_27CC29C = 1;
      goto LABEL_153;
    }
  return result;
}


int __fastcall LocalPlayer::LocalPlayer(int a1, ClientInstance *this, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, void *a21, int a22, int a23, int a24, void *a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, char a43, int a44, int a45, char a46)
{
  return LocalPlayer::LocalPlayer(
           a1,
           this,
           a3,
           a4,
           a5,
           a6,
           a7,
           (InventoryMenu *)a8,
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
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46);
}


signed int __fastcall LocalPlayer::startRiding(LocalPlayer *this, Entity *a2)
{
  Entity *v2; // r5@1
  LocalPlayer *v3; // r4@1
  int v4; // r0@2
  unsigned int v5; // r0@2
  int v6; // r6@2
  void *v7; // r0@2
  char *v8; // r0@3
  int v9; // r0@4
  BlockSource *v10; // r0@4
  Level *v11; // r0@4
  ClientInstance **v12; // r4@4
  int v13; // r0@4
  int v14; // r0@5
  void *v15; // r0@6
  signed int result; // r0@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  char *v23; // [sp+4h] [bp-24h]@2
  int v24; // [sp+8h] [bp-20h]@2
  int v25; // [sp+Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( Entity::startRiding(this, a2) == 1 )
  {
    v4 = ClientInstance::getInput(*((ClientInstance **)v3 + 1329));
    ClientInputHandler::updateInputMode(v4, 5);
    LocalPlayer::_setRideInputFor(v3, v2);
    v5 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 488))(v2);
    EntityTypeToString((void **)&v25, v5, 0);
    v6 = ClientInstance::getGuiData(*((ClientInstance **)v3 + 1329));
    v23 = (char *)&unk_28898CC;
    sub_119CAF8((const void **)&v23, *(_DWORD *)(v25 - 12) + 17);
    sub_119C894((const void **)&v23, "action.hint.exit.", 0x11u);
    sub_119C8A4((const void **)&v23, (const void **)&v25);
    I18n::get(&v24, (int **)&v23);
    GuiData::showTipMessage(v6, &v24);
    v7 = (void *)(v24 - 12);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    v8 = v23 - 12;
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2);
    *((_DWORD *)v3 + 1392) = *(_DWORD *)v9;
    *((_DWORD *)v3 + 1393) = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v3 + 1394) = *(_DWORD *)(v9 + 8);
    *((_DWORD *)v3 + 1395) = 0;
    v10 = (BlockSource *)Entity::getRegion(v3);
    v11 = (Level *)BlockSource::getLevel(v10);
    *((_QWORD *)v3 + 698) = *(_QWORD *)Level::getCurrentTick(v11);
    Abilities::setAbility((int)v3 + 4320, (int **)&Abilities::FLYING, 0);
    v12 = (ClientInstance **)((char *)v3 + 5316);
    v13 = ClientInstance::getHoloInput(*v12);
    if ( (*(int (**)(void))(*(_DWORD *)v13 + 76))() == 1 )
      v14 = ClientInstance::getHoloInput(*v12);
      (*(void (**)(void))(*(_DWORD *)v14 + 132))();
      *(_DWORD *)(ClientInstance::getHoloInput(*v12) + 652) = 2;
      *(_DWORD *)(ClientInstance::getGameRenderer(*v12) + 788) = 0;
      *(_BYTE *)(ClientInstance::getGameRenderer(*v12) + 814) = 1;
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v25 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall LocalPlayer::stopPaddling(int a1, int a2)
{
  int result; // r0@1

  result = a1 + a2;
  *(_BYTE *)(result + 5360) = 0;
  return result;
}


int __fastcall LocalPlayer::LocalPlayer(int a1, ClientInstance *this, int a3, int a4, int a5, int a6, int a7, InventoryMenu *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, void *a21, int a22, int a23, int a24, void *a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, char a43, int a44, int a45, char a46)
{
  ClientInstance *v46; // r8@1
  int v47; // r11@1
  Level *v48; // r10@1
  int v49; // r7@1
  ClientSkinInfoData *v50; // r5@1
  int v51; // r5@1
  PlayerInventoryProxy *v52; // r0@3
  Container *v53; // r0@3
  PlayerInventoryProxy *v54; // r0@3
  unsigned int v55; // r7@3
  char **v56; // r4@3
  int *v57; // r9@3
  int *v58; // r10@3
  int v59; // r6@3
  char *v60; // r0@5
  Automation::AutomationClient *v61; // r5@7
  PlayerAutomationObserver *v62; // r6@7
  __int64 v63; // kr00_8@7
  __int64 v64; // r1@7
  ClientInstance **v65; // r10@7
  Level *v66; // r5@7
  char *v67; // r0@7
  Options *v68; // r0@9
  int v69; // r0@9
  ClientInstance *v70; // r5@9
  char *v71; // r0@9
  int v72; // r0@9
  int v73; // r7@33
  __int64 v74; // r0@33
  int v75; // r4@34
  unsigned int v76; // r5@34
  const PackInstance *v77; // r6@35
  MinecraftEventing *v78; // r0@36
  void *v79; // r0@38
  void *v80; // r0@39
  void *v81; // r0@40
  void *v82; // r0@41
  void *v83; // r0@42
  void *v84; // r0@43
  unsigned int *v86; // r2@45
  signed int v87; // r1@47
  unsigned int *v88; // r2@49
  signed int v89; // r1@51
  unsigned int *v90; // r2@53
  signed int v91; // r1@55
  unsigned int *v92; // r2@57
  signed int v93; // r1@59
  unsigned int *v94; // r2@61
  signed int v95; // r1@63
  unsigned int *v96; // r2@65
  signed int v97; // r1@67
  ResourcePacksInfoData *v98; // [sp+0h] [bp-F0h]@1
  int v99; // [sp+Ch] [bp-E4h]@0
  _DWORD *v100; // [sp+38h] [bp-B8h]@1
  Level *v101; // [sp+3Ch] [bp-B4h]@3
  char v102; // [sp+40h] [bp-B0h]@9
  int v103; // [sp+48h] [bp-A8h]@13
  void *v104; // [sp+64h] [bp-8Ch]@11
  void *ptr; // [sp+74h] [bp-7Ch]@9
  int v106; // [sp+A4h] [bp-4Ch]@9
  int v107; // [sp+A8h] [bp-48h]@9
  int v108; // [sp+ACh] [bp-44h]@9
  int v109; // [sp+B0h] [bp-40h]@9
  int v110; // [sp+B4h] [bp-3Ch]@9
  int v111; // [sp+B8h] [bp-38h]@9
  int v112; // [sp+BCh] [bp-34h]@1
  ClientSkinInfoData *v113; // [sp+C0h] [bp-30h]@1

  v46 = this;
  v47 = a1;
  v100 = (_DWORD *)a4;
  v48 = (Level *)a3;
  v49 = ClientInstance::getPacketSender(this);
  v50 = (ClientSkinInfoData *)operator new(0x24u);
  ClientSkinInfoData::ClientSkinInfoData(v50);
  v113 = v50;
  v51 = *(_DWORD *)a13;
  *(_DWORD *)a13 = 0;
  v112 = v51;
  Player::Player(v47, v48, v49, a5, a6, a7, (int *)&v113, v99, __PAIR__(a10, a9), __PAIR__(a12, a11), &v112);
  std::unique_ptr<Certificate,std::default_delete<Certificate>>::~unique_ptr((int)&v112);
  if ( v113 )
    (*(void (**)(void))(*(_DWORD *)v113 + 4))();
  v113 = 0;
  *(_DWORD *)v47 = &off_26D9FA0;
  v52 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v47);
  v53 = (Container *)PlayerInventoryProxy::_getInventoryContainer(v52);
  InventoryMenu::InventoryMenu((InventoryMenu *)(v47 + 5276), (Player *)v47, v53);
  *(_DWORD *)(v47 + 5308) = 0;
  *(_DWORD *)(v47 + 5312) = 0;
  *(_DWORD *)(v47 + 5316) = v46;
  *(_DWORD *)(v47 + 5320) = 2;
  *(_DWORD *)(v47 + 5388) = 0;
  *(_DWORD *)(v47 + 5384) = 0;
  *(_DWORD *)(v47 + 5380) = 0;
  *(_DWORD *)(v47 + 5376) = 0;
  *(_DWORD *)(v47 + 5372) = 0;
  *(_DWORD *)(v47 + 5368) = 0;
  *(_DWORD *)(v47 + 5364) = 0;
  *(_DWORD *)(v47 + 5392) = 1065353216;
  *(_WORD *)(v47 + 5396) = 0;
  *(_BYTE *)(v47 + 5398) = 0;
  _aeabi_memclr4(v47 + 5400, 44);
  *(_BYTE *)(v47 + 5444) = 1;
  *(_DWORD *)(v47 + 5448) = 0;
  *(_DWORD *)(v47 + 5452) = 0;
  ItemInstance::ItemInstance(v47 + 5456);
  v101 = v48;
  *(_DWORD *)(v47 + 5548) = 0;
  *(_DWORD *)(v47 + 5544) = 0;
  *(_DWORD *)(v47 + 5552) = 0;
  *(_WORD *)(v47 + 5536) = 0;
  *(_DWORD *)(v47 + 5532) = 0;
  *(_DWORD *)(v47 + 5528) = 0;
  v54 = (PlayerInventoryProxy *)Player::getSupplies((Player *)v47);
  v55 = PlayerInventoryProxy::getLinkedSlotsCount(v54);
  v56 = (char **)(v47 + 5556);
  v57 = (int *)(v47 + 5564);
  v58 = (int *)(v47 + 5560);
  v59 = 0;
  *(_DWORD *)(v47 + 5556) = 0;
  *(_DWORD *)(v47 + 5560) = 0;
  *(_DWORD *)(v47 + 5564) = 0;
  if ( v55 )
  {
    if ( v55 >= 0x40000000 )
      sub_119C874();
    v60 = (char *)operator new(4 * v55);
    *v56 = v60;
    v59 = (int)&v60[4 * v55];
    *v58 = (int)v60;
    *v57 = v59;
    _aeabi_memset4(v60, 4 * v55, 255);
  }
  else
    *v56 = 0;
    *v58 = 0;
    *v57 = 0;
  *v58 = v59;
  *(_DWORD *)(v47 + 5568) = 0;
  *(_DWORD *)(v47 + 5572) = 0;
  *(_DWORD *)(v47 + 5576) = 0;
  _aeabi_memclr4(v47 + 5592, 36);
  sub_119C884((void **)(v47 + 5628), (const char *)&unk_257BC67);
  *(_DWORD *)(v47 + 5632) = 6;
  *(_DWORD *)(v47 + 5636) = 3;
  *(_WORD *)(v47 + 5640) = 257;
  *(_BYTE *)(v47 + 5642) = 1;
  *(_WORD *)(v47 + 5644) = 0;
  *(_BYTE *)(v47 + 5646) = 0;
  ItemInstance::ItemInstance(v47 + 5648);
  ItemInstance::ItemInstance(v47 + 5720);
  ItemInstance::ItemInstance(v47 + 5792);
  ItemInstance::ItemInstance(v47 + 5864);
  *(_DWORD *)(v47 + 5936) = 0;
  *(_BYTE *)(v47 + 5940) = 0;
  ItemInstance::ItemInstance(v47 + 5944);
  v61 = (Automation::AutomationClient *)ClientInstance::getAutomationClient(v46);
  v62 = (PlayerAutomationObserver *)operator new(0xCu);
  PlayerAutomationObserver::PlayerAutomationObserver(v62, (LocalPlayer *)v47, v61);
  *(_DWORD *)(v47 + 6028) = v62;
  *(_DWORD *)(v47 + 6032) = 0;
  *(_DWORD *)(v47 + 6036) = 0;
  v63 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v47 + 6048) = dword_2822498;
  *(_QWORD *)(v47 + 6040) = v63;
  v64 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(v47 + 6060) = dword_2822498;
  *(_QWORD *)(v47 + 6052) = __PAIR__(HIDWORD(v64), (unsigned int)v64);
  MinecraftEventing::fireEventGameTypeChanged((MinecraftEventing *)v47, (Player *)v64);
  v65 = (ClientInstance **)(v47 + 5316);
  v66 = (Level *)ClientInstance::getResourcePackManager(*(ClientInstance **)(v47 + 5316));
  v67 = ClientInstance::getResourcePacksInfoData(*(ClientInstance **)(v47 + 5316));
  MinecraftEventing::fireEventWorldLoaded((MinecraftEventing *)v47, v101, v66, (ResourcePackManager *)v67, v98);
  if ( *(_DWORD *)(*v100 - 12) )
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v47 + 1228))(v47, v100);
  v68 = (Options *)ClientInstance::getOptions(*v65);
  v69 = Options::getViewDistanceChunks(v68);
  LocalPlayer::requestChunkRadius((LocalPlayer *)v47, v69);
  sub_119C884((void **)&v106, "Legacy");
  sub_119C884((void **)&v107, "Overworld");
  sub_119C884((void **)&v108, "Flat");
  sub_119C884((void **)&v109, "Nether");
  sub_119C884((void **)&v110, "TheEnd");
  sub_119C884((void **)&v111, "Undefined");
  v70 = *v65;
  v71 = Level::getLevelData(v101);
  v72 = LevelData::getGenerator((LevelData *)v71);
  MinecraftEventing::fireEventGameSessionStart(v47, v70, v101, (const char **)&v106 + v72);
  ItemInstance::ItemInstance((int)&v102);
  ItemInstance::operator=(v47 + 5648, (int)&v102);
  if ( ptr )
    operator delete(ptr);
  if ( v104 )
    operator delete(v104);
  if ( v103 )
    (*(void (**)(void))(*(_DWORD *)v103 + 4))();
  v103 = 0;
  ItemInstance::operator=(v47 + 5720, (int)&v102);
  ItemInstance::operator=(v47 + 5792, (int)&v102);
  ItemInstance::operator=(v47 + 5864, (int)&v102);
  *(_DWORD *)(v47 + 6020) = 0;
  *(_DWORD *)(v47 + 6024) = 0;
  *(_DWORD *)(v47 + 6016) = 0;
  v73 = *(_DWORD *)(ClientInstance::getResourcePackManager(*v65) + 64);
  v74 = *(_QWORD *)(v73 + 4);
  if ( HIDWORD(v74) != (_DWORD)v74 )
    v75 = 0;
    v76 = 0;
    do
    {
      v77 = (const PackInstance *)(v74 + v75);
      if ( !PackInstance::isType(v74 + v75, 2) )
      {
        v78 = (MinecraftEventing *)(*(int (__fastcall **)(int))(*(_DWORD *)v47 + 1440))(v47);
        MinecraftEventing::fireEventPackPlayed(v78, v77, v76, 0);
      }
      v74 = *(_QWORD *)(v73 + 4);
      v75 += 120;
      ++v76;
    }
    while ( v76 < -286331153 * ((HIDWORD(v74) - (signed int)v74) >> 3) );
  *(_WORD *)(v47 + 5360) = 0;
  *(_DWORD *)(v47 + 5356) = 0;
  *(_DWORD *)(v47 + 5352) = 0;
  v79 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v111 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
    else
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  v80 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v110 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  v81 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v109 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  v82 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v108 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  v83 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v107 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v83);
  v84 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v106 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v84);
  return v47;
}


int __fastcall LocalPlayer::travel(LocalPlayer *this, float a2, float a3)
{
  ClientInstance **v6; // r7@1
  int v7; // r0@3
  int v13; // r0@8
  int v14; // r0@10
  int v15; // r0@12
  int result; // r0@12
  int v21; // [sp+0h] [bp-58h]@8
  char v23; // [sp+Ch] [bp-4Ch]@8

  _R4 = this;
  _R5 = a3;
  _R6 = a2;
  v6 = (ClientInstance **)((char *)this + 5316);
  if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)this + 1329)) == 1
    && !Abilities::isFlying((LocalPlayer *)((char *)_R4 + 4320)) )
  {
    v7 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)_R4 + 208))(_R4);
    _ZF = v7 == 1;
    if ( v7 == 1 )
      _ZF = *((_BYTE *)_R4 + 218) == 0;
    if ( _ZF )
    {
      __asm
      {
        VLDR            S0, [R4,#0x70]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        (*(void (__fastcall **)(char *, LocalPlayer *))(*(_DWORD *)_R4 + 508))(&v23, _R4);
        AABB::getBounds((AABB *)&v21, (int)&v23);
        __asm
        {
          VLDR            S0, =0.55
          VLDR            S2, [SP,#0x58+var_54]
          VMUL.F32        S0, S2, S0
          VLDR            S2, [R4,#0x70]
          VADD.F32        S0, S2, S0
          VMOV            R2, S0
        }
        AABB::move((AABB *)&v23, 0.0, _R2, 0.0);
        v13 = Entity::getLevel(_R4);
        if ( !Level::checkMaterial(v13, COERCE_FLOAT(&v23), 5, _R4) )
          *((_DWORD *)_R4 + 28) = 0;
    }
  }
  __asm
    VMOV            S16, R5
    VMOV            S18, R6
  v14 = ClientInstance::getHoloInput(*v6);
  if ( (*(int (**)(void))(*(_DWORD *)v14 + 76))() != 1 || Abilities::isFlying((LocalPlayer *)((char *)_R4 + 4320)) != 1 )
    result = Player::travel(_R4, _R6, _R5);
  else
    v15 = Abilities::getFloat((int)_R4 + 4320, (int **)&Abilities::FLYSPEED);
    __asm { VMOV.F32        S0, #10.0 }
    _R6 = v15;
    __asm
      VMOV            S2, R6
      VMUL.F32        S0, S2, S0
      VMOV            R2, S0
    Abilities::setAbility((int)_R4 + 4320, (int **)&Abilities::FLYSPEED, _R2);
      VMOV.F32        S0, #5.0
      VMUL.F32        S2, S18, S0
      VMUL.F32        S0, S16, S0
      VMOV            R1, S2
    Player::travel(_R4, _R1, _R2);
    result = Abilities::setAbility((int)_R4 + 4320, (int **)&Abilities::FLYSPEED, _R6);
  return result;
}


void __fastcall LocalPlayer::openCommandBlockMinecart(int a1, unsigned __int64 *a2)
{
  LocalPlayer::openCommandBlockMinecart(a1, a2);
}


void __fastcall LocalPlayer::openPortfolio(LocalPlayer *this)
{
  LocalPlayer::openPortfolio(this);
}


int __fastcall LocalPlayer::resetRot(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1

  v1 = this;
  Player::resetRot(this);
  *((_DWORD *)v1 + 1345) = 0;
  *((_QWORD *)v1 + 673) = *(_QWORD *)&Vec2::ZERO;
  *((_DWORD *)v1 + 1347) = 1127481344;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 1329));
  (*(void (**)(void))(*(_DWORD *)v2 + 132))();
  *(_DWORD *)(ClientInstance::getHoloInput(*((ClientInstance **)v1 + 1329)) + 652) = 2;
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 1329)) + 788) = 0;
  result = ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 1329));
  *(_BYTE *)(result + 814) = 1;
  return result;
}


int __fastcall LocalPlayer::pickBlockCreative(LocalPlayer *this, const HitResult *a2, bool a3)
{
  bool v3; // r5@1
  const HitResult *v4; // r6@1
  LocalPlayer *v5; // r7@1
  int v6; // r0@1
  int result; // r0@1
  BlockSource *v8; // r8@3
  int v9; // r4@5
  int *v10; // r0@5
  Material *v11; // r0@6
  GuiData *v12; // r0@7
  char v13; // r0@7
  Level *v14; // r0@7
  int v15; // r0@7
  __int64 v16; // r4@8
  GuiData *v17; // r0@8
  Level *v18; // r0@8
  int v19; // r0@8
  int v20; // r3@8
  void **v21; // [sp+0h] [bp-68h]@8
  signed int v22; // [sp+4h] [bp-64h]@8
  signed int v23; // [sp+8h] [bp-60h]@8
  char v24; // [sp+Ch] [bp-5Ch]@8
  __int64 v25; // [sp+10h] [bp-58h]@8
  char v26; // [sp+18h] [bp-50h]@8
  void **v27; // [sp+24h] [bp-44h]@7
  signed int v28; // [sp+28h] [bp-40h]@7
  signed int v29; // [sp+2Ch] [bp-3Ch]@7
  char v30; // [sp+30h] [bp-38h]@7
  int v31; // [sp+34h] [bp-34h]@7
  int v32; // [sp+38h] [bp-30h]@7
  int v33; // [sp+3Ch] [bp-2Ch]@7
  bool v34; // [sp+40h] [bp-28h]@7
  char v35; // [sp+41h] [bp-27h]@7
  unsigned __int8 v36; // [sp+44h] [bp-24h]@5
  unsigned __int8 v37; // [sp+48h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = Player::getSupplies(this);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v37, v6);
  result = v37;
  if ( v37 != 123 )
  {
    result = *(_DWORD *)v4 & 0xFFFFFFFE;
    if ( result != 2 )
    {
      v8 = (BlockSource *)Entity::getRegion(v5);
      result = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 == 1 )
      {
        v16 = *(_QWORD *)Entity::getUniqueID(*((Entity **)v4 + 8));
        v17 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v5 + 1329));
        v22 = 2;
        v23 = 1;
        v24 = 0;
        v21 = &off_26DA7D8;
        v25 = v16;
        v26 = GuiData::getNumSlots(v17);
        v18 = (Level *)BlockSource::getLevel(v8);
        v19 = Level::getPacketSender(v18);
        result = (*(int (__cdecl **)(int, void ***, _DWORD, int, void **, signed int, signed int))(*(_DWORD *)v19 + 8))(
                   v19,
                   &v21,
                   *(_DWORD *)(*(_DWORD *)v19 + 8),
                   v20,
                   &off_26DA7D8,
                   2,
                   1);
      }
      else if ( !result )
        BlockSource::getBlockAndData((BlockSource *)&v36, v8, (int)v4 + 8);
        v9 = v36;
        v10 = (int *)Block::getMaterial((Block *)Block::mBlocks[v36]);
        result = Material::isType(v10, 0);
        if ( !result )
        {
          v11 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v9]);
          result = Material::isLiquid(v11);
          if ( !result )
          {
            v12 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v5 + 1329));
            v13 = GuiData::getNumSlots(v12);
            v28 = 2;
            v29 = 1;
            v30 = 0;
            v27 = &off_26DA7B0;
            v31 = *((_DWORD *)v4 + 2);
            v32 = *((_DWORD *)v4 + 3);
            v33 = *((_DWORD *)v4 + 4);
            v34 = v3;
            v35 = v13;
            v14 = (Level *)BlockSource::getLevel(v8);
            v15 = Level::getPacketSender(v14);
            result = (*(int (**)(void))(*(_DWORD *)v15 + 8))();
          }
        }
    }
  }
  return result;
}


int __fastcall LocalPlayer::setOPortalEffectTime(int result, float a2)
{
  *(float *)(result + 5312) = a2;
  return result;
}


void __fastcall LocalPlayer::startCrafting(LocalPlayer *this, const BlockPos *a2, bool a3)
{
  LocalPlayer::startCrafting(this, a2, a3);
}


int __fastcall LocalPlayer::_hurt(LocalPlayer *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 1073) )
    result = 0;
  else
    result = Player::_hurt(this, a2, a3, a4, a5);
  return result;
}


signed int __fastcall LocalPlayer::startSleepInBed(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  signed int v3; // r4@1
  int v4; // r0@2
  int v5; // r6@2
  Player *v6; // r0@2
  int v7; // r6@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r7@9
  unsigned int v11; // r0@11
  Level *v12; // r0@16
  GameRenderer *v13; // r0@18
  int v15; // [sp+0h] [bp-58h]@17
  void **v16; // [sp+8h] [bp-50h]@17
  int v17; // [sp+Ch] [bp-4Ch]@17
  int v18; // [sp+10h] [bp-48h]@17
  char v19; // [sp+14h] [bp-44h]@17
  int v20; // [sp+18h] [bp-40h]@17
  int v21; // [sp+1Ch] [bp-3Ch]@17
  int v22; // [sp+20h] [bp-38h]@17
  int v23; // [sp+24h] [bp-34h]@17
  int v24; // [sp+28h] [bp-30h]@17
  __int64 v25; // [sp+30h] [bp-28h]@17
  char v26; // [sp+3Ch] [bp-1Ch]@2
  int v27; // [sp+40h] [bp-18h]@2

  v2 = this;
  v3 = Player::startSleepInBed(this, a2);
  if ( !v3 )
  {
    v4 = ClientInstance::getInput(*((ClientInstance **)v2 + 1329));
    ClientInputHandler::updateInputMode(v4, 3);
    v5 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v6 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createInBedScreen((SceneFactory *)&v26, v6, (int)v2);
    SceneStack::pushScreen(v5, (int)&v26, 0);
    v7 = v27;
    if ( v27 )
    {
      v8 = (unsigned int *)(v27 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
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
    }
  }
  v12 = (Level *)Entity::getLevel(v2);
  if ( Level::isClientSide(v12) == 1 )
    Entity::getRuntimeID((Entity *)&v15, (int)v2);
    v17 = 2;
    v18 = 1;
    v19 = 0;
    v16 = &off_26DA670;
    v22 = 0;
    v23 = 0;
    v20 = 0;
    v21 = 0;
    v24 = 5;
    v25 = *(_QWORD *)&v15;
    (*(void (**)(void))(**((_DWORD **)v2 + 1231) + 8))();
  v13 = (GameRenderer *)ClientInstance::getGameRenderer(*((ClientInstance **)v2 + 1329));
  GameRenderer::captureHeadsetDirForSleeping(v13);
  return v3;
}


void __fastcall LocalPlayer::openFurnace(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openFurnace(this, a2);
}


int __fastcall LocalPlayer::setSneaking(LocalPlayer *this, int a2)
{
  LocalPlayer *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  MoveInputHandler *v5; // r0@3
  Level *v6; // r0@4
  signed int v7; // r0@5
  int v8; // [sp+0h] [bp-48h]@5
  void **v9; // [sp+8h] [bp-40h]@5
  int v10; // [sp+Ch] [bp-3Ch]@5
  int v11; // [sp+10h] [bp-38h]@5
  char v12; // [sp+14h] [bp-34h]@5
  int v13; // [sp+18h] [bp-30h]@5
  int v14; // [sp+1Ch] [bp-2Ch]@5
  int v15; // [sp+20h] [bp-28h]@5
  int v16; // [sp+24h] [bp-24h]@5
  int v17; // [sp+28h] [bp-20h]@7
  __int64 v18; // [sp+30h] [bp-18h]@7

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 312))() ^ a2;
  if ( result == 1 )
  {
    Mob::setSneaking(v2, v3);
    if ( !v3 )
    {
      v5 = (MoveInputHandler *)ClientInstance::getMoveTurnInput(*((ClientInstance **)v2 + 1329));
      MoveInputHandler::setSneakDown(v5, 0);
    }
    v6 = (Level *)Entity::getLevel(v2);
    result = Level::isClientSide(v6);
    if ( result == 1 )
      Entity::getRuntimeID((Entity *)&v8, (int)v2);
      v10 = 2;
      v11 = 1;
      v12 = 0;
      v9 = &off_26DA670;
      v7 = 12;
      v15 = 0;
      v16 = 0;
      v13 = 0;
      v14 = 0;
      if ( v3 )
        v7 = 11;
      v17 = v7;
      v18 = *(_QWORD *)&v8;
      result = (*(int (**)(void))(**((_DWORD **)v2 + 1231) + 8))();
  }
  return result;
}


void __fastcall LocalPlayer::openSign(LocalPlayer *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  LocalPlayer *v3; // r5@1
  BlockSource *v4; // r0@1
  BlockEntity *v5; // r0@1
  int v6; // r6@3
  const BlockPos *v7; // r0@3
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r5@10
  unsigned int v12; // r0@12
  char v13; // [sp+4h] [bp-1Ch]@3
  int v14; // [sp+8h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  v4 = (BlockSource *)Entity::getRegion(this);
  v5 = (BlockEntity *)BlockSource::getBlockEntity(v4, v2);
  if ( v5 )
  {
    if ( *(_DWORD *)BlockEntity::getType(v5) == 4 )
    {
      v6 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 1329));
      v7 = (const BlockPos *)ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1329));
      SceneFactory::createSignScreen((SceneFactory *)&v13, v7, (int)v2);
      SceneStack::pushScreen(v6, (int)&v13, 0);
      v8 = v14;
      if ( v14 )
      {
        v9 = (unsigned int *)(v14 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
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
      }
    }
  }
}


void __fastcall LocalPlayer::setPlayerGameType(Entity *this, int a2)
{
  LocalPlayer::setPlayerGameType(this, a2);
}


void __fastcall LocalPlayer::openBook(LocalPlayer *this, int a2, bool a3)
{
  LocalPlayer::openBook(this, a2, a3);
}


char *__fastcall LocalPlayer::_computeBowOverride(LocalPlayer *this, Vec3 *a2)
{
  Vec3 *v3; // r4@1
  Level *v4; // r0@1
  char *result; // r0@1

  _R5 = this;
  v3 = a2;
  v4 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 1329));
  result = Level::getHitResult(v4);
  __asm
  {
    VLDR            S0, [R0,#0x14]
    VLDR            S6, [R5,#0x48]
    VLDR            S2, [R0,#0x18]
    VLDR            S8, [R5,#0x4C]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R0,#0x1C]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [R5,#0x50]
    VSUB.F32        S4, S4, S10
    VMUL.F32        S6, S0, S0
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VLDR            S8, =1.1921e-7
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 0;
    *(_QWORD *)v3 = 4575657221408423936LL;
    *((_DWORD *)v3 + 2) = 0;
  else
    __asm
    {
      VLDR            S8, =0.0001
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = (char *)&Vec3::ZERO;
      __asm
      {
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
      }
    else
        VDIV.F32        S4, S4, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S0, S0, S6
      VNEG.F32        S0, S0
      VNEG.F32        S2, S2
      VNEG.F32        S4, S4
      VSTR            S0, [R4]
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
  return result;
}


void __fastcall LocalPlayer::openNpcInteractScreen(LocalPlayer *this, Entity *a2)
{
  LocalPlayer::openNpcInteractScreen(this, a2);
}


void __fastcall LocalPlayer::~LocalPlayer(LocalPlayer *this)
{
  LocalPlayer *v1; // r0@1

  v1 = LocalPlayer::~LocalPlayer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


unsigned __int64 *__fastcall LocalPlayer::move(LocalPlayer *this, const Vec3 *a2)
{
  LocalPlayer *v2; // r4@1
  signed int v3; // r0@1
  const Vec3 *v4; // r5@1
  int v5; // r0@2
  float v6; // r3@3
  float v8; // [sp+0h] [bp-18h]@0

  v2 = this;
  v3 = *((_DWORD *)this + 1360);
  v4 = a2;
  if ( v3 >= 1 )
  {
    *((_DWORD *)v2 + 1360) = v3 - 1;
    v5 = ClientInstance::getMoveTurnInput(*((ClientInstance **)v2 + 1329));
    (*(void (**)(void))(*(_DWORD *)v5 + 32))();
  }
  *((_DWORD *)v2 + 1513) = *((_DWORD *)v2 + 18);
  *((_DWORD *)v2 + 1514) = *((_DWORD *)v2 + 19);
  *((_DWORD *)v2 + 1515) = *((_DWORD *)v2 + 20);
  *((_DWORD *)v2 + 1510) = *(_DWORD *)v4;
  *((_DWORD *)v2 + 1511) = *((_DWORD *)v4 + 1);
  *((_DWORD *)v2 + 1512) = *((_DWORD *)v4 + 2);
  *((_BYTE *)v2 + 217) = *((_BYTE *)v2 + 216);
  Entity::move(v2, v4);
  if ( !*((_BYTE *)v2 + 217) && *((_BYTE *)v2 + 216) )
    LocalPlayer::sendPosition(v2);
  return LocalPlayer::_updateAutoJump(v2, *(float *)v4, *((float *)v4 + 2), v6, v8);
}


int __fastcall LocalPlayer::initializeComponents(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  void *v4; // r1@2

  v2 = a1;
  Player::initializeComponents(a1, a2);
  result = *(_BYTE *)(v2 + 3081);
  if ( !*(_BYTE *)(v2 + 3081) )
  {
    *(_DWORD *)(v2 + 5440) = 0;
    *(_WORD *)(v2 + 5336) = 0;
    *(_DWORD *)(v2 + 5332) = 0;
    *(_DWORD *)(v2 + 5328) = 0;
    *(_DWORD *)(v2 + 5324) = 0;
    v4 = Player::getSelectedItem((Player *)v2);
    result = j_j_j__ZN12ItemInstanceaSERKS__1(v2 + 5456, (int)v4);
  }
  return result;
}


int __fastcall LocalPlayer::canStartSleepInBed(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Player::canStartSleepInBed(this) == 1 )
    result = ClientInstance::isInGame(*((ClientInstance **)v1 + 1329));
  else
    result = 0;
  return result;
}


int __fastcall LocalPlayer::localPlayerRenderFrequencyMove(LocalPlayer *this, float a2)
{
  LocalPlayer *v2; // r4@1
  float v3; // r5@1
  int v4; // r0@1
  int result; // r0@1
  Options *v6; // r0@2
  int v7; // [sp+4h] [bp-1Ch]@3
  int v8; // [sp+8h] [bp-18h]@3
  int v9; // [sp+Ch] [bp-14h]@3

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*((ClientInstance **)this + 1329));
  result = (*(int (**)(void))(*(_DWORD *)v4 + 84))();
  if ( result == 1 )
  {
    v6 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 1329));
    result = Options::getHMDPositionDisplacement(v6);
    if ( result == 1 )
    {
      v7 = 0;
      v8 = 0;
      v9 = 0;
      LocalPlayer::_modifyDeltaByHMDPosition(v2, (Vec3 *)&v7, v3);
      result = (*(int (__fastcall **)(LocalPlayer *, int *))(*(_DWORD *)v2 + 76))(v2, &v7);
    }
  }
  return result;
}


void __fastcall LocalPlayer::openTrading(int a1, __int64 *a2)
{
  LocalPlayer::openTrading(a1, a2);
}


void __fastcall LocalPlayer::openEnchanter(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openEnchanter(this, a2);
}


void __fastcall LocalPlayer::openDispenser(LocalPlayer *this, const BlockPos *a2, int a3)
{
  LocalPlayer *v3; // r5@1
  const BlockPos *v4; // r4@1
  int v5; // r7@1
  int v6; // r8@2
  Player *v7; // r1@2
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r1@9
  unsigned int v12; // r0@11
  unsigned int *v13; // r5@15
  unsigned int v14; // r0@17
  int v15; // [sp+0h] [bp-28h]@8
  int v16; // [sp+4h] [bp-24h]@8
  char v17; // [sp+8h] [bp-20h]@3
  int v18; // [sp+Ch] [bp-1Ch]@3

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v6 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 1329));
    v7 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1329));
    if ( v5 == 1 )
    {
      SceneFactory::createDispenserScreen((SceneFactory *)&v17, v7, v3, v4);
      SceneStack::pushScreen(v6, (int)&v17, 0);
      v8 = v18;
      if ( v18 )
      {
        v9 = (unsigned int *)(v18 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          v13 = (unsigned int *)(v8 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            goto LABEL_26;
          }
LABEL_25:
          v14 = (*v13)--;
LABEL_26:
          if ( v14 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
          return;
      }
    }
    else
      SceneFactory::createDropperScreen((SceneFactory *)&v15, v7, v3, v4);
      SceneStack::pushScreen(v6, (int)&v15, 0);
      v8 = v16;
      if ( v16 )
        v11 = (unsigned int *)(v16 + 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          goto LABEL_25;
  }
}


void __fastcall LocalPlayer::openFurnace(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createFurnaceScreen((SceneFactory *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::openDispenser(LocalPlayer *this, const BlockPos *a2, int a3)
{
  LocalPlayer::openDispenser(this, a2, a3);
}


int __fastcall LocalPlayer::checkMovementStats(LocalPlayer *this, const Vec3 *a2)
{
  LocalPlayer *v3; // r5@1
  MinecraftEventing *v10; // r0@2
  Level *v11; // r0@3
  Player *v12; // r1@3

  _R4 = a2;
  v3 = this;
  __asm { VLDR            S0, [R4] }
  _R6 = (float *)((char *)this + 4736);
  __asm
  {
    VLDR            S2, [R4,#4]
    VMUL.F32        S0, S0, S0
    VLDR            S4, [R4,#8]
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
  }
  _R0 = &Player::DISTANCE_TO_TRAVELLED_EVENT;
    VADD.F32        S0, S2, S0
    VLDR            S2, [R0]
    VADD.F32        S0, S0, S4
    VSQRT.F32       S16, S0
    VLDR            S0, [R6]
    VADD.F32        S0, S16, S0
    VCMPE.F32       S0, S2
    VSTR            S0, [R6]
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v10 = (MinecraftEventing *)ClientInstance::getEventing(*((ClientInstance **)v3 + 1329));
    MinecraftEventing::fireEventPlayerTravelled(v10, v3, *_R6);
    *(_DWORD *)_R6 = 0;
  v11 = (Level *)Entity::getLevel(v3);
  if ( !Level::isClientSide(v11) )
    _R6 = (LocalPlayer *)((char *)v3 + 4740);
    __asm
    {
      VLDR            S0, [R6]
      VADD.F32        S0, S0, S16
    }
    _R0 = &Player::DISTANCE_TO_TRANSFORM_EVENT;
      VLDR            S2, [R0]
      VCMPE.F32       S0, S2
      VSTR            S0, [R6]
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      MinecraftEventing::fireEventPlayerTransform(v3, v12);
      *(_DWORD *)_R6 = 0;
  return j_j_j__ZN6Player18checkMovementStatsERK4Vec3(v3, _R4);
}


void __fastcall LocalPlayer::openBrewingStand(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openBrewingStand(this, a2);
}


LocalPlayer *__fastcall LocalPlayer::_calculateFlight(LocalPlayer *this, float a2, float a3, float a4)
{
  LocalPlayer *v4; // r4@1
  int v8; // r0@1
  ClientInstance **v13; // r6@2
  int v14; // r5@2
  int v15; // r0@2
  int v20; // r0@10
  int v25; // r0@16
  LocalPlayer *result; // r0@23

  v4 = this;
  _R6 = a4;
  _R5 = a3;
  _R7 = a2;
  v8 = ClientInstance::getHoloInput(*((ClientInstance **)this + 1329));
  (*(void (**)(void))(*(_DWORD *)v8 + 76))();
  __asm
  {
    VMOV            S16, R6
    VMOV            S18, R7
  }
  if ( !_ZF )
    v13 = (ClientInstance **)((char *)v4 + 5316);
    v14 = ClientInstance::getCurrentInputMode(*((ClientInstance **)v4 + 1329));
    v15 = ClientInstance::getOptions(*((ClientInstance **)v4 + 1329));
    _R0 = Options::getGameSensitivity(v15, v14);
    __asm { VMOV            S4, R0 }
    _R1 = (int)v4 + 5400;
    _R0 = (int)v4 + 5404;
    __asm
    {
      VMOV.F32        S20, #0.5
      VLDR            S0, [R1]
      VADD.F32        S2, S0, S18
      VLDR            S18, =0.35
      VMUL.F32        S4, S4, S18
      VSTR            S2, [R1]
    }
    _R1 = (int)v4 + 5408;
      VLDR            S0, [R0]
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S4, S2
      VLDR            S4, [R1]
      VSUB.F32        S6, S2, S4
      VCMPE.F32       S2, #0.0
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S6, S6, S20
      VADD.F32        S4, S6, S4
      VSTR            S4, [R1]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
LABEL_10:
        __asm
        {
          VMOV.F32        S22, #10.0
          VADD.F32        S0, S2, S0
          VMUL.F32        S2, S2, S22
          VSTR            S0, [R0]
          VSTR            S2, [R0]
        }
        v20 = ClientInstance::getOptions(*v13);
        _R0 = Options::getGameSensitivity(v20, v14);
        _R1 = (int)v4 + 5416;
        _R2 = (int)v4 + 5412;
          VMOV            S4, R0
          VLDR            S0, [R1]
        _R0 = (int)v4 + 5420;
          VLDR            S2, [R2]
          VMUL.F32        S4, S4, S18
          VSUB.F32        S2, S2, S0
          VMUL.F32        S2, S4, S2
          VLDR            S4, [R0]
          VSUB.F32        S6, S2, S4
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
          VMUL.F32        S6, S6, S20
          VADD.F32        S4, S6, S4
          VSTR            S4, [R0]
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
          {
            VCMPE.F32       S2, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
LABEL_16:
            __asm
            {
              VADD.F32        S0, S2, S0
              VMUL.F32        S2, S2, S22
              VSTR            S0, [R1]
              VSTR            S2, [R0]
            }
            v25 = ClientInstance::getOptions(*v13);
            _R0 = Options::getGameSensitivity(v25, v14);
            __asm { VMOV            S4, R0 }
            _R1 = (int)v4 + 5424;
            _R0 = (int)v4 + 5428;
              VMUL.F32        S4, S4, S18
              VLDR            S0, [R1]
              VADD.F32        S2, S0, S16
              VSTR            S2, [R1]
              VLDR            S0, [R0]
            _R1 = (int)v4 + 5432;
              VSUB.F32        S2, S2, S0
              VMUL.F32        S2, S4, S2
              VLDR            S4, [R1]
              VSUB.F32        S6, S2, S4
              VCMPE.F32       S2, #0.0
              VMRS            APSR_nzcv, FPSCR
              VMUL.F32        S6, S6, S20
              VADD.F32        S4, S6, S4
              VSTR            S4, [R1]
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              __asm
              {
                VCMPE.F32       S2, #0.0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !(_NF ^ _VF) )
                goto LABEL_22;
                VCMPELT.F32     S2, S4
                VMRSLT          APSR_nzcv, FPSCR
            else
                VCMPEGT.F32     S2, S4
                VMRSGT          APSR_nzcv, FPSCR
            __asm { VMOV.F32        S2, S4 }
LABEL_22:
            goto LABEL_23;
            VCMPELT.F32     S2, S4
            VMRSLT          APSR_nzcv, FPSCR
        else
            VCMPEGT.F32     S2, S4
            VMRSGT          APSR_nzcv, FPSCR
        __asm { VMOV.F32        S2, S4 }
        goto LABEL_16;
        VCMPELT.F32     S2, S4
        VMRSLT          APSR_nzcv, FPSCR
    else
        VCMPEGT.F32     S2, S4
        VMRSGT          APSR_nzcv, FPSCR
    __asm { VMOV.F32        S2, S4 }
    goto LABEL_10;
    VMOV.F32        S2, #10.0
    VMOV            S0, R5
    VMUL.F32        S4, S18, S2
    VMUL.F32        S2, S16, S2
    VSTR            S4, [R0]
LABEL_23:
  __asm { VSTR            S0, [R0] }
  result = (LocalPlayer *)((char *)v4 + 5348);
  __asm { VSTR            S2, [R0] }
  return result;
}


int __fastcall LocalPlayer::sendComplexInventoryTransaction(int a1, int *a2)
{
  int v2; // r4@1
  int result; // r0@1
  void **v4; // [sp+4h] [bp-1Ch]@1
  int v5; // [sp+8h] [bp-18h]@1
  int v6; // [sp+Ch] [bp-14h]@1
  char v7; // [sp+10h] [bp-10h]@1
  int v8; // [sp+14h] [bp-Ch]@1

  v2 = *a2;
  *a2 = 0;
  v5 = 2;
  v6 = 1;
  v7 = 0;
  v4 = &off_26DA738;
  v8 = v2;
  (*(void (**)(void))(*(_DWORD *)a1 + 1524))();
  result = v8;
  if ( v8 )
    result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  return result;
}


void __fastcall LocalPlayer::addAdditionalSaveData(LocalPlayer *this, CompoundTag *a2)
{
  LocalPlayer::addAdditionalSaveData(this, a2);
}


int __fastcall LocalPlayer::stopSleepInBed(LocalPlayer *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  LocalPlayer *v5; // r6@1
  Level *v6; // r0@1
  int v7; // r0@3
  int v9; // [sp+0h] [bp-48h]@2
  void **v10; // [sp+8h] [bp-40h]@2
  int v11; // [sp+Ch] [bp-3Ch]@2
  int v12; // [sp+10h] [bp-38h]@2
  char v13; // [sp+14h] [bp-34h]@2
  int v14; // [sp+18h] [bp-30h]@2
  int v15; // [sp+1Ch] [bp-2Ch]@2
  int v16; // [sp+20h] [bp-28h]@2
  int v17; // [sp+24h] [bp-24h]@2
  int v18; // [sp+28h] [bp-20h]@2
  __int64 v19; // [sp+30h] [bp-18h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v6) == 1 )
  {
    Entity::getRuntimeID((Entity *)&v9, (int)v5);
    v11 = 2;
    v12 = 1;
    v13 = 0;
    v10 = &off_26DA670;
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v15 = 0;
    v18 = 6;
    v19 = *(_QWORD *)&v9;
    (*(void (**)(void))(**((_DWORD **)v5 + 1231) + 8))();
  }
  v7 = ClientInstance::getInput(*((ClientInstance **)v5 + 1329));
  ClientInputHandler::updateInputMode(v7, 0);
  return Player::stopSleepInBed(v5, v4, v3);
}


int __fastcall LocalPlayer::setSprinting(LocalPlayer *this, int a2)
{
  LocalPlayer *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  Level *v5; // r0@2
  signed int v6; // r0@3
  int v7; // [sp+0h] [bp-48h]@3
  void **v8; // [sp+8h] [bp-40h]@3
  int v9; // [sp+Ch] [bp-3Ch]@3
  int v10; // [sp+10h] [bp-38h]@3
  char v11; // [sp+14h] [bp-34h]@3
  int v12; // [sp+18h] [bp-30h]@3
  int v13; // [sp+1Ch] [bp-2Ch]@3
  int v14; // [sp+20h] [bp-28h]@3
  int v15; // [sp+24h] [bp-24h]@3
  int v16; // [sp+28h] [bp-20h]@5
  __int64 v17; // [sp+30h] [bp-18h]@5

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 792))() ^ a2;
  if ( result == 1 )
  {
    Mob::setSprinting(v2, v3);
    v5 = (Level *)Entity::getLevel(v2);
    result = Level::isClientSide(v5);
    if ( result == 1 )
    {
      Entity::getRuntimeID((Entity *)&v7, (int)v2);
      v9 = 2;
      v10 = 1;
      v11 = 0;
      v8 = &off_26DA670;
      v6 = 10;
      v14 = 0;
      v15 = 0;
      v12 = 0;
      v13 = 0;
      if ( v3 )
        v6 = 9;
      v16 = v6;
      v17 = *(_QWORD *)&v7;
      result = (*(int (**)(void))(**((_DWORD **)v2 + 1231) + 8))();
    }
  }
  return result;
}


void __fastcall LocalPlayer::changeDimensionWithCredits(Entity *a1, int a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1
  Level *v4; // r0@1
  Level *v5; // r0@2
  int v6; // r0@2
  int v7; // r6@2
  _DWORD *v8; // r0@3
  __int64 v9; // r1@3
  int v10; // r6@5
  int v11; // r7@5
  _DWORD *v12; // r0@5
  __int64 v13; // r1@5
  int v14; // r4@5
  unsigned int *v15; // r1@6
  unsigned int v16; // r0@8
  unsigned int *v17; // r5@12
  unsigned int v18; // r0@14
  _DWORD *v19; // [sp+4h] [bp-3Ch]@5
  __int64 v20; // [sp+Ch] [bp-34h]@5
  char v21; // [sp+14h] [bp-2Ch]@5
  int v22; // [sp+18h] [bp-28h]@5
  _DWORD *v23; // [sp+1Ch] [bp-24h]@3
  __int64 v24; // [sp+24h] [bp-1Ch]@3

  v2 = a2;
  v3 = a1;
  v4 = (Level *)Entity::getLevel(a1);
  if ( !Level::isPlayerSuspended(v4, v3) )
  {
    v5 = (Level *)Entity::getLevel(v3);
    Level::suspendPlayer(v5, v3);
    v6 = ClientInstance::isVRClient(*((ClientInstance **)v3 + 1329));
    v7 = *((_DWORD *)v3 + 1329);
    if ( v6 == 1 )
    {
      v8 = operator new(8u);
      LODWORD(v9) = sub_E790F4;
      *v8 = v3;
      v8[1] = v2;
      HIDWORD(v9) = sub_E790D0;
      v23 = v8;
      v24 = v9;
      ClientInstance::setupTransitionForCredits(v7, (signed int)&v23, (unsigned int *)sub_E790D0);
      if ( (_DWORD)v24 )
        ((void (*)(void))v24)();
    }
    else
      v10 = ClientInstance::getClientSceneStack(*((ClientInstance **)v3 + 1329));
      v11 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1329));
      v12 = operator new(8u);
      LODWORD(v13) = sub_E79152;
      *v12 = v3;
      v12[1] = v2;
      HIDWORD(v13) = sub_E7912E;
      v19 = v12;
      v20 = v13;
      SceneFactory::createCreditsScreen((unsigned __int64 *)&v21, v11, (int)&v19);
      SceneStack::pushScreen(v10, (int)&v21, 0);
      v14 = v22;
      if ( v22 )
      {
        v15 = (unsigned int *)(v22 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
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
      }
      if ( (_DWORD)v20 )
        ((void (*)(void))v20)();
  }
}


int __fastcall LocalPlayer::actuallyHurt(LocalPlayer *this, int a2, const EntityDamageSource *a3, int a4)
{
  LocalPlayer *v4; // r7@1
  const EntityDamageSource *v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int result; // r0@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  result = (*(int (**)(void))(*(_DWORD *)this + 404))();
  if ( !result )
  {
    *((_BYTE *)v4 + 5644) = 1;
    result = j_j_j__ZN6Player12actuallyHurtEiPK18EntityDamageSourceb(v4, v6, v5, v7);
  }
  return result;
}


signed int __fastcall LocalPlayer::respawn(LocalPlayer *this)
{
  LocalPlayer *v1; // r10@1
  signed int result; // r0@2
  void (__fastcall *v3)(LocalPlayer *, int *, __int64 *, _DWORD); // r5@4
  void *v4; // r5@4
  void *v5; // r7@4
  Level *v6; // r0@6
  int v7; // r6@8
  _DWORD *v8; // r5@8
  int v9; // r0@8
  int v10; // r0@8
  int v11; // r3@8
  int v12; // r0@8
  void *v13; // r4@8
  int v14; // r0@9
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  int *v17; // r0@22
  void *v18; // r0@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  __int64 v21; // [sp+0h] [bp-78h]@4
  int v22; // [sp+8h] [bp-70h]@4
  int v23; // [sp+10h] [bp-68h]@4
  void *v24; // [sp+14h] [bp-64h]@8
  char v25; // [sp+18h] [bp-60h]@7
  void **v26; // [sp+20h] [bp-58h]@7
  int v27; // [sp+24h] [bp-54h]@7
  int v28; // [sp+28h] [bp-50h]@7
  char v29; // [sp+2Ch] [bp-4Ch]@7
  int v30; // [sp+30h] [bp-48h]@7
  int v31; // [sp+34h] [bp-44h]@7
  int v32; // [sp+38h] [bp-40h]@7
  int v33; // [sp+3Ch] [bp-3Ch]@7
  int v34; // [sp+40h] [bp-38h]@7
  __int64 v35; // [sp+48h] [bp-30h]@7

  v1 = this;
  *(_DWORD *)(ClientInstance::getGameRenderer(*((ClientInstance **)this + 1329)) + 800) = 0;
  *((_DWORD *)this + 858) = 0;
  *((_DWORD *)this + 862) = 0;
  if ( (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v1 + 524))(v1) == *((_DWORD *)v1 + 1206) )
  {
    result = *((_BYTE *)v1 + 4821);
    if ( *((_BYTE *)v1 + 4821) )
    {
      *((_BYTE *)v1 + 4994) = 1;
      *((_DWORD *)v1 + 1327) = 0;
      *((_BYTE *)v1 + 5398) = 0;
      if ( *((_BYTE *)v1 + 4822) )
      {
        v3 = *(void (__fastcall **)(LocalPlayer *, int *, __int64 *, _DWORD))(*(_DWORD *)v1 + 1376);
        sub_119C884((void **)&v23, "tile.bed.notValid");
        v21 = 0LL;
        v22 = 0;
        v3(v1, &v23, &v21, 0);
        v5 = (void *)HIDWORD(v21);
        v4 = (void *)v21;
        if ( (_DWORD)v21 != HIDWORD(v21) )
        {
          do
          {
            v17 = (int *)(*(_DWORD *)v4 - 12);
            if ( v17 != &dword_28898C0 )
            {
              v15 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
                j_j_j_j_j__ZdlPv_9_1(v17);
            }
            v4 = (char *)v4 + 4;
          }
          while ( v4 != v5 );
          v4 = (void *)v21;
        }
        if ( v4 )
          operator delete(v4);
        v18 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v23 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
      }
      result = Player::respawn(v1);
    }
  }
  else
    v6 = (Level *)Entity::getLevel(v1);
    if ( Level::isClientSide(v6) == 1 )
      Entity::getRuntimeID((Entity *)&v25, (int)v1);
      v27 = 2;
      v28 = 1;
      v29 = 0;
      v26 = &off_26DA670;
      v32 = 0;
      v33 = 0;
      v30 = 0;
      v31 = 0;
      v34 = 13;
      v35 = *(_QWORD *)&v25;
      (*(void (**)(void))(**((_DWORD **)v1 + 1231) + 8))();
      result = 4292;
      *((_DWORD *)v1 + 1073) = 2;
    else
      v7 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v1 + 524))(v1);
      v8 = operator new(0x20u);
      v9 = *((_DWORD *)v1 + 1206);
      *v8 = 0;
      v8[1] = v7;
      v8[2] = v9;
      v10 = *((_DWORD *)v1 + 1166);
      v11 = *((_DWORD *)v1 + 1165);
      v8[5] = *((_DWORD *)v1 + 1167);
      v8[3] = v11;
      v8[4] = v10;
      *((_BYTE *)v8 + 24) = 0;
      *((_BYTE *)v8 + 25) = 1;
      v8[7] = 0;
      v12 = Entity::getLevel(v1);
      v24 = v8;
      Level::requestPlayerChangeDimension(v12, (unsigned int)v1, (int *)&v24);
      v13 = v24;
      if ( v24 )
        v14 = *((_DWORD *)v24 + 7);
        if ( v14 )
          (*(void (**)(void))(*(_DWORD *)v14 + 4))();
        operator delete(v13);
      result = 0;
      v24 = 0;
  return result;
}


signed int __fastcall LocalPlayer::displayWhisperMessage(int a1, int *a2, int *a3, const void **a4)
{
  int *v4; // r6@1
  const void **v5; // r4@1
  int *v6; // r5@1
  int v7; // r0@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 5316));
  return j_j_j__ZN7GuiData21displayWhisperMessageERKSsS1_S1_(v7, v4, v6, v5);
}


void __fastcall LocalPlayer::openCommandBlockMinecart(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r4@1
  int v4; // r6@2
  int v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*(ClientInstance **)(v2 + 5316));
    v5 = ClientInstance::getSceneFactory(*(ClientInstance **)(v2 + 5316));
    SceneFactory::createCommandBlockMinecartScreen((unsigned __int64 *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


int __fastcall LocalPlayer::startPaddling(int a1, int a2)
{
  int result; // r0@1

  result = a1 + a2;
  if ( !*(_BYTE *)(result + 5360) )
  {
    result += 5360;
    *(_BYTE *)result = 1;
  }
  return result;
}


void __fastcall LocalPlayer::openTrading(int a1, __int64 *a2)
{
  int v2; // r5@1
  __int64 *v3; // r4@1
  int v4; // r6@2
  int v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*(ClientInstance **)(v2 + 5316));
    v5 = ClientInstance::getSceneFactory(*(ClientInstance **)(v2 + 5316));
    SceneFactory::createTradeScreen((unsigned __int64 *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::readAdditionalSaveData(LocalPlayer *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  LocalPlayer *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Player::readAdditionalSaveData(this, a2);
  sub_119C884((void **)&v7, "Score");
  *((_DWORD *)v3 + 1075) = CompoundTag::getInt((int)v2, (const void **)&v7);
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


int __fastcall LocalPlayer::getItemActivationOffsetY(LocalPlayer *this)
{
  int result; // r0@1

  _R0 = (char *)this + 6024;
  __asm
  {
    VLDR            S0, [R0]
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall LocalPlayer::removeRegionListener(int a1, int a2)
{
  int v2; // r3@1
  int *v3; // r12@1
  int v4; // lr@1
  int v5; // r2@1
  int v6; // r2@2
  bool v7; // zf@3
  int result; // r0@3
  int v9; // r4@6
  bool v10; // zf@6
  int v11; // r0@11
  _DWORD *v12; // r5@24
  int v13; // r4@26
  int v14; // r2@26

  v2 = *(_DWORD *)(a1 + 5592);
  v3 = (int *)(a1 + 5596);
  v4 = *(_DWORD *)(a1 + 5596);
  v5 = (v4 - v2) >> 4;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == (v4 - v2) >> 2 )
    {
      result = v2;
    }
    else
      v11 = (v4 - v2) >> 2;
      if ( v11 == 2 )
      {
        result = v2;
      }
      else
        if ( v11 != 3 )
        {
          result = v4;
          goto LABEL_23;
        }
        if ( *(_DWORD *)v2 == a2 )
        result = v2 + 4;
      if ( *(_DWORD *)result == a2 )
        goto LABEL_23;
      result += 4;
    if ( *(_DWORD *)result != a2 )
      result = v4;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_DWORD *)v2 == a2;
      if ( *(_DWORD *)v2 != a2 )
        v7 = *(_DWORD *)(v2 + 4) == a2;
      if ( v7 )
        break;
      result = v2 + 8;
      v9 = *(_DWORD *)(v2 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        result = v2 + 12;
        v10 = *(_DWORD *)(v2 + 12) == a2;
      if ( v10 )
      --v6;
      v2 += 16;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result == v4 )
    v12 = (_DWORD *)v4;
    v12 = (_DWORD *)result;
    while ( v4 - 4 != result )
      v13 = *(_DWORD *)(result + 4);
      v14 = result + 4;
      if ( v13 != a2 )
        *v12 = v13;
        ++v12;
        result = v14;
    v4 = *v3;
  if ( v12 != (_DWORD *)v4 )
    *v3 = (int)v12;
  return result;
}


void __fastcall LocalPlayer::openInventory(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1329));
  v3 = ClientInstance::getSceneFactory(*((ClientInstance **)v1 + 1329));
  SceneFactory::createInventoryScreen((int)&v9, v3, 0);
  SceneStack::pushScreen(v2, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
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
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


char *__fastcall LocalPlayer::getInventoryOptions(LocalPlayer *this)
{
  return (char *)this + 5628;
}


signed int __fastcall LocalPlayer::_isHeadOnCollision(LocalPlayer *this, int a2, int a3, float a4)
{
  LocalPlayer *v4; // r4@1
  signed int result; // r0@3

  v4 = this;
  _R5 = (char *)this + 6040;
  _R6 = (char *)this + 6048;
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S2, [R6]
    VABS.F32        S4, S0
    VABS.F32        S6, S2
    VCMPE.F32       S6, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    if ( mce::MathUtility::floatEqualsEpsilon(*((mce::MathUtility **)this + 20), *((float *)this + 1515), 0.00005, a4) )
      return 1;
    __asm
    {
      VLDR            S2, [R6]
      VLDR            S0, [R5]
    }
    VABS.F32        S2, S2
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 0;
  else
    result = mce::MathUtility::floatEqualsEpsilon(*((mce::MathUtility **)v4 + 18), *((float *)v4 + 1513), 0.00005, a4);
  return result;
}


int __fastcall LocalPlayer::stopLoading(LocalPlayer *this)
{
  *((_BYTE *)this + 4829) = 1;
  *((_DWORD *)this + 1330) = 16;
  return (*(int (**)(void))(*(_DWORD *)this + 1248))();
}


void __fastcall LocalPlayer::_setRideInputFor(LocalPlayer *this, Entity *a2)
{
  LocalPlayer::_setRideInputFor(this, a2);
}


int __fastcall LocalPlayer::_crit(LocalPlayer *this, Entity *a2)
{
  LocalPlayer *v2; // r5@1
  Entity *v3; // r4@1
  int v4; // r0@1

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getLevelRenderer(*((ClientInstance **)this + 1329));
  ParticleEngine::createTrackingEmitter(*(_DWORD *)(v4 + 1568), v3, 2);
  return j_j_j__ZN6Player5_critER6Entity(v2, v3);
}


int __fastcall LocalPlayer::checkFallDamage(LocalPlayer *this, float a2, int a3)
{
  int v4; // r4@1
  float v5; // r5@1
  int v6; // r0@1
  ClientInstance **v11; // r7@7
  int v12; // r0@8

  _R6 = this;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getHoloInput(*((ClientInstance **)this + 1329));
  if ( (*(int (**)(void))(*(_DWORD *)v6 + 76))() == 1 )
  {
    if ( v4 != 1 )
      return j_j_j__ZN6Entity15checkFallDamageEfb(_R6, v5, v4);
    __asm
    {
      VLDR            S0, [R6,#0xE0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VMOV.F32        S2, #-2.0
        VMOV.F32        S4, #1.0
        VADD.F32        S0, S0, S2
        VLDR            S2, =0.1
        VMUL.F32        S16, S0, S2
        VLDR            S0, =0.05
        VCMPE.F32       S16, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S4 }
        VCMPE.F32       S16, S0
        v11 = (ClientInstance **)((char *)_R6 + 5316);
        if ( !ClientInstance::isLivingroomMode(*((ClientInstance **)_R6 + 1329)) )
        {
          v12 = ClientInstance::getHoloInput(*v11);
          __asm { VMOV            R1, S16 }
          (*(void (**)(void))(*(_DWORD *)v12 + 132))();
          *(_BYTE *)(ClientInstance::getGameRenderer(*v11) + 814) = 1;
        }
  }
  else if ( v4 != 1 )
    return j_j_j__ZN6Entity15checkFallDamageEfb(_R6, v5, v4);
  if ( Abilities::getBool((int)_R6 + 4320, (int **)&Abilities::FLYING) == 1 )
    *((_DWORD *)_R6 + 56) = 0;
  return j_j_j__ZN6Entity15checkFallDamageEfb(_R6, v5, v4);
}


void __fastcall LocalPlayer::openHopper(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer::openHopper(this, a2);
}


float __fastcall LocalPlayer::_RotationVec2Modulus(int a1, float a2)
{
  float result; // r0@1

  _R4 = a2;
  *(_DWORD *)(LODWORD(a2) + 4) = mce::Math::wrapDegrees(*(mce::Math **)(LODWORD(a2) + 4), a2);
  __asm
  {
    VLDR            S0, =90.0
    VLDR            S2, [R4]
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  result = fmodf(_R0, 180.0);
    VMOV            S2, R0
    VLDR            S0, =180.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S0 }
    VLDR            S0, =-90.0
    VSTR            S0, [R4]
  return result;
}


void __fastcall LocalPlayer::openBook(LocalPlayer *this, int a2, bool a3)
{
  LocalPlayer *v3; // r6@1
  bool v4; // r8@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // r4@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r5@8
  unsigned int v12; // r0@10
  int v13; // [sp+0h] [bp-20h]@1
  int v14; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 1329));
  v7 = ClientInstance::getSceneFactory(*((ClientInstance **)v3 + 1329));
  SceneFactory::createBookScreen((SceneFactory *)&v13, v7, v5, v4);
  SceneStack::pushScreen(v6, (int)&v13, 0);
  v8 = v14;
  if ( v14 )
  {
    v9 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
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
  }
}


int __fastcall LocalPlayer::playSynchronizedSound(Entity *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  Entity *v8; // r5@1
  Level *v9; // r0@1
  int v10; // r8@2
  char v11; // r0@2
  int v12; // r2@2
  int v13; // r3@2
  int result; // r0@2
  void **v15; // [sp+8h] [bp-48h]@2
  signed int v16; // [sp+Ch] [bp-44h]@2
  signed int v17; // [sp+10h] [bp-40h]@2
  char v18; // [sp+14h] [bp-3Ch]@2
  char v19; // [sp+15h] [bp-3Bh]@2
  int v20; // [sp+18h] [bp-38h]@2
  int v21; // [sp+1Ch] [bp-34h]@2
  int v22; // [sp+20h] [bp-30h]@2
  int v23; // [sp+24h] [bp-2Ch]@2
  int v24; // [sp+28h] [bp-28h]@2
  char v25; // [sp+2Ch] [bp-24h]@2
  char v26; // [sp+2Dh] [bp-23h]@2

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (Level *)Entity::getLevel(a1);
  if ( Level::isClientSide(v9) )
  {
    v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 488))(v8);
    v11 = Entity::isBaby(v8);
    v16 = 2;
    v17 = 1;
    v18 = 0;
    v15 = &off_26DA800;
    v19 = v7;
    v12 = *(_DWORD *)(v6 + 4);
    v13 = *(_DWORD *)(v6 + 8);
    v20 = *(_DWORD *)v6;
    v21 = v12;
    v22 = v13;
    v23 = v5;
    v24 = v10;
    v25 = v11;
    v26 = a5;
    result = (*(int (**)(void))(**((_DWORD **)v8 + 1231) + 8))();
  }
  else
    result = Entity::playSynchronizedSound((int)v8, v7, v6, v5, a5);
  return result;
}


PlayerChunkSource *__fastcall LocalPlayer::setPos(LocalPlayer *this, const Vec3 *a2)
{
  const Vec3 *v2; // r4@1
  LocalPlayer *v3; // r5@1
  PlayerChunkSource *result; // r0@1

  v2 = a2;
  v3 = this;
  Entity::setPos(this, a2);
  result = (PlayerChunkSource *)*((_DWORD *)v3 + 1156);
  if ( result )
    result = (PlayerChunkSource *)j_j_j__ZN17PlayerChunkSource8centerAtERK4Vec3f(result, v2, 16.0);
  return result;
}


void __fastcall LocalPlayer::openStructureEditor(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  void *v4; // r0@3
  int v5; // r6@6
  const BlockPos *v6; // r0@6
  int v7; // r4@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  unsigned int *v10; // r5@13
  unsigned int v11; // r0@15
  char v12; // [sp+4h] [bp-1Ch]@6
  int v13; // [sp+8h] [bp-18h]@6

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v4 + 192))() == 1 )
    {
      v5 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
      v6 = (const BlockPos *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
      SceneFactory::createStructureEditor((SceneFactory *)&v12, v6, (int)v3);
      SceneStack::pushScreen(v5, (int)&v12, 0);
      v7 = v13;
      if ( v13 )
      {
        v8 = (unsigned int *)(v13 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
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
      }
    }
  }
}


int __fastcall LocalPlayer::sendPosition(LocalPlayer *this)
{
  LocalPlayer *v1; // r4@1
  char v2; // r6@1
  int v3; // r0@1
  __int64 v4; // r1@1
  int v5; // r1@1
  int v6; // r5@4
  int result; // r0@4
  int v8; // r1@4
  int v9; // [sp+0h] [bp-20h]@4
  int v10; // [sp+8h] [bp-18h]@4
  int v11; // [sp+Ch] [bp-14h]@4
  int v12; // [sp+10h] [bp-10h]@4
  int v13; // [sp+14h] [bp-Ch]@4
  unsigned __int8 v14; // [sp+18h] [bp-8h]@4
  void **v15; // [sp+20h] [bp+0h]@1
  int v16; // [sp+24h] [bp+4h]@1
  int v17; // [sp+28h] [bp+8h]@1
  char v18; // [sp+2Ch] [bp+Ch]@1
  int v19; // [sp+30h] [bp+10h]@1
  __int64 v20; // [sp+38h] [bp+18h]@1
  int v21; // [sp+40h] [bp+20h]@1
  __int64 v22; // [sp+44h] [bp+24h]@1
  int v23; // [sp+4Ch] [bp+2Ch]@1
  char v24; // [sp+50h] [bp+30h]@1
  char v25; // [sp+51h] [bp+31h]@1
  int v26; // [sp+58h] [bp+38h]@2
  int v27; // [sp+5Ch] [bp+3Ch]@3
  int v28; // [sp+60h] [bp+40h]@4
  int v29; // [sp+64h] [bp+44h]@4

  v1 = this;
  v2 = *((_BYTE *)this + 4994);
  v16 = 2;
  v17 = 1;
  v18 = 0;
  v15 = &off_26DA5F8;
  Entity::getRuntimeID((Entity *)&v19, (int)this);
  v3 = (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v1 + 52))(v1);
  v4 = *(_QWORD *)v3;
  v21 = *(_DWORD *)(v3 + 8);
  v20 = v4;
  v22 = *((_QWORD *)v1 + 15);
  v23 = *((_DWORD *)v1 + 855);
  v24 = v2;
  v25 = *((_BYTE *)v1 + 216);
  v5 = *((_DWORD *)v1 + 128);
  if ( v5 )
  {
    Entity::getRuntimeID((Entity *)&v26, v5);
  }
  else
    v26 = 0;
    v27 = 0;
  v28 = 0;
  v29 = 0;
  (*(void (**)(void))(**((_DWORD **)v1 + 1231) + 8))();
  v6 = *((_DWORD *)v1 + 48);
  MoveEntityPacketData::MoveEntityPacketData((Entity *)&v9, (int)v1);
  *(_QWORD *)v6 = *(_QWORD *)&v9;
  *(_DWORD *)(v6 + 8) = v10;
  *(_DWORD *)(v6 + 12) = v11;
  *(_DWORD *)(v6 + 16) = v12;
  result = v14;
  v8 = v13;
  *(_BYTE *)(v6 + 24) = v14;
  *(_DWORD *)(v6 + 20) = v8;
  return result;
}


signed int __fastcall LocalPlayer::isEntityRelevant(LocalPlayer *this, const Entity *a2)
{
  return 1;
}


int __fastcall LocalPlayer::setLeavingLevel(int result, bool a2)
{
  *(_BYTE *)(result + 5645) = a2;
  return result;
}


void __fastcall LocalPlayer::openContainer(LocalPlayer *this, const BlockPos *a2)
{
  LocalPlayer *v2; // r5@1
  const BlockPos *v3; // r4@1
  int v4; // r6@2
  Player *v5; // r0@2
  int v6; // r4@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r5@9
  unsigned int v10; // r0@11
  char v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+8h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1348))() == 1 )
  {
    v4 = ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 1329));
    v5 = (Player *)ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 1329));
    SceneFactory::createChestScreen((SceneFactory *)&v11, v5, v2, v3);
    SceneStack::pushScreen(v4, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
  }
}


void __fastcall LocalPlayer::die(LocalPlayer *this, const EntityDamageSource *a2)
{
  LocalPlayer *v2; // r5@1
  const EntityDamageSource *v3; // r4@1
  int v4; // r0@1

  v2 = this;
  v3 = a2;
  ClientInstance::onGameEventNotification(*((_DWORD *)this + 1329));
  Player::die(v2, v3);
  v4 = ClientInstance::getInput(*((ClientInstance **)v2 + 1329));
  j_j_j__ZN18ClientInputHandler15updateInputModeE17GamePlayInputMode(v4, 0);
}


float __fastcall LocalPlayer::_modifyDeltaByHMDPosition(LocalPlayer *this, Vec3 *a2, float a3)
{
  LocalPlayer *v3; // r4@1
  int v11; // r0@1
  int v12; // r5@1
  HolographicPlatform *v13; // r0@1
  float *v14; // r5@2
  int v15; // r0@4
  float result; // r0@4
  float v17; // [sp+4h] [bp-7Ch]@1
  float v26; // [sp+44h] [bp-3Ch]@3
  float v27; // [sp+48h] [bp-38h]@4
  float v28; // [sp+4Ch] [bp-34h]@4

  v3 = this;
  _R6 = a3;
  _R5 = a2;
  _R0 = ClientInstance::getMoveTurnInput(*((ClientInstance **)this + 1329));
  __asm
  {
    VMOV            S0, R6
    VLDR            S2, [R0,#0x30]
    VLDR            S4, [R0,#0x34]
    VLDR            S6, [R0,#0x38]
    VMUL.F32        S16, S2, S0
    VMUL.F32        S18, S4, S0
    VMUL.F32        S20, S6, S0
    VSUB.F32        S0, S2, S16
    VSUB.F32        S2, S4, S18
    VSUB.F32        S4, S6, S20
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S16, [SP,#0x80+var_3C]
    VSTR            S18, [SP,#0x80+var_38]
    VSTR            S20, [SP,#0x80+var_34]
  }
  v11 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 1329));
  HolographicPlatform::getTransform((int)&v17, v11, 15, 1, 14);
    VLDR            S0, [SP,#0x80+var_7C]
    VLDR            S6, [SP,#0x80+var_6C]
    VMUL.F32        S0, S0, S16
    VLDR            S8, [SP,#0x80+var_5C]
    VMUL.F32        S6, S6, S18
    VLDR            S2, [SP,#0x80+var_78]
    VMUL.F32        S8, S8, S20
    VLDR            S10, [SP,#0x80+var_58]
    VMUL.F32        S2, S2, S16
    VLDR            S4, [SP,#0x80+var_74]
    VMUL.F32        S4, S4, S16
    VADD.F32        S0, S6, S0
    VLDR            S6, [SP,#0x80+var_68]
    VADD.F32        S0, S0, S8
    VMUL.F32        S8, S10, S20
    VLDR            S10, [R5]
    VADD.F32        S2, S6, S2
    VLDR            S6, [SP,#0x80+var_64]
    VADD.F32        S0, S0, S10
    VLDR            S10, [SP,#0x80+var_54]
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S6, S4
    VSTR            S0, [R5]
    VLDR            S0, [R5,#4]
    VADD.F32        S0, S2, S0
    VADD.F32        S2, S4, S8
    VSTR            S0, [R5,#4]
    VLDR            S0, [R5,#8]
    VSTR            S0, [R5,#8]
  v12 = *((_BYTE *)v3 + 218);
  v13 = (HolographicPlatform *)ClientInstance::getHoloInput(*((ClientInstance **)v3 + 1329));
  if ( v12 )
    v14 = (float *)((char *)v3 + 5364);
    HolographicPlatform::addToHMDPositionSpring(v13, (LocalPlayer *)((char *)v3 + 5364));
  else
    HolographicPlatform::removeFromHMDPositionSpring(v13, (const Vec3 *)&v26);
  v15 = ClientInstance::getHoloInput(*((ClientInstance **)v3 + 1329));
  (*(void (**)(void))(*(_DWORD *)v15 + 132))();
  *v14 = v26;
  *((float *)v3 + 1342) = v27;
  result = v28;
  *((float *)v3 + 1343) = v28;
  return result;
}


signed int __fastcall LocalPlayer::hasBossRegistered(int a1, int a2, __int64 a3)
{
  int v3; // lr@1
  unsigned __int64 *v4; // r12@1
  int v5; // r0@1
  int v6; // r0@2
  bool v7; // zf@3
  unsigned __int64 *v8; // r1@3
  bool v9; // zf@6
  int v10; // r0@11
  signed int result; // r0@23

  v3 = *(_DWORD *)(a1 + 4968);
  v4 = *(unsigned __int64 **)(a1 + 4972);
  v5 = ((signed int)v4 - v3) >> 5;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v4 - v3) >> 3 )
    {
      v8 = (unsigned __int64 *)v3;
    }
    else
      v10 = ((signed int)v4 - v3) >> 3;
      if ( v10 == 2 )
      {
        v8 = (unsigned __int64 *)v3;
      }
      else
        if ( v10 != 3 )
        {
          v8 = v4;
          goto LABEL_23;
        }
        if ( *(_QWORD *)v3 == a3 )
        v8 = (unsigned __int64 *)(v3 + 8);
      if ( *v8 == a3 )
        goto LABEL_23;
      ++v8;
    HIDWORD(a3) ^= *v8 >> 32;
    if ( a3 != (unsigned int)*v8 )
      v8 = v4;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_QWORD *)v3 == a3;
      if ( *(_QWORD *)v3 != a3 )
        v7 = *(_QWORD *)(v3 + 8) == a3;
      if ( v7 )
        break;
      v8 = (unsigned __int64 *)(v3 + 16);
      v9 = *(_QWORD *)(v3 + 16) == a3;
      if ( *(_QWORD *)(v3 + 16) != a3 )
        v8 = (unsigned __int64 *)(v3 + 24);
        v9 = *(_QWORD *)(v3 + 24) == a3;
      if ( v9 )
      --v6;
      v3 += 32;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  result = 0;
  if ( v8 != v4 )
    result = 1;
  return result;
}
