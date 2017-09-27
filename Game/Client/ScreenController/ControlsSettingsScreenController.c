

void __fastcall ControlsSettingsScreenController::_resetKeyAtIndex(int a1, int a2, RemappingLayout *a3, unsigned int a4)
{
  ControlsSettingsScreenController::_resetKeyAtIndex(a1, a2, a3, a4);
}


signed int __fastcall ControlsSettingsScreenController::_handleResetBinding(ControlsSettingsScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  ControlsSettingsScreenController *v3; // r4@1
  int v4; // r0@2
  Json::Value *v5; // r6@4
  Json::Value *v6; // r5@11
  char *v7; // r1@12
  char *v8; // r0@14
  char *v9; // r0@18
  unsigned int *v11; // r2@20
  signed int v12; // r1@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  char *v15; // [sp+4h] [bp-2Ch]@9
  char *v16; // [sp+8h] [bp-28h]@12
  char v17; // [sp+10h] [bp-20h]@12

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *((_DWORD *)v3 + 137) = v4;
  sub_21E8AF4((int *)&v15, (int *)&Util::EMPTY_STRING);
  if ( Json::Value::isNull(v2)
    || Json::Value::isObject(v2) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_name"), Json::Value::isString(v6) != 1) )
    v16 = v15;
    v7 = (char *)&unk_28898CC;
    v15 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v16, (int)&v17, (int)v6);
    v7 = v15;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( sub_21E7D6C((const void **)&v16, "keyboard_collection") )
    ControlsSettingsScreenController::_resetKeyAtIndex(
      (int)v3,
      (int)v3 + 524,
      *((RemappingLayout **)v3 + 129),
      *((_DWORD *)v3 + 137));
      (int)v3 + 536,
      *((RemappingLayout **)v3 + 130),
  v9 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return 1;
}


signed int __fastcall ControlsSettingsScreenController::_resetAllBindingsToDefault(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1 OVERLAPPED
  _DWORD *v7; // [sp+0h] [bp-58h]@1
  __int64 v8; // [sp+8h] [bp-50h]@1
  void *v9; // [sp+10h] [bp-48h]@1
  int v10; // [sp+14h] [bp-44h]@1
  int v11; // [sp+18h] [bp-40h]@1
  int v12; // [sp+1Ch] [bp-3Ch]@1
  void *v13; // [sp+20h] [bp-38h]@1
  int v14; // [sp+24h] [bp-34h]@1
  int v15; // [sp+28h] [bp-30h]@1
  int v16; // [sp+2Ch] [bp-2Ch]@1
  void *v17; // [sp+30h] [bp-28h]@1
  void *v18; // [sp+34h] [bp-24h]@1
  void *v19; // [sp+38h] [bp-20h]@1
  void *v20; // [sp+3Ch] [bp-1Ch]@1
  int v21; // [sp+40h] [bp-18h]@1
  char v22; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v9 = &unk_28898CC;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &unk_28898CC;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = &unk_28898CC;
  v21 = 1;
  v22 = 0;
  sub_21E8190(&v13, "controllerLayoutScreen.confirmation.reset", (_BYTE *)0x29);
  sub_21E8190(&v9, "controllerLayoutScreen.resetAllBindings", (_BYTE *)0x27);
  sub_21E8190(&v18, "options.continue", (_BYTE *)0x10);
  sub_21E8190(&v20, "controllerLayoutScreen.cancel", (_BYTE *)0x1D);
  v4 = operator new(8u);
  LODWORD(v5) = sub_13BE52C;
  *v4 = v3;
  v4[1] = v2;
  HIDWORD(v5) = sub_13BE4B4;
  v7 = v4;
  v8 = v5;
  HIDWORD(v5) = &v7;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v9, *(__int64 *)((char *)&v5 + 4));
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v9);
  return 1;
}


