

signed int __fastcall SkinPickerScreenController::_registerBindings(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  _DWORD *v4; // r0@5
  __int64 v5; // r1@5
  _DWORD *v6; // r0@7
  __int64 v7; // r1@7
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
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
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
  _DWORD *v39; // r0@53
  __int64 v40; // r1@53
  __int64 v41; // r1@53
  _DWORD *v42; // r0@57
  __int64 v43; // r1@57
  __int64 v44; // r1@57
  _DWORD *v45; // r0@61
  __int64 v46; // r1@61
  __int64 v47; // r1@61
  _DWORD *v48; // r0@65
  __int64 v49; // r1@65
  __int64 v50; // r1@65
  _DWORD *v51; // r0@69
  __int64 v52; // r1@69
  __int64 v53; // r1@69
  _DWORD *v54; // r0@73
  __int64 v55; // r1@73
  __int64 v56; // r1@73
  _DWORD *v57; // r0@77
  __int64 v58; // r1@77
  __int64 v59; // r1@77
  _DWORD *v60; // r0@81
  __int64 v61; // r1@81
  __int64 v62; // r1@81
  _DWORD *v63; // r0@85
  __int64 v64; // r1@85
  __int64 v65; // r1@85
  _DWORD *v66; // r0@89
  __int64 v67; // r1@89
  __int64 v68; // r1@89
  _DWORD *v69; // r0@93
  __int64 v70; // r1@93
  _DWORD *v71; // r0@95
  __int64 v72; // r1@95
  _DWORD *v73; // r0@97
  __int64 v74; // r1@97
  _DWORD *v75; // r0@99
  __int64 v76; // r1@99
  _DWORD *v77; // r0@101
  __int64 v78; // r1@101
  _DWORD *v79; // r0@103
  __int64 v80; // r1@103
  _DWORD *v81; // r0@105
  __int64 v82; // r1@105
  _DWORD *v83; // r0@107
  __int64 v84; // r1@107
  signed int result; // r0@107
  _DWORD *v86; // [sp+8h] [bp-418h]@107
  __int64 v87; // [sp+10h] [bp-410h]@107
  int v88; // [sp+18h] [bp-408h]@107
  char v89; // [sp+1Ch] [bp-404h]@107
  _DWORD *v90; // [sp+20h] [bp-400h]@105
  __int64 v91; // [sp+28h] [bp-3F8h]@105
  int v92; // [sp+30h] [bp-3F0h]@105
  char v93; // [sp+34h] [bp-3ECh]@105
  _DWORD *v94; // [sp+38h] [bp-3E8h]@103
  __int64 v95; // [sp+40h] [bp-3E0h]@103
  int v96; // [sp+48h] [bp-3D8h]@103
  char v97; // [sp+4Ch] [bp-3D4h]@103
  _DWORD *v98; // [sp+50h] [bp-3D0h]@101
  __int64 v99; // [sp+58h] [bp-3C8h]@101
  int v100; // [sp+60h] [bp-3C0h]@101
  char v101; // [sp+64h] [bp-3BCh]@101
  _DWORD *v102; // [sp+68h] [bp-3B8h]@99
  __int64 v103; // [sp+70h] [bp-3B0h]@99
  int v104; // [sp+78h] [bp-3A8h]@99
  _DWORD *v105; // [sp+7Ch] [bp-3A4h]@97
  __int64 v106; // [sp+84h] [bp-39Ch]@97
  int v107; // [sp+8Ch] [bp-394h]@97
  _DWORD *v108; // [sp+90h] [bp-390h]@95
  __int64 v109; // [sp+98h] [bp-388h]@95
  int v110; // [sp+A0h] [bp-380h]@95
  _DWORD *v111; // [sp+A4h] [bp-37Ch]@93
  __int64 v112; // [sp+ACh] [bp-374h]@93
  int v113; // [sp+B4h] [bp-36Ch]@93
  void *v114; // [sp+B8h] [bp-368h]@89
  __int64 v115; // [sp+C0h] [bp-360h]@89
  _DWORD *v116; // [sp+C8h] [bp-358h]@89
  __int64 v117; // [sp+D0h] [bp-350h]@89
  int v118; // [sp+D8h] [bp-348h]@89
  int v119; // [sp+DCh] [bp-344h]@89
  void *v120; // [sp+E0h] [bp-340h]@85
  __int64 v121; // [sp+E8h] [bp-338h]@85
  _DWORD *v122; // [sp+F0h] [bp-330h]@85
  __int64 v123; // [sp+F8h] [bp-328h]@85
  int v124; // [sp+100h] [bp-320h]@85
  int v125; // [sp+104h] [bp-31Ch]@85
  void *v126; // [sp+108h] [bp-318h]@81
  __int64 v127; // [sp+110h] [bp-310h]@81
  _DWORD *v128; // [sp+118h] [bp-308h]@81
  __int64 v129; // [sp+120h] [bp-300h]@81
  int v130; // [sp+128h] [bp-2F8h]@81
  int v131; // [sp+12Ch] [bp-2F4h]@81
  void *v132; // [sp+130h] [bp-2F0h]@77
  __int64 v133; // [sp+138h] [bp-2E8h]@77
  _DWORD *v134; // [sp+140h] [bp-2E0h]@77
  __int64 v135; // [sp+148h] [bp-2D8h]@77
  int v136; // [sp+150h] [bp-2D0h]@77
  int v137; // [sp+154h] [bp-2CCh]@77
  void *v138; // [sp+158h] [bp-2C8h]@73
  __int64 v139; // [sp+160h] [bp-2C0h]@73
  _DWORD *v140; // [sp+168h] [bp-2B8h]@73
  __int64 v141; // [sp+170h] [bp-2B0h]@73
  int v142; // [sp+178h] [bp-2A8h]@73
  void *v143; // [sp+17Ch] [bp-2A4h]@69
  __int64 v144; // [sp+184h] [bp-29Ch]@69
  _DWORD *v145; // [sp+18Ch] [bp-294h]@69
  __int64 v146; // [sp+194h] [bp-28Ch]@69
  int v147; // [sp+19Ch] [bp-284h]@69
  void *v148; // [sp+1A0h] [bp-280h]@65
  __int64 v149; // [sp+1A8h] [bp-278h]@65
  _DWORD *v150; // [sp+1B0h] [bp-270h]@65
  __int64 v151; // [sp+1B8h] [bp-268h]@65
  int v152; // [sp+1C0h] [bp-260h]@65
  void *v153; // [sp+1C4h] [bp-25Ch]@61
  __int64 v154; // [sp+1CCh] [bp-254h]@61
  _DWORD *v155; // [sp+1D4h] [bp-24Ch]@61
  __int64 v156; // [sp+1DCh] [bp-244h]@61
  int v157; // [sp+1E4h] [bp-23Ch]@61
  void *v158; // [sp+1E8h] [bp-238h]@57
  __int64 v159; // [sp+1F0h] [bp-230h]@57
  _DWORD *v160; // [sp+1F8h] [bp-228h]@57
  __int64 v161; // [sp+200h] [bp-220h]@57
  int v162; // [sp+208h] [bp-218h]@57
  void *v163; // [sp+20Ch] [bp-214h]@53
  __int64 v164; // [sp+214h] [bp-20Ch]@53
  _DWORD *v165; // [sp+21Ch] [bp-204h]@53
  __int64 v166; // [sp+224h] [bp-1FCh]@53
  int v167; // [sp+22Ch] [bp-1F4h]@53
  void *v168; // [sp+230h] [bp-1F0h]@49
  __int64 v169; // [sp+238h] [bp-1E8h]@49
  _DWORD *v170; // [sp+240h] [bp-1E0h]@49
  __int64 v171; // [sp+248h] [bp-1D8h]@49
  int v172; // [sp+250h] [bp-1D0h]@49
  void *v173; // [sp+254h] [bp-1CCh]@45
  __int64 v174; // [sp+25Ch] [bp-1C4h]@45
  _DWORD *v175; // [sp+264h] [bp-1BCh]@45
  __int64 v176; // [sp+26Ch] [bp-1B4h]@45
  int v177; // [sp+274h] [bp-1ACh]@45
  void *v178; // [sp+278h] [bp-1A8h]@41
  __int64 v179; // [sp+280h] [bp-1A0h]@41
  _DWORD *v180; // [sp+288h] [bp-198h]@41
  __int64 v181; // [sp+290h] [bp-190h]@41
  int v182; // [sp+298h] [bp-188h]@41
  void *v183; // [sp+29Ch] [bp-184h]@37
  __int64 v184; // [sp+2A4h] [bp-17Ch]@37
  void *v185; // [sp+2ACh] [bp-174h]@37
  void (*v186)(void); // [sp+2B4h] [bp-16Ch]@37
  _QWORD *(__fastcall *v187)(_QWORD *); // [sp+2B8h] [bp-168h]@37
  int v188; // [sp+2BCh] [bp-164h]@37
  void *v189; // [sp+2C0h] [bp-160h]@33
  __int64 v190; // [sp+2C8h] [bp-158h]@33
  _DWORD *v191; // [sp+2D0h] [bp-150h]@33
  __int64 v192; // [sp+2D8h] [bp-148h]@33
  int v193; // [sp+2E0h] [bp-140h]@33
  void *v194; // [sp+2E4h] [bp-13Ch]@29
  __int64 v195; // [sp+2ECh] [bp-134h]@29
  _DWORD *v196; // [sp+2F4h] [bp-12Ch]@29
  __int64 v197; // [sp+2FCh] [bp-124h]@29
  int v198; // [sp+304h] [bp-11Ch]@29
  void *v199; // [sp+308h] [bp-118h]@25
  __int64 v200; // [sp+310h] [bp-110h]@25
  _DWORD *v201; // [sp+318h] [bp-108h]@25
  __int64 v202; // [sp+320h] [bp-100h]@25
  int v203; // [sp+328h] [bp-F8h]@25
  void *v204; // [sp+32Ch] [bp-F4h]@21
  __int64 v205; // [sp+334h] [bp-ECh]@21
  _DWORD *v206; // [sp+33Ch] [bp-E4h]@21
  __int64 v207; // [sp+344h] [bp-DCh]@21
  int v208; // [sp+34Ch] [bp-D4h]@21
  int v209; // [sp+350h] [bp-D0h]@21
  void *v210; // [sp+354h] [bp-CCh]@17
  __int64 v211; // [sp+35Ch] [bp-C4h]@17
  _DWORD *v212; // [sp+364h] [bp-BCh]@17
  __int64 v213; // [sp+36Ch] [bp-B4h]@17
  int v214; // [sp+374h] [bp-ACh]@17
  int v215; // [sp+378h] [bp-A8h]@17
  void *v216; // [sp+37Ch] [bp-A4h]@13
  __int64 v217; // [sp+384h] [bp-9Ch]@13
  _DWORD *v218; // [sp+38Ch] [bp-94h]@13
  __int64 v219; // [sp+394h] [bp-8Ch]@13
  int v220; // [sp+39Ch] [bp-84h]@13
  void *v221; // [sp+3A0h] [bp-80h]@9
  __int64 v222; // [sp+3A8h] [bp-78h]@9
  _DWORD *v223; // [sp+3B0h] [bp-70h]@9
  __int64 v224; // [sp+3B8h] [bp-68h]@9
  int v225; // [sp+3C0h] [bp-60h]@9
  _DWORD *v226; // [sp+3C4h] [bp-5Ch]@7
  __int64 v227; // [sp+3CCh] [bp-54h]@7
  int v228; // [sp+3D4h] [bp-4Ch]@7
  _DWORD *v229; // [sp+3D8h] [bp-48h]@5
  __int64 v230; // [sp+3E0h] [bp-40h]@5
  int v231; // [sp+3E8h] [bp-38h]@5
  void *v232; // [sp+3ECh] [bp-34h]@1
  __int64 v233; // [sp+3F4h] [bp-2Ch]@1
  _DWORD *v234; // [sp+3FCh] [bp-24h]@1
  void (*v235)(void); // [sp+404h] [bp-1Ch]@1
  int *(__fastcall *v236)(int *, int); // [sp+408h] [bp-18h]@1
  int v237; // [sp+40Ch] [bp-14h]@1

  v1 = this;
  v237 = 1590757767;
  v2 = operator new(4u);
  *v2 = v1;
  v234 = v2;
  v236 = sub_1254BAE;
  v235 = (void (*)(void))sub_1254BD0;
  v232 = operator new(1u);
  LODWORD(v3) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v3) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v233 = v3;
  ScreenController::bindString((int)v1, &v237, (int)&v234, (int)&v232);
  if ( (_DWORD)v233 )
    ((void (*)(void))v233)();
  if ( v235 )
    v235();
  v231 = -1933131291;
  v4 = operator new(4u);
  LODWORD(v5) = sub_1254C68;
  *v4 = v1;
  HIDWORD(v5) = sub_1254C08;
  v229 = v4;
  v230 = v5;
  ScreenController::bindForGlobal((int)v1, &v231, (int)&v229);
  if ( (_DWORD)v230 )
    ((void (*)(void))v230)();
  v228 = 379446356;
  v6 = operator new(4u);
  LODWORD(v7) = sub_1254D00;
  *v6 = v1;
  HIDWORD(v7) = sub_1254CA0;
  v226 = v6;
  v227 = v7;
  ScreenController::bindForGlobal((int)v1, &v228, (int)&v226);
  if ( (_DWORD)v227 )
    ((void (*)(void))v227)();
  StringHash::StringHash<char [23]>(&v225, (int)"#selector_area_focused");
  v8 = operator new(4u);
  LODWORD(v9) = sub_1254D64;
  *v8 = v1;
  HIDWORD(v9) = sub_1254D36;
  v223 = v8;
  v224 = v9;
  v221 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v222 = v10;
  ScreenController::bindBool((int)v1, &v225, (int)&v223, (int)&v221);
  if ( (_DWORD)v222 )
    ((void (*)(void))v222)();
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  v220 = -532179637;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1254DCA;
  *v11 = v1;
  HIDWORD(v12) = sub_1254D9A;
  v218 = v11;
  v219 = v12;
  v216 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v217 = v13;
  ScreenController::bindBool((int)v1, &v220, (int)&v218, (int)&v216);
  if ( (_DWORD)v217 )
    ((void (*)(void))v217)();
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  StringHash::StringHash<char [25]>(&v215, (int)"premium_packs_collection");
  StringHash::StringHash<char [37]>(&v214, (int)"#skin_cycle_pack_left_button_enabled");
  v14 = operator new(4u);
  LODWORD(v15) = sub_1254E1E;
  *v14 = v1;
  HIDWORD(v15) = sub_1254E00;
  v212 = v14;
  v213 = v15;
  v210 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v211 = v16;
  ScreenController::bindBoolForCollection((int)v1, &v215, &v214, (int)&v212, (int)&v210);
  if ( (_DWORD)v211 )
    ((void (*)(void))v211)();
  if ( (_DWORD)v213 )
    ((void (*)(void))v213)();
  StringHash::StringHash<char [25]>(&v209, (int)"premium_packs_collection");
  StringHash::StringHash<char [38]>(&v208, (int)"#skin_cycle_pack_right_button_enabled");
  v17 = operator new(4u);
  LODWORD(v18) = sub_1254E7C;
  *v17 = v1;
  HIDWORD(v18) = sub_1254E54;
  v206 = v17;
  v207 = v18;
  v204 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v205 = v19;
  ScreenController::bindBoolForCollection((int)v1, &v209, &v208, (int)&v206, (int)&v204);
  if ( (_DWORD)v205 )
    ((void (*)(void))v205)();
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  StringHash::StringHash<char [30]>(&v203, (int)"#skin_search_progress_visible");
  v20 = operator new(4u);
  LODWORD(v21) = sub_1254EC6;
  *v20 = v1;
  HIDWORD(v21) = sub_1254EB2;
  v201 = v20;
  v202 = v21;
  v199 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v200 = v22;
  ScreenController::bindBool((int)v1, &v203, (int)&v201, (int)&v199);
  if ( (_DWORD)v200 )
    ((void (*)(void))v200)();
  if ( (_DWORD)v202 )
    ((void (*)(void))v202)();
  v198 = -153875320;
  v23 = operator new(4u);
  LODWORD(v24) = sub_1254F08;
  *v23 = v1;
  HIDWORD(v24) = sub_1254EFC;
  v196 = v23;
  v197 = v24;
  v194 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v195 = v25;
  ScreenController::bindBool((int)v1, &v198, (int)&v196, (int)&v194);
  if ( (_DWORD)v195 )
    ((void (*)(void))v195)();
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  StringHash::StringHash<char [31]>(&v193, (int)"#premium_packs_grid_dimensions");
  v26 = operator new(4u);
  LODWORD(v27) = sub_1254F58;
  *v26 = v1;
  HIDWORD(v27) = sub_1254F3E;
  v191 = v26;
  v192 = v27;
  v189 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v190 = v28;
  ScreenController::bindGridSize((int)v1, &v193, (int)&v191, (int)&v189);
  if ( (_DWORD)v190 )
    ((void (*)(void))v190)();
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  StringHash::StringHash<char [31]>(&v188, (int)"#premium_skins_grid_dimensions");
  v185 = operator new(1u);
  v186 = (void (*)(void))sub_1254F98;
  v187 = sub_1254F8E;
  v183 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v184 = v29;
  ScreenController::bindGridSize((int)v1, &v188, (int)&v185, (int)&v183);
  if ( (_DWORD)v184 )
    ((void (*)(void))v184)();
  if ( v186 )
    v186();
  StringHash::StringHash<char [31]>(&v182, (int)"#default_skins_grid_dimensions");
  v30 = operator new(4u);
  LODWORD(v31) = sub_1254FE8;
  *v30 = v1;
  HIDWORD(v31) = sub_1254FC6;
  v180 = v30;
  v181 = v31;
  v178 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v179 = v32;
  ScreenController::bindGridSize((int)v1, &v182, (int)&v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  StringHash::StringHash<char [30]>(&v177, (int)"#recent_skins_grid_dimensions");
  v33 = operator new(4u);
  LODWORD(v34) = sub_1255036;
  *v33 = v1;
  HIDWORD(v34) = sub_125501E;
  v175 = v33;
  v176 = v34;
  v173 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v174 = v35;
  ScreenController::bindGridSize((int)v1, &v177, (int)&v175, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  v172 = -309112757;
  v36 = operator new(4u);
  LODWORD(v37) = sub_125508A;
  *v36 = v1;
  HIDWORD(v37) = sub_125506C;
  v170 = v36;
  v171 = v37;
  v168 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v169 = v38;
  ScreenController::bindString((int)v1, &v172, (int)&v170, (int)&v168);
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  StringHash::StringHash<char [32]>(&v167, (int)"#show_reload_custom_skin_button");
  v39 = operator new(4u);
  LODWORD(v40) = sub_12550E2;
  *v39 = v1;
  HIDWORD(v40) = sub_12550C0;
  v165 = v39;
  v166 = v40;
  v163 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v164 = v41;
  ScreenController::bindBool((int)v1, &v167, (int)&v165, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  if ( (_DWORD)v166 )
    ((void (*)(void))v166)();
  StringHash::StringHash<char [24]>(&v162, (int)"#show_preview_skin_lock");
  v42 = operator new(4u);
  LODWORD(v43) = sub_1255128;
  *v42 = v1;
  HIDWORD(v43) = sub_1255118;
  v160 = v42;
  v161 = v43;
  v158 = operator new(1u);
  LODWORD(v44) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v44) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v159 = v44;
  ScreenController::bindBool((int)v1, &v162, (int)&v160, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  StringHash::StringHash<char [25]>(&v157, (int)"#accept_skin_button_text");
  v45 = operator new(4u);
  LODWORD(v46) = sub_1255198;
  *v45 = v1;
  HIDWORD(v46) = sub_1255160;
  v155 = v45;
  v156 = v46;
  v153 = operator new(1u);
  LODWORD(v47) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v47) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v154 = v47;
  ScreenController::bindString((int)v1, &v157, (int)&v155, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  StringHash::StringHash<char [28]>(&v152, (int)"#accept_skin_button_enabled");
  v48 = operator new(4u);
  LODWORD(v49) = sub_12551D6;
  *v48 = v1;
  HIDWORD(v49) = sub_12551CE;
  v150 = v48;
  v151 = v49;
  v148 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v149 = v50;
  ScreenController::bindBool((int)v1, &v152, (int)&v150, (int)&v148);
  if ( (_DWORD)v149 )
    ((void (*)(void))v149)();
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  v147 = -1137690269;
  v51 = operator new(4u);
  LODWORD(v52) = sub_125521E;
  *v51 = v1;
  HIDWORD(v52) = sub_125520C;
  v145 = v51;
  v146 = v52;
  v143 = operator new(1u);
  LODWORD(v53) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v53) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v144 = v53;
  ScreenController::bindString((int)v1, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  v142 = 2122495182;
  v54 = operator new(4u);
  LODWORD(v55) = sub_1255266;
  *v54 = v1;
  HIDWORD(v55) = sub_1255254;
  v140 = v54;
  v141 = v55;
  v138 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v139 = v56;
  ScreenController::bindString((int)v1, &v142, (int)&v140, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  StringHash::StringHash<char [25]>(&v137, (int)"premium_packs_collection");
  v136 = 1590757767;
  v57 = operator new(4u);
  LODWORD(v58) = sub_12552A8;
  *v57 = v1;
  HIDWORD(v58) = sub_125529C;
  v134 = v57;
  v135 = v58;
  v132 = operator new(1u);
  LODWORD(v59) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v59) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v133 = v59;
  ScreenController::bindStringForCollection((int)v1, &v137, &v136, (int)&v134, (int)&v132);
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  StringHash::StringHash<char [25]>(&v131, (int)"premium_packs_collection");
  v130 = -677115500;
  v60 = operator new(4u);
  LODWORD(v61) = sub_1255302;
  *v60 = v1;
  HIDWORD(v61) = sub_12552DE;
  v128 = v60;
  v129 = v61;
  v126 = operator new(1u);
  LODWORD(v62) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v62) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v127 = v62;
  ScreenController::bindBoolForCollection((int)v1, &v131, &v130, (int)&v128, (int)&v126);
  if ( (_DWORD)v127 )
    ((void (*)(void))v127)();
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  StringHash::StringHash<char [25]>(&v125, (int)"premium_packs_collection");
  v124 = -456285841;
  v63 = operator new(4u);
  LODWORD(v64) = sub_125535A;
  *v63 = v1;
  HIDWORD(v64) = sub_1255338;
  v122 = v63;
  v123 = v64;
  v120 = operator new(1u);
  LODWORD(v65) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v65) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v121 = v65;
  ScreenController::bindBoolForCollection((int)v1, &v125, &v124, (int)&v122, (int)&v120);
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  StringHash::StringHash<char [25]>(&v119, (int)"premium_packs_collection");
  v118 = 817443274;
  v66 = operator new(4u);
  LODWORD(v67) = sub_12553AC;
  *v66 = v1;
  HIDWORD(v67) = sub_1255390;
  v116 = v66;
  v117 = v67;
  v114 = operator new(1u);
  LODWORD(v68) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v68) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v115 = v68;
  ScreenController::bindBoolForCollection((int)v1, &v119, &v118, (int)&v116, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v113 = 578608258;
  v69 = operator new(4u);
  LODWORD(v70) = sub_1255458;
  *v69 = v1;
  HIDWORD(v70) = sub_12553E4;
  v111 = v69;
  v112 = v70;
  ScreenController::bindForGlobal((int)v1, &v113, (int)&v111);
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  StringHash::StringHash<char [31]>(&v110, (int)"#pack_loading_progress_visible");
  v71 = operator new(4u);
  LODWORD(v72) = sub_1255510;
  *v71 = v1;
  HIDWORD(v72) = sub_1255490;
  v108 = v71;
  v109 = v72;
  ScreenController::bindForGlobal((int)v1, &v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  StringHash::StringHash<char [32]>(&v107, (int)"#cycle_pack_left_button_visible");
  v73 = operator new(4u);
  LODWORD(v74) = sub_12555CC;
  *v73 = v1;
  HIDWORD(v74) = sub_1255548;
  v105 = v73;
  v106 = v74;
  ScreenController::bindForGlobal((int)v1, &v107, (int)&v105);
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  StringHash::StringHash<char [33]>(&v104, (int)"#cycle_pack_right_button_visible");
  v75 = operator new(4u);
  LODWORD(v76) = sub_1255688;
  *v75 = v1;
  HIDWORD(v76) = sub_1255604;
  v102 = v75;
  v103 = v76;
  ScreenController::bindForGlobal((int)v1, &v104, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  StringHash::StringHash<char [25]>(&v101, (int)"premium_skins_collection");
  v100 = 579206884;
  v77 = operator new(4u);
  LODWORD(v78) = sub_12557BC;
  *v77 = v1;
  HIDWORD(v78) = sub_12556C0;
  v98 = v77;
  v99 = v78;
  ScreenController::bindForCollection((int)v1, &v101, &v100, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  StringHash::StringHash<char [25]>(&v97, (int)"premium_skins_collection");
  v96 = -1345086622;
  v79 = operator new(4u);
  LODWORD(v80) = sub_1255950;
  *v79 = v1;
  HIDWORD(v80) = sub_12557F4;
  v94 = v79;
  v95 = v80;
  ScreenController::bindForCollection((int)v1, &v97, &v96, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  StringHash::StringHash<char [25]>(&v93, (int)"default_skins_collection");
  v92 = 579206884;
  v81 = operator new(4u);
  LODWORD(v82) = sub_1255A74;
  *v81 = v1;
  HIDWORD(v82) = sub_1255988;
  v90 = v81;
  v91 = v82;
  ScreenController::bindForCollection((int)v1, &v93, &v92, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  StringHash::StringHash<char [24]>(&v89, (int)"recent_skins_collection");
  v88 = 579206884;
  v83 = operator new(4u);
  LODWORD(v84) = sub_1255C08;
  *v83 = v1;
  HIDWORD(v84) = sub_1255AAC;
  v86 = v83;
  v87 = v84;
  result = ScreenController::bindForCollection((int)v1, &v89, &v88, (int)&v86);
  if ( (_DWORD)v87 )
    result = ((int (*)(void))v87)();
  return result;
}


void __fastcall SkinPickerScreenController::~SkinPickerScreenController(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r0@1

  v1 = SkinPickerScreenController::~SkinPickerScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall SkinPickerScreenController::_isCustomSkin(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r6@1
  signed int result; // r0@15
  __int64 v6; // r0@16

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)&mce::UUID::EMPTY;
  if ( __PAIR__(*(_QWORD *)a2 >> 32, (unsigned int)*(_QWORD *)a2 ^ mce::UUID::EMPTY) == *(_QWORD *)&mce::UUID::EMPTY
    && *(__int64 *)((char *)&qword_287E92C + 4) == __PAIR__(
                                                     (unsigned int)(*(_QWORD *)(a2 + 8) >> 32) ^ unk_287E934,
                                                     (unsigned int)*(_QWORD *)(a2 + 8))
    || *(_DWORD *)(a2 + 16) == -1 && !*(_DWORD *)(*(_DWORD *)(a2 + 20) - 12) )
  {
    goto LABEL_24;
  }
  if ( (*(_QWORD *)(a1 + 520) != *(_QWORD *)&mce::UUID::EMPTY
     || *(__int64 *)((char *)&qword_287E92C + 4) != __PAIR__(
                                                      (unsigned int)(*(_QWORD *)(a1 + 528) >> 32) ^ unk_287E934,
                                                      (unsigned int)*(_QWORD *)(a1 + 528)))
    && (*(_DWORD *)(a1 + 536) != -1 || *(_DWORD *)(*(_DWORD *)(a1 + 540) - 12))
    && SkinHandle::operator==(a2, a1 + 520)
    || (*(_QWORD *)(v2 + 496) != v4
                                                      (unsigned int)(*(_QWORD *)(v2 + 504) >> 32) ^ unk_287E934,
                                                      (unsigned int)*(_QWORD *)(v2 + 504)))
    && (*(_DWORD *)(v2 + 512) != -1 || *(_DWORD *)(*(_DWORD *)(v2 + 516) - 12))
    && SkinHandle::operator==(v3, v2 + 496) )
    return 1;
  if ( ((v6 = *(_QWORD *)(v2 + 472), HIDWORD(v6) ^= HIDWORD(v4), v6 != (unsigned int)v4)
                                                      (unsigned int)(*(_QWORD *)(v2 + 480) >> 32) ^ unk_287E934,
                                                      (unsigned int)*(_QWORD *)(v2 + 480)))
    && (*(_DWORD *)(v2 + 488) != -1 || *(_DWORD *)(*(_DWORD *)(v2 + 492) - 12)) )
    result = SkinHandle::operator==(v3, v2 + 472);
  else
LABEL_24:
    result = 0;
  return result;
}


int __fastcall SkinPickerScreenController::_getAcceptButtonEnabled(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  const mce::UUID *v2; // r5@1
  int result; // r0@3
  SkinPackCollectionModel *v4; // r0@9

  v1 = this;
  v2 = (SkinPickerScreenController *)((char *)this + 448);
  if ( SkinPackCollectionModel::isSkinLocked(*((_DWORD *)this + 108), (int)this + 448) == 1
    && MainMenuScreenModel::isStoreDisabled(*((MainMenuScreenModel **)v1 + 106)) )
  {
    result = 0;
  }
  else if ( (MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106))
          || !MinecraftScreenModel::isMultiPlayerGame(*((MinecraftScreenModel **)v1 + 106)))
         && (MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) != 1
          || MinecraftScreenModel::isPrimaryClient(*((MinecraftScreenModel **)v1 + 106))
          || MinecraftScreenModel::isPrimaryLevelMultiplayer(*((MinecraftScreenModel **)v1 + 106)) != 1) )
    result = 1;
  else
    v4 = SkinPackCollectionModel::getSkinPackModelByUUID(*((SkinPackCollectionModel **)v1 + 108), v2);
    result = SkinPackModel::isValidInMultiplayer(v4);
  return result;
}


