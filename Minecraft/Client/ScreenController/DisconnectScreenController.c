

void __fastcall DisconnectScreenController::getAdditionalScreenInfo(DisconnectScreenController *this, int a2)
{
  DisconnectScreenController::getAdditionalScreenInfo(this, a2);
}


int __fastcall DisconnectScreenController::DisconnectScreenController(int a1, int a2, int *a3, int *a4, char a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int v7; // r0@1
  int *v8; // r6@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r7@14
  unsigned int v15; // r0@16
  int v17; // [sp+0h] [bp-28h]@1
  int v18; // [sp+4h] [bp-24h]@1

  v5 = a1;
  v17 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v18 = v7;
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
  MinecraftScreenController::MinecraftScreenController(v5, (MinecraftScreenModel **)&v17);
  v11 = v18;
  if ( v18 )
    v12 = (unsigned int *)(v18 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E1AD8;
  sub_119C854((int *)(v5 + 424), v8);
  sub_119C854((int *)(v5 + 428), v6);
  *(_BYTE *)(v5 + 432) = 0;
  *(_BYTE *)(v5 + 433) = a5;
  DisconnectScreenController::_registerEventHandlers((DisconnectScreenController *)v5);
  DisconnectScreenController::_registerBindings((DisconnectScreenController *)v5);
  MinecraftScreenModel::setScreenFadeAlpha(*(MinecraftScreenModel **)(v5 + 380), 1.0, 1.0);
  return v5;
}


void __fastcall DisconnectScreenController::~DisconnectScreenController(DisconnectScreenController *this)
{
  DisconnectScreenController::~DisconnectScreenController(this);
}


void __fastcall DisconnectScreenController::_registerEventHandlers(DisconnectScreenController *this)
{
  DisconnectScreenController::_registerEventHandlers(this);
}


void __fastcall DisconnectScreenController::_registerBindings(DisconnectScreenController *this)
{
  DisconnectScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  __int64 v8; // r1@9
  void *v9; // [sp+4h] [bp-74h]@9
  __int64 v10; // [sp+Ch] [bp-6Ch]@9
  void *v11; // [sp+14h] [bp-64h]@9
  void (*v12)(void); // [sp+1Ch] [bp-5Ch]@9
  void **(__fastcall *v13)(void **); // [sp+20h] [bp-58h]@9
  int v14; // [sp+24h] [bp-54h]@9
  void *v15; // [sp+28h] [bp-50h]@5
  __int64 v16; // [sp+30h] [bp-48h]@5
  _DWORD *v17; // [sp+38h] [bp-40h]@5
  __int64 v18; // [sp+40h] [bp-38h]@5
  int v19; // [sp+48h] [bp-30h]@5
  void *v20; // [sp+4Ch] [bp-2Ch]@1
  __int64 v21; // [sp+54h] [bp-24h]@1
  _DWORD *v22; // [sp+5Ch] [bp-1Ch]@1
  __int64 v23; // [sp+64h] [bp-14h]@1
  int v24; // [sp+6Ch] [bp-Ch]@1

  v1 = this;
  v24 = -900593982;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1183F74;
  *v2 = v1;
  HIDWORD(v3) = sub_1183F64;
  v22 = v2;
  v23 = v3;
  v20 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v21 = v4;
  ScreenController::bindString((int)v1, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  v19 = 1936606786;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1183FBA;
  *v5 = v1;
  HIDWORD(v6) = sub_1183FAA;
  v17 = v5;
  v18 = v6;
  v15 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v16 = v7;
  ScreenController::bindString((int)v1, &v19, (int)&v17, (int)&v15);
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v14 = -172010765;
  v11 = operator new(1u);
  v12 = (void (*)(void))sub_1184008;
  v13 = sub_1183FF0;
  v9 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v10 = v8;
  ScreenController::bindString((int)v1, &v14, (int)&v11, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  if ( v12 )
    v12();
}


int __fastcall DisconnectScreenController::tick(DisconnectScreenController *this)
{
  MinecraftScreenController *v1; // r4@1

  v1 = this;
  if ( !*((_BYTE *)this + 432) )
  {
    *((_BYTE *)this + 432) = 1;
    MinecraftScreenModel::setScreenFadeAlpha(*((MinecraftScreenModel **)this + 95), 1.0, 0.0);
  }
  return j_j_j__ZN25MinecraftScreenController4tickEv(v1);
}


void __fastcall DisconnectScreenController::getAdditionalScreenInfo(DisconnectScreenController *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *v4; // r5@1
  char *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  char *v11; // [sp+4h] [bp-24h]@4
  int v12; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = (int *)this;
  sub_119C884((void **)this, (const char *)&unk_257BC67);
  sub_119C884((void **)&v12, (const char *)&unk_257BC67);
  v4 = (int *)(v2 + 428);
  if ( sub_119CA58(v4, "disconnectionScreen", 0, 0x13u) == -1 )
    sub_119CAD8((void **)&v12, "User custom message", (_BYTE *)0x13);
  else
    EntityInteraction::setInteractText(&v12, v4);
  v11 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v11, *(_DWORD *)(v12 - 12) + 3);
  sub_119C894((const void **)&v11, " - ", 3u);
  sub_119C8A4((const void **)&v11, (const void **)&v12);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, (int *)&v11);
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


void __fastcall DisconnectScreenController::_registerEventHandlers(DisconnectScreenController *this)
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
  sub_119C884((void **)&v19, "button.menu_leave_screen");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1183EEA;
  *v3 = v1;
  HIDWORD(v4) = sub_1183EB8;
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v16, "button.menu_check_store");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1183F2E;
  *v7 = v1;
  HIDWORD(v8) = sub_1183F20;
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
      j_j_j_j_j__ZdlPv_9_1(v9);
}


DisconnectScreenController *__fastcall DisconnectScreenController::~DisconnectScreenController(DisconnectScreenController *this)
{
  DisconnectScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E1AD8;
  v2 = *((_DWORD *)this + 107);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 106);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall DisconnectScreenController::~DisconnectScreenController(DisconnectScreenController *this)
{
  DisconnectScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E1AD8;
  v2 = *((_DWORD *)this + 107);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 106);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall DisconnectScreenController::_registerBindings(DisconnectScreenController *this)
{
  DisconnectScreenController::_registerBindings(this);
}
