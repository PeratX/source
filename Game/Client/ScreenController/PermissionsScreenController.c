

void __fastcall PermissionsScreenController::_registerEventHandlers(PermissionsScreenController *this)
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
  int i; // r6@13
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  int v21; // r7@23
  int *v22; // r5@23
  void *v23; // r0@25
  int v24; // r5@27
  _DWORD *v25; // r0@27
  __int64 v26; // r1@27
  void *v27; // r0@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  unsigned int *v34; // r2@43
  signed int v35; // r1@45
  unsigned int *v36; // r2@47
  signed int v37; // r1@49
  _DWORD *v38; // [sp+4h] [bp-BCh]@27
  __int64 v39; // [sp+Ch] [bp-B4h]@27
  int v40; // [sp+18h] [bp-A8h]@27
  int v41; // [sp+1Ch] [bp-A4h]@15
  int v42; // [sp+20h] [bp-A0h]@23
  ScreenController *v43; // [sp+24h] [bp-9Ch]@23
  int *v44; // [sp+28h] [bp-98h]@23
  int (__fastcall *v45)(void **, int *, int); // [sp+30h] [bp-90h]@23
  signed int (__fastcall *v46)(int, int); // [sp+34h] [bp-8Ch]@23
  _DWORD *v47; // [sp+38h] [bp-88h]@10
  __int64 v48; // [sp+40h] [bp-80h]@10
  int v49; // [sp+4Ch] [bp-74h]@10
  _DWORD *v50; // [sp+50h] [bp-70h]@7
  __int64 v51; // [sp+58h] [bp-68h]@7
  int v52; // [sp+64h] [bp-5Ch]@7
  _DWORD *v53; // [sp+68h] [bp-58h]@4
  __int64 v54; // [sp+70h] [bp-50h]@4
  int v55; // [sp+7Ch] [bp-44h]@4
  _DWORD *v56; // [sp+80h] [bp-40h]@1
  __int64 v57; // [sp+88h] [bp-38h]@1
  int v58; // [sp+94h] [bp-2Ch]@1

  v1 = this;
  sub_1590164((void **)&v58, "button.back_to_selector_area");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v58);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11DB560;
  *v3 = v1;
  HIDWORD(v4) = sub_11DB534;
  v56 = v3;
  v57 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v5 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v58 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v55, "player_toggle");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v55);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11DB632;
  *v7 = v1;
  HIDWORD(v8) = sub_11DB596;
  v53 = v7;
  v54 = v8;
  ScreenController::registerToggleChangeEventHandler((int)v1, v6, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v9 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v55 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v52, "button.dropdown_exit");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v52);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11DB676;
  *v11 = v1;
  HIDWORD(v12) = sub_11DB668;
  v50 = v11;
  v51 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v13 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v52 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1590164((void **)&v49, "permission_level_dropdown");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v49);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11DB6BA;
  *v15 = v1;
  HIDWORD(v16) = sub_11DB6AC;
  v47 = v15;
  v48 = v16;
  ScreenController::registerToggleChangeEventHandler((int)v1, v14, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v17 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v49 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  for ( i = dword_27DC6EC; i; i = *(_DWORD *)i )
    v21 = MinecraftScreenController::_getNameId(v1, (int **)(i + 4));
    sub_15901A4(&v41, (int *)(i + 4));
    v42 = *(_DWORD *)(i + 8);
    v43 = v1;
    v45 = 0;
    v22 = (int *)operator new(0xCu);
    sub_15901A4(v22, &v41);
    v22[1] = v42;
    v22[2] = (int)v43;
    v44 = v22;
    v46 = sub_11DB6F0;
    v45 = sub_11DB9A4;
    ScreenController::registerToggleChangeEventHandler((int)v1, v21, (int)&v44);
    if ( v45 )
      v45((void **)&v44, (int *)&v44, 3);
    v23 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v41 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v23);
  sub_1590164((void **)&v40, "option_toggle");
  v24 = MinecraftScreenController::_getNameId(v1, (int **)&v40);
  v25 = operator new(4u);
  LODWORD(v26) = sub_11DC038;
  *v25 = v1;
  HIDWORD(v26) = sub_11DBDC8;
  v38 = v25;
  v39 = v26;
  ScreenController::registerToggleChangeEventHandler((int)v1, v24, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v27 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v40 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v27);
}