int __fastcall SkinPickerScreenController::_isMultiplayerGame(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106))
    || !MinecraftScreenModel::isMultiPlayerGame(*((MinecraftScreenModel **)v1 + 106)) )
  {
    if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) != 1
      || MinecraftScreenModel::isPrimaryClient(*((MinecraftScreenModel **)v1 + 106)) )
    {
      result = 0;
    }
    else
      result = MinecraftScreenModel::isPrimaryLevelMultiplayer(*((MinecraftScreenModel **)v1 + 106));
  }
  else
    result = 1;
  return result;
}


int __fastcall SkinPickerScreenController::_clearSelectionAndTryExit(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  char *v2; // lr@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1

  v1 = this;
  v2 = (char *)this + 448;
  v3 = *(&mce::UUID::EMPTY + 1);
  v4 = qword_287E930;
  *(_DWORD *)v2 = mce::UUID::EMPTY;
  *((_DWORD *)v2 + 1) = v3;
  *((_DWORD *)v2 + 2) = v4;
  *((_DWORD *)this + 115) = HIDWORD(v4);
  *((_DWORD *)this + 116) = -1;
  sub_21E7EE0((const void **)v1 + 117, 0, *(_BYTE **)(*((_DWORD *)v1 + 117) - 12), 0);
  return (*(int (__fastcall **)(SkinPickerScreenController *))(*(_DWORD *)v1 + 24))(v1);
}


