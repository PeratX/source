

void __fastcall VRSchemeScreenController::_registerEventHandlers(VRSchemeScreenController *this)
{
  VRSchemeScreenController::_registerEventHandlers(this);
}


void __fastcall VRSchemeScreenController::_registerBindings(VRSchemeScreenController *this)
{
  VRSchemeScreenController::_registerBindings(this);
}


void __fastcall VRSchemeScreenController::_registerBindings(VRSchemeScreenController *this)
{
  VRSchemeScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  _DWORD *v6; // r0@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@5
  __int64 v9; // r1@5
  _DWORD *v10; // [sp+0h] [bp-50h]@5
  __int64 v11; // [sp+8h] [bp-48h]@5
  _DWORD *v12; // [sp+10h] [bp-40h]@5
  __int64 v13; // [sp+18h] [bp-38h]@5
  int v14; // [sp+20h] [bp-30h]@5
  _DWORD *v15; // [sp+24h] [bp-2Ch]@1
  __int64 v16; // [sp+2Ch] [bp-24h]@1
  _DWORD *v17; // [sp+34h] [bp-1Ch]@1
  __int64 v18; // [sp+3Ch] [bp-14h]@1
  int v19; // [sp+44h] [bp-Ch]@1

  v1 = this;
  v19 = -1559908022;
  v2 = operator new(4u);
  LODWORD(v3) = sub_127E7E4;
  *v2 = v1;
  HIDWORD(v3) = sub_127E7D4;
  v17 = v2;
  v18 = v3;
  v4 = operator new(4u);
  LODWORD(v5) = sub_127E82A;
  *v4 = v1;
  HIDWORD(v5) = sub_127E81A;
  v15 = v4;
  v16 = v5;
  ScreenController::bindBool((int)v1, &v19, (int)&v17, (int)&v15);
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v14 = 480824724;
  v6 = operator new(4u);
  LODWORD(v7) = sub_127E876;
  *v6 = v1;
  HIDWORD(v7) = sub_127E860;
  v12 = v6;
  v13 = v7;
  v8 = operator new(4u);
  LODWORD(v9) = sub_127E8BC;
  *v8 = v1;
  HIDWORD(v9) = sub_127E8AC;
  v10 = v8;
  v11 = v9;
  ScreenController::bindBool((int)v1, &v14, (int)&v12, (int)&v10);
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
  if ( (_DWORD)v13 )
    ((void (*)(void))v13)();
}


void __fastcall VRSchemeScreenController::_registerEventHandlers(VRSchemeScreenController *this)
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
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v28, "button.menu_exit");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_127E698;
  *v3 = v1;
  HIDWORD(v4) = sub_127E62C;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v25, "button.menu_vr_more_information");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_127E74C;
  *v7 = v1;
  HIDWORD(v8) = sub_127E6D0;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v22, "button.menu_cancel");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_127E79E;
  *v11 = v1;
  HIDWORD(v12) = sub_127E782;
  v20 = v11;
  v21 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall VRSchemeScreenController::~VRSchemeScreenController(VRSchemeScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall VRSchemeScreenController::VRSchemeScreenController(int a1, int a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
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
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v14);
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
  *(_DWORD *)v3 = &off_26E3F6C;
  *(_BYTE *)(v3 + 421) = v4;
  *(_BYTE *)(v3 + 422) = 1;
  *(_BYTE *)(v3 + 423) = 1;
  MinecraftScreenController::_setExitBehavior(v3, 0);
  VRSchemeScreenController::_registerEventHandlers((VRSchemeScreenController *)v3);
  VRSchemeScreenController::_registerBindings((VRSchemeScreenController *)v3);
  return v3;
}


void __fastcall VRSchemeScreenController::~VRSchemeScreenController(VRSchemeScreenController *this)
{
  VRSchemeScreenController::~VRSchemeScreenController(this);
}