void __fastcall ControlsSettingsScreenController::_registerBinds(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController *v1; // r4@1
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
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  void *v26; // [sp+8h] [bp-150h]@29
  __int64 v27; // [sp+10h] [bp-148h]@29
  _DWORD *v28; // [sp+18h] [bp-140h]@29
  __int64 v29; // [sp+20h] [bp-138h]@29
  int v30; // [sp+28h] [bp-130h]@29
  int v31; // [sp+2Ch] [bp-12Ch]@29
  void *v32; // [sp+30h] [bp-128h]@25
  __int64 v33; // [sp+38h] [bp-120h]@25
  _DWORD *v34; // [sp+40h] [bp-118h]@25
  __int64 v35; // [sp+48h] [bp-110h]@25
  int v36; // [sp+50h] [bp-108h]@25
  int v37; // [sp+54h] [bp-104h]@25
  void *v38; // [sp+58h] [bp-100h]@21
  __int64 v39; // [sp+60h] [bp-F8h]@21
  _DWORD *v40; // [sp+68h] [bp-F0h]@21
  __int64 v41; // [sp+70h] [bp-E8h]@21
  int v42; // [sp+78h] [bp-E0h]@21
  int v43; // [sp+7Ch] [bp-DCh]@21
  void *v44; // [sp+80h] [bp-D8h]@17
  __int64 v45; // [sp+88h] [bp-D0h]@17
  _DWORD *v46; // [sp+90h] [bp-C8h]@17
  __int64 v47; // [sp+98h] [bp-C0h]@17
  int v48; // [sp+A0h] [bp-B8h]@17
  void *v49; // [sp+A4h] [bp-B4h]@13
  __int64 v50; // [sp+ACh] [bp-ACh]@13
  _DWORD *v51; // [sp+B4h] [bp-A4h]@13
  __int64 v52; // [sp+BCh] [bp-9Ch]@13
  int v53; // [sp+C4h] [bp-94h]@13
  int v54; // [sp+C8h] [bp-90h]@13
  void *v55; // [sp+CCh] [bp-8Ch]@9
  __int64 v56; // [sp+D4h] [bp-84h]@9
  _DWORD *v57; // [sp+DCh] [bp-7Ch]@9
  __int64 v58; // [sp+E4h] [bp-74h]@9
  int v59; // [sp+ECh] [bp-6Ch]@9
  int v60; // [sp+F0h] [bp-68h]@9
  void *v61; // [sp+F4h] [bp-64h]@5
  __int64 v62; // [sp+FCh] [bp-5Ch]@5
  _DWORD *v63; // [sp+104h] [bp-54h]@5
  __int64 v64; // [sp+10Ch] [bp-4Ch]@5
  int v65; // [sp+114h] [bp-44h]@5
  int v66; // [sp+118h] [bp-40h]@5
  void *v67; // [sp+11Ch] [bp-3Ch]@1
  __int64 v68; // [sp+124h] [bp-34h]@1
  _DWORD *v69; // [sp+12Ch] [bp-2Ch]@1
  __int64 v70; // [sp+134h] [bp-24h]@1
  char v71; // [sp+13Ch] [bp-1Ch]@1

  v1 = this;
  StringHash::StringHash<char [25]>(&v71, (int)"#keyboard_grid_dimension");
  v2 = operator new(4u);
  LODWORD(v3) = sub_13BDC5E;
  *v2 = v1;
  HIDWORD(v3) = sub_13BDC36;
  v69 = v2;
  v70 = v3;
  v67 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v68 = v4;
  ScreenController::bindGridSize((int)v1, (int *)&v71, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  v66 = 1810999141;
  v65 = -1880014279;
  v5 = operator new(4u);
  LODWORD(v6) = sub_13BDCAC;
  *v5 = v1;
  HIDWORD(v6) = sub_13BDC94;
  v63 = v5;
  v64 = v6;
  v61 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v62 = v7;
  ScreenController::bindStringForCollection((int)v1, &v66, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = 1810999141;
  v59 = 1814996306;
  v8 = operator new(4u);
  LODWORD(v9) = sub_13BDCFE;
  *v8 = v1;
  HIDWORD(v9) = sub_13BDCE2;
  v57 = v8;
  v58 = v9;
  v55 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v56 = v10;
  ScreenController::bindStringForCollection((int)v1, &v60, &v59, (int)&v57, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  v54 = 1810999141;
  v53 = -1131353941;
  v11 = operator new(4u);
  LODWORD(v12) = sub_13BDD60;
  *v11 = v1;
  HIDWORD(v12) = sub_13BDD34;
  v51 = v11;
  v52 = v12;
  v49 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v50 = v13;
  ScreenController::bindStringForCollection((int)v1, &v54, &v53, (int)&v51, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  StringHash::StringHash<char [24]>(&v48, (int)"#gamepad_grid_dimension");
  v14 = operator new(4u);
  LODWORD(v15) = sub_13BDDBE;
  *v14 = v1;
  HIDWORD(v15) = sub_13BDD96;
  v46 = v14;
  v47 = v15;
  v44 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v45 = v16;
  ScreenController::bindGridSize((int)v1, &v48, (int)&v46, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  v42 = -1880014279;
  v43 = 15791681;
  v17 = operator new(4u);
  LODWORD(v18) = sub_13BDE0C;
  *v17 = v1;
  HIDWORD(v18) = sub_13BDDF4;
  v40 = v17;
  v41 = v18;
  v38 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v39 = v19;
  ScreenController::bindStringForCollection((int)v1, &v43, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  v36 = 1814996306;
  v37 = 15791681;
  v20 = operator new(4u);
  LODWORD(v21) = sub_13BDEE0;
  *v20 = v1;
  HIDWORD(v21) = sub_13BDE44;
  v34 = v20;
  v35 = v21;
  v32 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v33 = v22;
  ScreenController::bindStringForCollection((int)v1, &v37, &v36, (int)&v34, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  v30 = -1131353941;
  v31 = 15791681;
  v23 = operator new(4u);
  LODWORD(v24) = sub_13BDF42;
  *v23 = v1;
  HIDWORD(v24) = sub_13BDF16;
  v28 = v23;
  v29 = v24;
  v26 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v27 = v25;
  ScreenController::bindStringForCollection((int)v1, &v31, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
}


void __fastcall ControlsSettingsScreenController::_registerControllerCallbacks(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController::_registerControllerCallbacks(this);
}


const void **__fastcall ControlsSettingsScreenController::_getIconSpriteBindingText(void **a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r4@1
  _DWORD *v5; // r6@1
  void **v6; // r5@1
  const void **result; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_21E94B4(a1, (const char *)&unk_257BC67);
  result = (const void **)*(_BYTE *)(*v5 + 24 * v4 + 20);
  if ( *(_BYTE *)(*v5 + 24 * v4 + 20) )
    result = sub_21E8190(v6, ">   <", (_BYTE *)5);
  return result;
}


signed int __fastcall ControlsSettingsScreenController::_getBindingTypeByCollectionName(int a1, const void **a2)
{
  const void **v2; // r4@1
  signed int result; // r0@2
  int v4; // r1@3

  v2 = a2;
  if ( sub_21E7D6C(a2, "keyboard_collection") )
  {
    v4 = sub_21E7D6C(v2, "gamepad_collection");
    result = 0;
    if ( !v4 )
      result = 2;
  }
  else
    result = 1;
  return result;
}


int __fastcall ControlsSettingsScreenController::_registerEvents(ControlsSettingsScreenController *this)
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
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  _DWORD *v26; // r0@19
  __int64 v27; // r1@19
  int result; // r0@19
  unsigned int *v29; // r2@22
  signed int v30; // r1@24
  unsigned int *v31; // r2@26
  signed int v32; // r1@28
  unsigned int *v33; // r2@30
  signed int v34; // r1@32
  unsigned int *v35; // r2@34
  signed int v36; // r1@36
  unsigned int *v37; // r2@38
  signed int v38; // r1@40
  unsigned int *v39; // r2@42
  signed int v40; // r1@44
  _DWORD *v41; // [sp+4h] [bp-B4h]@19
  __int64 v42; // [sp+Ch] [bp-ACh]@19
  _DWORD *v43; // [sp+14h] [bp-A4h]@16
  __int64 v44; // [sp+1Ch] [bp-9Ch]@16
  int v45; // [sp+28h] [bp-90h]@16
  _DWORD *v46; // [sp+2Ch] [bp-8Ch]@13
  __int64 v47; // [sp+34h] [bp-84h]@13
  int v48; // [sp+40h] [bp-78h]@13
  _DWORD *v49; // [sp+44h] [bp-74h]@10
  __int64 v50; // [sp+4Ch] [bp-6Ch]@10
  int v51; // [sp+58h] [bp-60h]@10
  _DWORD *v52; // [sp+5Ch] [bp-5Ch]@7
  __int64 v53; // [sp+64h] [bp-54h]@7
  int v54; // [sp+70h] [bp-48h]@7
  _DWORD *v55; // [sp+74h] [bp-44h]@4
  __int64 v56; // [sp+7Ch] [bp-3Ch]@4
  int v57; // [sp+88h] [bp-30h]@4
  _DWORD *v58; // [sp+8Ch] [bp-2Ch]@1
  __int64 v59; // [sp+94h] [bp-24h]@1
  int v60; // [sp+A0h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v60, "button.binding_button");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v60);
  v3 = operator new(4u);
  LODWORD(v4) = sub_13BDF86;
  *v3 = v1;
  HIDWORD(v4) = sub_13BDF78;
  v58 = v3;
  v59 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v58);
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v5 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v29 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v57, "button.reset_binding");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v57);
  v7 = operator new(4u);
  LODWORD(v8) = sub_13BDFCA;
  *v7 = v1;
  HIDWORD(v8) = sub_13BDFBC;
  v55 = v7;
  v56 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v9 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v57 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v54, "button.reset_keyboard_bindings");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v54);
  v11 = operator new(4u);
  LODWORD(v12) = sub_13BE010;
  *v11 = v1;
  HIDWORD(v12) = sub_13BE000;
  v52 = v11;
  v53 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  v13 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v54 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v51, "button.reset_gamepad_bindings");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v51);
  v15 = operator new(4u);
  LODWORD(v16) = sub_13BE056;
  *v15 = v1;
  HIDWORD(v16) = sub_13BE046;
  v49 = v15;
  v50 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  v17 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v51 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v48, "button.reset_touch_bindings");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v48);
  v19 = operator new(4u);
  LODWORD(v20) = sub_13BE09C;
  *v19 = v1;
  HIDWORD(v20) = sub_13BE08C;
  v46 = v19;
  v47 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  v21 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v48 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v45, "navigation_tab");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v45);
  v23 = operator new(4u);
  LODWORD(v24) = sub_13BE108;
  *v23 = v1;
  HIDWORD(v24) = sub_13BE0D2;
  v43 = v23;
  v44 = v24;
  ScreenController::registerToggleChangeEventHandler((int)v1, v22, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v25 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v45 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = operator new(4u);
  LODWORD(v27) = sub_13BE18C;
  *v26 = v1;
  HIDWORD(v27) = sub_13BE13E;
  v41 = v26;
  v42 = v27;
  result = ScreenController::registerRawInputEventHandler((int)v1, (int)&v41);
  if ( (_DWORD)v42 )
    result = ((int (*)(void))v42)();
  return result;
}


