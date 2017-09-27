

const void **__fastcall UserManagementScreenController::getAdditionalScreenInfo(UserManagementScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E6FCC((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 424) - 12) + 3);
  sub_21E7408(v2, " - ", 3u);
  return sub_21E72F0(v2, (const void **)(v3 + 424));
}


void __fastcall UserManagementScreenController::~UserManagementScreenController(UserManagementScreenController *this)
{
  UserManagementScreenController::~UserManagementScreenController(this);
}


int __fastcall UserManagementScreenController::UserManagementScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r6@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  int v15; // r0@21
  void (__fastcall *v16)(int, int, signed int); // r3@21
  int v18; // [sp+0h] [bp-20h]@1
  int v19; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v18 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v19 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  MinecraftScreenController::MinecraftScreenController(v4, (MinecraftScreenModel **)&v18);
  v10 = v19;
  if ( v19 )
    v11 = (unsigned int *)(v19 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E3DC8;
  ModalScreenData::ModalScreenData((int *)(v4 + 424), (int *)v7);
  v15 = *(_DWORD *)(v7 + 56);
  *(_BYTE *)(v4 + 484) = *(_BYTE *)(v7 + 60);
  *(_DWORD *)(v4 + 480) = v15;
  *(_DWORD *)(v4 + 496) = 0;
  v16 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  if ( v16 )
    v16(v4 + 488, v5, 2);
    *(_DWORD *)(v4 + 500) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 496) = *(_DWORD *)(v5 + 8);
  UserManagementScreenController::_registerEventHandlers((UserManagementScreenController *)v4);
  UserManagementScreenController::_registerBindings((UserManagementScreenController *)v4);
  return v4;
}


void __fastcall UserManagementScreenController::addStaticScreenVars(UserManagementScreenController *this, Json::Value *a2)
{
  UserManagementScreenController::addStaticScreenVars(this, a2);
}


ScreenController *__fastcall UserManagementScreenController::~UserManagementScreenController(UserManagementScreenController *this)
{
  UserManagementScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E3DC8;
  v2 = (void (*)(void))*((_DWORD *)this + 124);
  if ( v2 )
    v2();
  ModalScreenData::~ModalScreenData((UserManagementScreenController *)((char *)v1 + 424));
  return j_j_j__ZN25MinecraftScreenControllerD2Ev_0(v1);
}


void __fastcall UserManagementScreenController::_registerBindings(UserManagementScreenController *this)
{
  UserManagementScreenController::_registerBindings(this);
}


void __fastcall UserManagementScreenController::_registerEventHandlers(UserManagementScreenController *this)
{
  UserManagementScreenController::_registerEventHandlers(this);
}


