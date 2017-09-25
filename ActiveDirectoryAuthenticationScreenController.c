

int __fastcall ActiveDirectoryAuthenticationScreenController::_closeModalDialog(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController *v1; // r5@1
  void *v2; // r0@2
  void *v3; // r0@3
  int result; // r0@6
  unsigned int *v5; // r2@9
  signed int v6; // r1@11
  unsigned int *v7; // r2@13
  signed int v8; // r1@15
  int v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+Ch] [bp-24h]@1

  v1 = this;
  EntityInteraction::setInteractText((int *)this + 106, (int *)&Util::EMPTY_STRING);
  sub_119C884((void **)&v10, "popup_dialog_factory");
  sub_119C884((void **)&v9, "popup_dialog");
  if ( !*((_DWORD *)v1 + 7) )
    sub_119C8E4();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 8))((char *)v1 + 20, &v10, &v9);
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  if ( *((_BYTE *)v1 + 430) )
    MinecraftScreenModel::setActiveDirectoryAuthenticationStateComplete(*((MinecraftScreenModel **)v1 + 95));
    MinecraftScreenModel::navigateToStartScreen(*((MinecraftScreenModel **)v1 + 95));
  result = *((_BYTE *)v1 + 429);
  if ( *((_BYTE *)v1 + 429) )
    result = MinecraftScreenModel::quit(*((MinecraftScreenModel **)v1 + 95));
  return result;
}


int __fastcall ActiveDirectoryAuthenticationScreenController::ActiveDirectoryAuthenticationScreenController(int a1, int a2)
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
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1

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
  *(_DWORD *)v2 = &off_26E0C14;
  sub_119C884((void **)(v2 + 424), (const char *)&unk_257BC67);
  *(_WORD *)(v2 + 428) = 0;
  *(_BYTE *)(v2 + 430) = 0;
  if ( MinecraftScreenModel::getActiveDirectoryAuthenticationState(*(MinecraftScreenModel **)(v2 + 380)) != 2 )
    MinecraftScreenModel::navigateToActiveDirectoryLogin(*(MinecraftScreenModel **)(v2 + 380));
  ActiveDirectoryAuthenticationScreenController::_registerEventHandlers((ActiveDirectoryAuthenticationScreenController *)v2);
  ActiveDirectoryAuthenticationScreenController::_registerBindings((ActiveDirectoryAuthenticationScreenController *)v2);
  return v2;
}