void __fastcall ControlsSettingsScreenController::_generateBindingInfo(int a1, int a2, RemappingLayout *this, int a4, int a5, char a6)
{
  ControlsSettingsScreenController::_generateBindingInfo(a1, a2, this, a4, a5, a6);
}


int __fastcall ControlsSettingsScreenController::_updateAsActiveBindingText(int a1, int a2)
{
  _DWORD *v2; // r3@1
  int result; // r0@3

  v2 = (_DWORD *)(a1 + 536);
  if ( a2 == 2 )
    v2 = (_DWORD *)(a1 + 524);
  result = *v2 + 24 * *(_DWORD *)(a1 + 548);
  *(_BYTE *)(result + 20) = 1;
  return result;
}


void __fastcall ControlsSettingsScreenController::setUpCallbacksForFloatInputOption(int a1, unsigned int a2, unsigned int a3, const void **a4)
{
  ControlsSettingsScreenController::setUpCallbacksForFloatInputOption(a1, a2, a3, a4);
}


void __fastcall ControlsSettingsScreenController::_registerBinds(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController::_registerBinds(this);
}


int *__fastcall ControlsSettingsScreenController::_getIconSprite(int *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // r1@1
  int *result; // r0@2

  v5 = *a3 + 24 * a4;
  if ( *(_BYTE *)(v5 + 20) )
    result = (int *)(*(int (__fastcall **)(int *))(*(_DWORD *)a5 + 24))(a1);
  else
    result = sub_21E8AF4(a1, (int *)(v5 + 4));
  return result;
}


signed int __fastcall ControlsSettingsScreenController::_handleGamepadRawInputEvent(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@2
  int v5; // r0@2
  int v6; // r2@2
  Keymapping *v7; // r8@2
  int v8; // r1@2
  Keymapping *v9; // r0@2
  const void **v10; // r0@3
  void (__fastcall *v11)(int, int, int, _DWORD); // r7@4
  int v12; // r0@4
  int v13; // r6@4
  __int64 v14; // r0@4
  char *v15; // r0@4
  int v16; // r3@4
  int v17; // r5@4
  int v18; // r7@4
  signed int result; // r0@11
  int v20; // [sp+0h] [bp-28h]@0
  int v21; // [sp+4h] [bp-24h]@4
  int v22; // [sp+8h] [bp-20h]@4

  v2 = a2;
  v3 = a1;
  if ( !*(_BYTE *)(a2 + 6)
    || (v4 = *(_DWORD *)(a1 + 516),
        v5 = RemappingLayout::getKeymappingByIndex(*(RemappingLayout **)(a1 + 516), *(_DWORD *)(a1 + 548)),
        v6 = *(_BYTE *)(v2 + 4),
        v7 = (Keymapping *)v5,
        v8 = *(_DWORD *)v2,
        (v9 = RemappingLayout::getKeyMappingByRawInput(v4)) != 0)
    && (v10 = (const void **)Keymapping::getAction(v9), Remapping::allowRemap(v10) != 1) )
  {
    result = 0;
  }
  else
    v11 = *(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v4 + 8);
    v12 = Keymapping::getAction(v7);
    v11(v4, v12, *(_DWORD *)v2, *(_BYTE *)(v2 + 4));
    v13 = *(_DWORD *)(v3 + 516);
    LODWORD(v14) = &v21;
    HIDWORD(v14) = *(_DWORD *)(v3 + 516);
    RemappingLayout::generateIndicesOfDuplicates(v14);
    v18 = v22;
    v17 = v21;
    if ( v21 != v22 )
    {
      do
      {
        v15 = *(char **)(v3 + 548);
        if ( *(char **)v17 != v15 )
          v15 = RemappingLayout::unassignKey(v13, *(_DWORD *)v17, *(_DWORD *)(v17 + 4));
        v17 += 8;
      }
      while ( v18 != v17 );
      v17 = v21;
    }
    if ( v17 )
      operator delete((void *)v17);
    ControlsSettingsScreenController::_generateBindingInfo(
      (int)v15,
      v3 + 524,
      *(RemappingLayout **)(v3 + 516),
      v16,
      v20,
      v21);
    result = 1;
  return result;
}


