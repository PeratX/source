

void __fastcall VRAlignScreenController::~VRAlignScreenController(VRAlignScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall VRAlignScreenController::_registerBindings(VRAlignScreenController *this)
{
  VRAlignScreenController *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r1@2
  __int64 v4; // r1@6
  _DWORD *v5; // r0@10
  __int64 v6; // r1@10
  __int64 v7; // r1@10
  int v8; // r0@14
  __int64 v9; // r1@15
  __int64 v10; // r1@19
  __int64 v11; // r1@23
  __int64 v12; // r1@27
  __int64 v13; // r1@31
  _DWORD *v14; // r0@35
  __int64 v15; // r1@35
  __int64 v16; // r1@35
  void *v17; // r0@40
  int v18; // r0@42
  int v19; // r5@42
  bool v20; // zf@42
  signed int v21; // r0@42
  void *v22; // r0@45
  __int64 v23; // r1@45
  __int64 v24; // r1@45
  void *v25; // r0@49
  __int64 v26; // r1@49
  __int64 v27; // r1@49
  void *v28; // r0@53
  unsigned int *v29; // r2@55
  signed int v30; // r1@57
  void *v31; // [sp+4h] [bp-1A4h]@49
  __int64 v32; // [sp+Ch] [bp-19Ch]@49
  void *v33; // [sp+14h] [bp-194h]@49
  __int64 v34; // [sp+1Ch] [bp-18Ch]@49
  int v35; // [sp+24h] [bp-184h]@49
  void *v36; // [sp+28h] [bp-180h]@45
  __int64 v37; // [sp+30h] [bp-178h]@45
  void *v38; // [sp+38h] [bp-170h]@45
  __int64 v39; // [sp+40h] [bp-168h]@45
  int v40; // [sp+48h] [bp-160h]@45
  int v41; // [sp+4Ch] [bp-15Ch]@42
  void *v42; // [sp+50h] [bp-158h]@23
  __int64 v43; // [sp+58h] [bp-150h]@23
  void *v44; // [sp+60h] [bp-148h]@23
  void (*v45)(void); // [sp+68h] [bp-140h]@23
  int (*v46)(); // [sp+6Ch] [bp-13Ch]@23
  int v47; // [sp+70h] [bp-138h]@23
  void *v48; // [sp+74h] [bp-134h]@19
  __int64 v49; // [sp+7Ch] [bp-12Ch]@19
  void *v50; // [sp+84h] [bp-124h]@19
  void (*v51)(void); // [sp+8Ch] [bp-11Ch]@19
  void (__fastcall *v52)(int *); // [sp+90h] [bp-118h]@19
  int v53; // [sp+94h] [bp-114h]@19
  void *v54; // [sp+98h] [bp-110h]@15
  __int64 v55; // [sp+A0h] [bp-108h]@15
  void *v56; // [sp+A8h] [bp-100h]@15
  void (*v57)(void); // [sp+B0h] [bp-F8h]@15
  void (__fastcall *v58)(int *); // [sp+B4h] [bp-F4h]@15
  int v59; // [sp+B8h] [bp-F0h]@15
  void *v60; // [sp+BCh] [bp-ECh]@35
  __int64 v61; // [sp+C4h] [bp-E4h]@35
  _DWORD *v62; // [sp+CCh] [bp-DCh]@35
  __int64 v63; // [sp+D4h] [bp-D4h]@35
  int v64; // [sp+DCh] [bp-CCh]@35
  void *v65; // [sp+E0h] [bp-C8h]@31
  __int64 v66; // [sp+E8h] [bp-C0h]@31
  void *v67; // [sp+F0h] [bp-B8h]@31
  void (*v68)(void); // [sp+F8h] [bp-B0h]@31
  void (__fastcall *v69)(int *); // [sp+FCh] [bp-ACh]@31
  int v70; // [sp+100h] [bp-A8h]@31
  void *v71; // [sp+104h] [bp-A4h]@27
  __int64 v72; // [sp+10Ch] [bp-9Ch]@27
  void *v73; // [sp+114h] [bp-94h]@27
  void (*v74)(void); // [sp+11Ch] [bp-8Ch]@27
  void (__fastcall *v75)(int *); // [sp+120h] [bp-88h]@27
  int v76; // [sp+124h] [bp-84h]@27
  void *v77; // [sp+128h] [bp-80h]@10
  __int64 v78; // [sp+130h] [bp-78h]@10
  _DWORD *v79; // [sp+138h] [bp-70h]@10
  __int64 v80; // [sp+140h] [bp-68h]@10
  int v81; // [sp+148h] [bp-60h]@10
  void *v82; // [sp+14Ch] [bp-5Ch]@6
  __int64 v83; // [sp+154h] [bp-54h]@6
  void *v84; // [sp+15Ch] [bp-4Ch]@6
  void (*v85)(void); // [sp+164h] [bp-44h]@6
  void (__fastcall *v86)(int *); // [sp+168h] [bp-40h]@6
  int v87; // [sp+16Ch] [bp-3Ch]@6
  void *v88; // [sp+170h] [bp-38h]@2
  __int64 v89; // [sp+178h] [bp-30h]@2
  void *v90; // [sp+180h] [bp-28h]@2
  void (*v91)(void); // [sp+188h] [bp-20h]@2
  void (__fastcall *v92)(int *); // [sp+18Ch] [bp-1Ch]@2
  int v93; // [sp+190h] [bp-18h]@2

  v1 = this;
  v2 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)this + 95));
  if ( (*(int (**)(void))(*(_DWORD *)v2 + 104))() < 1 )
  {
    v8 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v1 + 95));
    if ( (*(int (**)(void))(*(_DWORD *)v8 + 308))() )
    {
      v59 = -1264415202;
      v56 = operator new(1u);
      v57 = (void (*)(void))sub_127D9D4;
      v58 = sub_127D908;
      v54 = operator new(1u);
      LODWORD(v9) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v9) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v55 = v9;
      ScreenController::bindString((int)v1, &v59, (int)&v56, (int)&v54);
      if ( (_DWORD)v55 )
        ((void (*)(void))v55)();
      if ( v57 )
        v57();
      v53 = -883927847;
      v50 = operator new(1u);
      v51 = (void (*)(void))sub_127DAD0;
      v52 = sub_127DA04;
      v48 = operator new(1u);
      LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v49 = v10;
      ScreenController::bindString((int)v1, &v53, (int)&v50, (int)&v48);
      if ( (_DWORD)v49 )
        ((void (*)(void))v49)();
      if ( v51 )
        v51();
      v47 = -1696374527;
      v44 = operator new(1u);
      v45 = (void (*)(void))sub_127DB02;
      v46 = sub_127DAFE;
      v42 = operator new(1u);
      LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v43 = v11;
      ScreenController::bindBool((int)v1, &v47, (int)&v44, (int)&v42);
      if ( (_DWORD)v43 )
        ((void (*)(void))v43)();
      if ( v45 )
        v45();
    }
    else
      v76 = -1264415202;
      v73 = operator new(1u);
      v74 = (void (*)(void))sub_127D794;
      v75 = sub_127D6C8;
      v71 = operator new(1u);
      LODWORD(v12) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v12) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v72 = v12;
      ScreenController::bindString((int)v1, &v76, (int)&v73, (int)&v71);
      if ( (_DWORD)v72 )
        ((void (*)(void))v72)();
      if ( v74 )
        v74();
      v70 = -883927847;
      v67 = operator new(1u);
      v68 = (void (*)(void))sub_127D890;
      v69 = sub_127D7C4;
      v65 = operator new(1u);
      LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
      HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
      v66 = v13;
      ScreenController::bindString((int)v1, &v70, (int)&v67, (int)&v65);
      if ( (_DWORD)v66 )
        ((void (*)(void))v66)();
      if ( v68 )
        v68();
      v64 = -1696374527;
      v14 = operator new(4u);
      LODWORD(v15) = sub_127D8D0;
      *v14 = v1;
      HIDWORD(v15) = sub_127D8BE;
      v62 = v14;
      v63 = v15;
      v60 = operator new(1u);
      LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v61 = v16;
      ScreenController::bindBool((int)v1, &v64, (int)&v62, (int)&v60);
      if ( (_DWORD)v61 )
        ((void (*)(void))v61)();
      if ( (_DWORD)v63 )
        ((void (*)(void))v63)();
  }
  else
    v93 = -1264415202;
    v90 = operator new(1u);
    v91 = (void (*)(void))sub_127D540;
    v92 = sub_127D474;
    v88 = operator new(1u);
    LODWORD(v3) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v3) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v89 = v3;
    ScreenController::bindString((int)v1, &v93, (int)&v90, (int)&v88);
    if ( (_DWORD)v89 )
      ((void (*)(void))v89)();
    if ( v91 )
      v91();
    v87 = -883927847;
    v84 = operator new(1u);
    v85 = (void (*)(void))sub_127D63C;
    v86 = sub_127D570;
    v82 = operator new(1u);
    LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v83 = v4;
    ScreenController::bindString((int)v1, &v87, (int)&v84, (int)&v82);
    if ( (_DWORD)v83 )
      ((void (*)(void))v83)();
    if ( v85 )
      v85();
    v81 = -1696374527;
    v5 = operator new(4u);
    LODWORD(v6) = sub_127D690;
    *v5 = v1;
    HIDWORD(v6) = sub_127D66A;
    v79 = v5;
    v80 = v6;
    v77 = operator new(1u);
    LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v78 = v7;
    ScreenController::bindBool((int)v1, &v81, (int)&v79, (int)&v77);
    if ( (_DWORD)v78 )
      ((void (*)(void))v78)();
    if ( (_DWORD)v80 )
      ((void (*)(void))v80)();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v17 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v17 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v17 + 552))(&v41);
  v18 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v1 + 95));
  v19 = (*(int (**)(void))(*(_DWORD *)v18 + 44))();
  v20 = sub_21E7D6C((const void **)&v41, "gear_vr") == 0;
  v21 = 0;
  if ( v20 )
    v21 = 1;
  if ( (v21 & v19) == 1 )
    v40 = -702309914;
    v22 = operator new(1u);
    LODWORD(v23) = sub_127DB48;
    v38 = v22;
    HIDWORD(v23) = sub_127DB30;
    v39 = v23;
    v36 = operator new(1u);
    LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v37 = v24;
    ScreenController::bindString((int)v1, &v40, (int)&v38, (int)&v36);
    if ( (_DWORD)v37 )
      ((void (*)(void))v37)();
    if ( (_DWORD)v39 )
      ((void (*)(void))v39)();
    v35 = -702309914;
    v25 = operator new(1u);
    LODWORD(v26) = sub_127DB90;
    v33 = v25;
    HIDWORD(v26) = sub_127DB78;
    v34 = v26;
    v31 = operator new(1u);
    LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
    HIDWORD(v27) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
    v32 = v27;
    ScreenController::bindString((int)v1, &v35, (int)&v33, (int)&v31);
    if ( (_DWORD)v32 )
      ((void (*)(void))v32)();
    if ( (_DWORD)v34 )
      ((void (*)(void))v34)();
  v28 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
}


