

void __fastcall MashupHomeScreenController::~MashupHomeScreenController(MashupHomeScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MainMenuScreenController::~MainMenuScreenController(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall MashupHomeScreenController::addStaticScreenVars(MashupHomeScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  MashupHomeScreenController *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  bool v6; // r1@1
  int v8; // [sp+0h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$is_mashup");
  v5 = StoreCatalogItemModel::getStoreCategory((MashupHomeScreenController *)((char *)v3 + 432));
  v6 = 0;
  if ( v5 == 2 )
    v6 = 1;
  Json::Value::Value((Json::Value *)&v8, v6);
  Json::Value::operator=(v4, (const Json::Value *)&v8);
  Json::Value::~Value((Json::Value *)&v8);
  return ScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall MashupHomeScreenController::_registerEventHandlers(MashupHomeScreenController *this)
{
  MashupHomeScreenController::_registerEventHandlers(this);
}


void __fastcall MashupHomeScreenController::~MashupHomeScreenController(MashupHomeScreenController *this)
{
  MashupHomeScreenController::~MashupHomeScreenController(this);
}


void __fastcall MashupHomeScreenController::_registerBindings(MashupHomeScreenController *this)
{
  MashupHomeScreenController::_registerBindings(this);
}


void __fastcall MashupHomeScreenController::_registerBindings(MashupHomeScreenController *this)
{
  MashupHomeScreenController *v1; // r4@1
  _DWORD *v2; // r0@2
  __int64 v3; // r1@2
  __int64 v4; // r1@2
  _DWORD *v5; // r0@6
  __int64 v6; // r1@6
  __int64 v7; // r1@6
  _DWORD *v8; // r0@10
  __int64 v9; // r1@10
  __int64 v10; // r1@10
  _DWORD *v11; // r0@14
  __int64 v12; // r1@14
  __int64 v13; // r1@14
  _DWORD *v14; // r0@18
  __int64 v15; // r1@18
  __int64 v16; // r1@18
  _DWORD *v17; // r0@22
  __int64 v18; // r1@22
  __int64 v19; // r1@22
  _DWORD *v20; // r0@26
  __int64 v21; // r1@26
  _DWORD *v22; // r0@28
  __int64 v23; // r1@28
  _DWORD *v24; // r0@30
  __int64 v25; // r1@30
  __int64 v26; // r1@30
  _DWORD *v27; // r0@34
  __int64 v28; // r1@34
  __int64 v29; // r1@34
  _DWORD *v30; // r0@40
  __int64 v31; // r1@40
  void *v32; // [sp+0h] [bp-190h]@6
  __int64 v33; // [sp+8h] [bp-188h]@6
  _DWORD *v34; // [sp+10h] [bp-180h]@6
  __int64 v35; // [sp+18h] [bp-178h]@6
  int v36; // [sp+20h] [bp-170h]@6
  void *v37; // [sp+24h] [bp-16Ch]@2
  __int64 v38; // [sp+2Ch] [bp-164h]@2
  _DWORD *v39; // [sp+34h] [bp-15Ch]@2
  __int64 v40; // [sp+3Ch] [bp-154h]@2
  int v41; // [sp+44h] [bp-14Ch]@2
  _DWORD *v42; // [sp+48h] [bp-148h]@40
  __int64 v43; // [sp+50h] [bp-140h]@40
  char v44; // [sp+58h] [bp-138h]@40
  int v45; // [sp+5Ch] [bp-134h]@40
  void *v46; // [sp+60h] [bp-130h]@38
  void (*v47)(void); // [sp+68h] [bp-128h]@38
  void (__fastcall *v48)(int, unsigned int, const char **, int); // [sp+6Ch] [bp-124h]@38
  int v49; // [sp+70h] [bp-120h]@38
  int v50; // [sp+74h] [bp-11Ch]@38
  void *v51; // [sp+78h] [bp-118h]@34
  __int64 v52; // [sp+80h] [bp-110h]@34
  _DWORD *v53; // [sp+88h] [bp-108h]@34
  __int64 v54; // [sp+90h] [bp-100h]@34
  int v55; // [sp+98h] [bp-F8h]@34
  void *v56; // [sp+9Ch] [bp-F4h]@30
  __int64 v57; // [sp+A4h] [bp-ECh]@30
  _DWORD *v58; // [sp+ACh] [bp-E4h]@30
  __int64 v59; // [sp+B4h] [bp-DCh]@30
  int v60; // [sp+BCh] [bp-D4h]@30
  _DWORD *v61; // [sp+C0h] [bp-D0h]@28
  __int64 v62; // [sp+C8h] [bp-C8h]@28
  char v63; // [sp+D0h] [bp-C0h]@28
  int v64; // [sp+D4h] [bp-BCh]@28
  _DWORD *v65; // [sp+D8h] [bp-B8h]@26
  __int64 v66; // [sp+E0h] [bp-B0h]@26
  char v67; // [sp+E8h] [bp-A8h]@26
  int v68; // [sp+ECh] [bp-A4h]@26
  void *v69; // [sp+F0h] [bp-A0h]@22
  __int64 v70; // [sp+F8h] [bp-98h]@22
  _DWORD *v71; // [sp+100h] [bp-90h]@22
  __int64 v72; // [sp+108h] [bp-88h]@22
  int v73; // [sp+110h] [bp-80h]@22
  void *v74; // [sp+114h] [bp-7Ch]@18
  __int64 v75; // [sp+11Ch] [bp-74h]@18
  _DWORD *v76; // [sp+124h] [bp-6Ch]@18
  __int64 v77; // [sp+12Ch] [bp-64h]@18
  int v78; // [sp+134h] [bp-5Ch]@18
  void *v79; // [sp+138h] [bp-58h]@14
  __int64 v80; // [sp+140h] [bp-50h]@14
  _DWORD *v81; // [sp+148h] [bp-48h]@14
  __int64 v82; // [sp+150h] [bp-40h]@14
  int v83; // [sp+158h] [bp-38h]@14
  void *v84; // [sp+15Ch] [bp-34h]@10
  __int64 v85; // [sp+164h] [bp-2Ch]@10
  _DWORD *v86; // [sp+16Ch] [bp-24h]@10
  __int64 v87; // [sp+174h] [bp-1Ch]@10
  char v88; // [sp+17Ch] [bp-14h]@10

  v1 = this;
  if ( StoreCatalogItemModel::getStoreCategory((MashupHomeScreenController *)((char *)this + 432)) == 2 )
  {
    StringHash::StringHash<char [24]>(&v41, (int)"#mashup_key_art_texture");
    v2 = operator new(4u);
    LODWORD(v3) = sub_CA3202;
    *v2 = v1;
    HIDWORD(v3) = sub_CA31E6;
    v39 = v2;
    v40 = v3;
    v37 = operator new(1u);
    LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v38 = v4;
    ScreenController::bindString((int)v1, &v41, (int)&v39, (int)&v37);
    if ( (_DWORD)v38 )
      ((void (*)(void))v38)();
    if ( (_DWORD)v40 )
      ((void (*)(void))v40)();
    StringHash::StringHash<char [28]>(&v36, (int)"#mashup_key_art_file_system");
    v5 = operator new(4u);
    LODWORD(v6) = sub_CA3264;
    *v5 = v1;
    HIDWORD(v6) = sub_CA3238;
    v34 = v5;
    v35 = v6;
    v32 = operator new(1u);
    LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v33 = v7;
    ScreenController::bindString((int)v1, &v36, (int)&v34, (int)&v32);
    if ( (_DWORD)v33 )
      ((void (*)(void))v33)();
    if ( (_DWORD)v35 )
      ((void (*)(void))v35)();
  }
  else
    StringHash::StringHash<char [39]>(&v88, (int)"#mashup_cycle_pack_left_button_enabled");
    v8 = operator new(4u);
    LODWORD(v9) = sub_CA2B94;
    *v8 = v1;
    HIDWORD(v9) = sub_CA2B82;
    v86 = v8;
    v87 = v9;
    v84 = operator new(1u);
    LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v85 = v10;
    ScreenController::bindBool((int)v1, (int *)&v88, (int)&v86, (int)&v84);
    if ( (_DWORD)v85 )
      ((void (*)(void))v85)();
    if ( (_DWORD)v87 )
      ((void (*)(void))v87)();
    StringHash::StringHash<char [40]>(&v83, (int)"#mashup_cycle_pack_right_button_enabled");
    v11 = operator new(4u);
    LODWORD(v12) = sub_CA2BDE;
    *v11 = v1;
    HIDWORD(v12) = sub_CA2BCA;
    v81 = v11;
    v82 = v12;
    v79 = operator new(1u);
    LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v80 = v13;
    ScreenController::bindBool((int)v1, &v83, (int)&v81, (int)&v79);
    if ( (_DWORD)v80 )
      ((void (*)(void))v80)();
    if ( (_DWORD)v82 )
      ((void (*)(void))v82)();
    v78 = -1824063849;
    v14 = operator new(4u);
    LODWORD(v15) = sub_CA2C2E;
    *v14 = v1;
    HIDWORD(v15) = sub_CA2C14;
    v76 = v14;
    v77 = v15;
    v74 = operator new(1u);
    LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v75 = v16;
    ScreenController::bindString((int)v1, &v78, (int)&v76, (int)&v74);
    if ( (_DWORD)v75 )
      ((void (*)(void))v75)();
    if ( (_DWORD)v77 )
      ((void (*)(void))v77)();
    StringHash::StringHash<char [35]>(&v73, (int)"#world_screenshots_grid_dimensions");
    v17 = operator new(4u);
    LODWORD(v18) = sub_CA2C74;
    *v17 = v1;
    HIDWORD(v18) = sub_CA2C64;
    v71 = v17;
    v72 = v18;
    v69 = operator new(1u);
    LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
    HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v70 = v19;
    ScreenController::bindGridSize((int)v1, &v73, (int)&v71, (int)&v69);
    if ( (_DWORD)v70 )
      ((void (*)(void))v70)();
    if ( (_DWORD)v72 )
      ((void (*)(void))v72)();
    v68 = 1827038298;
    StringHash::StringHash<char [31]>(&v67, (int)"#world_screenshot_texture_name");
    v20 = operator new(4u);
    LODWORD(v21) = sub_CA2CE0;
    *v20 = v1;
    HIDWORD(v21) = sub_CA2CAA;
    v65 = v20;
    v66 = v21;
    ScreenController::bindForCollection((int)v1, &v68, &v67, (int)&v65);
    if ( (_DWORD)v66 )
      ((void (*)(void))v66)();
    v64 = 1827038298;
    StringHash::StringHash<char [38]>(&v63, (int)"#world_screenshot_texture_file_system");
    v22 = operator new(4u);
    LODWORD(v23) = sub_CA2E0C;
    *v22 = v1;
    HIDWORD(v23) = sub_CA2D18;
    v61 = v22;
    v62 = v23;
    ScreenController::bindForCollection((int)v1, &v64, &v63, (int)&v61);
    if ( (_DWORD)v62 )
      ((void (*)(void))v62)();
    StringHash::StringHash<char [24]>(&v60, (int)"#mashup_key_art_texture");
    v24 = operator new(4u);
    LODWORD(v25) = sub_CA2E6C;
    *v24 = v1;
    HIDWORD(v25) = sub_CA2E42;
    v58 = v24;
    v59 = v25;
    v56 = operator new(1u);
    LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v26) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v57 = v26;
    ScreenController::bindString((int)v1, &v60, (int)&v58, (int)&v56);
    if ( (_DWORD)v57 )
      ((void (*)(void))v57)();
    if ( (_DWORD)v59 )
      ((void (*)(void))v59)();
    StringHash::StringHash<char [28]>(&v55, (int)"#mashup_key_art_file_system");
    v27 = operator new(4u);
    LODWORD(v28) = sub_CA2EDC;
    *v27 = v1;
    HIDWORD(v28) = sub_CA2EA2;
    v53 = v27;
    v54 = v28;
    v51 = operator new(1u);
    LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v52 = v29;
    ScreenController::bindString((int)v1, &v55, (int)&v53, (int)&v51);
    if ( (_DWORD)v52 )
      ((void (*)(void))v52)();
    if ( (_DWORD)v54 )
      ((void (*)(void))v54)();
    v50 = 1827038298;
    v49 = -47630688;
    v46 = operator new(1u);
    v47 = (void (*)(void))sub_CA2FE8;
    v48 = sub_CA2F14;
    ScreenController::bindForCollection((int)v1, &v50, &v49, (int)&v46);
    if ( v47 )
      v47();
    v45 = 1827038298;
    StringHash::StringHash<char [28]>(&v44, (int)"#grid_button_override_right");
    v30 = operator new(4u);
    LODWORD(v31) = sub_CA31B0;
    *v30 = v1;
    HIDWORD(v31) = sub_CA3018;
    v42 = v30;
    v43 = v31;
    ScreenController::bindForCollection((int)v1, &v45, &v44, (int)&v42);
    if ( (_DWORD)v43 )
      ((void (*)(void))v43)();
}


void __fastcall MashupHomeScreenController::_registerEventHandlers(MashupHomeScreenController *this)
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
  sub_DA7364((void **)&v28, "button.select_screenshot");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_CA2AA4;
  *v3 = v1;
  HIDWORD(v4) = sub_CA2A40;
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  sub_DA7364((void **)&v25, "button.cycle_screenshots_left");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_CA2AF2;
  *v7 = v1;
  HIDWORD(v8) = sub_CA2ADA;
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
      j_j_j_j_j__ZdlPv_9(v9);
  sub_DA7364((void **)&v22, "button.cycle_screenshots_right");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_CA2B4C;
  *v11 = v1;
  HIDWORD(v12) = sub_CA2B28;
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
      j_j_j_j_j__ZdlPv_9(v13);
}


int __fastcall MashupHomeScreenController::MashupHomeScreenController(int a1, int a2, _DWORD *a3)
{
  int v3; // r4@1
  _DWORD *v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  signed int v13; // r2@21 OVERLAPPED
  __int64 v14; // r0@21 OVERLAPPED
  int v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v16 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v17 = v5;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v16);
  v8 = v17;
  if ( v17 )
    v9 = (unsigned int *)(v17 + 4);
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
  v13 = 3;
  *(_DWORD *)v3 = &off_26D7978;
  v14 = *v4;
  *(_QWORD *)(v3 + 432) = v14;
  *(_QWORD *)(v3 + 440) = *(_QWORD *)(&v13 - 1);
  MainMenuScreenModel::setStoreCatalogItemViewed(
    *(MainMenuScreenModel **)(v3 + 424),
    (const StoreCatalogItemModel *)(v3 + 432));
  MashupHomeScreenController::_registerEventHandlers((MashupHomeScreenController *)v3);
  MashupHomeScreenController::_registerBindings((MashupHomeScreenController *)v3);
  return v3;
}
