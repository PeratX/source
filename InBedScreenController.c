

void __fastcall InBedScreenController::~InBedScreenController(InBedScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = ClientInstanceScreenController::~ClientInstanceScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall InBedScreenController::~InBedScreenController(InBedScreenController *this)
{
  InBedScreenController::~InBedScreenController(this);
}


signed int __fastcall InBedScreenController::_isStillValid(InBedScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 108) + 784))() == 1 )
    result = MinecraftScreenController::_isStillValid(v1);
  else
    result = 0;
  return result;
}


void __fastcall InBedScreenController::_registerEventHandlers(InBedScreenController *this)
{
  InBedScreenController::_registerEventHandlers(this);
}


void __fastcall InBedScreenController::_registerEventHandlers(InBedScreenController *this)
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
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  _DWORD *v14; // [sp+4h] [bp-44h]@4
  __int64 v15; // [sp+Ch] [bp-3Ch]@4
  int v16; // [sp+18h] [bp-30h]@4
  _DWORD *v17; // [sp+1Ch] [bp-2Ch]@1
  __int64 v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+30h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v19, "button.wake_up_button");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11B2B34;
  *v3 = v1;
  HIDWORD(v4) = sub_11B2B12;
  v17 = v3;
  v18 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v17);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v16, "button.chat");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11B2B7C;
  *v7 = v1;
  HIDWORD(v8) = sub_11B2B6A;
  v14 = v7;
  v15 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
}


int __fastcall InBedScreenController::InBedScreenController(int a1, int a2, int a3)
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
  int v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v14 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v15 = v5;
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
  ClientInstanceScreenController::ClientInstanceScreenController(v3, (int)&v14);
  v8 = v15;
  if ( v15 )
    v9 = (unsigned int *)(v15 + 4);
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
  *(_DWORD *)v3 = &off_26E22B4;
  *(_DWORD *)(v3 + 432) = v4;
  InBedScreenController::_registerEventHandlers((InBedScreenController *)v3);
  return v3;
}
