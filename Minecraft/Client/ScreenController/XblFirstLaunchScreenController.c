

int __fastcall XblFirstLaunchScreenController::XblFirstLaunchScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v12 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v13 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v12);
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
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
  *(_DWORD *)v2 = &off_26E4398;
  *(_BYTE *)(v2 + 421) = 0;
  XblFirstLaunchScreenController::_registerEventHandlers((XblFirstLaunchScreenController *)v2);
  XblFirstLaunchScreenController::_registerBindings((XblFirstLaunchScreenController *)v2);
  return v2;
}


void __fastcall XblFirstLaunchScreenController::_registerBindings(XblFirstLaunchScreenController *this)
{
  XblFirstLaunchScreenController *v1; // r4@1
  __int64 v2; // r1@1
  void *v3; // [sp+4h] [bp-2Ch]@1
  __int64 v4; // [sp+Ch] [bp-24h]@1
  void *v5; // [sp+14h] [bp-1Ch]@1
  void (*v6)(void); // [sp+1Ch] [bp-14h]@1
  void (__fastcall *v7)(const void **); // [sp+20h] [bp-10h]@1
  int v8; // [sp+24h] [bp-Ch]@1

  v1 = this;
  v8 = -883927847;
  v5 = operator new(1u);
  v6 = (void (*)(void))sub_12A4B34;
  v7 = sub_12A440C;
  v3 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v4 = v2;
  ScreenController::bindString((int)v1, &v8, (int)&v5, (int)&v3);
  if ( (_DWORD)v4 )
    ((void (*)(void))v4)();
  if ( v6 )
    v6();
}


void __fastcall XblFirstLaunchScreenController::~XblFirstLaunchScreenController(XblFirstLaunchScreenController *this)
{
  XblFirstLaunchScreenController::~XblFirstLaunchScreenController(this);
}


void __fastcall XblFirstLaunchScreenController::~XblFirstLaunchScreenController(XblFirstLaunchScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall XblFirstLaunchScreenController::_registerEventHandlers(XblFirstLaunchScreenController *this)
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
  sub_21E94B4((void **)&v19, "button.xbl_signin");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12A3FF0;
  *v3 = v1;
  HIDWORD(v4) = sub_12A3E1C;
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "button.menu_exit");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_12A43D6;
  *v7 = v1;
  HIDWORD(v8) = sub_12A43C4;
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
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall XblFirstLaunchScreenController::_registerEventHandlers(XblFirstLaunchScreenController *this)
{
  XblFirstLaunchScreenController::_registerEventHandlers(this);
}


void __fastcall XblFirstLaunchScreenController::_registerBindings(XblFirstLaunchScreenController *this)
{
  XblFirstLaunchScreenController::_registerBindings(this);
}