void __fastcall ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption(int a1, int a2, int a3, const void **a4)
{
  ScreenController *v4; // r8@1
  const void **v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r7@1
  const void **v10; // r0@1
  _DWORD *v11; // r0@1
  __int64 v12; // r1@1
  _DWORD *v13; // r0@1
  __int64 v14; // r1@1
  _DWORD *v15; // r0@1
  __int64 v16; // r1@1
  char *v17; // r0@7
  char *v18; // r0@8
  char *v19; // r0@9
  unsigned int *v20; // r2@11
  signed int v21; // r1@13
  unsigned int *v22; // r2@15
  signed int v23; // r1@17
  unsigned int *v24; // r2@19
  signed int v25; // r1@21
  _DWORD *v26; // [sp+10h] [bp-58h]@1
  __int64 v27; // [sp+18h] [bp-50h]@1
  _DWORD *v28; // [sp+20h] [bp-48h]@1
  __int64 v29; // [sp+28h] [bp-40h]@1
  _DWORD *v30; // [sp+30h] [bp-38h]@1
  __int64 v31; // [sp+38h] [bp-30h]@1
  char *v32; // [sp+40h] [bp-28h]@1
  char *v33; // [sp+44h] [bp-24h]@1
  char *v34; // [sp+48h] [bp-20h]@1

  v4 = (ScreenController *)a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v9 = Options::get(v8, v7);
  v34 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v34, *((_DWORD *)*v5 - 3) + 1);
  sub_21E7408((const void **)&v34, "#", 1u);
  sub_21E72F0((const void **)&v34, v5);
  v32 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v32, *((_DWORD *)*v5 - 3) + 1);
  sub_21E7408((const void **)&v32, "#", 1u);
  sub_21E72F0((const void **)&v32, v5);
  v10 = sub_21E7408((const void **)&v32, "_enabled", 8u);
  v33 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = operator new(4u);
  LODWORD(v12) = sub_13BDB76;
  *v11 = v9;
  HIDWORD(v12) = sub_13BDB6E;
  v30 = v11;
  v31 = v12;
  v13 = operator new(8u);
  LODWORD(v14) = sub_13BDBB6;
  *v13 = v9;
  v13[1] = v6;
  HIDWORD(v14) = sub_13BDBAC;
  v28 = v13;
  v29 = v14;
  v15 = operator new(8u);
  LODWORD(v16) = sub_13BDBFC;
  *v15 = v9;
  v15[1] = v6;
  HIDWORD(v16) = sub_13BDBF0;
  v26 = v15;
  v27 = v16;
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(
    v4,
    (int **)v5,
    (const char **)&v34,
    (const char **)&v33,
    (int)&v30,
    (int)&v28,
    (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  v17 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  }
  v18 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v32 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v34 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


void __fastcall ControlsSettingsScreenController::onTerminate(ControlsSettingsScreenController *this)
{
  j_j_j__ZN20MinecraftScreenModel10rebindKeysEv(*((MinecraftScreenModel **)this + 106));
}


void __fastcall ControlsSettingsScreenController::onTerminate(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController::onTerminate(this);
}


void __fastcall ControlsSettingsScreenController::setUpCallbacksForFloatInputOption(int a1, unsigned int a2, unsigned int a3, const void **a4)
{
  ScreenController *v4; // r8@1
  const void **v5; // r4@1
  unsigned __int64 v6; // r6@1
  int v7; // r0@1
  const void **v8; // r0@1
  const void **v9; // r0@1
  _DWORD *v10; // r0@1
  __int64 v11; // r1@1
  _DWORD *v12; // r0@1
  __int64 v13; // r1@1
  _QWORD *v14; // r0@1
  __int64 v15; // r1@1
  _QWORD *v16; // r0@1
  __int64 v17; // r1@1
  _DWORD *v18; // r0@1
  __int64 v19; // r1@1
  _DWORD *v20; // r0@1
  char *v21; // r0@17
  char *v22; // r0@18
  char *v23; // r0@19
  char *v24; // r0@20
  char *v25; // r0@21
  unsigned int *v26; // r2@23
  signed int v27; // r1@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  char v36; // [sp+28h] [bp-A0h]@2
  void (*v37)(void); // [sp+30h] [bp-98h]@1
  int v38; // [sp+34h] [bp-94h]@2
  _DWORD *v39; // [sp+38h] [bp-90h]@1
  void (*v40)(void); // [sp+40h] [bp-88h]@1
  int (__fastcall *v41)(Option ***); // [sp+44h] [bp-84h]@1
  _DWORD *v42; // [sp+48h] [bp-80h]@1
  __int64 v43; // [sp+50h] [bp-78h]@1
  _QWORD *v44; // [sp+58h] [bp-70h]@1
  __int64 v45; // [sp+60h] [bp-68h]@1
  _QWORD *v46; // [sp+68h] [bp-60h]@1
  __int64 v47; // [sp+70h] [bp-58h]@1
  _DWORD *v48; // [sp+78h] [bp-50h]@1
  __int64 v49; // [sp+80h] [bp-48h]@1
  _DWORD *v50; // [sp+88h] [bp-40h]@1
  __int64 v51; // [sp+90h] [bp-38h]@1
  char *v52; // [sp+98h] [bp-30h]@1
  char *v53; // [sp+9Ch] [bp-2Ch]@1
  char *v54; // [sp+A0h] [bp-28h]@1
  char *v55; // [sp+A4h] [bp-24h]@1
  char *v56; // [sp+A8h] [bp-20h]@1

  v4 = (ScreenController *)a1;
  v5 = a4;
  v6 = __PAIR__(a3, a2);
  v7 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  LODWORD(v6) = Options::get(v7, v6);
  v56 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v56, *((_DWORD *)*v5 - 3) + 1);
  sub_21E7408((const void **)&v56, "#", 1u);
  sub_21E72F0((const void **)&v56, v5);
  v54 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v54, *((_DWORD *)*v5 - 3) + 1);
  sub_21E7408((const void **)&v54, "#", 1u);
  sub_21E72F0((const void **)&v54, v5);
  v8 = sub_21E7408((const void **)&v54, "_enabled", 8u);
  v55 = (char *)*v8;
  *v8 = &unk_28898CC;
  v52 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v52, *((_DWORD *)*v5 - 3) + 1);
  sub_21E7408((const void **)&v52, "#", 1u);
  sub_21E72F0((const void **)&v52, v5);
  v9 = sub_21E7408((const void **)&v52, "_slider_label", 0xDu);
  v53 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = operator new(4u);
  LODWORD(v11) = sub_13BD9F4;
  *v10 = v6;
  HIDWORD(v11) = sub_13BD9DE;
  v50 = v10;
  v51 = v11;
  v12 = operator new(4u);
  LODWORD(v13) = sub_13BDA32;
  *v12 = v6;
  HIDWORD(v13) = sub_13BDA2A;
  v48 = v12;
  v49 = v13;
  v14 = operator new(8u);
  LODWORD(v15) = sub_13BDA72;
  *v14 = v6;
  HIDWORD(v15) = sub_13BDA68;
  v46 = v14;
  v47 = v15;
  v16 = operator new(8u);
  LODWORD(v17) = sub_13BDAB8;
  *v16 = v6;
  HIDWORD(v17) = sub_13BDAAC;
  v44 = v16;
  v45 = v17;
  v18 = operator new(4u);
  LODWORD(v19) = sub_13BDAFA;
  *v18 = v6;
  HIDWORD(v19) = sub_13BDAF2;
  v42 = v18;
  v43 = v19;
  v20 = operator new(4u);
  *v20 = v6;
  v39 = v20;
  v41 = sub_13BDB30;
  v40 = (void (*)(void))sub_13BDB38;
  v37 = 0;
  if ( *(_DWORD *)&algn_27DD648[4] )
  {
    (*(void (__fastcall **)(char *, _DWORD *, signed int))&algn_27DD648[4])(
      &v36,
      &SettingsScreenControllerBase::defaultProgressSliderOptionLabeller,
      2);
    v38 = *(_DWORD *)&algn_27DD648[8];
    v37 = *(void (**)(void))&algn_27DD648[4];
  }
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(
    v4,
    (int **)v5,
    (int **)&v56,
    (const char **)&v55,
    (const char **)&v53,
    (int)&v50,
    (int)&v48,
    (int)&v46,
    (int)&v44,
    (int)&v42,
    (int)&v39,
    (int *)&SettingsScreenControllerBase::defaultOptionFormat,
    (int)&v36);
  if ( v37 )
    v37();
  if ( v40 )
    v40();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v21 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v52 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v55 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v54 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v56 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
}


void __fastcall ControlsSettingsScreenController::_resetKeyAtIndex(int a1, int a2, RemappingLayout *a3, unsigned int a4)
{
  RemappingLayout *v4; // r4@1
  int v5; // r8@1
  int v6; // r6@1
  __int64 v7; // r0@1
  char *v8; // r0@1
  int v9; // r3@1
  int v10; // r5@1
  int v11; // r7@1
  int v12; // [sp+0h] [bp-28h]@0
  int v13; // [sp+4h] [bp-24h]@1
  int v14; // [sp+8h] [bp-20h]@1

  v4 = a3;
  v5 = a2;
  v6 = a1;
  RemappingLayout::defaultKeyAtIndex(a3, a4);
  LODWORD(v7) = &v13;
  HIDWORD(v7) = v4;
  RemappingLayout::generateIndicesOfDuplicates(v7);
  v10 = v14;
  v11 = v13;
  if ( v13 != v14 )
  {
    do
    {
      v8 = *(char **)(v6 + 548);
      if ( *(char **)v11 != v8 )
        v8 = RemappingLayout::unassignKey((int)v4, *(_DWORD *)v11, *(_DWORD *)(v11 + 4));
      v11 += 8;
    }
    while ( v10 != v11 );
    v11 = v13;
  }
  if ( v11 )
    operator delete((void *)v11);
  ControlsSettingsScreenController::_generateBindingInfo((int)v8, v5, v4, v9, v12, v13);
}