void __fastcall VRAlignScreenController::~VRAlignScreenController(VRAlignScreenController *this)
{
  VRAlignScreenController::~VRAlignScreenController(this);
}


void __fastcall VRAlignScreenController::_registerEventHandlers(VRAlignScreenController *this)
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
  sub_21E94B4((void **)&v19, "button.mouse_clicked_vralign");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_127D3DA;
  *v3 = v1;
  HIDWORD(v4) = sub_127D3AC;
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
  sub_21E94B4((void **)&v16, "button.controller_select");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_127D43E;
  *v7 = v1;
  HIDWORD(v8) = sub_127D410;
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


void __fastcall VRAlignScreenController::_registerBindings(VRAlignScreenController *this)
{
  VRAlignScreenController::_registerBindings(this);
}


  if ( VRAlignScreenController::_getNumControllers(v3) >= (signed int)v3 )
{
    MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v1 + 380));
    result = 8;
  }
  else
  {
    result = 1;
  return result;
}


void __fastcall VRAlignScreenController::_registerEventHandlers(VRAlignScreenController *this)
{
  VRAlignScreenController::_registerEventHandlers(this);
}


int __fastcall VRAlignScreenController::_getNumControllers(VRAlignScreenController *this)
{
  __int64 v1; // r8@1
  __int64 v2; // r4@1
  signed int v3; // r10@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  int v7; // r8@14
  int v8; // r5@14 OVERLAPPED
  int v9; // r6@14 OVERLAPPED
  int v10; // r0@15
  unsigned int *v11; // r2@16
  unsigned int v12; // r1@18
  int v14; // [sp+0h] [bp-38h]@1
  int v15; // [sp+4h] [bp-34h]@1
  int v16; // [sp+Ch] [bp-2Ch]@1
  int v17; // [sp+10h] [bp-28h]@14

  GameControllerManager::getConnectedGameControllers(
    (GameControllerManager *)&v16,
    (__int64 *)&GameControllerManager::sGamePadManager);
  v1 = *(_QWORD *)&v16;
    (GameControllerManager *)&v14,
    (__int64 *)&GameControllerManager::sMotionControllerManager);
  v2 = *(_QWORD *)&v14;
  v3 = v15 - v14;
  if ( v15 != v14 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 8);
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
          (*(void (**)(void))(*(_DWORD *)v4 + 12))();
      }
      LODWORD(v2) = v2 + 8;
    }
    while ( (_DWORD)v2 != HIDWORD(v2) );
    LODWORD(v2) = v14;
  }
  if ( (_DWORD)v2 )
    operator delete((void *)v2);
  v7 = (v3 >> 3) + ((HIDWORD(v1) - (signed int)v1) >> 3);
  *(_QWORD *)&v8 = *(_QWORD *)&v16;
  if ( v16 != v17 )
      v10 = *(_DWORD *)(v8 + 4);
      if ( v10 )
        v11 = (unsigned int *)(v10 + 8);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (**)(void))(*(_DWORD *)v10 + 12))();
      v8 += 8;
    while ( v8 != v9 );
    v8 = v16;
  if ( v8 )
    operator delete((void *)v8);
  return v7;
}


int __fastcall VRAlignScreenController::tick(VRAlignScreenController *this)
{
  VRAlignScreenController *v1; // r5@1
  int v2; // r4@1
  int v3; // r0@2

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( *((_BYTE *)v1 + 421) )
  {
    *((_BYTE *)v1 + 421) = 0;
    v3 = MinecraftScreenModel::getHoloInput(*((MinecraftScreenModel **)v1 + 95));
    (*(void (**)(void))(*(_DWORD *)v3 + 132))();
  }
  return v2 | 1;
}


int __fastcall VRAlignScreenController::VRAlignScreenController(int a1, int a2)
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
  *(_DWORD *)v2 = &off_26E3E54;
  *(_BYTE *)(v2 + 421) = 1;
  VRAlignScreenController::_registerEventHandlers((VRAlignScreenController *)v2);
  VRAlignScreenController::_registerBindings((VRAlignScreenController *)v2);
  MinecraftScreenController::_setExitBehavior(v2, 1);
  return v2;
}
