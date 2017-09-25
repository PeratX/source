

void __fastcall ViewBindTestScreenController::~ViewBindTestScreenController(ViewBindTestScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = ScreenController::~ScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall ViewBindTestScreenController::~ViewBindTestScreenController(ViewBindTestScreenController *this)
{
  ViewBindTestScreenController::~ViewBindTestScreenController(this);
}


_DWORD *__fastcall ViewBindTestScreenController::ViewBindTestScreenController(double a1)
{
  _DWORD *v1; // r4@1
  __int64 v2; // r1@1
  __int64 v3; // r1@1
  __int64 v4; // r1@5
  __int64 v5; // r1@5
  __int64 v6; // r1@9
  __int64 v7; // r1@9
  void *v9; // [sp+4h] [bp-7Ch]@9
  __int64 v10; // [sp+Ch] [bp-74h]@9
  void *v11; // [sp+14h] [bp-6Ch]@9
  __int64 v12; // [sp+1Ch] [bp-64h]@9
  int v13; // [sp+24h] [bp-5Ch]@9
  void *v14; // [sp+28h] [bp-58h]@5
  __int64 v15; // [sp+30h] [bp-50h]@5
  void *v16; // [sp+38h] [bp-48h]@5
  __int64 v17; // [sp+40h] [bp-40h]@5
  int v18; // [sp+48h] [bp-38h]@5
  void *v19; // [sp+4Ch] [bp-34h]@1
  __int64 v20; // [sp+54h] [bp-2Ch]@1
  void *v21; // [sp+5Ch] [bp-24h]@1
  __int64 v22; // [sp+64h] [bp-1Ch]@1
  int v23; // [sp+6Ch] [bp-14h]@1

  v1 = (_DWORD *)LODWORD(a1);
  ScreenController::ScreenController(a1);
  *v1 = &off_26D5A78;
  v23 = -2019513607;
  v21 = operator new(1u);
  LODWORD(v2) = std::_Function_base::_Base_manager<ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#1}>::_M_manager;
  HIDWORD(v2) = std::_Function_handler<std::string ()(void),ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#1}>::_M_invoke;
  v22 = v2;
  v19 = operator new(1u);
  LODWORD(v3) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v3) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v20 = v3;
  ScreenController::bindString((int)v1, &v23, (int)&v21, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  v18 = -1608189145;
  v16 = operator new(1u);
  LODWORD(v4) = std::_Function_base::_Base_manager<ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#2}>::_M_manager;
  HIDWORD(v4) = std::_Function_handler<bool ()(void),ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#2}>::_M_invoke;
  v17 = v4;
  v14 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v15 = v5;
  ScreenController::bindBool((int)v1, &v18, (int)&v16, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  v13 = 362245361;
  v11 = operator new(1u);
  LODWORD(v6) = std::_Function_base::_Base_manager<ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#3}>::_M_manager;
  HIDWORD(v6) = std::_Function_handler<bool ()(void),ViewBindTestScreenController::ViewBindTestScreenController(NameRegistry &)::{lambda(void)#3}>::_M_invoke;
  v12 = v6;
  v9 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v10 = v7;
  ScreenController::bindBool((int)v1, &v13, (int)&v11, (int)&v9);
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
  if ( (_DWORD)v12 )
    ((void (*)(void))v12)();
  return v1;
}