signed int __fastcall ControlsSettingsScreenController::_handleBindingButtonEvent(ControlsSettingsScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  ControlsSettingsScreenController *v3; // r4@1
  int v4; // r0@2
  Json::Value *v5; // r6@4
  Json::Value *v6; // r5@11
  char *v7; // r1@12
  char *v8; // r0@14
  int v9; // r0@15
  signed int v10; // r1@15
  int v11; // r0@16
  ControlsSettingsScreenController *v12; // r2@18
  char *v13; // r0@20
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  char *v19; // [sp+4h] [bp-2Ch]@9
  char *v20; // [sp+8h] [bp-28h]@12
  char v21; // [sp+10h] [bp-20h]@12

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  *((_DWORD *)v3 + 137) = v4;
  sub_21E8AF4((int *)&v19, (int *)&Util::EMPTY_STRING);
  if ( Json::Value::isNull(v2)
    || Json::Value::isObject(v2) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_name"), Json::Value::isString(v6) != 1) )
    v20 = v19;
    v7 = (char *)&unk_28898CC;
    v19 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as((int *)&v20, (int)&v21, (int)v6);
    v7 = v19;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = sub_21E7D6C((const void **)&v20, "keyboard_collection");
  v10 = 1;
  if ( v9 )
    v11 = sub_21E7D6C((const void **)&v20, "gamepad_collection");
    v10 = 0;
    if ( !v11 )
      v10 = 2;
  v12 = (ControlsSettingsScreenController *)((char *)v3 + 536);
  if ( v10 == 2 )
    v12 = (ControlsSettingsScreenController *)((char *)v3 + 524);
  *(_BYTE *)(*(_DWORD *)v12 + 24 * *((_DWORD *)v3 + 137) + 20) = 1;
  MinecraftScreenModel::setInputBindingMode(*((_DWORD *)v3 + 106));
  v13 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return 1;
}


void __fastcall ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption(int a1, int a2, int a3, const void **a4)
{
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption(a1, a2, a3, a4);
}


void __fastcall ControlsSettingsScreenController::~ControlsSettingsScreenController(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E7CCC;
  std::vector<ControlsSettingsScreenController::BindingInfo,std::allocator<ControlsSettingsScreenController::BindingInfo>>::~vector((int *)this + 134);
  std::vector<ControlsSettingsScreenController::BindingInfo,std::allocator<ControlsSettingsScreenController::BindingInfo>>::~vector((int *)v1 + 131);
  SettingsScreenControllerBase::~SettingsScreenControllerBase(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall ControlsSettingsScreenController::_generateBindingInfo(int a1, int a2, RemappingLayout *this, int a4, int a5, char a6)
{
  int v6; // r9@1
  RemappingLayout *v7; // r8@1
  __int64 v8; // kr00_8@1
  int v9; // r7@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  void *v14; // r0@19
  int v15; // r1@21
  void *v16; // r0@21
  int *v17; // r0@22
  unsigned int v18; // r6@24
  unsigned int v19; // r11@25
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  Keymapping *v22; // r0@34
  Keymapping *v23; // r10@34
  int *v24; // r0@34
  __int64 v25; // r0@34
  void *v26; // r0@35
  __int64 v27; // r0@36
  char *v28; // r0@42
  char *v29; // r0@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  unsigned int *v32; // r2@49
  signed int v33; // r1@51
  int v34; // [sp+Ch] [bp-44h]@26
  char *v35; // [sp+10h] [bp-40h]@24
  char *v36; // [sp+14h] [bp-3Ch]@24
  void *ptr; // [sp+18h] [bp-38h]@24
  void *v38; // [sp+1Ch] [bp-34h]@24
  int v39; // [sp+20h] [bp-30h]@24
  char v40; // [sp+24h] [bp-2Ch]@36

  v6 = a2;
  v7 = this;
  v8 = *(_QWORD *)a2;
  if ( HIDWORD(v8) != (_DWORD)v8 )
  {
    v9 = v8;
    do
    {
      v14 = *(void **)(v9 + 8);
      if ( v14 )
        operator delete(v14);
      v15 = *(_DWORD *)(v9 + 4);
      v16 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v16);
      }
      v17 = (int *)(*(_DWORD *)v9 - 12);
      if ( v17 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v9 += 24;
    }
    while ( v9 != HIDWORD(v8) );
  }
  *(_DWORD *)(v6 + 4) = v8;
  v18 = RemappingLayout::getNumKeymappings(v7);
  v35 = (char *)&unk_28898CC;
  v36 = (char *)&unk_28898CC;
  ptr = 0;
  v38 = 0;
  v39 = 0;
  if ( v18 )
    v19 = 0;
      v22 = (Keymapping *)RemappingLayout::getKeymappingByIndex(v7, v19);
      v23 = v22;
      v24 = (int *)Keymapping::getAction(v22);
      EntityInteraction::setInteractText((int *)&v35, v24);
      HIDWORD(v25) = Keymapping::getKeys(v23);
      LODWORD(v25) = &ptr;
      std::vector<int,std::allocator<int>>::operator=(v25);
      if ( ptr != v38 )
        (*(void (__fastcall **)(int *, RemappingLayout *, _DWORD))(*(_DWORD *)v7 + 24))(&v34, v7, *(_DWORD *)ptr);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v36,
          &v34);
        v26 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v34 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
      v40 = 0;
      v27 = *(_QWORD *)(v6 + 4);
      if ( (_DWORD)v27 == HIDWORD(v27) )
        std::vector<ControlsSettingsScreenController::BindingInfo,std::allocator<ControlsSettingsScreenController::BindingInfo>>::_M_emplace_back_aux<ControlsSettingsScreenController::BindingInfo const&>(
          (unsigned __int64 *)v6,
          (int *)&v35);
      else
        ControlsSettingsScreenController::BindingInfo::BindingInfo((int *)v27, (int *)&v35);
        *(_DWORD *)(v6 + 4) += 24;
      ++v19;
    while ( v19 < v18 );
    if ( ptr )
      operator delete(ptr);
  v28 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v35 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


void __fastcall ControlsSettingsScreenController::_handleKeyboardRawInputEvent(int a1, int a2)
{
  ControlsSettingsScreenController::_handleKeyboardRawInputEvent(a1, a2);
}


void __fastcall ControlsSettingsScreenController::_handleDuplicates(__int64 this)
{
  int v1; // r6@1
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r7@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  LODWORD(this) = &v5;
  v2 = HIDWORD(this);
  RemappingLayout::generateIndicesOfDuplicates(this);
  v4 = v6;
  v3 = v5;
  if ( v5 != v6 )
  {
    do
    {
      if ( *(_DWORD *)v3 != *(_DWORD *)(v1 + 548) )
        RemappingLayout::unassignKey(v2, *(_DWORD *)v3, *(_DWORD *)(v3 + 4));
      v3 += 8;
    }
    while ( v4 != v3 );
    v3 = v5;
  }
  if ( v3 )
    operator delete((void *)v3);
}


void __fastcall ControlsSettingsScreenController::_handleKeyboardRawInputEvent(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  RemappingLayout *v4; // r5@1
  unsigned int v5; // r1@1
  int v6; // r0@3
  int v7; // r2@3
  Keymapping *v8; // r8@3
  int v9; // r1@3
  Keymapping *v10; // r0@3
  const void **v11; // r0@4
  void (__fastcall *v12)(RemappingLayout *, int, int, _DWORD); // r7@5
  int v13; // r0@5
  int v14; // r6@6
  __int64 v15; // r0@6
  char *v16; // r0@6
  int v17; // r3@6
  int v18; // r5@6
  int v19; // r7@6
  int v20; // [sp+0h] [bp-28h]@0
  int v21; // [sp+4h] [bp-24h]@6
  int v22; // [sp+8h] [bp-20h]@6

  v2 = a1;
  v3 = a2;
  v4 = *(RemappingLayout **)(a1 + 520);
  v5 = *(_DWORD *)(a1 + 548);
  if ( *(_DWORD *)v3 == 27 )
  {
    RemappingLayout::unassignKeyAtIndex(v4, v5);
  }
  else
    v6 = RemappingLayout::getKeymappingByIndex(v4, v5);
    v7 = *(_BYTE *)(v3 + 4);
    v8 = (Keymapping *)v6;
    v9 = *(_DWORD *)v3;
    v10 = RemappingLayout::getKeyMappingByRawInput((int)v4);
    if ( v10 )
    {
      v11 = (const void **)Keymapping::getAction(v10);
      if ( Remapping::allowRemap(v11) != 1 )
        return;
    }
    v12 = *(void (__fastcall **)(RemappingLayout *, int, int, _DWORD))(*(_DWORD *)v4 + 8);
    v13 = Keymapping::getAction(v8);
    v12(v4, v13, *(_DWORD *)v3, *(_BYTE *)(v3 + 4));
  v14 = *(_DWORD *)(v2 + 520);
  LODWORD(v15) = &v21;
  HIDWORD(v15) = *(_DWORD *)(v2 + 520);
  RemappingLayout::generateIndicesOfDuplicates(v15);
  v19 = v22;
  v18 = v21;
  if ( v21 != v22 )
    do
      v16 = *(char **)(v2 + 548);
      if ( *(char **)v18 != v16 )
        v16 = RemappingLayout::unassignKey(v14, *(_DWORD *)v18, *(_DWORD *)(v18 + 4));
      v18 += 8;
    while ( v19 != v18 );
    v18 = v21;
  if ( v18 )
    operator delete((void *)v18);
  ControlsSettingsScreenController::_generateBindingInfo(
    (int)v16,
    v2 + 536,
    *(RemappingLayout **)(v2 + 520),
    v17,
    v20,
    v21);
}


signed int __fastcall ControlsSettingsScreenController::_bindRawInputEvent(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a2 + 5) != 1 )
    return 0;
  if ( MinecraftScreenModel::isInputModeMouse(*(MinecraftScreenModel **)(a1 + 424)) == 1 )
  {
    ControlsSettingsScreenController::_handleKeyboardRawInputEvent(v3, v2);
  }
  else if ( MinecraftScreenModel::isInputModeGamepad(*(MinecraftScreenModel **)(v3 + 424)) == 1
         && ControlsSettingsScreenController::_handleGamepadRawInputEvent(v3, v2) != 1 )
    return 1;
  MinecraftScreenModel::setInputBindingMode(*(_DWORD *)(v3 + 424));
  return 1;
}