MinecraftScreenController *__fastcall ActiveDirectoryAuthenticationScreenController::~ActiveDirectoryAuthenticationScreenController(ActiveDirectoryAuthenticationScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E0C14;
  v2 = *((_DWORD *)this + 106);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


void __fastcall ActiveDirectoryAuthenticationScreenController::_registerBindings(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  void *v23; // [sp+4h] [bp-104h]@25
  __int64 v24; // [sp+Ch] [bp-FCh]@25
  _DWORD *v25; // [sp+14h] [bp-F4h]@25
  __int64 v26; // [sp+1Ch] [bp-ECh]@25
  int v27; // [sp+24h] [bp-E4h]@25
  void *v28; // [sp+28h] [bp-E0h]@21
  __int64 v29; // [sp+30h] [bp-D8h]@21
  _DWORD *v30; // [sp+38h] [bp-D0h]@21
  __int64 v31; // [sp+40h] [bp-C8h]@21
  int v32; // [sp+48h] [bp-C0h]@21
  void *v33; // [sp+4Ch] [bp-BCh]@17
  __int64 v34; // [sp+54h] [bp-B4h]@17
  _DWORD *v35; // [sp+5Ch] [bp-ACh]@17
  __int64 v36; // [sp+64h] [bp-A4h]@17
  int v37; // [sp+6Ch] [bp-9Ch]@17
  void *v38; // [sp+70h] [bp-98h]@13
  __int64 v39; // [sp+78h] [bp-90h]@13
  _DWORD *v40; // [sp+80h] [bp-88h]@13
  __int64 v41; // [sp+88h] [bp-80h]@13
  int v42; // [sp+90h] [bp-78h]@13
  void *v43; // [sp+94h] [bp-74h]@9
  __int64 v44; // [sp+9Ch] [bp-6Ch]@9
  _DWORD *v45; // [sp+A4h] [bp-64h]@9
  __int64 v46; // [sp+ACh] [bp-5Ch]@9
  int v47; // [sp+B4h] [bp-54h]@9
  void *v48; // [sp+B8h] [bp-50h]@5
  __int64 v49; // [sp+C0h] [bp-48h]@5
  _DWORD *v50; // [sp+C8h] [bp-40h]@5
  __int64 v51; // [sp+D0h] [bp-38h]@5
  int v52; // [sp+D8h] [bp-30h]@5
  void *v53; // [sp+DCh] [bp-2Ch]@1
  __int64 v54; // [sp+E4h] [bp-24h]@1
  _DWORD *v55; // [sp+ECh] [bp-1Ch]@1
  __int64 v56; // [sp+F4h] [bp-14h]@1
  int v57; // [sp+FCh] [bp-Ch]@1

  v1 = this;
  v57 = -1942188910;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11241E2;
  *v2 = v1;
  HIDWORD(v3) = sub_11241D2;
  v55 = v2;
  v56 = v3;
  v53 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v54 = v4;
  ScreenController::bindString((int)v1, &v57, (int)&v55, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  StringHash::StringHash<char [31]>(&v52, (int)"#popup_message_student_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_1124232;
  *v5 = v1;
  HIDWORD(v6) = sub_1124218;
  v50 = v5;
  v51 = v6;
  v48 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v49 = v7;
  ScreenController::bindBool((int)v1, &v52, (int)&v50, (int)&v48);
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  StringHash::StringHash<char [23]>(&v47, (int)"#hyperlink_prompt_text");
  v8 = operator new(4u);
  LODWORD(v9) = sub_112429C;
  *v8 = v1;
  HIDWORD(v9) = sub_1124268;
  v45 = v8;
  v46 = v9;
  v43 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v44 = v10;
  ScreenController::bindString((int)v1, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  v42 = -1776486525;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11242FA;
  *v11 = v1;
  HIDWORD(v12) = sub_11242D2;
  v40 = v11;
  v41 = v12;
  v38 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v39 = v13;
  ScreenController::bindBool((int)v1, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  v37 = -305596734;
  v14 = operator new(4u);
  LODWORD(v15) = sub_112434A;
  *v14 = v1;
  HIDWORD(v15) = sub_1124330;
  v35 = v14;
  v36 = v15;
  v33 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v34 = v16;
  ScreenController::bindBool((int)v1, &v37, (int)&v35, (int)&v33);
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  StringHash::StringHash<char [24]>(&v32, (int)"#authentication_message");
  v17 = operator new(4u);
  LODWORD(v18) = sub_1124DC4;
  *v17 = v1;
  HIDWORD(v18) = sub_1124380;
  v30 = v17;
  v31 = v18;
  v28 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v29 = v19;
  ScreenController::bindString((int)v1, &v32, (int)&v30, (int)&v28);
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  v27 = -1099159893;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1124E10;
  *v20 = v1;
  HIDWORD(v21) = sub_1124DFA;
  v25 = v20;
  v26 = v21;
  v23 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v24 = v22;
  ScreenController::bindBool((int)v1, &v27, (int)&v25, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
}


void __fastcall ActiveDirectoryAuthenticationScreenController::~ActiveDirectoryAuthenticationScreenController(ActiveDirectoryAuthenticationScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E0C14;
  v2 = *((_DWORD *)this + 106);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}


void __fastcall ActiveDirectoryAuthenticationScreenController::_registerEventHandlers(ActiveDirectoryAuthenticationScreenController *this)
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
  sub_119C884((void **)&v19, "button.action");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1124158;
  *v3 = v1;
  HIDWORD(v4) = sub_1124128;
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
  sub_119C884((void **)&v16, "button.close_dialog");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_112419C;
  *v7 = v1;
  HIDWORD(v8) = sub_112418E;
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


void __fastcall ActiveDirectoryAuthenticationScreenController::_registerBindings(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController::_registerBindings(this);
}


void __fastcall ActiveDirectoryAuthenticationScreenController::~ActiveDirectoryAuthenticationScreenController(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController::~ActiveDirectoryAuthenticationScreenController(this);
}


void __fastcall ActiveDirectoryAuthenticationScreenController::_handleAuthenticationPendingPresentation(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController::_handleAuthenticationPendingPresentation(this);
}


signed int __fastcall ActiveDirectoryAuthenticationScreenController::tick(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController *v1; // r4@1

  v1 = this;
  MinecraftScreenController::tick(this);
  if ( MinecraftScreenModel::getActiveDirectoryAuthenticationState(*((MinecraftScreenModel **)v1 + 95)) == 5 )
    ActiveDirectoryAuthenticationScreenController::_handleAuthenticationPendingPresentation(v1);
  return 1;
}


void __fastcall ActiveDirectoryAuthenticationScreenController::_registerEventHandlers(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController::_registerEventHandlers(this);
}


UIPropertyBag *__fastcall ActiveDirectoryAuthenticationScreenController::_openModalDialog(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+8h] [bp-48h]@1
  char v10; // [sp+Fh] [bp-41h]@1
  char v11; // [sp+10h] [bp-40h]@1

  v2 = a1;
  v3 = a2;
  v4 = UIPropertyBag::UIPropertyBag((int)&v11);
  UIPropertyBag::set<char [13]>(v4, 4, "name", "popup_dialog");
  v10 = 1;
  UIPropertyBag::set<bool>((int)&v11, 9, "exclusive", &v10);
  UIPropertyBag::set<char [23]>((int)&v11, 10, "#hyperlink", "http://aka.ms/meestore");
  UIPropertyBag::set<std::string>((int)&v11, 10, "control_id", v3);
  sub_119C884((void **)&v9, "popup_dialog_factory");
  if ( !*(_DWORD *)(v2 + 12) )
    sub_119C8E4();
  (*(void (__fastcall **)(int, int *, char *))(v2 + 16))(v2 + 4, &v9, &v11);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v11);
}


void __fastcall ActiveDirectoryAuthenticationScreenController::_handleAuthenticationPendingPresentation(ActiveDirectoryAuthenticationScreenController *this)
{
  ActiveDirectoryAuthenticationScreenController *v1; // r4@1
  int v2; // r1@2
  MinecraftScreenModel *v3; // r0@2
  int v4; // r5@4
  __int64 v5; // r2@5
  void *v6; // r0@5
  char *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  __int64 v11; // r2@13
  void *v12; // r0@13
  char *v13; // r0@14
  void *v14; // r0@19
  void *v15; // r0@20
  void *v16; // r0@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  unsigned int *v23; // r2@41
  signed int v24; // r1@43
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  unsigned int *v27; // r2@73
  signed int v28; // r1@75
  unsigned int *v29; // r2@77
  signed int v30; // r1@79
  int v31; // [sp+4h] [bp-44h]@23
  int v32; // [sp+Ch] [bp-3Ch]@19
  int v33; // [sp+10h] [bp-38h]@19
  int v34; // [sp+18h] [bp-30h]@13
  char *v35; // [sp+1Ch] [bp-2Ch]@13
  int v36; // [sp+20h] [bp-28h]@13
  int v37; // [sp+28h] [bp-20h]@5
  char *v38; // [sp+2Ch] [bp-1Ch]@5
  int v39; // [sp+30h] [bp-18h]@5

  v1 = this;
  if ( *((_BYTE *)this + 428) )
    return;
  *((_BYTE *)this + 428) = 1;
  v2 = MinecraftScreenModel::getActiveDirectoryIsLicensed(*((MinecraftScreenModel **)this + 95));
  v3 = (MinecraftScreenModel *)*((_DWORD *)v1 + 95);
  if ( v2 == 1 )
  {
    MinecraftScreenModel::setActiveDirectoryAuthenticationStateComplete(v3);
    j_j_j__ZN20MinecraftScreenModel21navigateToStartScreenEv(*((MinecraftScreenModel **)v1 + 95));
  }
  v4 = MinecraftScreenModel::getActiveDirectoryTrialsRemaining(v3);
  if ( MinecraftScreenModel::getActiveDirectoryIsNewUser(*((MinecraftScreenModel **)v1 + 95)) == 1 )
    sub_119C884((void **)&v37, "authentication.trialWecome");
    I18n::get((int *)&v38, (int **)&v37);
    LODWORD(v5) = v4 + 1;
    Util::format((Util *)&v39, v38, v5);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v1 + 106,
      &v39);
    v6 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = v38 - 12;
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v38 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    v8 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) == &dword_28898C0 )
      goto LABEL_16;
    v9 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      goto LABEL_54;
    goto LABEL_53;
  if ( v4 != 3 )
    if ( v4 <= -1 )
      sub_119C884((void **)&v32, "authentication.trialEnded");
      I18n::get(&v33, (int **)&v32);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v1 + 106,
        &v33);
      v14 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v33 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v14);
      v15 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v32 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      *((_BYTE *)v1 + 429) = 1;
    else
      MinecraftScreenModel::setActiveDirectoryAuthenticationStateComplete(*((MinecraftScreenModel **)v1 + 95));
      MinecraftScreenModel::navigateToStartScreen(*((MinecraftScreenModel **)v1 + 95));
    goto LABEL_22;
  sub_119C884((void **)&v34, "authentication.trialWarning");
  I18n::get((int *)&v35, (int **)&v34);
  LODWORD(v11) = 3;
  Util::format((Util *)&v36, v35, v11);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 106,
    &v36);
  v12 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v35 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v34 - 4);
LABEL_54:
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
LABEL_53:
    v10 = (*v9)--;
    goto LABEL_54;
LABEL_16:
  *((_BYTE *)v1 + 430) = 1;
LABEL_22:
  if ( *(_DWORD *)(*((_DWORD *)v1 + 106) - 12) )
    sub_119C884((void **)&v31, "trial_info");
    ActiveDirectoryAuthenticationScreenController::_openModalDialog((int)v1, (const void **)&v31);
    v16 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v31 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
}
