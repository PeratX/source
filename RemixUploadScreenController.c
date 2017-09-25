

signed int __fastcall RemixUploadScreenController::_isUploadDone(RemixUploadScreenController *this)
{
  signed int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R0,#0x1B4]
  }
  result = 0;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    result = 1;
  return result;
}


ModalScreenData *__fastcall RemixUploadScreenController::_keepPlaying(RemixUploadScreenController *this)
{
  RemixUploadScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1 OVERLAPPED
  _DWORD *v5; // [sp+0h] [bp-58h]@1
  __int64 v6; // [sp+8h] [bp-50h]@1
  void *v7; // [sp+10h] [bp-48h]@1
  int v8; // [sp+14h] [bp-44h]@1
  int v9; // [sp+18h] [bp-40h]@1
  int v10; // [sp+1Ch] [bp-3Ch]@1
  void *v11; // [sp+20h] [bp-38h]@1
  int v12; // [sp+24h] [bp-34h]@1
  int v13; // [sp+28h] [bp-30h]@1
  int v14; // [sp+2Ch] [bp-2Ch]@1
  void *v15; // [sp+30h] [bp-28h]@1
  void *v16; // [sp+34h] [bp-24h]@1
  void *v17; // [sp+38h] [bp-20h]@1
  void *v18; // [sp+3Ch] [bp-1Ch]@1
  int v19; // [sp+40h] [bp-18h]@1
  char v20; // [sp+44h] [bp-14h]@1

  v1 = this;
  v7 = &unk_28898CC;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = &unk_28898CC;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v20 = 0;
  v19 = 1;
  sub_21E8190(&v16, "remix_export.keep_playing", (_BYTE *)0x19);
  sub_21E8190(&v18, "remix_export.visit_model", (_BYTE *)0x18);
  sub_21E8190(&v7, "remix_export.Remix", (_BYTE *)0x12);
  sub_21E8190(&v11, "remix_export.popup_content", (_BYTE *)0x1A);
  v2 = operator new(4u);
  LODWORD(v3) = sub_122D3DE;
  *v2 = v1;
  HIDWORD(v3) = sub_122D3B4;
  v5 = v2;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
}