_QWORD *__fastcall ControlsSettingsScreenController::_getBindingGridDimension(_QWORD *result, int a2, _QWORD *a3)
{
  int v3; // r1@1 OVERLAPPED
  int v4; // r2@1 OVERLAPPED
  signed int v5; // r1@2 OVERLAPPED
  int v6; // r2@2 OVERLAPPED

  *(_QWORD *)&v3 = *a3;
  if ( v4 == v3 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
    v6 = -1431655765 * ((v4 - v3) >> 3);
    v5 = 1;
  *result = *(_QWORD *)&v5;
  return result;
}


ControlsSettingsScreenController *__fastcall ControlsSettingsScreenController::ControlsSettingsScreenController(ControlsSettingsScreenController *a1, int a2)
{
  MinecraftScreenModel **v2; // r5@1
  ControlsSettingsScreenController *v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r6@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r7@14
  unsigned int v11; // r0@16
  MinecraftScreenModel *v12; // r6@21
  void *v13; // r0@22
  int v14; // r0@24
  int v15; // r0@24
  int v16; // r3@24
  int v17; // r0@24
  int v18; // r3@24
  int v19; // ST00_4@24
  int v21; // [sp+0h] [bp-20h]@0
  char v22[4]; // [sp+4h] [bp-1Ch]@1
  int v23; // [sp+8h] [bp-18h]@1

  v2 = (MinecraftScreenModel **)a2;
  v3 = a1;
  *(_DWORD *)v22 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v23 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  SettingsScreenControllerBase::SettingsScreenControllerBase((int)v3, (int)v22);
  v7 = v23;
  if ( v23 )
    v8 = (unsigned int *)(v23 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  *(_DWORD *)v3 = &off_26E7CCC;
  v12 = *v2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v13 = &ServiceLocator<AppPlatform>::mDefaultService;
  v14 = (*(int (**)(void))(**(_DWORD **)v13 + 460))();
  *((_DWORD *)v3 + 129) = MinecraftScreenModel::getGamepadRemappingLayout((int)v12, v14);
  *((_QWORD *)v3 + 65) = (unsigned int)MinecraftScreenModel::getKeyboardRemappingLayout(*v2);
  *((_DWORD *)v3 + 132) = 0;
  *((_DWORD *)v3 + 133) = 0;
  *((_DWORD *)v3 + 134) = 0;
  *((_DWORD *)v3 + 135) = 0;
  *((_DWORD *)v3 + 136) = 0;
  v15 = (*(int (__fastcall **)(ControlsSettingsScreenController *))(*(_DWORD *)v3 + 132))(v3);
  ControlsSettingsScreenController::_generateBindingInfo(
    v15,
    (int)v3 + 524,
    *((RemappingLayout **)v3 + 129),
    v16,
    v21,
    v22[0]);
    v17,
    (int)v3 + 536,
    *((RemappingLayout **)v3 + 130),
    v18,
    v19,
  ControlsSettingsScreenController::_registerBinds(v3);
  ControlsSettingsScreenController::_registerEvents(v3);
  MinecraftScreenController::_setExitBehavior((int)v3, 3);
  return v3;
}


void __fastcall ControlsSettingsScreenController::~ControlsSettingsScreenController(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController::~ControlsSettingsScreenController(this);
}


SettingsScreenControllerBase *__fastcall ControlsSettingsScreenController::~ControlsSettingsScreenController(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E7CCC;
  std::vector<ControlsSettingsScreenController::BindingInfo,std::allocator<ControlsSettingsScreenController::BindingInfo>>::~vector((int *)this + 134);
  std::vector<ControlsSettingsScreenController::BindingInfo,std::allocator<ControlsSettingsScreenController::BindingInfo>>::~vector((int *)v1 + 131);
  return j_j_j__ZN28SettingsScreenControllerBaseD2Ev(v1);
}


int __fastcall ControlsSettingsScreenController::_handleToggleChanging(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r3@1
  RemappingLayout *v4; // r2@2
  int v5; // r1@2
  int v7; // [sp+0h] [bp-8h]@0
  char v8; // [sp+4h] [bp-4h]@0

  v1 = this;
  v2 = MinecraftScreenModel::isInputModeGamepad(*((MinecraftScreenModel **)this + 106));
  if ( v2 == 1 )
  {
    v4 = (RemappingLayout *)*((_DWORD *)v1 + 129);
    v5 = (int)v1 + 524;
  }
  else
    v4 = (RemappingLayout *)*((_DWORD *)v1 + 130);
    v5 = (int)v1 + 536;
  ControlsSettingsScreenController::_generateBindingInfo(v2, v5, v4, v3, v7, v8);
  MinecraftScreenModel::setInputBindingMode(*((_DWORD *)v1 + 106));
  return 0;
}


signed int __fastcall ControlsSettingsScreenController::_mapRawInputToLayout(int a1, RemappingLayout *a2, unsigned int a3, int a4)
{
  RemappingLayout *v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r2@1
  Keymapping *v8; // r6@1
  int v9; // r1@1
  Keymapping *v10; // r0@1
  const void **v11; // r0@2
  void (__fastcall *v12)(RemappingLayout *, int, int, _DWORD); // r7@3
  int v13; // r0@3
  signed int result; // r0@3

  v4 = a2;
  v5 = a4;
  v6 = RemappingLayout::getKeymappingByIndex(a2, a3);
  v7 = *(_BYTE *)(v5 + 4);
  v8 = (Keymapping *)v6;
  v9 = *(_DWORD *)v5;
  v10 = RemappingLayout::getKeyMappingByRawInput((int)v4);
  if ( v10 && (v11 = (const void **)Keymapping::getAction(v10), Remapping::allowRemap(v11) != 1) )
  {
    result = 0;
  }
  else
    v12 = *(void (__fastcall **)(RemappingLayout *, int, int, _DWORD))(*(_DWORD *)v4 + 8);
    v13 = Keymapping::getAction(v8);
    v12(v4, v13, *(_DWORD *)v5, *(_BYTE *)(v5 + 4));
    result = 1;
  return result;
}


int *__fastcall ControlsSettingsScreenController::BindingInfo::BindingInfo(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  __int64 v4; // r0@1
  char *v5; // r7@1
  signed int v6; // r0@1
  unsigned int v7; // r6@1
  __int64 v8; // kr00_8@4
  int v9; // r6@4

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v3 + 1, v2 + 1);
  v4 = *((_QWORD *)v2 + 1);
  v5 = 0;
  v3[2] = 0;
  v3[3] = 0;
  v6 = HIDWORD(v4) - v4;
  v3[4] = 0;
  v7 = v6 >> 2;
  if ( v6 >> 2 )
  {
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v5 = (char *)operator new(v6);
  }
  v3[2] = (int)v5;
  v3[3] = (int)v5;
  v3[4] = (int)&v5[4 * v7];
  v8 = *((_QWORD *)v2 + 1);
  v9 = (HIDWORD(v8) - (signed int)v8) >> 2;
  if ( 0 != v9 )
    _aeabi_memmove4(v5, v8);
  v3[3] = (int)&v5[4 * v9];
  *((_BYTE *)v3 + 20) = *((_BYTE *)v2 + 20);
  return v3;
}


void __fastcall ControlsSettingsScreenController::_prepareBindings(ControlsSettingsScreenController *this, int a2, int a3, int a4, int a5, char a6)
{
  ControlsSettingsScreenController *v6; // r4@1
  int v7; // r0@1
  int v8; // r3@1
  int v9; // [sp+0h] [bp-8h]@0
  char v10; // [sp+4h] [bp-4h]@0

  v6 = this;
  ControlsSettingsScreenController::_generateBindingInfo(
    (int)this,
    (int)this + 524,
    *((RemappingLayout **)this + 129),
    a4,
    v9,
    v10);
  j_j_j__ZN32ControlsSettingsScreenController20_generateBindingInfoERSt6vectorINS_11BindingInfoESaIS1_EER15RemappingLayout(
    v7,
    (int)v6 + 536,
    *((RemappingLayout **)v6 + 130),
    v8,
    a5,
    a6);
}


signed int __fastcall ControlsSettingsScreenController::canExit(ControlsSettingsScreenController *this)
{
  MinecraftScreenModel::setInputBindingMode(*((_DWORD *)this + 106));
  return 1;
}


int __fastcall ControlsSettingsScreenController::_getBindingText(int *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int *v5; // r11@1
  int v6; // r6@1
  int v7; // r7@1
  int *v8; // r7@1
  int *v9; // t1@1
  int v10; // r2@1
  void *v11; // r0@1
  int result; // r0@2
  _DWORD *v13; // r6@2
  int v14; // t1@2
  int v15; // r9@3
  unsigned int *v16; // r2@4
  signed int v17; // r1@6
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  int v20; // r2@20
  const void **v21; // r0@20
  char *v22; // r0@20
  void *v23; // r0@21
  unsigned int *v24; // r2@24
  signed int v25; // r1@26
  int v26; // [sp+8h] [bp-48h]@8
  char *v27; // [sp+Ch] [bp-44h]@4
  int v28; // [sp+10h] [bp-40h]@1
  _DWORD *v29; // [sp+14h] [bp-3Ch]@1
  int *v30; // [sp+18h] [bp-38h]@1
  int v31; // [sp+1Ch] [bp-34h]@1
  int v32; // [sp+20h] [bp-30h]@1
  int v33; // [sp+24h] [bp-2Ch]@1

  v5 = a1;
  v33 = a4;
  v29 = a3;
  *a1 = (int)&unk_28898CC;
  v30 = &v33;
  v31 = a5;
  v32 = a2;
  v6 = *a3 + 24 * a4;
  v7 = *a3 + 24 * a4;
  v9 = *(int **)(v7 + 8);
  v8 = (int *)(v7 + 8);
  v10 = *v9;
  sub_13BCB30((const void **)&v28, (int)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v28);
  v11 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  result = *v8;
  v14 = *(_DWORD *)(v6 + 12);
  v13 = (_DWORD *)(v6 + 12);
  if ( v14 - *v8 >= 5 )
    v15 = 1;
    do
      v20 = *(_DWORD *)(result + 4 * v15);
      sub_13BCB30((const void **)&v26, (int)&v29);
      v21 = sub_21E82D8((const void **)&v26, 0, (unsigned int)", ", (_BYTE *)2);
      v27 = (char *)*v21;
      *v21 = &unk_28898CC;
      sub_21E72F0((const void **)v5, (const void **)&v27);
      v22 = v27 - 12;
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v16 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      }
      v23 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v26 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      result = *v8;
      ++v15;
    while ( v15 < (*v13 - *v8) >> 2 );
  return result;
}