int __fastcall SkinPickerScreenController::_setPreviewSkin(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r9@1
  int v5; // r4@1
  int *v6; // r9@3
  int v7; // r12@5
  int v8; // r2@5
  int v9; // r3@5
  int v10; // r6@5
  int v11; // r7@5
  int v12; // r12@5
  __int64 v13; // kr00_8@7
  int v14; // r1@9
  void *v15; // r0@9
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  int v18; // r0@14
  int v19; // r0@14
  int v20; // r1@14
  int v21; // r2@15
  int v22; // r3@15
  int v23; // r6@15
  int v24; // r7@15
  int result; // r0@15
  int v26; // r6@15
  int v27; // r11@15
  int v28; // r7@15
  int v29; // r0@16
  int v30; // r8@17
  int v31; // t1@23
  int v32; // [sp+0h] [bp-48h]@1
  int v33; // [sp+4h] [bp-44h]@16
  __int64 v34; // [sp+Ch] [bp-3Ch]@16
  int v35; // [sp+14h] [bp-34h]@16
  int v36; // [sp+18h] [bp-30h]@16
  int v37; // [sp+1Ch] [bp-2Ch]@16
  int v38; // [sp+20h] [bp-28h]@16

  v2 = a1;
  v3 = a1 + 448;
  v4 = *(_DWORD *)(a1 + 576);
  v5 = a2;
  v32 = a1 + 568;
  if ( *(_DWORD *)(a1 + 592) == v4 || SkinHandle::operator==(v4, v3) != 1 )
  {
    if ( v4 == *(_DWORD *)(v2 + 580) )
    {
      std::deque<SkinHandle,std::allocator<SkinHandle>>::_M_push_front_aux<SkinHandle const&>(v32, v3);
      v12 = *(_DWORD *)(v2 + 576);
    }
    else
      v7 = v4 - 24;
      v8 = *(_DWORD *)(v3 + 4);
      v9 = *(_DWORD *)(v3 + 8);
      v10 = *(_DWORD *)(v3 + 12);
      v11 = *(_DWORD *)(v3 + 16);
      *(_DWORD *)v7 = *(_DWORD *)v3;
      *(_DWORD *)(v7 + 4) = v8;
      *(_DWORD *)(v7 + 8) = v9;
      *(_DWORD *)(v7 + 12) = v10;
      *(_DWORD *)(v7 + 16) = v11;
      sub_21E8AF4((int *)(v4 - 4), (int *)(v2 + 468));
      v12 = *(_DWORD *)(v2 + 576) - 24;
      *(_DWORD *)(v2 + 576) = v12;
    v13 = *(_QWORD *)(v2 + 592);
    v6 = (int *)(v2 + 576);
    if ( (unsigned int)(-1431655765 * (((signed int)v13 - HIDWORD(v13)) >> 3)
                      + 21 * ((signed int)(*(_DWORD *)(v2 + 604) - (*(_QWORD *)(v2 + 584) >> 32)) >> 2)
                      + -1431655765 * ((signed int)(*(_QWORD *)(v2 + 584) - v12) >> 3)
                      - 21) < 0x65 )
      goto LABEL_15;
    if ( (_DWORD)v13 == HIDWORD(v13) )
      operator delete((void *)v13);
      v18 = *(_DWORD *)(v2 + 604);
      *(_DWORD *)(v2 + 604) = v18 - 4;
      v19 = *(_DWORD *)(v18 - 4);
      *(_DWORD *)(v2 + 596) = v19;
      *(_DWORD *)(v2 + 600) = v19 + 504;
      *(_DWORD *)(v2 + 592) = v19 + 480;
      v20 = *(_DWORD *)(v19 + 500);
      v15 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) == &dword_28898C0 )
        goto LABEL_15;
      v16 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
