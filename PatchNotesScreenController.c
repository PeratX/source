

void __fastcall PatchNotesScreenController::_registerEventHandlers(PatchNotesScreenController *this)
{
  PatchNotesScreenController::_registerEventHandlers(this);
}


void __fastcall PatchNotesScreenController::_registerBindings(PatchNotesScreenController *this)
{
  PatchNotesScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  __int64 v5; // r1@5
  _DWORD *v6; // r0@9
  __int64 v7; // r1@9
  __int64 v8; // r1@9
  __int64 v9; // r1@13
  _DWORD *v10; // r0@17
  __int64 v11; // r1@17
  __int64 v12; // r1@17
  _DWORD *v13; // r0@21
  __int64 v14; // r1@21
  __int64 v15; // r1@21
  void *v16; // [sp+0h] [bp-E0h]@21
  __int64 v17; // [sp+8h] [bp-D8h]@21
  _DWORD *v18; // [sp+10h] [bp-D0h]@21
  __int64 v19; // [sp+18h] [bp-C8h]@21
  int v20; // [sp+20h] [bp-C0h]@21
  void *v21; // [sp+24h] [bp-BCh]@17
  __int64 v22; // [sp+2Ch] [bp-B4h]@17
  _DWORD *v23; // [sp+34h] [bp-ACh]@17
  __int64 v24; // [sp+3Ch] [bp-A4h]@17
  int v25; // [sp+44h] [bp-9Ch]@17
  void *v26; // [sp+48h] [bp-98h]@13
  __int64 v27; // [sp+50h] [bp-90h]@13
  void *v28; // [sp+58h] [bp-88h]@13
  void (*v29)(void); // [sp+60h] [bp-80h]@13
  void **(__fastcall *v30)(void **); // [sp+64h] [bp-7Ch]@13
  int v31; // [sp+68h] [bp-78h]@13
  void *v32; // [sp+6Ch] [bp-74h]@9
  __int64 v33; // [sp+74h] [bp-6Ch]@9
  _DWORD *v34; // [sp+7Ch] [bp-64h]@9
  __int64 v35; // [sp+84h] [bp-5Ch]@9
  int v36; // [sp+8Ch] [bp-54h]@9
  void *v37; // [sp+90h] [bp-50h]@5
  __int64 v38; // [sp+98h] [bp-48h]@5
  void *v39; // [sp+A0h] [bp-40h]@5
  void (*v40)(void); // [sp+A8h] [bp-38h]@5
  void **(__fastcall *v41)(void **); // [sp+ACh] [bp-34h]@5
  int v42; // [sp+B0h] [bp-30h]@5
  void *v43; // [sp+B4h] [bp-2Ch]@1
  __int64 v44; // [sp+BCh] [bp-24h]@1
  _DWORD *v45; // [sp+C4h] [bp-1Ch]@1
  __int64 v46; // [sp+CCh] [bp-14h]@1
  int v47; // [sp+D4h] [bp-Ch]@1

  v1 = this;
  v47 = -2130296875;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11D624C;
  *v2 = v1;
  HIDWORD(v3) = sub_11D622E;
  v45 = v2;
  v46 = v3;
  v43 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v44 = v4;
  ScreenController::bindString((int)v1, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  StringHash::StringHash<char [27]>(&v42, (int)"#main_image_texture_source");
  v39 = operator new(1u);
  v40 = (void (*)(void))sub_11D62A0;
  v41 = sub_11D6282;
  v37 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v38 = v5;
  ScreenController::bindString((int)v1, &v42, (int)&v39, (int)&v37);
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  if ( v40 )
    v40();
  v36 = 1555622781;
  v6 = operator new(4u);
  LODWORD(v7) = sub_11D62EC;
  *v6 = v1;
  HIDWORD(v7) = sub_11D62CE;
  v34 = v6;
  v35 = v7;
  v32 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v33 = v8;
  ScreenController::bindString((int)v1, &v36, (int)&v34, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  StringHash::StringHash<char [28]>(&v31, (int)"#store_image_texture_source");
  v28 = operator new(1u);
  v29 = (void (*)(void))sub_11D633E;
  v30 = sub_11D6322;
  v26 = operator new(1u);
  LODWORD(v9) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v9) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v27 = v9;
  ScreenController::bindString((int)v1, &v31, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( v29 )
    v29();
  v25 = 365782143;
  v10 = operator new(4u);
  LODWORD(v11) = sub_11D638A;
  *v10 = v1;
  HIDWORD(v11) = sub_11D636C;
  v23 = v10;
  v24 = v11;
  v21 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v22 = v12;
  ScreenController::bindString((int)v1, &v25, (int)&v23, (int)&v21);
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v20 = 937696873;
  v13 = operator new(4u);
  LODWORD(v14) = sub_11D63DA;
  *v13 = v1;
  HIDWORD(v14) = sub_11D63C0;
  v18 = v13;
  v19 = v14;
  v16 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v17 = v15;
  ScreenController::bindString((int)v1, &v20, (int)&v18, (int)&v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
}


int __fastcall PatchNotesScreenController::PatchNotesScreenController(int a1, int a2, PatchNotesModel **a3)
{
  int v3; // r4@1
  PatchNotesModel **v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v13; // r0@21
  PatchNotesModel *v14; // r1@21
  PatchNotesModel *v15; // r0@22
  PatchNotesModel *v17; // [sp+0h] [bp-20h]@21
  int v18; // [sp+4h] [bp-1Ch]@1
  int v19; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v18 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v19 = v5;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v18);
  v8 = v19;
  if ( v19 )
    v9 = (unsigned int *)(v19 + 4);
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
  *(_DWORD *)v3 = &off_26E2A88;
  PatchNotesScreenController::_registerBindings((PatchNotesScreenController *)v3);
  PatchNotesScreenController::_registerEventHandlers((PatchNotesScreenController *)v3);
  v13 = *(_DWORD *)(v3 + 424);
  v14 = *v4;
  *v4 = 0;
  v17 = v14;
  MainMenuScreenModel::setPatchNotesModel(v13, (int *)&v17);
  if ( v17 )
    v15 = PatchNotesModel::~PatchNotesModel(v17);
    operator delete((void *)v15);
  return v3;
}


void __fastcall PatchNotesScreenController::_registerEventHandlers(PatchNotesScreenController *this)
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
  sub_1590164((void **)&v10, "button.menu_store_offer");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11D643C;
  *v3 = v1;
  HIDWORD(v4) = sub_11D6410;
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
}


void __fastcall PatchNotesScreenController::~PatchNotesScreenController(PatchNotesScreenController *this)
{
  PatchNotesScreenController::~PatchNotesScreenController(this);
}


Json::Value *__fastcall PatchNotesScreenController::addStaticScreenVars(PatchNotesScreenController *this, Json::Value *a2)
{
  PatchNotesScreenController *v2; // r4@1
  int v3; // r5@1
  PatchNotesModel *v4; // r0@1
  char v5; // r0@1
  int v7; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = Json::Value::operator[](a2, "$show_offer");
  v4 = (PatchNotesModel *)MainMenuScreenModel::getPatchNotesModel(*((MainMenuScreenModel **)v2 + 106));
  v5 = PatchNotesModel::hasOfferToDisplay(v4);
  Json::Value::Value((Json::Value *)&v7, v5);
  Json::Value::operator=(v3, (const Json::Value *)&v7);
  return Json::Value::~Value((Json::Value *)&v7);
}


void __fastcall PatchNotesScreenController::~PatchNotesScreenController(PatchNotesScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MainMenuScreenController::~MainMenuScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall PatchNotesScreenController::_registerBindings(PatchNotesScreenController *this)
{
  PatchNotesScreenController::_registerBindings(this);
}