void __fastcall UserManagementScreenController::~UserManagementScreenController(UserManagementScreenController *this)
{
  UserManagementScreenController *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26E3DC8;
  v2 = (void (*)(void))*((_DWORD *)this + 124);
  if ( v2 )
    v2();
  ModalScreenData::~ModalScreenData((UserManagementScreenController *)((char *)v1 + 424));
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall UserManagementScreenController::addStaticScreenVars(UserManagementScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  UserManagementScreenController *v3; // r4@1
  int v4; // r0@1
  int v5; // r6@6
  int v6; // r6@6
  bool v7; // r1@6
  int v8; // r6@8
  bool v9; // r1@8
  int v10; // r6@10
  int v11; // r1@10
  int v12; // r6@12
  bool v13; // r1@12
  int v14; // r6@14
  int v15; // r5@14
  void *v16; // r0@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  int v19; // [sp+0h] [bp-90h]@14
  char v20; // [sp+10h] [bp-80h]@14
  char v21; // [sp+20h] [bp-70h]@14
  char v22; // [sp+30h] [bp-60h]@12
  char v23; // [sp+40h] [bp-50h]@10
  char v24; // [sp+50h] [bp-40h]@8
  char v25; // [sp+60h] [bp-30h]@6
  int v26; // [sp+78h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v26, "medium");
  v4 = *((_DWORD *)v3 + 120);
  if ( v4 )
  {
    if ( v4 == 2 )
      sub_21E8190((void **)&v26, "large", (_BYTE *)5);
    else
      sub_21E8190((void **)&v26, "medium", (_BYTE *)6);
  }
  else
    sub_21E8190((void **)&v26, "small", (_BYTE *)5);
  v5 = Json::Value::operator[](v2, "$modal_dialog_popup_size");
  Json::Value::Value((int)&v25, (const char **)&v26);
  Json::Value::operator=(v5, (const Json::Value *)&v25);
  Json::Value::~Value((Json::Value *)&v25);
  v6 = Json::Value::operator[](v2, "$no_buttons_visible");
  v7 = 0;
  if ( *((_DWORD *)v3 + 118) == 3 )
    v7 = 1;
  Json::Value::Value((Json::Value *)&v24, v7);
  Json::Value::operator=(v6, (const Json::Value *)&v24);
  Json::Value::~Value((Json::Value *)&v24);
  v8 = Json::Value::operator[](v2, "$single_button_visible");
  v9 = 0;
  if ( *((_DWORD *)v3 + 118) == 2 )
    v9 = 1;
  Json::Value::Value((Json::Value *)&v23, v9);
  Json::Value::operator=(v8, (const Json::Value *)&v23);
  Json::Value::~Value((Json::Value *)&v23);
  v10 = Json::Value::operator[](v2, "$two_buttons_visible");
  v11 = *((_DWORD *)v3 + 118);
  if ( v11 != 1 )
    LOBYTE(v11) = 0;
  Json::Value::Value((Json::Value *)&v22, v11);
  Json::Value::operator=(v10, (const Json::Value *)&v22);
  Json::Value::~Value((Json::Value *)&v22);
  v12 = Json::Value::operator[](v2, "$three_buttons_visible");
  v13 = 0;
  if ( !*((_DWORD *)v3 + 118) )
    v13 = 1;
  Json::Value::Value((Json::Value *)&v21, v13);
  Json::Value::operator=(v12, (const Json::Value *)&v21);
  Json::Value::~Value((Json::Value *)&v21);
  v14 = Json::Value::operator[](v2, "$left_button_focus_precedence");
  Json::Value::Value((Json::Value *)&v20, *((_BYTE *)v3 + 484));
  Json::Value::operator=(v14, (const Json::Value *)&v20);
  Json::Value::~Value((Json::Value *)&v20);
  v15 = Json::Value::operator[](v2, "$right_button_focus_precedence");
  Json::Value::Value((Json::Value *)&v19, *((_BYTE *)v3 + 484) ^ 1);
  Json::Value::operator=(v15, (const Json::Value *)&v19);
  Json::Value::~Value((Json::Value *)&v19);
  v16 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall UserManagementScreenController::_registerEventHandlers(UserManagementScreenController *this)
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
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  _DWORD *v26; // [sp+4h] [bp-74h]@10
  __int64 v27; // [sp+Ch] [bp-6Ch]@10
  int v28; // [sp+18h] [bp-60h]@10
  _DWORD *v29; // [sp+1Ch] [bp-5Ch]@7
  __int64 v30; // [sp+24h] [bp-54h]@7
  int v31; // [sp+30h] [bp-48h]@7
  _DWORD *v32; // [sp+34h] [bp-44h]@4
  __int64 v33; // [sp+3Ch] [bp-3Ch]@4
  int v34; // [sp+48h] [bp-30h]@4
  _DWORD *v35; // [sp+4Ch] [bp-2Ch]@1
  __int64 v36; // [sp+54h] [bp-24h]@1
  int v37; // [sp+60h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v37, "user_confirm_dialog.left_button");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v37);
  v3 = operator new(4u);
  LODWORD(v4) = sub_127C290;
  *v3 = v1;
  HIDWORD(v4) = sub_127C26C;
  v35 = v3;
  v36 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  v5 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v34, "user_confirm_dialog.middle_button");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v34);
  v7 = operator new(4u);
  LODWORD(v8) = sub_127C2EA;
  *v7 = v1;
  HIDWORD(v8) = sub_127C2C6;
  v32 = v7;
  v33 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v9 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v34 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v31, "user_confirm_dialog.rightcancel_button");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v31);
  v11 = operator new(4u);
  LODWORD(v12) = sub_127C344;
  *v11 = v1;
  HIDWORD(v12) = sub_127C320;
  v29 = v11;
  v30 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v28, "user_confirm_dialog.escape");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v15 = operator new(4u);
  LODWORD(v16) = sub_127C38A;
  *v15 = v1;
  HIDWORD(v16) = sub_127C37A;
  v26 = v15;
  v27 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v17 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