LABEL_30:
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      *(_DWORD *)(v2 + 592) = v13 - 24;
      v14 = *(_DWORD *)(v13 - 4);
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) == &dword_28898C0 )
      v16 = (unsigned int *)(v14 - 4);
        goto LABEL_30;
    v17 = (*v16)--;
    goto LABEL_30;
  }
  v6 = (int *)(v2 + 576);
LABEL_15:
  v21 = *(_DWORD *)(v5 + 4);
  v22 = *(_DWORD *)(v5 + 8);
  v23 = *(_DWORD *)(v5 + 12);
  v24 = *(_DWORD *)(v5 + 16);
  *(_DWORD *)v3 = *(_DWORD *)v5;
  *(_DWORD *)(v3 + 4) = v21;
  *(_DWORD *)(v3 + 8) = v22;
  *(_DWORD *)(v3 + 12) = v23;
  *(_DWORD *)(v3 + 16) = v24;
  EntityInteraction::setInteractText((int *)(v2 + 468), (int *)(v5 + 20));
  result = 0;
  *(_BYTE *)(v2 + 611) = 0;
  v27 = *(_QWORD *)(v2 + 584) >> 32;
  v26 = *(_QWORD *)(v2 + 584);
  v28 = *v6;
LABEL_17:
  v30 = *(_DWORD *)(v2 + 592);
  while ( v28 != v30 )
    if ( SkinHandle::operator==(v28, v5)
      || (result = SkinPickerScreenController::_isCustomSkin(v2, v5), result == 1)
      && (result = SkinPickerScreenController::_isCustomSkin(v2, v28), result == 1) )
      v35 = v28;
      v29 = *(_DWORD *)v27;
      v36 = v29;
      v37 = v29 + 504;
      v38 = v27;
      result = std::deque<SkinHandle,std::allocator<SkinHandle>>::_M_erase((int)&v33, v32, (int)&v35);
      v28 = v33;
      v27 = HIDWORD(v34);
      v26 = v34;
      goto LABEL_17;
    v28 += 24;
    if ( v28 == v26 )
      v31 = *(_DWORD *)(v27 + 4);
      v27 += 4;
      v28 = v31;
      v26 = v31 + 504;
  return result;
}