void __fastcall PermissionsScreenController::_registerBindings(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r10@1
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
  int i; // r9@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  _BYTE *v23; // r7@35
  size_t v24; // r0@35
  int j; // r1@35
  int v26; // t1@36
  void *v27; // r7@37
  void *v28; // r0@41
  _DWORD *v29; // r0@43
  __int64 v30; // r1@43
  __int64 v31; // r1@43
  _DWORD *v32; // r0@47
  __int64 v33; // r1@47
  __int64 v34; // r1@47
  _DWORD *v35; // r0@51
  __int64 v36; // r1@51
  __int64 v37; // r1@51
  _DWORD *v38; // r0@55
  __int64 v39; // r1@55
  __int64 v40; // r1@55
  _DWORD *v41; // r0@59
  __int64 v42; // r1@59
  __int64 v43; // r1@59
  _DWORD *v44; // r0@63
  __int64 v45; // r1@63
  __int64 v46; // r1@63
  _DWORD *v47; // r0@67
  __int64 v48; // r1@67
  __int64 v49; // r1@67
  _DWORD *v50; // r0@71
  __int64 v51; // r1@71
  __int64 v52; // r1@71
  void *v53; // [sp+14h] [bp-264h]@71
  __int64 v54; // [sp+1Ch] [bp-25Ch]@71
  _DWORD *v55; // [sp+24h] [bp-254h]@71
  __int64 v56; // [sp+2Ch] [bp-24Ch]@71
  int v57; // [sp+34h] [bp-244h]@71
  void *v58; // [sp+38h] [bp-240h]@67
  __int64 v59; // [sp+40h] [bp-238h]@67
  _DWORD *v60; // [sp+48h] [bp-230h]@67
  __int64 v61; // [sp+50h] [bp-228h]@67
  int v62; // [sp+58h] [bp-220h]@67
  void *v63; // [sp+5Ch] [bp-21Ch]@63
  __int64 v64; // [sp+64h] [bp-214h]@63
  _DWORD *v65; // [sp+6Ch] [bp-20Ch]@63
  __int64 v66; // [sp+74h] [bp-204h]@63
  int v67; // [sp+7Ch] [bp-1FCh]@63
  void *v68; // [sp+80h] [bp-1F8h]@59
  __int64 v69; // [sp+88h] [bp-1F0h]@59
  _DWORD *v70; // [sp+90h] [bp-1E8h]@59
  __int64 v71; // [sp+98h] [bp-1E0h]@59
  int v72; // [sp+A0h] [bp-1D8h]@59
  int v73; // [sp+A4h] [bp-1D4h]@59
  void *v74; // [sp+A8h] [bp-1D0h]@55
  __int64 v75; // [sp+B0h] [bp-1C8h]@55
  _DWORD *v76; // [sp+B8h] [bp-1C0h]@55
  __int64 v77; // [sp+C0h] [bp-1B8h]@55
  int v78; // [sp+C8h] [bp-1B0h]@55
  int v79; // [sp+CCh] [bp-1ACh]@55
  void *v80; // [sp+D0h] [bp-1A8h]@51
  __int64 v81; // [sp+D8h] [bp-1A0h]@51
  _DWORD *v82; // [sp+E0h] [bp-198h]@51
  __int64 v83; // [sp+E8h] [bp-190h]@51
  int v84; // [sp+F0h] [bp-188h]@51
  int v85; // [sp+F4h] [bp-184h]@51
  void *v86; // [sp+F8h] [bp-180h]@47
  __int64 v87; // [sp+100h] [bp-178h]@47
  _DWORD *v88; // [sp+108h] [bp-170h]@47
  __int64 v89; // [sp+110h] [bp-168h]@47
  int v90; // [sp+118h] [bp-160h]@47
  int v91; // [sp+11Ch] [bp-15Ch]@47
  void *v92; // [sp+120h] [bp-158h]@43
  __int64 v93; // [sp+128h] [bp-150h]@43
  _DWORD *v94; // [sp+130h] [bp-148h]@43
  __int64 v95; // [sp+138h] [bp-140h]@43
  int v96; // [sp+140h] [bp-138h]@43
  void *v97; // [sp+144h] [bp-134h]@37
  int (__fastcall *v98)(void **, void **, int); // [sp+14Ch] [bp-12Ch]@37
  signed int (*v99)(); // [sp+150h] [bp-128h]@37
  PermissionsScreenController *v100; // [sp+154h] [bp-124h]@37
  int v101; // [sp+158h] [bp-120h]@27
  int v102; // [sp+15Ch] [bp-11Ch]@37
  void *v103; // [sp+160h] [bp-118h]@37
  int (__fastcall *v104)(int *, int *, int); // [sp+168h] [bp-110h]@37
  signed int (__fastcall *v105)(int); // [sp+16Ch] [bp-10Ch]@37
  int v106; // [sp+170h] [bp-108h]@37
  void *v107; // [sp+174h] [bp-104h]@21
  __int64 v108; // [sp+17Ch] [bp-FCh]@21
  _DWORD *v109; // [sp+184h] [bp-F4h]@21
  __int64 v110; // [sp+18Ch] [bp-ECh]@21
  int v111; // [sp+194h] [bp-E4h]@21
  void *v112; // [sp+198h] [bp-E0h]@17
  __int64 v113; // [sp+1A0h] [bp-D8h]@17
  _DWORD *v114; // [sp+1A8h] [bp-D0h]@17
  __int64 v115; // [sp+1B0h] [bp-C8h]@17
  int v116; // [sp+1B8h] [bp-C0h]@17
  void *v117; // [sp+1BCh] [bp-BCh]@13
  __int64 v118; // [sp+1C4h] [bp-B4h]@13
  _DWORD *v119; // [sp+1CCh] [bp-ACh]@13
  __int64 v120; // [sp+1D4h] [bp-A4h]@13
  int v121; // [sp+1DCh] [bp-9Ch]@13
  void *v122; // [sp+1E0h] [bp-98h]@9
  __int64 v123; // [sp+1E8h] [bp-90h]@9
  _DWORD *v124; // [sp+1F0h] [bp-88h]@9
  __int64 v125; // [sp+1F8h] [bp-80h]@9
  int v126; // [sp+200h] [bp-78h]@9
  int v127; // [sp+204h] [bp-74h]@9
  void *v128; // [sp+208h] [bp-70h]@5
  __int64 v129; // [sp+210h] [bp-68h]@5
  _DWORD *v130; // [sp+218h] [bp-60h]@5
  __int64 v131; // [sp+220h] [bp-58h]@5
  int v132; // [sp+228h] [bp-50h]@5
  void *v133; // [sp+22Ch] [bp-4Ch]@1
  __int64 v134; // [sp+234h] [bp-44h]@1
  _DWORD *v135; // [sp+23Ch] [bp-3Ch]@1
  __int64 v136; // [sp+244h] [bp-34h]@1
  int v137; // [sp+24Ch] [bp-2Ch]@1

  v1 = this;
  v137 = 1620443418;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11DC28C;
  *v2 = v1;
  HIDWORD(v3) = sub_11DC27C;
  v135 = v2;
  v136 = v3;
  v133 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v134 = v4;
  ScreenController::bindBool((int)v1, &v137, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  StringHash::StringHash<char [24]>(&v132, (int)"#gamepad_helper_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_11DC2CC;
  *v5 = v1;
  HIDWORD(v6) = sub_11DC2C2;
  v130 = v5;
  v131 = v6;
  v128 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v129 = v7;
  ScreenController::bindBool((int)v1, &v132, (int)&v130, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  v127 = 1793510322;
  v126 = 587485862;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11DC314;
  *v8 = v1;
  HIDWORD(v9) = sub_11DC302;
  v124 = v8;
  v125 = v9;
  v122 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v123 = v10;
  ScreenController::bindBoolForCollection((int)v1, &v127, &v126, (int)&v124, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  StringHash::StringHash<char [27]>(&v121, (int)"#permission_level_dropdown");
  v11 = operator new(4u);
  LODWORD(v12) = sub_11DC35A;
  *v11 = v1;
  HIDWORD(v12) = sub_11DC34A;
  v119 = v11;
  v120 = v12;
  v117 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v13;
  ScreenController::bindBool((int)v1, &v121, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  StringHash::StringHash<char [33]>(&v116, (int)"#permission_level_dropdown_label");
  v14 = operator new(4u);
  LODWORD(v15) = sub_11DC490;
  *v14 = v1;
  HIDWORD(v15) = sub_11DC390;
  v114 = v14;
  v115 = v15;
  v112 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v16;
  ScreenController::bindString((int)v1, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  StringHash::StringHash<char [40]>(&v111, (int)"#permission_level_dropdown_icon_texture");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11DC578;
  *v17 = v1;
  HIDWORD(v18) = sub_11DC4C8;
  v109 = v17;
  v110 = v18;
  v107 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v108 = v19;
  ScreenController::bindString((int)v1, &v111, (int)&v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  for ( i = dword_27DC6EC; i; i = *(_DWORD *)i )
  {
    v23 = *(_BYTE **)(i + 4);
    v24 = strlen(*(const char **)(i + 4));
    for ( j = -2128831035; v24; j = 16777619 * (j ^ v26) )
    {
      v26 = *v23++;
      --v24;
    }
    v106 = j;
    v100 = v1;
    sub_15901A4(&v101, (int *)(i + 4));
    v102 = *(_DWORD *)(i + 8);
    v104 = 0;
    v27 = operator new(0xCu);
    *(_DWORD *)v27 = v100;
    sub_15901A4((int *)v27 + 1, &v101);
    *((_DWORD *)v27 + 2) = v102;
    v103 = v27;
    v105 = sub_11DC5AE;
    v98 = 0;
    v104 = sub_11DC5CC;
    v97 = operator new(1u);
    v99 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v98 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    ScreenController::bindBool((int)v1, &v106, (int)&v103, (int)&v97);
    if ( v98 )
      v98(&v97, &v97, 3);
    if ( v104 )
      v104((int *)&v103, (int *)&v103, 3);
    v28 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v101 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v28);
  }
  StringHash::StringHash<char [28]>(&v96, (int)"#permissions_grid_dimension");
  v29 = operator new(4u);
  LODWORD(v30) = sub_11DC688;
  *v29 = v1;
  HIDWORD(v30) = sub_11DC674;
  v94 = v29;
  v95 = v30;
  v92 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v93 = v31;
  ScreenController::bindGridSize((int)v1, &v96, (int)&v94, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  StringHash::StringHash<char [23]>(&v91, (int)"permissions_collection");
  v90 = 430507051;
  v32 = operator new(4u);
  LODWORD(v33) = sub_11DC764;
  *v32 = v1;
  HIDWORD(v33) = sub_11DC6C0;
  v88 = v32;
  v89 = v33;
  v86 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v87 = v34;
  ScreenController::bindStringForCollection((int)v1, &v91, &v90, (int)&v88, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  StringHash::StringHash<char [23]>(&v85, (int)"permissions_collection");
  v84 = -1532660363;
  v35 = operator new(4u);
  LODWORD(v36) = sub_11DC7D8;
  *v35 = v1;
  HIDWORD(v36) = sub_11DC79C;
  v82 = v35;
  v83 = v36;
  v80 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v81 = v37;
  ScreenController::bindStringForCollection((int)v1, &v85, &v84, (int)&v82, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  StringHash::StringHash<char [23]>(&v79, (int)"permissions_collection");
  v78 = 1803003010;
  v38 = operator new(4u);
  LODWORD(v39) = sub_11DC822;
  *v38 = v1;
  HIDWORD(v39) = sub_11DC80E;
  v76 = v38;
  v77 = v39;
  v74 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v75 = v40;
  ScreenController::bindBoolForCollection((int)v1, &v79, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v73 = 1793510322;
  StringHash::StringHash<char [38]>(&v72, (int)"#player_permission_level_icon_texture");
  v41 = operator new(4u);
  LODWORD(v42) = sub_11DC920;
  *v41 = v1;
  HIDWORD(v42) = sub_11DC858;
  v70 = v41;
  v71 = v42;
  v68 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v69 = v43;
  ScreenController::bindStringForCollection((int)v1, &v73, &v72, (int)&v70, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  v67 = -532179637;
  v44 = operator new(4u);
  LODWORD(v45) = sub_11DC984;
  *v44 = v1;
  HIDWORD(v45) = sub_11DC956;
  v65 = v44;
  v66 = v45;
  v63 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v64 = v46;
  ScreenController::bindBool((int)v1, &v67, (int)&v65, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  StringHash::StringHash<char [23]>(&v62, (int)"#selector_area_focused");
  v47 = operator new(4u);
  LODWORD(v48) = sub_11DC9EA;
  *v47 = v1;
  HIDWORD(v48) = sub_11DC9BA;
  v60 = v47;
  v61 = v48;
  v58 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v59 = v49;
  ScreenController::bindBool((int)v1, &v62, (int)&v60, (int)&v58);
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  v57 = 1448505321;
  v50 = operator new(4u);
  LODWORD(v51) = sub_11DCA4C;
  *v50 = v1;
  HIDWORD(v51) = sub_11DCA20;
  v55 = v50;
  v56 = v51;
  v53 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v54 = v52;
  ScreenController::bindString((int)v1, &v57, (int)&v55, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
}


PermissionsScreenController *__fastcall PermissionsScreenController::~PermissionsScreenController(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r11@1
  int v2; // r0@3
  unsigned int *v3; // r2@4
  unsigned int v4; // r1@6
  void *v5; // r0@11
  void *v6; // r5@13
  void *v7; // r7@13
  unsigned int *v8; // r2@15
  signed int v9; // r1@17
  int *v10; // r0@23

  v1 = this;
  *(_DWORD *)this = &off_26E2BBC;
  if ( *((_BYTE *)this + 536) )
    MinecraftScreenModel::sendSetAbilitiesPacket(
      *((_DWORD *)this + 106),
      (int)this + 436,
      (unsigned __int64 *)this + 64,
      0);
  v2 = *((_DWORD *)v1 + 140);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
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
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = (void *)*((_DWORD *)v1 + 135);
  if ( v5 )
    operator delete(v5);
  v7 = (void *)(*(_QWORD *)((char *)v1 + 524) >> 32);
  v6 = (void *)*(_QWORD *)((char *)v1 + 524);
  if ( v6 != v7 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9_2(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = (void *)*((_DWORD *)v1 + 131);
  if ( v6 )
    operator delete(v6);
  Abilities::~Abilities((PermissionsScreenController *)((char *)v1 + 436));
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  return v1;
}


void __fastcall PermissionsScreenController::_registerEventHandlers(PermissionsScreenController *this)
{
  PermissionsScreenController::_registerEventHandlers(this);
}


signed int __fastcall PermissionsScreenController::_isSelectorAreaFocused(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  v3 = MinecraftScreenController::getHoloUIInputMode(v1);
  result = 0;
  if ( v2 == 3 && v3 != 2 )
  {
    result = 0;
    if ( !*((_BYTE *)v1 + 564) )
      result = 1;
  }
  return result;
}


signed int __fastcall PermissionsScreenController::_isContentAreaFocused(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  v3 = MinecraftScreenController::getHoloUIInputMode(v1);
  result = 0;
  if ( v2 == 3 && v3 != 2 )
  {
    result = *((_BYTE *)v1 + 564);
    if ( *((_BYTE *)v1 + 564) )
      result = 1;
  }
  return result;
}


void __fastcall PermissionsScreenController::~PermissionsScreenController(PermissionsScreenController *this)
{
  PermissionsScreenController::~PermissionsScreenController(this);
}


int __fastcall PermissionsScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@3
  unsigned int v6; // r1@5
  _QWORD *v7; // r0@5
  int v8; // r2@6
  int v9; // r0@6
  int *v10; // r1@6

  v2 = a2;
  v3 = a1;
  v4 = ScreenController::handleGameEventNotification(a1);
  if ( (v2 | 1) == 3 )
  {
    if ( *(_BYTE *)(v3 + 536) )
    {
      v5 = v3 + 436;
      MinecraftScreenModel::sendSetAbilitiesPacket(*(_DWORD *)(v3 + 424), v3 + 436, (unsigned __int64 *)(v3 + 512), 0);
    }
    else
    PermissionsScreenController::_populateClientIds((PermissionsScreenController *)v3);
    v6 = *(_DWORD *)(v3 + 520);
    v7 = (_QWORD *)*(_QWORD *)(v3 + 540);
    if ( v6 < (signed int)((*(_QWORD *)(v3 + 540) >> 32) - (_DWORD)v7) >> 3 )
      v8 = v7[v6];
      v9 = HIDWORD(v7[v6]);
      *(_DWORD *)(v3 + 512) = v8;
      *(_DWORD *)(v3 + 516) = v9;
      v10 = (int *)MinecraftScreenModel::getArbitraryPlayerAbilities(
                     *(_DWORD *)(v3 + 424),
                     (unsigned __int64 *)(v3 + 512));
      if ( v10 )
      {
LABEL_9:
        Abilities::operator=(v5, v10);
        v4 |= 1u;
        *(_BYTE *)(v3 + 432) = 0;
        return v4;
      }
      v7 = *(_QWORD **)(v3 + 540);
    *(_DWORD *)(v3 + 520) = 0;
    *(_QWORD *)(v3 + 512) = *v7;
    v10 = (int *)MinecraftScreenModel::getPlayerAbilities(*(MinecraftScreenModel **)(v3 + 424));
    goto LABEL_9;
  }
  return v4;
}


int __fastcall PermissionsScreenController::_usingGamepadModalBehavior(int a1, int a2, int a3)
{
  bool v3; // zf@1
  signed int v4; // r2@1
  signed int v5; // r0@3

  v3 = a3 == 2;
  v4 = 0;
  if ( !v3 )
    v4 = 1;
  v5 = 0;
  if ( a2 == 3 )
    v5 = 1;
  return v5 & v4;
}


int __fastcall PermissionsScreenController::_setAbility(PermissionsScreenController *this, int a2, int a3)
{
  PermissionsScreenController *v3; // r5@1
  int v4; // r4@1
  int result; // r0@1
  int v6; // r6@1
  int v7; // r7@2
  int v8; // r0@2
  const void **v9; // r8@2
  int v10; // r0@2
  bool v11; // zf@2
  const void *v12; // r7@6
  size_t v13; // r6@6
  int v14; // r7@11
  const void *v15; // r0@12
  size_t v16; // r2@12
  int v17; // r0@15
  int **v18; // r1@15
  char v19; // r2@15

  v3 = this;
  v4 = a3;
  result = *((_BYTE *)this + 536);
  v6 = a2;
  if ( result )
  {
    v7 = *((_DWORD *)v3 + 131);
    v8 = MinecraftScreenModel::getClientModel(*((MinecraftScreenModel **)v3 + 95));
    v9 = (const void **)(v7 + 4 * v6);
    v10 = (*(int (**)(void))(*(_DWORD *)v8 + 8))();
    v11 = v10 == 0;
    if ( !v10 )
      v11 = v4 == 1;
    if ( v11 )
    {
      if ( (v12 = *v9, v13 = *((_DWORD *)*v9 - 3), v13 == *(Abilities::OPERATOR - 3))
        && !memcmp(*v9, Abilities::OPERATOR, *((_DWORD *)*v9 - 3))
        || v13 == *(Abilities::TELEPORT - 3) && !memcmp(v12, Abilities::TELEPORT, v13) )
      {
        PermissionsScreenController::confirmationNoCheatsDialog(v3);
      }
    }
    result = MinecraftScreenModel::getArbitraryPlayerAbilities(*((_DWORD *)v3 + 106), (unsigned __int64 *)v3 + 64);
    v14 = result;
    if ( result )
      v15 = *v9;
      v16 = *((_DWORD *)*v9 - 3);
      if ( v4 )
        if ( v16 != *(Abilities::TELEPORT - 3) || memcmp(v15, Abilities::TELEPORT, v16) )
          goto LABEL_21;
        Abilities::setAbility((int)v3 + 436, &Abilities::OPERATOR, 1);
        v17 = v14;
        v18 = &Abilities::OPERATOR;
        v19 = 1;
      else
        if ( v16 != *(Abilities::OPERATOR - 3) || memcmp(v15, Abilities::OPERATOR, v16) )
        Abilities::setAbility((int)v3 + 436, &Abilities::TELEPORT, 0);
        v18 = &Abilities::TELEPORT;
        v19 = 0;
      Abilities::setAbility(v17, v18, v19);
LABEL_21:
      Abilities::setAbility((int)v3 + 436, (int **)v9, v4);
      return j_j_j__ZN9Abilities10setAbilityERKSsb(v14, (int **)v9, v4);
  }
  return result;
}


ModalScreenData *__fastcall PermissionsScreenController::confirmationNoCheatsDialog(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r4@1
  __int64 v2; // r1@1 OVERLAPPED
  void *v4; // [sp+0h] [bp-58h]@1
  __int64 v5; // [sp+8h] [bp-50h]@1
  void *v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  void *v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  void *v14; // [sp+30h] [bp-28h]@1
  void *v15; // [sp+34h] [bp-24h]@1
  void *v16; // [sp+38h] [bp-20h]@1
  void *v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  char v19; // [sp+44h] [bp-14h]@1

  v1 = this;
  v6 = &unk_28898CC;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = &unk_28898CC;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = &unk_28898CC;
  v15 = &unk_28898CC;
  v16 = &unk_28898CC;
  v17 = &unk_28898CC;
  v18 = 1;
  v19 = 0;
  sub_15903F4(&v10, "permissions.nocheats.message", (_BYTE *)0x1C);
  sub_15903F4(&v6, "permissions.nocheats", (_BYTE *)0x14);
  sub_15903F4(&v16, "gui.ok", (_BYTE *)6);
  v18 = 2;
  v4 = operator new(1u);
  LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIFv19ModalScreenButtonIdEEEd_UlS6_E_E10_M_managerERSt9_Any_dataRKSB_St18_Manager_operation;
  HIDWORD(v2) = ZNSt17_Function_handlerIFv19ModalScreenButtonIdEZN25MinecraftScreenController24_displayCustomModalPopupERK15ModalScreenDataSt8functionIS1_EEd_UlS0_E_E9_M_invokeERKSt9_Any_dataS0_;
  v5 = v2;
  HIDWORD(v2) = &v4;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v6, *(__int64 *)((char *)&v2 + 4));
  if ( (_DWORD)v5 )
    ((void (*)(void))v5)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v6);
}


void __fastcall PermissionsScreenController::~PermissionsScreenController(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r0@1

  v1 = PermissionsScreenController::~PermissionsScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall PermissionsScreenController::_abilitySetterHelper(int result, int a2, int a3)
{
  int v3; // r4@1

  v3 = result;
  if ( a2 >= 0 )
  {
    result = *(_BYTE *)(result + 536);
    if ( *(_BYTE *)(v3 + 536) )
    {
      result = (signed int)((*(_QWORD *)(v3 + 524) >> 32) - *(_QWORD *)(v3 + 524)) >> 2;
      if ( result > a2 )
      {
        PermissionsScreenController::_setAbility((PermissionsScreenController *)v3, a2, a3);
        if ( Abilities::getBool(v3 + 436, &Abilities::BUILD_AND_MINE)
          || Abilities::getBool(v3 + 436, &Abilities::DOORS_AND_SWITCHES)
          || Abilities::getBool(v3 + 436, &Abilities::OPEN_CONTAINERS)
          || Abilities::getBool(v3 + 436, &Abilities::ATTACK_PLAYERS)
          || Abilities::getBool(v3 + 436, &Abilities::ATTACK_MOBS)
          || Abilities::getBool(v3 + 436, &Abilities::OPERATOR)
          || Abilities::getBool(v3 + 436, &Abilities::TELEPORT) )
        {
          if ( Abilities::getBool(v3 + 436, &Abilities::BUILD_AND_MINE) != 1
            || Abilities::getBool(v3 + 436, &Abilities::DOORS_AND_SWITCHES) != 1
            || Abilities::getBool(v3 + 436, &Abilities::OPEN_CONTAINERS) != 1
            || Abilities::getBool(v3 + 436, &Abilities::ATTACK_PLAYERS) != 1
            || Abilities::getBool(v3 + 436, &Abilities::ATTACK_MOBS) != 1
            || Abilities::getBool(v3 + 436, &Abilities::OPERATOR)
            || Abilities::getBool(v3 + 436, &Abilities::TELEPORT) )
          {
            if ( Abilities::getBool(v3 + 436, &Abilities::BUILD_AND_MINE) != 1
              || Abilities::getBool(v3 + 436, &Abilities::DOORS_AND_SWITCHES) != 1
              || Abilities::getBool(v3 + 436, &Abilities::OPEN_CONTAINERS) != 1
              || Abilities::getBool(v3 + 436, &Abilities::ATTACK_PLAYERS) != 1
              || Abilities::getBool(v3 + 436, &Abilities::ATTACK_MOBS) != 1
              || Abilities::getBool(v3 + 436, &Abilities::OPERATOR) != 1
              || Abilities::getBool(v3 + 436, &Abilities::TELEPORT) != 1 )
            {
              result = *(_BYTE *)(v3 + 536);
              if ( *(_BYTE *)(v3 + 536) )
              {
                result = Abilities::getPlayerPermissions((Abilities *)(v3 + 436));
                if ( result != 3 )
                {
                  Abilities::setPlayerPermissions((PermissionsHandler **)(v3 + 436), 3);
                  result = MinecraftScreenModel::getArbitraryPlayerAbilities(
                             *(_DWORD *)(v3 + 424),
                             (unsigned __int64 *)(v3 + 512));
                  if ( result )
                    result = j_j_j__ZN9Abilities20setPlayerPermissionsE21PlayerPermissionLevel_0(
                               (PermissionsHandler **)result,
                               3);
                }
              }
            }
            else
                if ( result != 2 )
                  Abilities::setPlayerPermissions((PermissionsHandler **)(v3 + 436), 2);
                               2);
          }
          else
            result = *(_BYTE *)(v3 + 536);
            if ( *(_BYTE *)(v3 + 536) )
              result = Abilities::getPlayerPermissions((Abilities *)(v3 + 436));
              if ( result != 1 )
                Abilities::setPlayerPermissions((PermissionsHandler **)(v3 + 436), 1);
                result = MinecraftScreenModel::getArbitraryPlayerAbilities(
                           *(_DWORD *)(v3 + 424),
                           (unsigned __int64 *)(v3 + 512));
                if ( result )
                  result = j_j_j__ZN9Abilities20setPlayerPermissionsE21PlayerPermissionLevel_0(
                             (PermissionsHandler **)result,
                             1);
        }
        else
          result = *(_BYTE *)(v3 + 536);
          if ( *(_BYTE *)(v3 + 536) )
            result = Abilities::getPlayerPermissions((Abilities *)(v3 + 436));
            if ( result )
              Abilities::setPlayerPermissions((PermissionsHandler **)(v3 + 436), 0);
              result = MinecraftScreenModel::getArbitraryPlayerAbilities(
                         *(_DWORD *)(v3 + 424),
                         (unsigned __int64 *)(v3 + 512));
              if ( result )
                result = j_j_j__ZN9Abilities20setPlayerPermissionsE21PlayerPermissionLevel_0(
                           (PermissionsHandler **)result,
                           0);
      }
    }
  }
  return result;
}


ModalScreenData *__fastcall PermissionsScreenController::confirmationDeoppingSelfDialog(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r2@1
  int v6; // [sp+0h] [bp-58h]@2
  void (*v7)(void); // [sp+8h] [bp-50h]@1
  int v8; // [sp+Ch] [bp-4Ch]@2
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
  sub_15903F4(&v13, "permissions.deopingself.message", (_BYTE *)0x1F);
  sub_15903F4(&v9, "permissions.deopingself", (_BYTE *)0x17);
  sub_15903F4(&v18, "options.continue", (_BYTE *)0x10);
  sub_15903F4(&v20, "options.goBack", (_BYTE *)0xE);
  v7 = 0;
  HIDWORD(v4) = *(_DWORD *)(v3 + 8);
  if ( HIDWORD(v4) )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v4))(&v6, v3, 2);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(void (**)(void))(v3 + 8);
  }
  LODWORD(v4) = &v6;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v9, v4);
  if ( v7 )
    v7();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v9);
}


int __fastcall PermissionsScreenController::_getArbitraryPermissionLevel(PermissionsScreenController *this, int a2)
{
  __int64 v2; // r2@1
  Abilities *v3; // r0@2
  int result; // r0@3

  v2 = *(_QWORD *)((char *)this + 540);
  if ( (HIDWORD(v2) - (signed int)v2) >> 3 > (unsigned int)a2
    && (v3 = (Abilities *)MinecraftScreenModel::getArbitraryPlayerAbilities(
                            *((_DWORD *)this + 106),
                            (unsigned __int64 *)(v2 + 8 * a2))) != 0 )
  {
    result = Abilities::getPlayerPermissions(v3);
  }
  else
    result = -1;
  return result;
}


void __fastcall PermissionsScreenController::_registerSubControllers(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r2@4
  unsigned int v5; // r1@10
  int v6; // r0@13
  unsigned int *v7; // r2@14
  unsigned int v8; // r1@16
  unsigned int *v9; // r1@22
  unsigned int v10; // r0@24
  unsigned int *v11; // r0@30
  unsigned int v12; // r1@32
  int v13; // r4@35
  unsigned int *v14; // r1@36
  unsigned int v15; // r0@38
  unsigned int *v16; // r5@42
  unsigned int v17; // r0@44
  int v18; // r4@49
  unsigned int *v19; // r1@50
  unsigned int v20; // r0@52
  unsigned int *v21; // r5@56
  unsigned int v22; // r0@58
  int v23; // [sp+4h] [bp-24h]@29
  int v24; // [sp+8h] [bp-20h]@29
  int v25; // [sp+Ch] [bp-1Ch]@1
  int v26; // [sp+10h] [bp-18h]@1
  char v27; // [sp+14h] [bp-14h]@1

  v1 = this;
  std::__shared_ptr<UserDataScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<UserDataScreenController>,std::shared_ptr<ClientInstanceScreenModel> &>(
    (int)&v25,
    (int)&v27,
    (int)this + 424);
  v2 = *(_QWORD *)&v25;
  if ( v26 )
  {
    v3 = (unsigned int *)(v26 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
    *((_DWORD *)v1 + 139) = v2;
        v5 = __ldrex(v3);
      while ( __strex(v5 + 1, v3) );
  }
  else
    *((_DWORD *)v1 + 139) = v25;
  v6 = *((_DWORD *)v1 + 140);
  if ( v6 )
    v7 = (unsigned int *)(v6 + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  *((_DWORD *)v1 + 140) = HIDWORD(v2);
  if ( HIDWORD(v2) )
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v23 = v25;
  v24 = v26;
    v11 = (unsigned int *)(v26 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  ScreenController::_registerSubController((int)v1, (int)&v23);
  v13 = v24;
  if ( v24 )
    v14 = (unsigned int *)(v24 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v18 = v26;
    v19 = (unsigned int *)(v26 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
}


char *__fastcall PermissionsScreenController::_setCurrentPermissionLevel(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r5@1
  char *result; // r0@1
  char *v6; // r6@1
  bool v7; // zf@5
  int i; // r5@9

  v3 = a1;
  v4 = a3;
  result = (char *)*(_BYTE *)(a1 + 536);
  v6 = (char *)a2;
  if ( result )
  {
    result = (char *)Abilities::getPlayerPermissions((Abilities *)(v3 + 436));
    if ( result != v6 )
    {
      Abilities::setPlayerPermissions((PermissionsHandler **)(v3 + 436), (int)v6);
      result = (char *)MinecraftScreenModel::getArbitraryPlayerAbilities(
                         *(_DWORD *)(v3 + 424),
                         (unsigned __int64 *)(v3 + 512));
      if ( result )
        result = (char *)Abilities::setPlayerPermissions((PermissionsHandler **)result, (int)v6);
      v7 = v6 == (char *)3;
      if ( v6 == (char *)3 )
        v7 = v4 == 1;
      if ( v7 )
      {
        result = Abilities::getStoredCustomAbilities((Abilities *)(v3 + 436));
        for ( i = *((_DWORD *)result + 2); i; i = *(_DWORD *)i )
          result = (char *)Abilities::setAbility(v3 + 436, (int **)(i + 4), *(_BYTE *)(i + 8));
      }
    }
  }
  return result;
}


int __fastcall PermissionsScreenController::_usingGamepadModalBehavior(PermissionsScreenController *this)
{
  MinecraftScreenController *v1; // r4@1
  signed int v2; // r6@1
  signed int v3; // r5@1

  v1 = this;
  v2 = 0;
  v3 = 0;
  if ( MinecraftScreenController::getInputMode(this) == 3 )
    v2 = 1;
  if ( MinecraftScreenController::getHoloUIInputMode(v1) != 2 )
    v3 = 1;
  return v2 & v3;
}


int __fastcall PermissionsScreenController::tick(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r5@1
  int v2; // r8@1
  unsigned int v3; // r1@2
  _QWORD *v4; // r0@2
  int v5; // r2@3
  int v6; // r0@3
  int *v7; // r1@3
  int *v8; // r6@6
  __int64 v9; // kr08_8@6
  __int64 v10; // r0@7
  signed int v11; // r0@14
  int *v12; // r0@17
  int v13; // r0@17
  Ability *v14; // r0@17
  int v16; // [sp+0h] [bp-60h]@17

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( !*((_BYTE *)v1 + 552) )
  {
    *((_BYTE *)v1 + 552) = 1;
    PermissionsScreenController::_populateClientIds(v1);
    v3 = *((_DWORD *)v1 + 130);
    v4 = (_QWORD *)*(_QWORD *)((char *)v1 + 540);
    if ( v3 < (signed int)((*(_QWORD *)((char *)v1 + 540) >> 32) - (_DWORD)v4) >> 3 )
    {
      v5 = v4[v3];
      v6 = HIDWORD(v4[v3]);
      *((_DWORD *)v1 + 128) = v5;
      *((_DWORD *)v1 + 129) = v6;
      v7 = (int *)MinecraftScreenModel::getArbitraryPlayerAbilities(*((_DWORD *)v1 + 106), (unsigned __int64 *)v1 + 64);
      if ( v7 )
        goto LABEL_6;
      v4 = (_QWORD *)*((_DWORD *)v1 + 135);
    }
    *((_DWORD *)v1 + 130) = 0;
    *((_QWORD *)v1 + 64) = *v4;
    v7 = (int *)MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v1 + 106));
LABEL_6:
    Abilities::operator=((int)v1 + 436, v7);
    v9 = *(_QWORD *)Abilities::getPermissionsAbilitiesNames((PermissionsScreenController *)((char *)v1 + 436));
    v8 = (int *)v9;
    if ( (_DWORD)v9 != HIDWORD(v9) )
      do
      {
        v10 = *((_QWORD *)v1 + 66);
        if ( (_DWORD)v10 == HIDWORD(v10) )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)((char *)v1 + 524),
            v8);
        }
        else
          sub_15901A4((int *)v10, v8);
          *((_DWORD *)v1 + 132) += 4;
        ++v8;
      }
      while ( (int *)HIDWORD(v9) != v8 );
    if ( MinecraftScreenModel::isHostingLocalDedicatedServer(*((MinecraftScreenModel **)v1 + 106)) == 1 )
      *((_BYTE *)v1 + 536) = 1;
      return v2 | 1;
    if ( MinecraftScreenModel::isRealmLevel(*((MinecraftScreenModel **)v1 + 106)) )
      v11 = MinecraftScreenModel::isRealmOwner(*((MinecraftScreenModel **)v1 + 106));
      *((_BYTE *)v1 + 536) = v11;
      if ( v11 )
        return v2 | 1;
    else
      *((_BYTE *)v1 + 536) = 0;
    v12 = (int *)MinecraftScreenModel::getPlayerAbilities(*((MinecraftScreenModel **)v1 + 106));
    v13 = Abilities::Abilities((int)&v16, v12);
    v14 = (Ability *)Abilities::getAbility(v13, &Abilities::OPERATOR);
    *((_BYTE *)v1 + 536) = Ability::getBool(v14);
    Abilities::~Abilities((Abilities *)&v16);
    return v2 | 1;
  }
  return v2;
}


int __fastcall PermissionsScreenController::PermissionsScreenController(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1 OVERLAPPED
  int v6; // r0@1
  int v7; // r7@1 OVERLAPPED
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r6@14
  unsigned int v14; // r0@16
  int v16; // [sp+8h] [bp-30h]@1
  int v17; // [sp+Ch] [bp-2Ch]@1

  v4 = a1;
  v16 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v17 = v6;
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
  ClientInstanceScreenController::ClientInstanceScreenController(v4, (int)&v16);
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
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
  *(_DWORD *)v4 = &off_26E2BBC;
  *(_BYTE *)(v4 + 432) = 0;
  Abilities::Abilities(v4 + 436);
  *(_QWORD *)(v4 + 512) = *(_QWORD *)&v7;
  *(_DWORD *)(v4 + 524) = 0;
  *(_DWORD *)(v4 + 528) = 0;
  *(_DWORD *)(v4 + 532) = 0;
  *(_DWORD *)(v4 + 556) = 0;
  *(_DWORD *)(v4 + 560) = 0;
  *(_BYTE *)(v4 + 552) = 0;
  *(_DWORD *)(v4 + 548) = 0;
  *(_DWORD *)(v4 + 540) = 0;
  *(_DWORD *)(v4 + 544) = 0;
  *(_BYTE *)(v4 + 564) = 1;
  PermissionsScreenController::_registerEventHandlers((PermissionsScreenController *)v4);
  PermissionsScreenController::_registerBindings((PermissionsScreenController *)v4);
  PermissionsScreenController::_registerSubControllers((PermissionsScreenController *)v4);
  return v4;
}


int __fastcall PermissionsScreenController::_getArbitraryPlayerAbilities(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r4@1
  unsigned int v2; // r1@1
  _QWORD *v3; // r0@1
  int v4; // r2@1
  int v5; // r2@2
  int v6; // r0@2
  int result; // r0@2

  v1 = this;
  v2 = *((_DWORD *)this + 130);
  v4 = *(_QWORD *)((char *)this + 540) >> 32;
  v3 = (_QWORD *)*(_QWORD *)((char *)this + 540);
  if ( v2 < (v4 - (signed int)v3) >> 3 )
  {
    v5 = v3[v2];
    v6 = HIDWORD(v3[v2]);
    *((_DWORD *)v1 + 128) = v5;
    *((_DWORD *)v1 + 129) = v6;
    result = MinecraftScreenModel::getArbitraryPlayerAbilities(*((_DWORD *)v1 + 106), (unsigned __int64 *)v1 + 64);
    if ( result )
      return result;
    v3 = (_QWORD *)*((_DWORD *)v1 + 135);
  }
  *((_DWORD *)v1 + 130) = 0;
  *((_QWORD *)v1 + 64) = *v3;
  return j_j_j__ZN20MinecraftScreenModel18getPlayerAbilitiesEv(*((MinecraftScreenModel **)v1 + 106));
}


void __fastcall PermissionsScreenController::_registerSubControllers(PermissionsScreenController *this)
{
  PermissionsScreenController::_registerSubControllers(this);
}


void __fastcall PermissionsScreenController::_registerBindings(PermissionsScreenController *this)
{
  PermissionsScreenController::_registerBindings(this);
}


int __fastcall PermissionsScreenController::_populateClientIds(PermissionsScreenController *this)
{
  PermissionsScreenController *v1; // r5@1
  __int64 v2; // r0@1
  int v3; // r9@1
  unsigned int *v4; // r6@2
  unsigned int v5; // r2@6
  UserDataScreenController *v6; // r0@7
  bool v7; // zf@7
  int v8; // r4@10
  __int64 v9; // kr00_8@10
  _QWORD *v10; // r7@11
  int v11; // r8@11
  __int64 v12; // kr08_8@12
  _QWORD *v13; // r0@13
  unsigned int *v14; // r4@28

  v1 = this;
  LODWORD(v2) = *((_DWORD *)this + 135);
  *((_DWORD *)v1 + 136) = v2;
  v3 = *((_DWORD *)v1 + 140);
  if ( v3 )
  {
    LODWORD(v2) = *(_DWORD *)(v3 + 4);
    v4 = (unsigned int *)(v3 + 4);
    while ( (_DWORD)v2 )
    {
      __dmb();
      HIDWORD(v2) = __ldrex(v4);
      if ( HIDWORD(v2) == (_DWORD)v2 )
      {
        v5 = __strex(v2 + 1, v4);
        LODWORD(v2) = HIDWORD(v2);
        if ( !v5 )
        {
          __dmb();
          v6 = (UserDataScreenController *)*v4;
          v7 = *v4 == 0;
          if ( *v4 )
          {
            v6 = (UserDataScreenController *)*((_DWORD *)v1 + 139);
            v7 = v6 == 0;
          }
          if ( v7 )
            goto LABEL_38;
          *((_DWORD *)v1 + 130) = 0;
          v9 = *(_QWORD *)UserDataScreenController::getPlayerList(v6);
          v8 = v9;
          if ( (_DWORD)v9 != HIDWORD(v9) )
            v10 = (_QWORD *)(v9 + 8);
            v11 = 0;
            do
            {
              v12 = *((_QWORD *)v1 + 68);
              if ( (_DWORD)v12 == HIDWORD(v12) )
              {
                std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID const&>(
                  (unsigned __int64 *)((char *)v1 + 540),
                  v10);
                v13 = v10;
              }
              else
                v13 = (_QWORD *)(v8 + 8);
                *(_QWORD *)v12 = *v10;
                *((_DWORD *)v1 + 136) = v12 + 8;
              if ( *((_QWORD *)v1 + 64) == *v13 && v11 != *((_DWORD *)v1 + 130) )
                *((_DWORD *)v1 + 130) = v11;
              v10 += 6;
              v8 += 48;
              ++v11;
            }
            while ( (_QWORD *)((char *)v10 - HIDWORD(v9)) != (_QWORD *)8 );
          LODWORD(v2) = *((_DWORD *)v1 + 130);
          if ( !(_DWORD)v2 )
            v2 = *(_QWORD *)*((_DWORD *)v1 + 135);
            *((_QWORD *)v1 + 64) = v2;
          if ( v3 )
LABEL_38:
            if ( &pthread_create )
              __dmb();
              do
                LODWORD(v2) = __ldrex(v4);
              while ( __strex(v2 - 1, v4) );
            else
              LODWORD(v2) = (*v4)--;
            if ( (_DWORD)v2 == 1 )
              v14 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
                __dmb();
                do
                  LODWORD(v2) = __ldrex(v14);
                while ( __strex(v2 - 1, v14) );
                LODWORD(v2) = (*v14)--;
              if ( (_DWORD)v2 == 1 )
                LODWORD(v2) = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return v2;
        }
      }
      else
        __clrex();
    }
  }
  return v2;
}