void __fastcall RemixUploadScreenController::_registerBindings(RemixUploadScreenController *this)
{
  RemixUploadScreenController *v1; // r4@1
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
  __int64 v14; // r1@17
  _DWORD *v15; // r0@21
  __int64 v16; // r1@21
  __int64 v17; // r1@21
  _DWORD *v18; // r0@25
  __int64 v19; // r1@25
  __int64 v20; // r1@25
  _DWORD *v21; // r0@29
  __int64 v22; // r1@29
  __int64 v23; // r1@29
  _DWORD *v24; // r0@33
  __int64 v25; // r1@33
  __int64 v26; // r1@33
  _DWORD *v27; // r0@37
  __int64 v28; // r1@37
  __int64 v29; // r1@37
  _DWORD *v30; // r0@41
  __int64 v31; // r1@41
  __int64 v32; // r1@41
  _DWORD *v33; // r0@45
  __int64 v34; // r1@45
  __int64 v35; // r1@45
  _DWORD *v36; // r0@49
  __int64 v37; // r1@49
  __int64 v38; // r1@49
  void *v39; // [sp+4h] [bp-1DCh]@49
  __int64 v40; // [sp+Ch] [bp-1D4h]@49
  _DWORD *v41; // [sp+14h] [bp-1CCh]@49
  __int64 v42; // [sp+1Ch] [bp-1C4h]@49
  int v43; // [sp+24h] [bp-1BCh]@49
  void *v44; // [sp+28h] [bp-1B8h]@45
  __int64 v45; // [sp+30h] [bp-1B0h]@45
  _DWORD *v46; // [sp+38h] [bp-1A8h]@45
  __int64 v47; // [sp+40h] [bp-1A0h]@45
  int v48; // [sp+48h] [bp-198h]@45
  void *v49; // [sp+4Ch] [bp-194h]@41
  __int64 v50; // [sp+54h] [bp-18Ch]@41
  _DWORD *v51; // [sp+5Ch] [bp-184h]@41
  __int64 v52; // [sp+64h] [bp-17Ch]@41
  int v53; // [sp+6Ch] [bp-174h]@41
  void *v54; // [sp+70h] [bp-170h]@37
  __int64 v55; // [sp+78h] [bp-168h]@37
  _DWORD *v56; // [sp+80h] [bp-160h]@37
  __int64 v57; // [sp+88h] [bp-158h]@37
  int v58; // [sp+90h] [bp-150h]@37
  void *v59; // [sp+94h] [bp-14Ch]@33
  __int64 v60; // [sp+9Ch] [bp-144h]@33
  _DWORD *v61; // [sp+A4h] [bp-13Ch]@33
  __int64 v62; // [sp+ACh] [bp-134h]@33
  int v63; // [sp+B4h] [bp-12Ch]@33
  void *v64; // [sp+B8h] [bp-128h]@29
  __int64 v65; // [sp+C0h] [bp-120h]@29
  _DWORD *v66; // [sp+C8h] [bp-118h]@29
  __int64 v67; // [sp+D0h] [bp-110h]@29
  int v68; // [sp+D8h] [bp-108h]@29
  void *v69; // [sp+DCh] [bp-104h]@25
  __int64 v70; // [sp+E4h] [bp-FCh]@25
  _DWORD *v71; // [sp+ECh] [bp-F4h]@25
  __int64 v72; // [sp+F4h] [bp-ECh]@25
  int v73; // [sp+FCh] [bp-E4h]@25
  void *v74; // [sp+100h] [bp-E0h]@21
  __int64 v75; // [sp+108h] [bp-D8h]@21
  _DWORD *v76; // [sp+110h] [bp-D0h]@21
  __int64 v77; // [sp+118h] [bp-C8h]@21
  int v78; // [sp+120h] [bp-C0h]@21
  void *v79; // [sp+124h] [bp-BCh]@17
  __int64 v80; // [sp+12Ch] [bp-B4h]@17
  void *v81; // [sp+134h] [bp-ACh]@17
  void (*v82)(void); // [sp+13Ch] [bp-A4h]@17
  void (__fastcall *v83)(int *); // [sp+140h] [bp-A0h]@17
  int v84; // [sp+144h] [bp-9Ch]@17
  void *v85; // [sp+148h] [bp-98h]@13
  __int64 v86; // [sp+150h] [bp-90h]@13
  _DWORD *v87; // [sp+158h] [bp-88h]@13
  __int64 v88; // [sp+160h] [bp-80h]@13
  int v89; // [sp+168h] [bp-78h]@13
  void *v90; // [sp+16Ch] [bp-74h]@9
  __int64 v91; // [sp+174h] [bp-6Ch]@9
  _DWORD *v92; // [sp+17Ch] [bp-64h]@9
  __int64 v93; // [sp+184h] [bp-5Ch]@9
  int v94; // [sp+18Ch] [bp-54h]@9
  void *v95; // [sp+190h] [bp-50h]@5
  __int64 v96; // [sp+198h] [bp-48h]@5
  _DWORD *v97; // [sp+1A0h] [bp-40h]@5
  __int64 v98; // [sp+1A8h] [bp-38h]@5
  int v99; // [sp+1B0h] [bp-30h]@5
  void *v100; // [sp+1B4h] [bp-2Ch]@1
  __int64 v101; // [sp+1BCh] [bp-24h]@1
  _DWORD *v102; // [sp+1C4h] [bp-1Ch]@1
  __int64 v103; // [sp+1CCh] [bp-14h]@1
  int v104; // [sp+1D4h] [bp-Ch]@1

  v1 = this;
  v104 = -562286346;
  v2 = operator new(4u);
  LODWORD(v3) = sub_122D46E;
  *v2 = v1;
  HIDWORD(v3) = sub_122D458;
  v102 = v2;
  v103 = v3;
  v100 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v101 = v4;
  ScreenController::bindFloat((int)v1, &v104, (int)&v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  v99 = 885503002;
  v5 = operator new(4u);
  LODWORD(v6) = sub_122D4E8;
  *v5 = v1;
  HIDWORD(v6) = sub_122D4A4;
  v97 = v5;
  v98 = v6;
  v95 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v96 = v7;
  ScreenController::bindBool((int)v1, &v99, (int)&v97, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  v94 = 33923360;
  v8 = operator new(4u);
  LODWORD(v9) = sub_122D560;
  *v8 = v1;
  HIDWORD(v9) = sub_122D51E;
  v92 = v8;
  v93 = v9;
  v90 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v91 = v10;
  ScreenController::bindBool((int)v1, &v94, (int)&v92, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v89 = -378600938;
  v11 = operator new(4u);
  LODWORD(v12) = sub_122D658;
  *v11 = v1;
  HIDWORD(v12) = sub_122D598;
  v87 = v11;
  v88 = v12;
  v85 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v86 = v13;
  ScreenController::bindString((int)v1, &v89, (int)&v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  StringHash::StringHash<char [23]>(&v84, (int)"#dual_title_left_label");
  v81 = operator new(1u);
  v82 = (void (*)(void))sub_122D75C;
  v83 = sub_122D690;
  v79 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v80 = v14;
  ScreenController::bindString((int)v1, &v84, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( v82 )
    v82();
  StringHash::StringHash<char [24]>(&v78, (int)"#dual_title_right_label");
  v15 = operator new(4u);
  LODWORD(v16) = sub_122D9CC;
  *v15 = v1;
  HIDWORD(v16) = sub_122D78C;
  v76 = v15;
  v77 = v16;
  v74 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v75 = v17;
  ScreenController::bindString((int)v1, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v73 = 1339174216;
  v18 = operator new(4u);
  LODWORD(v19) = sub_122DA06;
  *v18 = v1;
  HIDWORD(v19) = sub_122DA02;
  v71 = v18;
  v72 = v19;
  v69 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v70 = v20;
  ScreenController::bindBool((int)v1, &v73, (int)&v71, (int)&v69);
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  StringHash::StringHash<char [23]>(&v68, (int)"#cancel_button_visible");
  v21 = operator new(4u);
  LODWORD(v22) = sub_122DA8C;
  *v21 = v1;
  HIDWORD(v22) = sub_122DA3C;
  v66 = v21;
  v67 = v22;
  v64 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v65 = v23;
  ScreenController::bindBool((int)v1, &v68, (int)&v66, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  StringHash::StringHash<char [25]>(&v63, (int)"#warning_button2_visible");
  v24 = operator new(4u);
  LODWORD(v25) = sub_122DB04;
  *v24 = v1;
  HIDWORD(v25) = sub_122DAC2;
  v61 = v24;
  v62 = v25;
  v59 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v60 = v26;
  ScreenController::bindBool((int)v1, &v63, (int)&v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  StringHash::StringHash<char [24]>(&v58, (int)"#upload_content_visible");
  v27 = operator new(4u);
  LODWORD(v28) = sub_122DB7E;
  *v27 = v1;
  HIDWORD(v28) = sub_122DB3A;
  v56 = v27;
  v57 = v28;
  v54 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v55 = v29;
  ScreenController::bindBool((int)v1, &v58, (int)&v56, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  StringHash::StringHash<char [25]>(&v53, (int)"#warning_content_visible");
  v30 = operator new(4u);
  LODWORD(v31) = sub_122DBF6;
  *v30 = v1;
  HIDWORD(v31) = sub_122DBB4;
  v51 = v30;
  v52 = v31;
  v49 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v50 = v32;
  ScreenController::bindBool((int)v1, &v53, (int)&v51, (int)&v49);
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v48 = 1566351654;
  v33 = operator new(4u);
  LODWORD(v34) = sub_122DC68;
  *v33 = v1;
  HIDWORD(v34) = sub_122DC2C;
  v46 = v33;
  v47 = v34;
  v44 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v45 = v35;
  ScreenController::bindString((int)v1, &v48, (int)&v46, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  v43 = -625024179;
  v36 = operator new(4u);
  LODWORD(v37) = sub_122DCC2;
  *v36 = v1;
  HIDWORD(v37) = sub_122DC9E;
  v41 = v36;
  v42 = v37;
  v39 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v40 = v38;
  ScreenController::bindString((int)v1, &v43, (int)&v41, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
}


int __fastcall RemixUploadScreenController::_onCancel(RemixUploadScreenController *this)
{
  RemixProgressTracker *v2; // r0@1
  int v3; // r5@2
  char *v4; // r6@2
  RemixProgressTracker *v5; // r0@2
  __int64 v6; // r0@3
  int v11; // r5@5
  unsigned int *v12; // r1@6
  unsigned int v13; // r0@8
  unsigned int *v14; // r6@12
  unsigned int v15; // r0@14
  double v17; // [sp+0h] [bp-30h]@0
  __int64 v18; // [sp+10h] [bp-20h]@0

  _R4 = this;
  v2 = (RemixProgressTracker *)*((_DWORD *)this + 106);
  if ( v2 )
  {
    v3 = *((_DWORD *)_R4 + 95);
    v4 = RemixProgressTracker::getUniqueModelID(v2);
    v5 = (RemixProgressTracker *)*((_DWORD *)_R4 + 106);
    v6 = v5 ? RemixProgressTracker::getFileSize(v5) : 1LL;
    __asm
    {
      VLDR            S0, [R4,#0x1B4]
      VCVT.F64.F32    D0, S0
    }
    LODWORD(v17) = v4;
    __asm { VSTR            D0, [SP,#0x30+var_20] }
    MinecraftScreenModel::fireEventFileTransmissionState(v3, 1, -1, 3, v17, v6, v18);
    *((_DWORD *)_R4 + 106) = 0;
    v11 = *((_DWORD *)_R4 + 107);
    *((_DWORD *)_R4 + 107) = 0;
    if ( v11 )
      v12 = (unsigned int *)(v11 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
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
  }
  return j_j_j__ZN20MinecraftScreenModel11leaveScreenEv_1(*((MinecraftScreenModel **)_R4 + 95));
}


void __fastcall RemixUploadScreenController::_registerEventHandlers(RemixUploadScreenController *this)
{
  RemixUploadScreenController::_registerEventHandlers(this);
}


void __fastcall RemixUploadScreenController::~RemixUploadScreenController(RemixUploadScreenController *this)
{
  RemixUploadScreenController::~RemixUploadScreenController(this);
}


int __fastcall RemixUploadScreenController::_onRequestStateChanged(int result, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int (*v4)(void); // r1@3

  v2 = a2;
  v3 = result;
  if ( a2 == 7 )
  {
    v4 = *(int (**)(void))(**(_DWORD **)(result + 424) + 20);
    goto LABEL_5;
  }
  if ( a2 == 4 )
    v4 = *(int (**)(void))(**(_DWORD **)(result + 424) + 16);
LABEL_5:
    result = v4();
  *(_DWORD *)(v3 + 432) = v2;
  return result;
}


signed int __fastcall RemixUploadScreenController::_canCancelUpload(RemixUploadScreenController *this)
{
  int v2; // r0@2
  signed int result; // r0@7

  _R4 = this;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 95), 1) )
    goto LABEL_12;
  v2 = MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R4 + 95), 0);
  _ZF = v2 == 1;
  if ( v2 == 1 )
    _ZF = *((_BYTE *)_R4 + 440) == 0;
  if ( !_ZF || RemixProgressTracker::getState(*((RemixProgressTracker **)_R4 + 106)) == 10 )
  {
LABEL_12:
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [R4,#0x1B4]
    }
    result = 0;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 1;
  }
  else
  return result;
}


int __fastcall RemixUploadScreenController::_updateProgress(RemixUploadScreenController *this)
{
  int v8; // [sp+4h] [bp-Ch]@0

  _R4 = this;
  __asm { VLDR            S16, [R4,#0x1B4] }
  switch ( RemixProgressTracker::getState(*((RemixProgressTracker **)this + 106)) )
  {
    case 5:
    case 6:
      _R0 = RemixProgressTracker::getUploadProgress(*((RemixProgressTracker **)_R4 + 106));
      __asm
      {
        VMOV            S0, R0
        VLDR            S2, =0.99
        VLDR            S16, =0.0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S2
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S16, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S16, S2 }
      break;
    case 7:
      __asm { VLDR            S16, =0.99; jumptable 0122CF3A case 7 }
    case 8:
      __asm { VLDR            S16, =0.99; jumptable 0122CF3A case 8 }
    case 10:
      __asm { VLDR            S16, =0.0; jumptable 0122CF3A case 10 }
    case 9:
      __asm { VMOV.F32        S16, #1.0; jumptable 0122CF3A case 9 }
    default:
  }
  __asm
    VCMPE.F32       S16, #0.0; jumptable 0122CF3A default case
    VLDR            S0, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S2, #1.0
    VCMPE.F32       S16, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S16 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S2 }
    VLDR            S2, [R4,#0x1B4]
    VCMPE.F32       S0, S2
  if ( !_ZF )
    __asm { VSTRNE          S0, [R4,#0x1B4] }
    JUMPOUT(__CS__, v8);
  return 0;
}


int __fastcall RemixUploadScreenController::tick(RemixUploadScreenController *this)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r0@2
  int v5; // r6@2
  void (*v6)(void); // r1@4
  signed int v12; // r6@26

  _R4 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = *((_DWORD *)_R4 + 108);
  if ( v3 != RemixProgressTracker::getState(*((RemixProgressTracker **)_R4 + 106)) )
  {
    v4 = RemixProgressTracker::getState(*((RemixProgressTracker **)_R4 + 106));
    v5 = v4;
    if ( v4 == 7 )
    {
      v6 = *(void (**)(void))(**((_DWORD **)_R4 + 106) + 20);
    }
    else
      if ( v4 != 4 )
      {
LABEL_7:
        v2 |= 1u;
        *((_DWORD *)_R4 + 108) = v5;
        goto LABEL_8;
      }
      v6 = *(void (**)(void))(**((_DWORD **)_R4 + 106) + 16);
    v6();
    goto LABEL_7;
  }
LABEL_8:
  __asm { VLDR            S18, [R4,#0x1B4] }
  switch ( RemixProgressTracker::getState(*((RemixProgressTracker **)_R4 + 106)) )
    case 5:
    case 6:
      _R0 = RemixProgressTracker::getUploadProgress(*((RemixProgressTracker **)_R4 + 106));
      __asm
        VMOV            S0, R0
        VLDR            S2, =0.99
        VLDR            S18, =0.0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S18, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S18, S2 }
      break;
    case 7:
      __asm { VLDR            S18, =0.99; jumptable 0122CDEA case 7 }
    case 8:
      __asm { VLDR            S18, =0.99; jumptable 0122CDEA case 8 }
    case 9:
      __asm { VMOV.F32        S18, #1.0; jumptable 0122CDEA case 9 }
    case 10:
      __asm { VLDR            S18, =0.0; jumptable 0122CDEA case 10 }
    default:
  __asm
    VCMPE.F32       S18, #0.0; jumptable 0122CDEA default case
    VLDR            S0, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S16, #1.0
    VCMPE.F32       S18, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S18 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S16 }
    VLDR            S2, [R4,#0x1B4]
    VCMPE.F32       S0, S2
  if ( !_ZF )
    __asm
      VCMPE.F32       S0, S16
      VSTR            S0, [R4,#0x1B4]
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v2 |= 1u;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R4 + 95), 1) )
    v12 = 0;
  else
    if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)_R4 + 95), 0) == 1 )
      v12 = 0;
      if ( !*((_BYTE *)_R4 + 440) && RemixProgressTracker::getState(*((RemixProgressTracker **)_R4 + 106)) != 10 )
        v12 = 1;
  if ( v12 != *((_BYTE *)_R4 + 441) )
    *((_BYTE *)_R4 + 441) = v12;
    v2 |= 1u;
    VLDR            S0, [R4,#0x1B4]
    VCMPE.F32       S0, S16
  if ( !(_NF ^ _VF) && *((_BYTE *)_R4 + 448) )
    RemixUploadScreenController::_keepPlaying(_R4);
    *((_BYTE *)_R4 + 448) = 0;
  return v2;
}


void __fastcall RemixUploadScreenController::_registerBindings(RemixUploadScreenController *this)
{
  RemixUploadScreenController::_registerBindings(this);
}


const void **__fastcall RemixUploadScreenController::getTitleLabel(RemixUploadScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  const void **result; // r0@2

  v2 = a2;
  v3 = (void **)this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v2 + 380), 0) )
  {
    result = (const void **)RemixProgressTracker::getState(*(RemixProgressTracker **)(v2 + 424));
    switch ( result )
    {
      case 5u:
        result = sub_21E8190(v3, "remix_export.upload.uploading", (_BYTE *)0x1D);
        break;
      case 9u:
        result = sub_21E8190(v3, "remix_export.upload.published", (_BYTE *)0x1D);
      case 7u:
        result = sub_21E8190(v3, "remix_export.upload.transcoding_complete", (_BYTE *)0x28);
      case 8u:
        result = sub_21E8190(v3, "remix_export.upload.publishing", (_BYTE *)0x1E);
      case 6u:
        result = sub_21E8190(v3, "remix_export.upload.transcoding", (_BYTE *)0x1F);
      case 0xAu:
        result = sub_21E8190(v3, "remix_export.upload.failed", (_BYTE *)0x1A);
      default:
        return result;
    }
  }
  else
    result = sub_21E8190(v3, "progressScreen.message.failedNoNetwork", (_BYTE *)0x26);
  return result;
}


void __fastcall RemixUploadScreenController::~RemixUploadScreenController(RemixUploadScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E3378;
  v2 = *((_DWORD *)this + 107);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall RemixUploadScreenController::_registerEventHandlers(RemixUploadScreenController *this)
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
  sub_21E94B4((void **)&v10, "button.file_upload_cancel");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_122D422;
  *v3 = v1;
  HIDWORD(v4) = sub_122D414;
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


signed int __fastcall RemixUploadScreenController::_isUploadFailed(RemixUploadScreenController *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = RemixProgressTracker::getState(*((RemixProgressTracker **)this + 106));
  v2 = 0;
  if ( v1 == 10 )
    v2 = 1;
  return v2;
}


ScreenController *__fastcall RemixUploadScreenController::~RemixUploadScreenController(RemixUploadScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E3378;
  v2 = *((_DWORD *)this + 107);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return j_j_j__ZN25MinecraftScreenControllerD2Ev_0(v1);
}


__int64 __fastcall RemixUploadScreenController::_getFileSize(RemixUploadScreenController *this)
{
  RemixProgressTracker *v1; // r0@1
  __int64 result; // r0@2

  v1 = (RemixProgressTracker *)*((_DWORD *)this + 106);
  if ( v1 )
    result = j_j_j__ZNK20RemixProgressTracker11getFileSizeEv(v1);
  else
    result = 1LL;
  return result;
}


int __fastcall RemixUploadScreenController::RemixUploadScreenController(int a1, int a2, int a3)
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
  int v13; // r0@21
  unsigned int *v14; // r0@22
  unsigned int v15; // r1@24
  int v22; // [sp+4h] [bp-1Ch]@1
  int v23; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v22 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v23 = v5;
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
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v22);
  v8 = v23;
  if ( v23 )
    v9 = (unsigned int *)(v23 + 4);
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
  *(_DWORD *)v3 = &off_26E3378;
  *(_DWORD *)(v3 + 424) = *(_DWORD *)v4;
  v13 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v3 + 428) = v13;
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  *(_QWORD *)(v3 + 432) = (unsigned int)RemixProgressTracker::getState(*(RemixProgressTracker **)v4);
  *(_WORD *)(v3 + 440) = 0;
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VCVT.F32.F64    S0, D0
    VSTR            S0, [R4,#0x1BC]
  *(_BYTE *)(v3 + 448) = 1;
  MinecraftScreenController::_setExitBehavior(v3, 3);
  RemixUploadScreenController::_registerEventHandlers((RemixUploadScreenController *)v3);
  RemixUploadScreenController::_registerBindings((RemixUploadScreenController *)v3);
  if ( *(_DWORD *)(v3 + 432) == 7 )
    (*(void (**)(void))(**(_DWORD **)(v3 + 424) + 20))();
  return v3;
}


signed int __fastcall RemixUploadScreenController::_shouldShowWifiWarning(RemixUploadScreenController *this)
{
  RemixUploadScreenController *v1; // r5@1
  signed int result; // r0@2
  signed int v3; // r4@3

  v1 = this;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 95), 1) )
  {
    result = 0;
  }
  else
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)v1 + 95), 0) == 1 )
    {
      v3 = 0;
      if ( !*((_BYTE *)v1 + 440) && RemixProgressTracker::getState(*((RemixProgressTracker **)v1 + 106)) != 10 )
        v3 = 1;
    }
    result = v3;
  return result;
}


int __fastcall RemixUploadScreenController::_canStartPlay(RemixUploadScreenController *this)
{
  return 0;
}