void **__fastcall SkinPickerScreenController::_getButtonBDescription(SkinPickerScreenController *this, MinecraftScreenController *a2)
{
  MinecraftScreenController *v2; // r5@1
  void **v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  bool v6; // zf@2
  void **result; // r0@5

  v2 = a2;
  v3 = (void **)this;
  v4 = MinecraftScreenController::getInputMode(a2);
  v5 = MinecraftScreenController::getHoloUIInputMode(v2);
  if ( v4 != 3 )
    goto LABEL_9;
  v6 = v5 == 2;
  if ( v5 != 2 )
    v6 = *((_BYTE *)v2 + 611) == 0;
  if ( v6 )
LABEL_9:
    result = sub_21E94B4(v3, "gui.back");
  else
    result = sub_21E94B4(v3, "gui.exit");
  return result;
}


signed int __fastcall SkinPickerScreenController::_isSelectorAreaFocused(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
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
    if ( !*((_BYTE *)v1 + 611) )
      result = 1;
  }
  return result;
}


int __fastcall SkinPickerScreenController::_forceUpdateCustomSkin(int result)
{
  *(_WORD *)(result + 608) = 257;
  *(_BYTE *)(result + 610) = 1;
  return result;
}


int __fastcall SkinPickerScreenController::_cyclePacksRight(SkinPickerScreenController *this, int a2)
{
  char *v2; // r0@1

  v2 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*((SkinPackCollectionModel **)this + 108), a2);
  return j_j_j__ZN13SkinPackModel30incrementFirstVisibleSkinIndexEi((SkinPackModel *)v2, 5);
}


UIPropertyBag *__fastcall SkinPickerScreenController::_openModalDialog(int a1, const void **a2)
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
  UIPropertyBag::set<std::string>((int)&v11, 10, "control_id", v3);
  sub_21E94B4((void **)&v9, "popup_dialog_factory");
  if ( !*(_DWORD *)(v2 + 12) )
    sub_21E5F48();
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v11);
}


int __fastcall SkinPickerScreenController::_usingGamepadModalBehavior(SkinPickerScreenController *this)
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


int *__fastcall SkinPickerScreenController::_buildPackName(SkinPickerScreenController *this, int a2, int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  char *v5; // r5@1
  int *v6; // r1@8

  v3 = a2;
  v4 = (int *)this;
  v5 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*(SkinPackCollectionModel **)(a2 + 432), a3);
  if ( !SkinPackModel::isValid((SkinPackModel *)v5) )
  {
    v6 = (int *)(SkinPackModel::getMetaData((SkinPackModel *)v5) + 4);
    return sub_21E8AF4(v4, v6);
  }
  if ( (MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v3 + 424))
     || !MinecraftScreenModel::isMultiPlayerGame(*(MinecraftScreenModel **)(v3 + 424)))
    && (MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v3 + 424)) != 1
     || MinecraftScreenModel::isPrimaryClient(*(MinecraftScreenModel **)(v3 + 424))
     || MinecraftScreenModel::isPrimaryLevelMultiplayer(*(MinecraftScreenModel **)(v3 + 424)) != 1)
    || SkinPackModel::isValidInMultiplayer((SkinPackModel *)v5) == 1 )
    v6 = (int *)SkinPackModel::getLocName((SkinPackModel *)v5);
  return (int *)sub_21E94B4((void **)v4, "skins.picker.single.player");
}