void __fastcall UserManagementScreenController::_registerBindings(UserManagementScreenController *this)
{
  UserManagementScreenController *v1; // r6@1
  int *v2; // r1@1
  void *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  _DWORD *v6; // r0@8
  __int64 v7; // r1@8
  char *v8; // r0@12
  int *v9; // r1@13
  void *v10; // r0@14
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  _DWORD *v13; // r0@20
  __int64 v14; // r1@20
  char *v15; // r0@24
  _DWORD *v16; // r0@25
  __int64 v17; // r1@25
  __int64 v18; // r1@25
  _DWORD *v19; // r0@29
  __int64 v20; // r1@29
  __int64 v21; // r1@29
  _DWORD *v22; // r0@33
  __int64 v23; // r1@33
  __int64 v24; // r1@33
  char *v25; // r0@37
  char *v26; // r0@38
  unsigned int *v27; // r2@40
  signed int v28; // r1@42
  unsigned int *v29; // r2@44
  signed int v30; // r1@46
  unsigned int *v31; // r2@48
  signed int v32; // r1@50
  unsigned int *v33; // r2@52
  signed int v34; // r1@54
  void *v35; // [sp+0h] [bp-E0h]@33
  __int64 v36; // [sp+8h] [bp-D8h]@33
  _DWORD *v37; // [sp+10h] [bp-D0h]@33
  __int64 v38; // [sp+18h] [bp-C8h]@33
  int v39; // [sp+20h] [bp-C0h]@33
  void *v40; // [sp+24h] [bp-BCh]@29
  __int64 v41; // [sp+2Ch] [bp-B4h]@29
  _DWORD *v42; // [sp+34h] [bp-ACh]@29
  __int64 v43; // [sp+3Ch] [bp-A4h]@29
  int v44; // [sp+44h] [bp-9Ch]@29
  void *v45; // [sp+48h] [bp-98h]@25
  __int64 v46; // [sp+50h] [bp-90h]@25
  _DWORD *v47; // [sp+58h] [bp-88h]@25
  __int64 v48; // [sp+60h] [bp-80h]@25
  int v49; // [sp+68h] [bp-78h]@25
  void *v50; // [sp+6Ch] [bp-74h]@20
  __int64 v51; // [sp+74h] [bp-6Ch]@20
  char *v52; // [sp+7Ch] [bp-64h]@20
  _DWORD *v53; // [sp+80h] [bp-60h]@20
  void (*v54)(void); // [sp+88h] [bp-58h]@20
  int *(__fastcall *v55)(int *, int **); // [sp+8Ch] [bp-54h]@20
  int v56; // [sp+90h] [bp-50h]@20
  int v57; // [sp+94h] [bp-4Ch]@14
  char *v58; // [sp+98h] [bp-48h]@13
  void *v59; // [sp+9Ch] [bp-44h]@8
  __int64 v60; // [sp+A4h] [bp-3Ch]@8
  char *v61; // [sp+ACh] [bp-34h]@8
  _DWORD *v62; // [sp+B0h] [bp-30h]@8
  void (*v63)(void); // [sp+B8h] [bp-28h]@8
  int *(__fastcall *v64)(int *, int **); // [sp+BCh] [bp-24h]@8
  int v65; // [sp+C0h] [bp-20h]@8
  int v66; // [sp+C4h] [bp-1Ch]@2
  char *v67; // [sp+C8h] [bp-18h]@1

  v1 = this;
  v2 = (int *)((char *)this + 424);
  v67 = (char *)&unk_28898CC;
  if ( (unsigned int)*(_QWORD *)((char *)this + 428) == *(_QWORD *)((char *)this + 428) >> 32 )
  {
    EntityInteraction::setInteractText((int *)&v67, v2);
  }
  else
    I18n::get(&v66, v2, (unsigned __int64 *)((char *)this + 428));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v67,
      &v66);
    v3 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v66 - 4);
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
  v65 = 1318270696;
  sub_21E8AF4((int *)&v61, (int *)&v67);
  v63 = 0;
  v6 = operator new(4u);
  *v6 = v61;
  v61 = (char *)&unk_28898CC;
  v62 = v6;
  v63 = (void (*)(void))sub_127C3CC;
  v64 = sub_127C3C0;
  v59 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v60 = v7;
  ScreenController::bindString((int)v1, &v65, (int)&v62, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  if ( v63 )
    v63();
  v8 = v61 - 12;
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (int *)((char *)v1 + 440);
  v58 = (char *)&unk_28898CC;
  if ( (unsigned int)*(_QWORD *)((char *)v1 + 444) == *(_QWORD *)((char *)v1 + 444) >> 32 )
    EntityInteraction::setInteractText((int *)&v58, v9);
    I18n::get(&v57, v9, (unsigned __int64 *)((char *)v1 + 444));
      (int *)&v58,
      &v57);
    v10 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v57 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  v56 = -1842262152;
  sub_21E8AF4((int *)&v52, (int *)&v58);
  v54 = 0;
  v13 = operator new(4u);
  *v13 = v52;
  v52 = (char *)&unk_28898CC;
  v53 = v13;
  v54 = (void (*)(void))sub_127C470;
  v55 = sub_127C464;
  v50 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v51 = v14;
  ScreenController::bindString((int)v1, &v56, (int)&v53, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  if ( v54 )
    v54();
  v15 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v52 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  StringHash::StringHash<char [24]>(&v49, (int)"#modal_left_button_text");
  v16 = operator new(4u);
  LODWORD(v17) = sub_127C518;
  *v16 = v1;
  HIDWORD(v17) = sub_127C508;
  v47 = v16;
  v48 = v17;
  v45 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v18;
  ScreenController::bindString((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  StringHash::StringHash<char [31]>(&v44, (int)"#modal_rightcancel_button_text");
  v19 = operator new(4u);
  LODWORD(v20) = sub_127C55E;
  *v19 = v1;
  HIDWORD(v20) = sub_127C54E;
  v42 = v19;
  v43 = v20;
  v40 = operator new(1u);
  LODWORD(v21) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v21) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v41 = v21;
  ScreenController::bindString((int)v1, &v44, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  StringHash::StringHash<char [26]>(&v39, (int)"#modal_middle_button_text");
  v22 = operator new(4u);
  LODWORD(v23) = sub_127C5A4;
  *v22 = v1;
  HIDWORD(v23) = sub_127C594;
  v37 = v22;
  v38 = v23;
  v35 = operator new(1u);
  LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v36 = v24;
  ScreenController::bindString((int)v1, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  v25 = v58 - 12;
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v58 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = v67 - 12;
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v67 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
}
