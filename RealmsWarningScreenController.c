

void __fastcall RealmsWarningScreenController::_registerEventHandlers(RealmsWarningScreenController *this)
{
  RealmsWarningScreenController::_registerEventHandlers(this);
}


RealmsWarningScreenController *__fastcall RealmsWarningScreenController::~RealmsWarningScreenController(RealmsWarningScreenController *this)
{
  RealmsWarningScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E30B8;
  v2 = *((_DWORD *)this + 128);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Realms::World::~World((RealmsWarningScreenController *)((char *)v1 + 440));
  DisconnectScreenController::~DisconnectScreenController(v1);
  return v1;
}


void __fastcall RealmsWarningScreenController::~RealmsWarningScreenController(RealmsWarningScreenController *this)
{
  RealmsWarningScreenController::~RealmsWarningScreenController(this);
}


void __fastcall RealmsWarningScreenController::~RealmsWarningScreenController(RealmsWarningScreenController *this)
{
  RealmsWarningScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E30B8;
  v2 = *((_DWORD *)this + 128);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Realms::World::~World((RealmsWarningScreenController *)((char *)v1 + 440));
  DisconnectScreenController::~DisconnectScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall RealmsWarningScreenController::_registerEventHandlers(RealmsWarningScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  __int64 v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v10, "button.menu_continue");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_120D728;
  *v3 = v1;
  HIDWORD(v4) = sub_120D624;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall RealmsWarningScreenController::RealmsWarningScreenController(int a1, int a2, const Realms::World *a3, int *a4, int a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int v7; // r0@1
  const Realms::World *v8; // r6@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  void *v11; // r0@7
  void *v12; // r0@8
  int v13; // r5@9
  unsigned int *v14; // r1@10
  unsigned int v15; // r0@12
  unsigned int *v16; // r7@16
  unsigned int v17; // r0@18
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // [sp+8h] [bp-30h]@7
  int v24; // [sp+10h] [bp-28h]@7
  int v25; // [sp+14h] [bp-24h]@1
  int v26; // [sp+18h] [bp-20h]@1

  v5 = a1;
  v25 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v26 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  sub_21E94B4((void **)&v24, "disconnectionScreen.realmsServerUpdateIncoming.title");
  sub_21E94B4((void **)&v23, "disconnectionScreen.realmsServerUpdateIncoming");
  DisconnectScreenController::DisconnectScreenController(v5, (int)&v25, &v24, &v23, 0);
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v26;
  if ( v26 )
    v14 = (unsigned int *)(v26 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
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
  *(_DWORD *)v5 = &off_26E30B8;
  Realms::World::World((Realms::World *)(v5 + 440), v8);
  sub_21E8AF4((int *)(v5 + 512), v6);
  *(_DWORD *)(v5 + 516) = a5;
  RealmsWarningScreenController::_registerEventHandlers((RealmsWarningScreenController *)v5);
  return v5;
}
