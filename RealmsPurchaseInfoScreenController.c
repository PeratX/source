

RealmsPurchaseInfoScreenController *__fastcall RealmsPurchaseInfoScreenController::RealmsPurchaseInfoScreenController(RealmsPurchaseInfoScreenController *a1, int a2)
{
  RealmsPurchaseInfoScreenController *v2; // r4@1
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
  MainMenuScreenController::MainMenuScreenController((int)v2, (int)&v12);
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
  *(_DWORD *)v2 = &off_26E2FA0;
  RealmsPurchaseInfoScreenController::_registerBindings(v2);
  return v2;
}


void __fastcall RealmsPurchaseInfoScreenController::~RealmsPurchaseInfoScreenController(RealmsPurchaseInfoScreenController *this)
{
  RealmsPurchaseInfoScreenController::~RealmsPurchaseInfoScreenController(this);
}


void __fastcall RealmsPurchaseInfoScreenController::~RealmsPurchaseInfoScreenController(RealmsPurchaseInfoScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MainMenuScreenController::~MainMenuScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall RealmsPurchaseInfoScreenController::_registerBindings(RealmsPurchaseInfoScreenController *this)
{
  RealmsPurchaseInfoScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  void *v8; // [sp+0h] [bp-50h]@5
  __int64 v9; // [sp+8h] [bp-48h]@5
  _DWORD *v10; // [sp+10h] [bp-40h]@5
  __int64 v11; // [sp+18h] [bp-38h]@5
  int v12; // [sp+20h] [bp-30h]@5
  void *v13; // [sp+24h] [bp-2Ch]@1
  __int64 v14; // [sp+2Ch] [bp-24h]@1
  _DWORD *v15; // [sp+34h] [bp-1Ch]@1
  __int64 v16; // [sp+3Ch] [bp-14h]@1
  int v17; // [sp+44h] [bp-Ch]@1

  v1 = this;
  v17 = -644186963;
  v2 = operator new(4u);
  LODWORD(v3) = sub_120943A;
  *v2 = v1;
  HIDWORD(v3) = sub_120942A;
  v15 = v2;
  v16 = v3;
  v13 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v14 = v4;
  ScreenController::bindString((int)v1, &v17, (int)&v15, (int)&v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  v12 = 56644275;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1209480;
  *v5 = v1;
  HIDWORD(v6) = sub_1209470;
  v10 = v5;
  v11 = v6;
  v8 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v9 = v7;
  ScreenController::bindString((int)v1, &v12, (int)&v10, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
}


void __fastcall RealmsPurchaseInfoScreenController::_registerBindings(RealmsPurchaseInfoScreenController *this)
{
  RealmsPurchaseInfoScreenController::_registerBindings(this);
}