void __fastcall SkinPickerScreenController::_closeModalDialog(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  void *v2; // r0@2
  void *v3; // r0@3
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  unsigned int *v6; // r2@9
  signed int v7; // r1@11
  int v8; // [sp+4h] [bp-2Ch]@1
  int v9; // [sp+Ch] [bp-24h]@1

  v1 = this;
  sub_21E94B4((void **)&v9, "popup_dialog_factory");
  sub_21E94B4((void **)&v8, "popup_dialog");
  if ( !*((_DWORD *)v1 + 7) )
    sub_21E5F48();
  (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 8))((char *)v1 + 20, &v9, &v8);
  v2 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v9 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
}


int __fastcall SkinPickerScreenController::onOpen(int result)
{
  if ( !*(_BYTE *)(result + 436) )
  {
    *(_BYTE *)(result + 436) = 1;
    result = (int)j_j_j__ZN23SkinPackCollectionModel20collectionFromSearchEv(*(SkinPackCollectionModel **)(result + 432));
  }
  return result;
}


int __fastcall SkinPickerScreenController::_pickCustomSkin(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int result; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v14; // [sp+0h] [bp-28h]@13
  void (*v15)(void); // [sp+8h] [bp-20h]@7
  char v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<SkinPickerScreenController>((int)&v16, (int)this);
  v2 = *(_QWORD *)&v16;
  if ( v17 )
  {
    v3 = (unsigned int *)(v17 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v15 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  LODWORD(v8) = sub_1255EF0;
  v14 = v5;
  HIDWORD(v8) = sub_1255C40;
  *(_QWORD *)&v15 = v8;
  MainMenuScreenController::showPickCustomSkinDialog((int)v1, (int)&v14);
  if ( v15 )
    v15();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v17;
    v12 = (unsigned int *)(v17 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall SkinPickerScreenController::onTerminate(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  char *v2; // r5@1
  int v3; // r6@8
  int *v4; // r0@11
  void *v5; // r0@11
  unsigned int *v6; // r2@13
  signed int v7; // r1@15
  int v8; // [sp+4h] [bp-1Ch]@11

  v1 = this;
  v2 = (char *)this + 448;
  if ( !*((_BYTE *)this + 437)
    || *(_QWORD *)&mce::UUID::EMPTY == *(_QWORD *)v2
    && *(__int64 *)((char *)&qword_287E92C + 4) == __PAIR__(
                                                     (unsigned int)(*((_QWORD *)this + 57) >> 32) ^ unk_287E934,
                                                     (unsigned int)*((_QWORD *)this + 57))
    || *((_DWORD *)this + 116) == -1 && !*(_DWORD *)(*((_DWORD *)this + 117) - 12)
    || SkinHandle::operator==((int)v2, (int)this + 520)
    || SkinPackCollectionModel::isSkinLocked(*((_DWORD *)v1 + 108), (int)v2)
    || (v3 = (int)v1 + 544, SkinHandle::operator==((int)v1 + 544, (int)v2) == 1) )
  {
    if ( SkinPickerScreenController::_isCustomSkin((int)v1, (int)v2) != 1 )
      return;
    v3 = (int)v1 + 544;
  }
  SkinPackCollectionModel::setSelectedSkin(*((SkinPackModel **)v1 + 108), (int)v2);
  v4 = (int *)SkinPackCollectionModel::getSkinName(*((_DWORD *)v1 + 108), v3);
  sub_21E8AF4(&v8, v4);
  MinecraftScreenModel::sendPlayerSkin(*((_DWORD *)v1 + 106), (int **)&v8);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
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


signed int __fastcall SkinPickerScreenController::_isContentAreaFocused(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  v3 = MinecraftScreenController::getHoloUIInputMode(v1);
  result = 0;
  if ( v2 == 3 && v3 != 2 )
  {
    result = *((_BYTE *)v1 + 611);
    if ( *((_BYTE *)v1 + 611) )
      result = 1;
  }
  return result;
}


int __fastcall SkinPickerScreenController::tick(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( SkinPackCollectionModel::getCollectionChanged(*((SkinPackCollectionModel **)v1 + 108)) )
    v2 |= 1u;
  return v2;
}


int __fastcall SkinPickerScreenController::SkinPickerScreenController(int a1, int a2)
{
  MainMenuScreenModel **v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r6@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r7@14
  unsigned int v11; // r0@16
  int v12; // r0@21
  int v13; // r2@21
  int v14; // r3@21
  int v15; // r6@21
  int v16; // r7@21
  int v18; // [sp+0h] [bp-40h]@1
  int v19; // [sp+4h] [bp-3Ch]@1

  v2 = (MainMenuScreenModel **)a2;
  v3 = a1;
  v18 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v19 = v4;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v18);
  v7 = v19;
  if ( v19 )
    v8 = (unsigned int *)(v19 + 4);
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
  *(_DWORD *)v3 = &off_26E37F8;
  *(_DWORD *)(v3 + 432) = MainMenuScreenModel::getSkinPackCollection(*v2);
  *(_BYTE *)(v3 + 436) = 0;
  *(_BYTE *)(v3 + 437) = 0;
  *(_DWORD *)(v3 + 440) = -1;
  *(_DWORD *)(v3 + 444) = -1;
  MinecraftScreenModel::getSelectedSkinHandle((MinecraftScreenModel *)(v3 + 448), *(_DWORD *)(v3 + 424));
  MinecraftScreenModel::getCustomSkinHandle(v3 + 472, *(_DWORD *)(v3 + 424), 1);
  MinecraftScreenModel::getCustomSkinHandle(v3 + 496, *(_DWORD *)(v3 + 424), 0);
  MinecraftScreenModel::getCustomSkinHandle(v3 + 520, *(_DWORD *)(v3 + 424), 4);
  v12 = v3 + 544;
  v13 = *(_DWORD *)(v3 + 452);
  v14 = *(_DWORD *)(v3 + 456);
  v15 = *(_DWORD *)(v3 + 460);
  v16 = *(_DWORD *)(v3 + 464);
  *(_DWORD *)v12 = *(_DWORD *)(v3 + 448);
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  *(_DWORD *)(v12 + 16) = v16;
  sub_21E8AF4((int *)(v3 + 564), (int *)(v3 + 468));
  _aeabi_memclr4(v3 + 568, 40);
  std::_Deque_base<SkinHandle,std::allocator<SkinHandle>>::_M_initialize_map(v3 + 568, 0);
  *(_DWORD *)(v3 + 608) = 0x1000000;
  MinecraftScreenModel::addSelectedSkinToRecentList(*(MinecraftScreenModel **)(v3 + 424));
  SkinPickerScreenController::_registerEventHandlers((SkinPickerScreenController *)v3);
  SkinPickerScreenController::_registerBindings((SkinPickerScreenController *)v3);
  return v3;
}


SkinPickerScreenController *__fastcall SkinPickerScreenController::~SkinPickerScreenController(SkinPickerScreenController *this)
{
  SkinPickerScreenController *v1; // r4@1
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r12@1
  void **v8; // r5@1
  void *v9; // r0@1
  unsigned int v10; // r6@2
  unsigned int v11; // r1@2
  unsigned int v12; // r7@3
  void *v13; // t1@4
  int v14; // r1@7
  void *v15; // r0@7
  int v16; // r1@8
  void *v17; // r0@8
  int v18; // r1@9
  void *v19; // r0@9
  int v20; // r1@10
  void *v21; // r0@10
  int v22; // r1@11
  void *v23; // r0@11
  unsigned int *v25; // r2@13
  signed int v26; // r1@15
  unsigned int *v27; // r2@17
  signed int v28; // r1@19
  unsigned int *v29; // r2@21
  signed int v30; // r1@23
  unsigned int *v31; // r2@25
  signed int v32; // r1@27
  unsigned int *v33; // r2@29
  signed int v34; // r1@31
  int v35; // [sp+4h] [bp-34h]@1
  __int64 v36; // [sp+8h] [bp-30h]@1
  int v37; // [sp+10h] [bp-28h]@1
  int v38; // [sp+14h] [bp-24h]@1
  int v39; // [sp+18h] [bp-20h]@1
  int v40; // [sp+1Ch] [bp-1Ch]@1
  int v41; // [sp+20h] [bp-18h]@1

  v1 = this;
  *(_DWORD *)this = &off_26E37F8;
  v2 = *((_DWORD *)this + 145);
  v3 = *((_DWORD *)this + 146);
  v4 = *((_DWORD *)this + 147);
  v5 = *((_DWORD *)this + 148);
  v6 = *(_QWORD *)((char *)this + 596);
  v7 = *((_DWORD *)this + 151);
  v38 = *((_DWORD *)this + 144);
  v39 = v2;
  v40 = v3;
  v41 = v4;
  v35 = v5;
  v36 = v6;
  v37 = v7;
  v8 = (void **)((char *)this + 568);
  std::deque<SkinHandle,std::allocator<SkinHandle>>::_M_destroy_data_aux((int)this + 568, (int)&v38, (int)&v35);
  v9 = (void *)*((_DWORD *)v1 + 142);
  if ( v9 )
  {
    v10 = *((_DWORD *)v1 + 151);
    v11 = *((_DWORD *)v1 + 147);
    if ( v11 < v10 + 4 )
    {
      v12 = v11 - 4;
      do
      {
        v13 = *(void **)(v12 + 4);
        v12 += 4;
        operator delete(v13);
      }
      while ( v12 < v10 );
      v9 = *v8;
    }
    operator delete(v9);
  }
  v14 = *((_DWORD *)v1 + 141);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 135);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v16 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *((_DWORD *)v1 + 129);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v18 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 123);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v20 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *((_DWORD *)v1 + 117);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v22 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall SkinPickerScreenController::~SkinPickerScreenController(SkinPickerScreenController *this)
{
  SkinPickerScreenController::~SkinPickerScreenController(this);
}


void __fastcall SkinPickerScreenController::_registerEventHandlers(SkinPickerScreenController *this)
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
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  void *v49; // r0@36
  int v50; // r5@37
  _DWORD *v51; // r0@37
  __int64 v52; // r1@37
  void *v53; // r0@39
  int v54; // r5@40
  _DWORD *v55; // r0@40
  __int64 v56; // r1@40
  void *v57; // r0@42
  int v58; // r5@43
  _DWORD *v59; // r0@43
  __int64 v60; // r1@43
  void *v61; // r0@45
  int v62; // r5@46
  _DWORD *v63; // r0@46
  __int64 v64; // r1@46
  void *v65; // r0@48
  int v66; // r5@49
  _DWORD *v67; // r0@49
  __int64 v68; // r1@49
  void *v69; // r0@51
  int v70; // r5@52
  _DWORD *v71; // r0@52
  __int64 v72; // r1@52
  void *v73; // r0@54
  int v74; // r5@55
  _DWORD *v75; // r0@55
  __int64 v76; // r1@55
  void *v77; // r0@57
  int v78; // r5@58
  _DWORD *v79; // r0@58
  __int64 v80; // r1@58
  void *v81; // r0@60
  unsigned int *v82; // r2@62
  signed int v83; // r1@64
  unsigned int *v84; // r2@66
  signed int v85; // r1@68
  unsigned int *v86; // r2@70
  signed int v87; // r1@72
  unsigned int *v88; // r2@74
  signed int v89; // r1@76
  unsigned int *v90; // r2@78
  signed int v91; // r1@80
  unsigned int *v92; // r2@82
  signed int v93; // r1@84
  unsigned int *v94; // r2@86
  signed int v95; // r1@88
  unsigned int *v96; // r2@90
  signed int v97; // r1@92
  unsigned int *v98; // r2@94
  signed int v99; // r1@96
  unsigned int *v100; // r2@98
  signed int v101; // r1@100
  unsigned int *v102; // r2@102
  signed int v103; // r1@104
  unsigned int *v104; // r2@106
  signed int v105; // r1@108
  unsigned int *v106; // r2@110
  signed int v107; // r1@112
  unsigned int *v108; // r2@114
  signed int v109; // r1@116
  unsigned int *v110; // r2@118
  signed int v111; // r1@120
  unsigned int *v112; // r2@122
  signed int v113; // r1@124
  unsigned int *v114; // r2@126
  signed int v115; // r1@128
  unsigned int *v116; // r2@130
  signed int v117; // r1@132
  unsigned int *v118; // r2@134
  signed int v119; // r1@136
  unsigned int *v120; // r2@138
  signed int v121; // r1@140
  _DWORD *v122; // [sp+4h] [bp-1F4h]@58
  __int64 v123; // [sp+Ch] [bp-1ECh]@58
  int v124; // [sp+18h] [bp-1E0h]@58
  _DWORD *v125; // [sp+1Ch] [bp-1DCh]@55
  __int64 v126; // [sp+24h] [bp-1D4h]@55
  int v127; // [sp+30h] [bp-1C8h]@55
  _DWORD *v128; // [sp+34h] [bp-1C4h]@52
  __int64 v129; // [sp+3Ch] [bp-1BCh]@52
  int v130; // [sp+48h] [bp-1B0h]@52
  _DWORD *v131; // [sp+4Ch] [bp-1ACh]@49
  __int64 v132; // [sp+54h] [bp-1A4h]@49
  int v133; // [sp+60h] [bp-198h]@49
  _DWORD *v134; // [sp+64h] [bp-194h]@46
  __int64 v135; // [sp+6Ch] [bp-18Ch]@46
  int v136; // [sp+78h] [bp-180h]@46
  _DWORD *v137; // [sp+7Ch] [bp-17Ch]@43
  __int64 v138; // [sp+84h] [bp-174h]@43
  int v139; // [sp+90h] [bp-168h]@43
  _DWORD *v140; // [sp+94h] [bp-164h]@40
  __int64 v141; // [sp+9Ch] [bp-15Ch]@40
  int v142; // [sp+A8h] [bp-150h]@40
  _DWORD *v143; // [sp+ACh] [bp-14Ch]@37
  __int64 v144; // [sp+B4h] [bp-144h]@37
  int v145; // [sp+C0h] [bp-138h]@37
  _DWORD *v146; // [sp+C4h] [bp-134h]@34
  __int64 v147; // [sp+CCh] [bp-12Ch]@34
  int v148; // [sp+D8h] [bp-120h]@34
  _DWORD *v149; // [sp+DCh] [bp-11Ch]@31
  __int64 v150; // [sp+E4h] [bp-114h]@31
  int v151; // [sp+F0h] [bp-108h]@31
  _DWORD *v152; // [sp+F4h] [bp-104h]@28
  __int64 v153; // [sp+FCh] [bp-FCh]@28
  int v154; // [sp+108h] [bp-F0h]@28
  _DWORD *v155; // [sp+10Ch] [bp-ECh]@25
  __int64 v156; // [sp+114h] [bp-E4h]@25
  int v157; // [sp+120h] [bp-D8h]@25
  _DWORD *v158; // [sp+124h] [bp-D4h]@22
  __int64 v159; // [sp+12Ch] [bp-CCh]@22
  int v160; // [sp+138h] [bp-C0h]@22
  _DWORD *v161; // [sp+13Ch] [bp-BCh]@19
  __int64 v162; // [sp+144h] [bp-B4h]@19
  int v163; // [sp+150h] [bp-A8h]@19
  _DWORD *v164; // [sp+154h] [bp-A4h]@16
  __int64 v165; // [sp+15Ch] [bp-9Ch]@16
  int v166; // [sp+168h] [bp-90h]@16
  _DWORD *v167; // [sp+16Ch] [bp-8Ch]@13
  __int64 v168; // [sp+174h] [bp-84h]@13
  int v169; // [sp+180h] [bp-78h]@13
  _DWORD *v170; // [sp+184h] [bp-74h]@10
  __int64 v171; // [sp+18Ch] [bp-6Ch]@10
  int v172; // [sp+198h] [bp-60h]@10
  _DWORD *v173; // [sp+19Ch] [bp-5Ch]@7
  __int64 v174; // [sp+1A4h] [bp-54h]@7
  int v175; // [sp+1B0h] [bp-48h]@7
  _DWORD *v176; // [sp+1B4h] [bp-44h]@4
  __int64 v177; // [sp+1BCh] [bp-3Ch]@4
  int v178; // [sp+1C8h] [bp-30h]@4
  _DWORD *v179; // [sp+1CCh] [bp-2Ch]@1
  __int64 v180; // [sp+1D4h] [bp-24h]@1
  int v181; // [sp+1E0h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v181, "button.close_dialog");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v181);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12538A6;
  *v3 = v1;
  HIDWORD(v4) = sub_1253898;
  v179 = v3;
  v180 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v179);
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  v5 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
  {
    v82 = (unsigned int *)(v181 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
    }
    else
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v178, "button.choose_skinny");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v178);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1253910;
  *v7 = v1;
  HIDWORD(v8) = sub_12538DC;
  v176 = v7;
  v177 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v176);
  if ( (_DWORD)v177 )
    ((void (*)(void))v177)();
  v9 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v178 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v175, "button.choose_fat");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v175);
  v11 = operator new(4u);
  LODWORD(v12) = sub_125397A;
  *v11 = v1;
  HIDWORD(v12) = sub_1253946;
  v173 = v11;
  v174 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  v13 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v175 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v172, "button.accept_skin");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v172);
  v15 = operator new(4u);
  LODWORD(v16) = sub_1253BD4;
  *v15 = v1;
  HIDWORD(v16) = sub_12539B0;
  v170 = v15;
  v171 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v170);
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  v17 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v172 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v169, "button.undo_skin");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v169);
  v19 = operator new(4u);
  LODWORD(v20) = sub_1253E66;
  *v19 = v1;
  HIDWORD(v20) = sub_1253E24;
  v167 = v19;
  v168 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  v21 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v169 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v166, "button.choose_custom_skin");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v166);
  v23 = operator new(4u);
  LODWORD(v24) = sub_1253F82;
  *v23 = v1;
  HIDWORD(v24) = sub_1253F74;
  v164 = v23;
  v165 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v164);
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  v25 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v166 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v163, "button.view_premium_skin");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v163);
  v27 = operator new(4u);
  LODWORD(v28) = sub_1254168;
  *v27 = v1;
  HIDWORD(v28) = sub_1253FB8;
  v161 = v27;
  v162 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  v29 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v163 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v160, "button.view_default_skin");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v160);
  v31 = operator new(4u);
  LODWORD(v32) = sub_1254304;
  *v31 = v1;
  HIDWORD(v32) = sub_12541A0;
  v158 = v31;
  v159 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  v33 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v160 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v157, "button.view_recent_skin");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v157);
  v35 = operator new(4u);
  LODWORD(v36) = sub_1254454;
  *v35 = v1;
  HIDWORD(v36) = sub_125433C;
  v155 = v35;
  v156 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v155);
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v37 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v157 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v154, "button.back_to_selector_area");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v154);
  v39 = operator new(4u);
  LODWORD(v40) = sub_12544A0;
  *v39 = v1;
  HIDWORD(v40) = sub_125448A;
  v152 = v39;
  v153 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v41 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v154 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v151, "button.cycle_pack_left");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v151);
  v43 = operator new(4u);
  LODWORD(v44) = sub_1254544;
  *v43 = v1;
  HIDWORD(v44) = sub_12544D8;
  v149 = v43;
  v150 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v45 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v151 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v148, "button.cycle_pack_right");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v148);
  v47 = operator new(4u);
  LODWORD(v48) = sub_12545E8;
  *v47 = v1;
  HIDWORD(v48) = sub_125457C;
  v146 = v47;
  v147 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  v49 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v148 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v145, "button.controller_cycle_pack_left");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v145);
  v51 = operator new(4u);
  LODWORD(v52) = sub_1254698;
  *v51 = v1;
  HIDWORD(v52) = sub_1254620;
  v143 = v51;
  v144 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  v53 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v145 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  sub_21E94B4((void **)&v142, "button.controller_cycle_pack_right");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v142);
  v55 = operator new(4u);
  LODWORD(v56) = sub_1254748;
  *v55 = v1;
  HIDWORD(v56) = sub_12546D0;
  v140 = v55;
  v141 = v56;
  ScreenController::registerButtonClickHandler((int)v1, v54, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  v57 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v142 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  sub_21E94B4((void **)&v139, "button.premium_skin_hovered");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v139);
  v59 = operator new(4u);
  LODWORD(v60) = sub_1254848;
  *v59 = v1;
  HIDWORD(v60) = sub_1254780;
  v137 = v59;
  v138 = v60;
  ScreenController::registerButtonEventHandler((int)v1, v58, 1, 0, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v61 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v139 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  sub_21E94B4((void **)&v136, "button.premium_skin_unhovered");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v136);
  v63 = operator new(4u);
  LODWORD(v64) = sub_1254958;
  *v63 = v1;
  HIDWORD(v64) = sub_1254880;
  v134 = v63;
  v135 = v64;
  ScreenController::registerButtonEventHandler((int)v1, v62, 0, 2, (int)&v134);
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v65 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v136 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  sub_21E94B4((void **)&v133, "button.recent_skin_hovered");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v133);
  v67 = operator new(4u);
  LODWORD(v68) = sub_12549F4;
  *v67 = v1;
  HIDWORD(v68) = sub_1254990;
  v131 = v67;
  v132 = v68;
  ScreenController::registerButtonEventHandler((int)v1, v66, 1, 0, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v69 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v133 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  sub_21E94B4((void **)&v130, "button.default_skin_hovered");
  v70 = MinecraftScreenController::_getNameId(v1, (int **)&v130);
  v71 = operator new(4u);
  LODWORD(v72) = sub_1254A90;
  *v71 = v1;
  HIDWORD(v72) = sub_1254A2C;
  v128 = v71;
  v129 = v72;
  ScreenController::registerButtonEventHandler((int)v1, v70, 1, 0, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  v73 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v130 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  sub_21E94B4((void **)&v127, "modal.escape");
  v74 = MinecraftScreenController::_getNameId(v1, (int **)&v127);
  v75 = operator new(4u);
  LODWORD(v76) = sub_1254AD4;
  *v75 = v1;
  HIDWORD(v76) = sub_1254AC6;
  v125 = v75;
  v126 = v76;
  ScreenController::registerButtonClickHandler((int)v1, v74, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  v77 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v127 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  sub_21E94B4((void **)&v124, "button.skin_unhovered");
  v78 = MinecraftScreenController::_getNameId(v1, (int **)&v124);
  v79 = operator new(4u);
  LODWORD(v80) = sub_1254B78;
  *v79 = v1;
  HIDWORD(v80) = sub_1254B0C;
  v122 = v79;
  v123 = v80;
  ScreenController::registerButtonEventHandler((int)v1, v78, 0, 2, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v81 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v124 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
}


void __fastcall SkinPickerScreenController::onTerminate(SkinPickerScreenController *this)
{
  SkinPickerScreenController::onTerminate(this);
}


void __fastcall SkinPickerScreenController::_registerEventHandlers(SkinPickerScreenController *this)
{
  SkinPickerScreenController::_registerEventHandlers(this);
}


int __fastcall SkinPickerScreenController::_cyclePacksLeft(SkinPickerScreenController *this, int a2)
{
  char *v2; // r0@1

  v2 = SkinPackCollectionModel::getPremiumSkinPackModelByCollectionIndex(*((SkinPackCollectionModel **)this + 108), a2);
  return j_j_j__ZN13SkinPackModel30decrementFirstVisibleSkinIndexEi((SkinPackModel *)v2, 5);
}


int __fastcall SkinPickerScreenController::_usingGamepadModalBehavior(int a1, int a2, int a3)
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


void __fastcall SkinPickerScreenController::_closeModalDialog(SkinPickerScreenController *this)
{
  SkinPickerScreenController::_closeModalDialog(this);
}