void __fastcall ControlsSettingsScreenController::_registerControllerCallbacks(ControlsSettingsScreenController *this)
{
  ControlsSettingsScreenController *v1; // r5@1
  void *v2; // r0@1
  void *v3; // r0@6
  void *v4; // r0@7
  void *v5; // r0@8
  void *v6; // r0@9
  void *v7; // r0@10
  void *v8; // r0@15
  void *v9; // r0@20
  _DWORD *v10; // r0@21
  __int64 v11; // r1@21
  __int64 v12; // r1@21
  void *v13; // r0@25
  void *v14; // r0@26
  void *v15; // r0@27
  void *v16; // r0@28
  void *v17; // r0@29
  void *v18; // r0@30
  void *v19; // r0@31
  void *v20; // r0@32
  void *v21; // r0@33
  void *v22; // r0@34
  void *v23; // r0@35
  void *v24; // r0@36
  void *v25; // r0@37
  void *v26; // r0@38
  void *v27; // r0@43
  unsigned int *v28; // r2@45
  signed int v29; // r1@47
  unsigned int *v30; // r2@49
  signed int v31; // r1@51
  unsigned int *v32; // r2@53
  signed int v33; // r1@55
  unsigned int *v34; // r2@57
  signed int v35; // r1@59
  unsigned int *v36; // r2@61
  signed int v37; // r1@63
  unsigned int *v38; // r2@65
  signed int v39; // r1@67
  unsigned int *v40; // r2@69
  signed int v41; // r1@71
  unsigned int *v42; // r2@73
  signed int v43; // r1@75
  unsigned int *v44; // r2@77
  signed int v45; // r1@79
  unsigned int *v46; // r2@81
  signed int v47; // r1@83
  unsigned int *v48; // r2@85
  signed int v49; // r1@87
  unsigned int *v50; // r2@89
  signed int v51; // r1@91
  unsigned int *v52; // r2@93
  signed int v53; // r1@95
  unsigned int *v54; // r2@97
  signed int v55; // r1@99
  unsigned int *v56; // r2@101
  signed int v57; // r1@103
  unsigned int *v58; // r2@105
  signed int v59; // r1@107
  unsigned int *v60; // r2@109
  signed int v61; // r1@111
  unsigned int *v62; // r2@113
  signed int v63; // r1@115
  unsigned int *v64; // r2@117
  signed int v65; // r1@119
  unsigned int *v66; // r2@121
  signed int v67; // r1@123
  unsigned int *v68; // r2@125
  signed int v69; // r1@127
  unsigned int *v70; // r2@129
  signed int v71; // r1@131
  unsigned int *v72; // r2@133
  signed int v73; // r1@135
  char v74; // [sp+8h] [bp-130h]@40
  void (*v75)(void); // [sp+10h] [bp-128h]@39
  int v76; // [sp+14h] [bp-124h]@40
  int v77; // [sp+1Ch] [bp-11Ch]@39
  int v78; // [sp+24h] [bp-114h]@38
  int v79; // [sp+2Ch] [bp-10Ch]@37
  int v80; // [sp+34h] [bp-104h]@36
  int v81; // [sp+3Ch] [bp-FCh]@35
  int v82; // [sp+44h] [bp-F4h]@34
  int v83; // [sp+4Ch] [bp-ECh]@33
  int v84; // [sp+54h] [bp-E4h]@32
  int v85; // [sp+5Ch] [bp-DCh]@31
  int v86; // [sp+64h] [bp-D4h]@30
  int v87; // [sp+6Ch] [bp-CCh]@29
  int v88; // [sp+74h] [bp-C4h]@28
  int v89; // [sp+7Ch] [bp-BCh]@27
  int v90; // [sp+84h] [bp-B4h]@26
  int v91; // [sp+8Ch] [bp-ACh]@25
  void *v92; // [sp+90h] [bp-A8h]@21
  __int64 v93; // [sp+98h] [bp-A0h]@21
  _DWORD *v94; // [sp+A0h] [bp-98h]@21
  __int64 v95; // [sp+A8h] [bp-90h]@21
  int v96; // [sp+B0h] [bp-88h]@21
  char v97; // [sp+B4h] [bp-84h]@17
  void (*v98)(void); // [sp+BCh] [bp-7Ch]@16
  int v99; // [sp+C0h] [bp-78h]@17
  int v100; // [sp+C8h] [bp-70h]@16
  char v101; // [sp+CCh] [bp-6Ch]@12
  void (*v102)(void); // [sp+D4h] [bp-64h]@11
  int v103; // [sp+D8h] [bp-60h]@12
  int v104; // [sp+E0h] [bp-58h]@11
  int v105; // [sp+E8h] [bp-50h]@10
  int v106; // [sp+F0h] [bp-48h]@9
  int v107; // [sp+F8h] [bp-40h]@8
  int v108; // [sp+100h] [bp-38h]@7
  char v109; // [sp+104h] [bp-34h]@3
  void (*v110)(void); // [sp+10Ch] [bp-2Ch]@2
  int v111; // [sp+110h] [bp-28h]@3
  int v112; // [sp+118h] [bp-20h]@2
  int v113; // [sp+120h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v113, "keyboard_mouse_sensitivity");
  ControlsSettingsScreenController::setUpCallbacksForFloatInputOption((int)v1, 0x84u, 1u, (const void **)&v113);
  v2 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v113 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  sub_21E94B4((void **)&v112, "vr_ui_mouse_sensitivity");
  v110 = 0;
  if ( *(_DWORD *)&algn_27DD648[4] )
    (*(void (__fastcall **)(char *, _DWORD *, signed int))&algn_27DD648[4])(
      &v109,
      &SettingsScreenControllerBase::defaultProgressSliderOptionLabeller,
      2);
    v111 = *(_DWORD *)&algn_27DD648[8];
    v110 = *(void (**)(void))&algn_27DD648[4];
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(
    (int)v1,
    82,
    (const void **)&v112,
    (int *)&SettingsScreenControllerBase::defaultOptionFormat,
    (int)&v109);
  if ( v110 )
    v110();
  v3 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v112 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v108, "keyboard_mouse_invert_y_axis");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 133, 1, (const void **)&v108);
  v4 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v108 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v107, "keyboard_mouse_autojump");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 134, 1, (const void **)&v107);
  v5 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v107 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v106, "keyboard_mouse_toggle_crouch");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 137, 1, (const void **)&v106);
  v6 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v106 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v105, "controller_sensitivity");
  ControlsSettingsScreenController::setUpCallbacksForFloatInputOption((int)v1, 0x84u, 3u, (const void **)&v105);
  v7 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v105 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v104, "vr_sensitivity");
  v102 = 0;
      &v101,
    v103 = *(_DWORD *)&algn_27DD648[8];
    v102 = *(void (**)(void))&algn_27DD648[4];
    44,
    (const void **)&v104,
    (int)&v101);
  if ( v102 )
    v102();
  v8 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v104 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v100, "vr_roll_turn_sensitivity");
  v98 = 0;
    (*(void (__fastcall **)(char *, _DWORD, _DWORD))&algn_27DD648[4])(
      &v97,
    v99 = *(_DWORD *)&algn_27DD648[8];
    v98 = *(void (**)(void))&algn_27DD648[4];
    71,
    (const void **)&v100,
    (int)&v97);
  if ( v98 )
    v98();
  v9 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v100 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  StringHash::StringHash<char [34]>(&v96, (int)"#vr_roll_turn_sensitivity_visible");
  v10 = operator new(4u);
  LODWORD(v11) = sub_13BD9A8;
  *v10 = v1;
  HIDWORD(v11) = sub_13BD974;
  v94 = v10;
  v95 = v11;
  v92 = operator new(1u);
  LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v93 = v12;
  ScreenController::bindBool((int)v1, &v96, (int)&v94, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  sub_21E94B4((void **)&v91, "controller_invert_y_axis");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 133, 3, (const void **)&v91);
  v13 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v91 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v90, "controller_autojump");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 134, 3, (const void **)&v90);
  v14 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v90 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v89, "vr_autojump");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 52, (const void **)&v89);
  v15 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v89 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v88, "controller_toggle_crouch");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 137, 3, (const void **)&v88);
  v16 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v88 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v87, "controller_vibration");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 135, 3, (const void **)&v87);
  v17 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v87 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v86, "hide_tooltips");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 145, (const void **)&v86);
  v18 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v86 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v85, "touch_sensitivity");
  ControlsSettingsScreenController::setUpCallbacksForFloatInputOption((int)v1, 0x84u, 2u, (const void **)&v85);
  v19 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v85 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v84, "touch_invert_y_axis");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 133, 2, (const void **)&v84);
  v20 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v84 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v83, "touch_autojump");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 134, 2, (const void **)&v83);
  v21 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v83 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v82, "touch_toggle_crouch");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 137, 2, (const void **)&v82);
  v22 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v82 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v81, "touch_vibration");
  ControlsSettingsScreenController::setUpCallbacksForBooleanInputOption((int)v1, 135, 2, (const void **)&v81);
  v23 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v81 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v80, "split_controls");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 17, (const void **)&v80);
  v24 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v80 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v79, "left_handed");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 16, (const void **)&v79);
  v25 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v79 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v78, "swap_jump_and_sneak");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 18, (const void **)&v78);
  v26 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v78 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v77, "button_size");
  v75 = 0;
      &v74,
    v76 = *(_DWORD *)&algn_27DD648[8];
    v75 = *(void (**)(void))&algn_27DD648[4];
    3,
    (const void **)&v77,
    (int)&v74);
  if ( v75 )
    v75();
  v27 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v77 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
}
