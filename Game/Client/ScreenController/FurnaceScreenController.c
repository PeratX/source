

void **__fastcall FurnaceScreenController::_getButtonXDescription(FurnaceScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  void **v3; // r4@1
  void **result; // r0@3
  int v5; // r0@5

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    if ( *((_DWORD *)v2 + 159) == 22 )
      result = sub_1590164(v3, "controller.buttonTip.take.half");
    else
      result = ContainerScreenController::_getButtonXDescription((ContainerScreenController *)v3, v2);
  }
  else if ( ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    v5 = *((_DWORD *)v2 + 159);
    if ( v5 == 20 )
    {
      result = sub_1590164(v3, "controller.buttonTip.removeFuel");
    }
    else if ( v5 == 21 )
      result = sub_1590164(v3, "controller.buttonTip.removeInput");
      result = sub_1590164(v3, "controller.buttonTip.takeItem");
  else
    result = sub_1590164(v3, "controller.buttonTip.addItem");
  return result;
}


void __fastcall FurnaceScreenController::_registerBindings(FurnaceScreenController *this)
{
  FurnaceScreenController *v1; // r4@1
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
  void *v20; // [sp+0h] [bp-E0h]@21
  __int64 v21; // [sp+8h] [bp-D8h]@21
  _DWORD *v22; // [sp+10h] [bp-D0h]@21
  __int64 v23; // [sp+18h] [bp-C8h]@21
  int v24; // [sp+20h] [bp-C0h]@21
  void *v25; // [sp+24h] [bp-BCh]@17
  __int64 v26; // [sp+2Ch] [bp-B4h]@17
  _DWORD *v27; // [sp+34h] [bp-ACh]@17
  __int64 v28; // [sp+3Ch] [bp-A4h]@17
  int v29; // [sp+44h] [bp-9Ch]@17
  void *v30; // [sp+48h] [bp-98h]@13
  __int64 v31; // [sp+50h] [bp-90h]@13
  _DWORD *v32; // [sp+58h] [bp-88h]@13
  __int64 v33; // [sp+60h] [bp-80h]@13
  int v34; // [sp+68h] [bp-78h]@13
  void *v35; // [sp+6Ch] [bp-74h]@9
  __int64 v36; // [sp+74h] [bp-6Ch]@9
  _DWORD *v37; // [sp+7Ch] [bp-64h]@9
  __int64 v38; // [sp+84h] [bp-5Ch]@9
  int v39; // [sp+8Ch] [bp-54h]@9
  void *v40; // [sp+90h] [bp-50h]@5
  __int64 v41; // [sp+98h] [bp-48h]@5
  _DWORD *v42; // [sp+A0h] [bp-40h]@5
  __int64 v43; // [sp+A8h] [bp-38h]@5
  int v44; // [sp+B0h] [bp-30h]@5
  void *v45; // [sp+B4h] [bp-2Ch]@1
  __int64 v46; // [sp+BCh] [bp-24h]@1
  _DWORD *v47; // [sp+C4h] [bp-1Ch]@1
  __int64 v48; // [sp+CCh] [bp-14h]@1
  int v49; // [sp+D4h] [bp-Ch]@1

  v1 = this;
  v49 = -501654190;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11A25B8;
  *v2 = v1;
  HIDWORD(v3) = sub_11A2588;
  v47 = v2;
  v48 = v3;
  v45 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v46 = v4;
  ScreenController::bindFloat((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v44 = 2143159456;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11A2620;
  *v5 = v1;
  HIDWORD(v6) = sub_11A25F0;
  v42 = v5;
  v43 = v6;
  v40 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v41 = v7;
  ScreenController::bindFloat((int)v1, &v44, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v39 = 1889544415;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11A2670;
  *v8 = v1;
  HIDWORD(v9) = sub_11A2656;
  v37 = v8;
  v38 = v9;
  v35 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v36 = v10;
  ScreenController::bindString((int)v1, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  v34 = 62055465;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11A26B2;
  *v11 = v1;
  HIDWORD(v12) = sub_11A26A6;
  v32 = v11;
  v33 = v12;
  v30 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v31 = v13;
  ScreenController::bindInt((int)v1, &v34, (int)&v32, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v29 = 1910138026;
  v14 = operator new(4u);
  LODWORD(v15) = sub_11A270E;
  *v14 = v1;
  HIDWORD(v15) = sub_11A26E8;
  v27 = v14;
  v28 = v15;
  v25 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v26 = v16;
  ScreenController::bindBool((int)v1, &v29, (int)&v27, (int)&v25);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  v24 = 359185495;
  v17 = operator new(4u);
  LODWORD(v18) = sub_11A276E;
  *v17 = v1;
  HIDWORD(v18) = sub_11A2744;
  v22 = v17;
  v23 = v18;
  v20 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v21 = v19;
  ScreenController::bindBool((int)v1, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
}


void **__fastcall FurnaceScreenController::_getButtonYDescription(FurnaceScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  ContainerScreenController *v3; // r4@1
  void **result; // r0@3

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) || ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    result = ContainerScreenController::_getButtonYDescription(v3, v2);
  else
    result = sub_1590164((void **)v3, "controller.buttonTip.addItemStack");
  return result;
}


signed int __fastcall FurnaceScreenController::_isStillValid(FurnaceScreenController *this)
{
  FurnaceScreenController *v1; // r4@1
  FurnaceContainerManagerController *v2; // r5@2
  int v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = (FurnaceContainerManagerController *)*((_DWORD *)v1 + 157),
        v3 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        FurnaceContainerManagerController::isFurnaceValid(v2, *(float *)&v3) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


void **__fastcall FurnaceScreenController::_getButtonBDescription(FurnaceScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  MinecraftScreenController *v3; // r4@1
  void **result; // r0@3

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) || !ContainerScreenController::isInventoryPanelFocused(v2) )
    result = MinecraftScreenController::_getButtonBDescription(v3);
  else
    result = sub_1590164((void **)v3, "controller.buttonTip.backToFurnace");
  return result;
}


void __fastcall FurnaceScreenController::_registerAutoPlaceOrder(FurnaceScreenController *this)
{
  FurnaceScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  int v8; // r9@10
  int v9; // r0@10
  int v10; // r5@11
  int v11; // r7@11
  bool v12; // zf@12
  int v13; // r4@15
  bool v14; // zf@18
  _DWORD *v15; // r0@22
  char **v16; // r0@23
  char *v17; // r1@24
  char *v18; // r0@26
  int v19; // r9@27
  int v20; // r0@27
  int v21; // r5@28
  int v22; // r7@28
  bool v23; // zf@29
  int v24; // r4@32
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  char **v27; // r0@40
  char *v28; // r1@41
  char *v29; // r0@43
  int v30; // r9@44
  int v31; // r0@44
  int v32; // r5@45
  int v33; // r7@45
  bool v34; // zf@46
  int v35; // r4@49
  bool v36; // zf@52
  _DWORD *v37; // r0@56
  char **v38; // r0@57
  char *v39; // r1@58
  char *v40; // r0@60
  int v41; // r9@61
  int v42; // r0@61
  int v43; // r5@62
  int v44; // r7@62
  bool v45; // zf@63
  int v46; // r4@66
  bool v47; // zf@69
  _DWORD *v48; // r0@73
  unsigned __int64 *v49; // r8@74
  int v50; // r0@74
  int v51; // r9@74
  int v52; // r0@74
  int v53; // r5@75
  int v54; // r7@75
  bool v55; // zf@76
  int v56; // r4@79
  bool v57; // zf@82
  _DWORD *v58; // r0@86
  char **v59; // r0@87
  char *v60; // r1@88
  char *v61; // r0@90
  int v62; // r9@91
  int v63; // r0@91
  int v64; // r5@92
  int v65; // r7@92
  bool v66; // zf@93
  int v67; // r4@96
  bool v68; // zf@99
  _DWORD *v69; // r0@103
  char **v70; // r0@104
  char *v71; // r1@105
  char *v72; // r0@107
  int v73; // r9@108
  int v74; // r0@108
  int v75; // r5@109
  int v76; // r7@109
  bool v77; // zf@110
  int v78; // r4@113
  bool v79; // zf@116
  _DWORD *v80; // r0@120
  char **v81; // r0@121
  char *v82; // r1@122
  char *v83; // r0@124
  int v84; // r9@125
  int v85; // r0@125
  int v86; // r5@126
  int v87; // r7@126
  bool v88; // zf@127
  int v89; // r4@130
  bool v90; // zf@133
  _DWORD *v91; // r0@137
  int v92; // r0@138
  int v93; // r9@138
  int v94; // r0@138
  int v95; // r5@139
  int v96; // r7@139
  bool v97; // zf@140
  int v98; // r4@143
  bool v99; // zf@146
  _DWORD *v100; // r0@150
  char **v101; // r0@151
  char *v102; // r1@152
  char *v103; // r0@154
  int v104; // r9@155
  int v105; // r0@155
  int v106; // r5@156
  int v107; // r7@156
  bool v108; // zf@157
  int v109; // r4@160
  bool v110; // zf@163
  _DWORD *v111; // r0@167
  char **v112; // r0@168
  char *v113; // r1@169
  char *v114; // r0@171
  int v115; // r9@172
  int v116; // r0@172
  int v117; // r5@173
  int v118; // r7@173
  bool v119; // zf@174
  int v120; // r4@177
  bool v121; // zf@180
  _DWORD *v122; // r0@184
  int v123; // r0@185
  int v124; // r9@185
  int v125; // r0@185
  int v126; // r5@186
  int v127; // r7@186
  bool v128; // zf@187
  int v129; // r4@190
  bool v130; // zf@193
  _DWORD *v131; // r0@197
  char **v132; // r0@198
  char *v133; // r1@199
  char *v134; // r0@201
  int v135; // r9@202
  int v136; // r0@202
  int v137; // r5@203
  int v138; // r7@203
  bool v139; // zf@204
  int v140; // r4@207
  bool v141; // zf@210
  _DWORD *v142; // r0@214
  char **v143; // r0@215
  char *v144; // r1@216
  char *v145; // r0@218
  int v146; // r9@219
  int v147; // r0@219
  int v148; // r5@220
  int v149; // r7@220
  bool v150; // zf@221
  int v151; // r4@224
  bool v152; // zf@227
  _DWORD *v153; // r0@231
  int v154; // r0@232
  int v155; // r9@232
  int v156; // r0@232
  int v157; // r5@233
  int v158; // r7@233
  bool v159; // zf@234
  int v160; // r4@237
  bool v161; // zf@240
  _DWORD *v162; // r0@244
  char **v163; // r0@245
  char *v164; // r1@246
  char *v165; // r0@248
  int v166; // r9@249
  int v167; // r0@249
  int v168; // r5@250
  int v169; // r7@250
  bool v170; // zf@251
  int v171; // r4@254
  bool v172; // zf@257
  _DWORD *v173; // r0@261
  char **v174; // r0@262
  char *v175; // r1@263
  char *v176; // r0@265
  int v177; // r9@266
  int v178; // r0@266
  int v179; // r5@267
  int v180; // r7@267
  bool v181; // zf@268
  int v182; // r4@271
  bool v183; // zf@274
  _DWORD *v184; // r0@278
  int v185; // r0@279
  char **v186; // r4@279
  char **v187; // r6@279
  unsigned int *v188; // r2@281
  signed int v189; // r1@283
  int *v190; // r0@289
  char **v191; // r4@294
  char **v192; // r6@294
  unsigned int *v193; // r2@296
  signed int v194; // r1@298
  int *v195; // r0@304
  char **v196; // r4@309
  char **v197; // r6@309
  unsigned int *v198; // r2@311
  signed int v199; // r1@313
  int *v200; // r0@319
  char **v201; // r4@324
  char **v202; // r6@324
  unsigned int *v203; // r2@326
  signed int v204; // r1@328
  int *v205; // r0@334
  char **v206; // r4@339
  char **v207; // r6@339
  unsigned int *v208; // r2@341
  signed int v209; // r1@343
  int *v210; // r0@349
  bool v211; // zf@352
  _DWORD *v212; // r0@356
  char **v213; // r0@357
  char *v214; // r1@358
  char *v215; // r0@360
  int v216; // r9@361
  int v217; // r0@361
  int v218; // r5@362
  int v219; // r7@362
  bool v220; // zf@363
  int v221; // r4@366
  bool v222; // zf@369
  _DWORD *v223; // r0@373
  char **v224; // r0@374
  char *v225; // r1@375
  char *v226; // r0@377
  int v227; // r9@378
  int v228; // r0@378
  int v229; // r5@379
  int v230; // r7@379
  bool v231; // zf@380
  int v232; // r4@383
  bool v233; // zf@386
  _DWORD *v234; // r0@390
  unsigned __int64 *v235; // r8@391
  int v236; // r0@391
  int v237; // r9@391
  int v238; // r0@391
  int v239; // r5@392
  int v240; // r7@392
  bool v241; // zf@393
  int v242; // r4@396
  bool v243; // zf@399
  _DWORD *v244; // r0@403
  char **v245; // r0@404
  char *v246; // r1@405
  char *v247; // r0@407
  int v248; // r9@408
  int v249; // r0@408
  int v250; // r5@409
  int v251; // r7@409
  bool v252; // zf@410
  int v253; // r4@413
  bool v254; // zf@416
  _DWORD *v255; // r0@420
  int v256; // r0@421
  int v257; // r9@421
  int v258; // r0@421
  int v259; // r5@422
  int v260; // r7@422
  bool v261; // zf@423
  int v262; // r4@426
  bool v263; // zf@429
  _DWORD *v264; // r0@433
  char **v265; // r0@434
  char *v266; // r1@435
  char *v267; // r0@437
  int v268; // r9@438
  int v269; // r0@438
  int v270; // r5@439
  int v271; // r7@439
  bool v272; // zf@440
  int v273; // r4@443
  bool v274; // zf@446
  _DWORD *v275; // r0@450
  int v276; // r0@451
  int v277; // r9@451
  int v278; // r0@451
  int v279; // r5@452
  int v280; // r7@452
  bool v281; // zf@453
  int v282; // r4@456
  bool v283; // zf@459
  _DWORD *v284; // r0@463
  char **v285; // r0@464
  char *v286; // r1@465
  char *v287; // r0@467
  int v288; // r9@468
  int v289; // r0@468
  int v290; // r5@469
  int v291; // r7@469
  bool v292; // zf@470
  int v293; // r4@473
  bool v294; // zf@476
  _DWORD *v295; // r0@480
  int v296; // r0@481
  char **v297; // r4@481
  char **v298; // r6@481
  unsigned int *v299; // r2@483
  signed int v300; // r1@485
  int *v301; // r0@491
  char **v302; // r4@496
  char **v303; // r6@496
  unsigned int *v304; // r2@498
  signed int v305; // r1@500
  int *v306; // r0@506
  char **v307; // r4@511
  char **v308; // r6@511
  unsigned int *v309; // r2@513
  signed int v310; // r1@515
  int *v311; // r0@521
  char **v312; // r6@526
  unsigned int *v313; // r2@528
  signed int v314; // r1@530
  int *v315; // r0@536
  unsigned int *v316; // r2@542
  signed int v317; // r1@544
  unsigned int *v318; // r2@546
  signed int v319; // r1@548
  unsigned int *v320; // r2@550
  signed int v321; // r1@552
  unsigned int *v322; // r2@554
  signed int v323; // r1@556
  unsigned int *v324; // r2@558
  signed int v325; // r1@560
  unsigned int *v326; // r2@562
  signed int v327; // r1@564
  unsigned int *v328; // r2@566
  signed int v329; // r1@568
  unsigned int *v330; // r2@570
  signed int v331; // r1@572
  unsigned int *v332; // r2@574
  signed int v333; // r1@576
  unsigned int *v334; // r2@578
  signed int v335; // r1@580
  unsigned int *v336; // r2@582
  signed int v337; // r1@584
  unsigned int *v338; // r2@586
  signed int v339; // r1@588
  unsigned int *v340; // r2@590
  signed int v341; // r1@592
  unsigned int *v342; // r2@594
  signed int v343; // r1@596
  unsigned int *v344; // r2@598
  signed int v345; // r1@600
  unsigned int *v346; // r2@602
  signed int v347; // r1@604
  unsigned int *v348; // r2@606
  signed int v349; // r1@608
  char *v350; // [sp+0h] [bp-118h]@262
  char v351; // [sp+4h] [bp-114h]@263
  char *v352; // [sp+8h] [bp-110h]@245
  char v353; // [sp+Ch] [bp-10Ch]@246
  char **v354; // [sp+10h] [bp-108h]@232
  char **v355; // [sp+14h] [bp-104h]@232
  char **v356; // [sp+18h] [bp-100h]@232
  char *v357; // [sp+1Ch] [bp-FCh]@215
  char v358; // [sp+20h] [bp-F8h]@216
  char *v359; // [sp+24h] [bp-F4h]@198
  char v360; // [sp+28h] [bp-F0h]@199
  char **v361; // [sp+2Ch] [bp-ECh]@185
  char **v362; // [sp+30h] [bp-E8h]@185
  char **v363; // [sp+34h] [bp-E4h]@185
  char *v364; // [sp+38h] [bp-E0h]@168
  char v365; // [sp+3Ch] [bp-DCh]@169
  char *v366; // [sp+40h] [bp-D8h]@151
  char v367; // [sp+44h] [bp-D4h]@152
  char **v368; // [sp+48h] [bp-D0h]@138
  char **v369; // [sp+4Ch] [bp-CCh]@138
  char **v370; // [sp+50h] [bp-C8h]@138
  char *v371; // [sp+54h] [bp-C4h]@121
  char v372; // [sp+58h] [bp-C0h]@122
  char *v373; // [sp+5Ch] [bp-BCh]@104
  char v374; // [sp+60h] [bp-B8h]@105
  char *v375; // [sp+64h] [bp-B4h]@87
  char v376; // [sp+68h] [bp-B0h]@88
  char **v377; // [sp+6Ch] [bp-ACh]@74
  char **v378; // [sp+70h] [bp-A8h]@74
  char **v379; // [sp+74h] [bp-A4h]@74
  char *v380; // [sp+78h] [bp-A0h]@57
  char v381; // [sp+7Ch] [bp-9Ch]@58
  char *v382; // [sp+80h] [bp-98h]@40
  char v383; // [sp+84h] [bp-94h]@41
  char *v384; // [sp+88h] [bp-90h]@23
  char v385; // [sp+8Ch] [bp-8Ch]@24
  char **v386; // [sp+90h] [bp-88h]@2
  char **v387; // [sp+94h] [bp-84h]@2
  char **v388; // [sp+98h] [bp-80h]@2
  char *v389; // [sp+9Ch] [bp-7Ch]@464
  char v390; // [sp+A0h] [bp-78h]@465
  char **v391; // [sp+A4h] [bp-74h]@451
  char **v392; // [sp+A8h] [bp-70h]@451
  char **v393; // [sp+ACh] [bp-6Ch]@451
  char *v394; // [sp+B0h] [bp-68h]@434
  char v395; // [sp+B4h] [bp-64h]@435
  char **v396; // [sp+B8h] [bp-60h]@421
  char **v397; // [sp+BCh] [bp-5Ch]@421
  char **v398; // [sp+C0h] [bp-58h]@421
  char *v399; // [sp+C4h] [bp-54h]@404
  char v400; // [sp+C8h] [bp-50h]@405
  char **v401; // [sp+CCh] [bp-4Ch]@391
  char **v402; // [sp+D0h] [bp-48h]@391
  char **v403; // [sp+D4h] [bp-44h]@391
  char *v404; // [sp+D8h] [bp-40h]@374
  char v405; // [sp+DCh] [bp-3Ch]@375
  char *v406; // [sp+E0h] [bp-38h]@357
  char v407; // [sp+E4h] [bp-34h]@358
  char **v408; // [sp+E8h] [bp-30h]@10
  char **v409; // [sp+ECh] [bp-2Ch]@10
  char **v410; // [sp+F0h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v386 = 0;
    v387 = 0;
    v388 = 0;
    v2 = 0x14u % dword_27DB5B8;
    v3 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
    if ( !v3 )
      goto LABEL_22;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 20;
      if ( v5 == 20 )
        v6 = *(_DWORD *)(v4 + 4) == 20;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DB5B8 == v2 )
          continue;
      }
    }
    v14 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v14 = v3 == 0;
    if ( v14 )
LABEL_22:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 20;
      v15[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DB5B4,
             v2,
             0x14u,
             (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v384, (int *)(v3 + 8), 1);
    v16 = v387;
    if ( v387 == v388 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v386,
        (int)&v384);
      v17 = v384;
    else
      *v387 = v384;
      v17 = (char *)&unk_28898CC;
      v384 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v385;
      v387 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v316 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v317 = __ldrex(v316);
        while ( __strex(v317 - 1, v316) );
      else
        v317 = (*v316)--;
      if ( v317 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v18);
    v19 = 0x15u % dword_27DB5B8;
    v20 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 21;
      if ( v22 == 21 )
        v23 = *(_DWORD *)(v21 + 4) == 21;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DB5B8 == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_39:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 21;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DB5B4,
              v19,
              0x15u,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v382, (int *)(v20 + 8), 1);
    v27 = v387;
        (int)&v382);
      v28 = v382;
      *v387 = v382;
      v28 = (char *)&unk_28898CC;
      v382 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v383;
      v387 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v318 = (unsigned int *)(v28 - 4);
          v319 = __ldrex(v318);
        while ( __strex(v319 - 1, v318) );
        v319 = (*v318)--;
      if ( v319 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v29);
    v30 = 0x1Au % dword_27DB5B8;
    v31 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
    if ( !v31 )
      goto LABEL_56;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 26;
      if ( v33 == 26 )
        v34 = *(_DWORD *)(v32 + 4) == 26;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DB5B8 == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_56:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 26;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              0x1Au,
              (int)v37);
    AutoPlaceItem::AutoPlaceItem((int *)&v380, (int *)(v31 + 8), 0);
    v38 = v387;
        (int)&v380);
      v39 = v380;
      *v387 = v380;
      v39 = (char *)&unk_28898CC;
      v380 = (char *)&unk_28898CC;
      *((_BYTE *)v38 + 4) = v381;
      v387 = v38 + 2;
    v40 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v320 = (unsigned int *)(v39 - 4);
          v321 = __ldrex(v320);
        while ( __strex(v321 - 1, v320) );
        v321 = (*v320)--;
      if ( v321 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v40);
    v41 = 0x18u % dword_27DB5B8;
    v42 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
    if ( !v42 )
      goto LABEL_73;
    v43 = *(_DWORD *)v42;
    v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v45 = v44 == 24;
      if ( v44 == 24 )
        v45 = *(_DWORD *)(v43 + 4) == 24;
      if ( v45 )
      v46 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v44 = *(_DWORD *)(v46 + 12);
        v42 = v43;
        v43 = *(_DWORD *)v43;
        if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DB5B8 == v41 )
    v47 = v42 == 0;
    if ( v42 )
      v42 = *(_DWORD *)v42;
      v47 = v42 == 0;
    if ( v47 )
LABEL_73:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 24;
      v48[2] = &unk_28898CC;
      v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v41,
              0x18u,
              (int)v48);
    v49 = (unsigned __int64 *)((char *)v1 + 600);
    v50 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v49,
            (int **)(v42 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v50, (unsigned __int64 *)&v386);
    v377 = 0;
    v378 = 0;
    v379 = 0;
    v51 = 0x14u % dword_27DB5B8;
    v52 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
    if ( !v52 )
      goto LABEL_86;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 20;
      if ( v54 == 20 )
        v55 = *(_DWORD *)(v53 + 4) == 20;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DB5B8 == v51 )
    v57 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v57 = v52 == 0;
    if ( v57 )
LABEL_86:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 20;
      v58[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              0x14u,
              (int)v58);
    AutoPlaceItem::AutoPlaceItem((int *)&v375, (int *)(v52 + 8), 1);
    v59 = v378;
    if ( v378 == v379 )
        (unsigned __int64 *)&v377,
        (int)&v375);
      v60 = v375;
      *v378 = v375;
      v60 = (char *)&unk_28898CC;
      v375 = (char *)&unk_28898CC;
      *((_BYTE *)v59 + 4) = v376;
      v378 = v59 + 2;
    v61 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v322 = (unsigned int *)(v60 - 4);
          v323 = __ldrex(v322);
        while ( __strex(v323 - 1, v322) );
        v323 = (*v322)--;
      if ( v323 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v61);
    v62 = 0x15u % dword_27DB5B8;
    v63 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
    if ( !v63 )
      goto LABEL_103;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 21;
      if ( v65 == 21 )
        v66 = *(_DWORD *)(v64 + 4) == 21;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DB5B8 == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_103:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 21;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    AutoPlaceItem::AutoPlaceItem((int *)&v373, (int *)(v63 + 8), 1);
    v70 = v378;
        (int)&v373);
      v71 = v373;
      *v378 = v373;
      v71 = (char *)&unk_28898CC;
      v373 = (char *)&unk_28898CC;
      *((_BYTE *)v70 + 4) = v374;
      v378 = v70 + 2;
    v72 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v324 = (unsigned int *)(v71 - 4);
          v325 = __ldrex(v324);
        while ( __strex(v325 - 1, v324) );
        v325 = (*v324)--;
      if ( v325 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v72);
    v73 = 0x18u % dword_27DB5B8;
    v74 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
    if ( !v74 )
      goto LABEL_120;
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      v77 = v76 == 24;
      if ( v76 == 24 )
        v77 = *(_DWORD *)(v75 + 4) == 24;
      if ( v77 )
      v78 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v76 = *(_DWORD *)(v78 + 12);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DB5B8 == v73 )
    v79 = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)v74;
      v79 = v74 == 0;
    if ( v79 )
LABEL_120:
      v80 = operator new(0x10u);
      *v80 = 0;
      v80[1] = 24;
      v80[2] = &unk_28898CC;
      v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v73,
              (int)v80);
    AutoPlaceItem::AutoPlaceItem((int *)&v371, (int *)(v74 + 8), 0);
    v81 = v378;
        (int)&v371);
      v82 = v371;
      *v378 = v371;
      v82 = (char *)&unk_28898CC;
      v371 = (char *)&unk_28898CC;
      *((_BYTE *)v81 + 4) = v372;
      v378 = v81 + 2;
    v83 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v326 = (unsigned int *)(v82 - 4);
          v327 = __ldrex(v326);
        while ( __strex(v327 - 1, v326) );
        v327 = (*v326)--;
      if ( v327 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v83);
    v84 = 0x1Au % dword_27DB5B8;
    v85 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
    if ( !v85 )
      goto LABEL_137;
    v86 = *(_DWORD *)v85;
    v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
      v88 = v87 == 26;
      if ( v87 == 26 )
        v88 = *(_DWORD *)(v86 + 4) == 26;
      if ( v88 )
      v89 = *(_DWORD *)v86;
      if ( *(_DWORD *)v86 )
        v87 = *(_DWORD *)(v89 + 12);
        v85 = v86;
        v86 = *(_DWORD *)v86;
        if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DB5B8 == v84 )
    v90 = v85 == 0;
    if ( v85 )
      v85 = *(_DWORD *)v85;
      v90 = v85 == 0;
    if ( v90 )
LABEL_137:
      v91 = operator new(0x10u);
      *v91 = 0;
      v91[1] = 26;
      v91[2] = &unk_28898CC;
      v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v84,
              (int)v91);
    v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v85 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v92, (unsigned __int64 *)&v377);
    v368 = 0;
    v369 = 0;
    v370 = 0;
    v93 = 0x18u % dword_27DB5B8;
    v94 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
    if ( !v94 )
      goto LABEL_150;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 24;
      if ( v96 == 24 )
        v97 = *(_DWORD *)(v95 + 4) == 24;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DB5B8 == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_150:
      v100 = operator new(0x10u);
      *v100 = 0;
      v100[1] = 24;
      v100[2] = &unk_28898CC;
      v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v93,
              (int)v100);
    AutoPlaceItem::AutoPlaceItem((int *)&v366, (int *)(v94 + 8), 0);
    v101 = v369;
    if ( v369 == v370 )
        (unsigned __int64 *)&v368,
        (int)&v366);
      v102 = v366;
      *v369 = v366;
      v102 = (char *)&unk_28898CC;
      v366 = (char *)&unk_28898CC;
      *((_BYTE *)v101 + 4) = v367;
      v369 = v101 + 2;
    v103 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v328 = (unsigned int *)(v102 - 4);
          v329 = __ldrex(v328);
        while ( __strex(v329 - 1, v328) );
        v329 = (*v328)--;
      if ( v329 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v103);
    v104 = 0x1Au % dword_27DB5B8;
    v105 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
    if ( !v105 )
      goto LABEL_167;
    v106 = *(_DWORD *)v105;
    v107 = *(_DWORD *)(*(_DWORD *)v105 + 12);
      v108 = v107 == 26;
      if ( v107 == 26 )
        v108 = *(_DWORD *)(v106 + 4) == 26;
      if ( v108 )
      v109 = *(_DWORD *)v106;
      if ( *(_DWORD *)v106 )
        v107 = *(_DWORD *)(v109 + 12);
        v105 = v106;
        v106 = *(_DWORD *)v106;
        if ( *(_DWORD *)(v109 + 12) % (unsigned int)dword_27DB5B8 == v104 )
    v110 = v105 == 0;
    if ( v105 )
      v105 = *(_DWORD *)v105;
      v110 = v105 == 0;
    if ( v110 )
LABEL_167:
      v111 = operator new(0x10u);
      *v111 = 0;
      v111[1] = 26;
      v111[2] = &unk_28898CC;
      v105 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DB5B4,
               v104,
               0x1Au,
               (int)v111);
    AutoPlaceItem::AutoPlaceItem((int *)&v364, (int *)(v105 + 8), 0);
    v112 = v369;
        (int)&v364);
      v113 = v364;
      *v369 = v364;
      v113 = (char *)&unk_28898CC;
      v364 = (char *)&unk_28898CC;
      *((_BYTE *)v112 + 4) = v365;
      v369 = v112 + 2;
    v114 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v330 = (unsigned int *)(v113 - 4);
          v331 = __ldrex(v330);
        while ( __strex(v331 - 1, v330) );
        v331 = (*v330)--;
      if ( v331 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v114);
    v115 = 0x16u % dword_27DB5B8;
    v116 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
    if ( !v116 )
      goto LABEL_184;
    v117 = *(_DWORD *)v116;
    v118 = *(_DWORD *)(*(_DWORD *)v116 + 12);
      v119 = v118 == 22;
      if ( v118 == 22 )
        v119 = *(_DWORD *)(v117 + 4) == 22;
      if ( v119 )
      v120 = *(_DWORD *)v117;
      if ( *(_DWORD *)v117 )
        v118 = *(_DWORD *)(v120 + 12);
        v116 = v117;
        v117 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v120 + 12) % (unsigned int)dword_27DB5B8 == v115 )
    v121 = v116 == 0;
    if ( v116 )
      v116 = *(_DWORD *)v116;
      v121 = v116 == 0;
    if ( v121 )
LABEL_184:
      v122 = operator new(0x10u);
      *v122 = 0;
      v122[1] = 22;
      v122[2] = &unk_28898CC;
      v116 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v115,
               0x16u,
               (int)v122);
    v123 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v49,
             (int **)(v116 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v123, (unsigned __int64 *)&v368);
    v361 = 0;
    v362 = 0;
    v363 = 0;
    v124 = 0x1Au % dword_27DB5B8;
    v125 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
    if ( !v125 )
      goto LABEL_197;
    v126 = *(_DWORD *)v125;
    v127 = *(_DWORD *)(*(_DWORD *)v125 + 12);
      v128 = v127 == 26;
      if ( v127 == 26 )
        v128 = *(_DWORD *)(v126 + 4) == 26;
      if ( v128 )
      v129 = *(_DWORD *)v126;
      if ( *(_DWORD *)v126 )
        v127 = *(_DWORD *)(v129 + 12);
        v125 = v126;
        v126 = *(_DWORD *)v126;
        if ( *(_DWORD *)(v129 + 12) % (unsigned int)dword_27DB5B8 == v124 )
    v130 = v125 == 0;
    if ( v125 )
      v125 = *(_DWORD *)v125;
      v130 = v125 == 0;
    if ( v130 )
LABEL_197:
      v131 = operator new(0x10u);
      *v131 = 0;
      v131[1] = 26;
      v131[2] = &unk_28898CC;
      v125 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v124,
               (int)v131);
    AutoPlaceItem::AutoPlaceItem((int *)&v359, (int *)(v125 + 8), 0);
    v132 = v362;
    if ( v362 == v363 )
        (unsigned __int64 *)&v361,
        (int)&v359);
      v133 = v359;
      *v362 = v359;
      v133 = (char *)&unk_28898CC;
      v359 = (char *)&unk_28898CC;
      *((_BYTE *)v132 + 4) = v360;
      v362 = v132 + 2;
    v134 = v133 - 12;
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v332 = (unsigned int *)(v133 - 4);
          v333 = __ldrex(v332);
        while ( __strex(v333 - 1, v332) );
        v333 = (*v332)--;
      if ( v333 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v134);
    v135 = 0x18u % dword_27DB5B8;
    v136 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
    if ( !v136 )
      goto LABEL_214;
    v137 = *(_DWORD *)v136;
    v138 = *(_DWORD *)(*(_DWORD *)v136 + 12);
      v139 = v138 == 24;
      if ( v138 == 24 )
        v139 = *(_DWORD *)(v137 + 4) == 24;
      if ( v139 )
      v140 = *(_DWORD *)v137;
      if ( *(_DWORD *)v137 )
        v138 = *(_DWORD *)(v140 + 12);
        v136 = v137;
        v137 = *(_DWORD *)v137;
        if ( *(_DWORD *)(v140 + 12) % (unsigned int)dword_27DB5B8 == v135 )
    v141 = v136 == 0;
    if ( v136 )
      v136 = *(_DWORD *)v136;
      v141 = v136 == 0;
    if ( v141 )
LABEL_214:
      v142 = operator new(0x10u);
      *v142 = 0;
      v142[1] = 24;
      v142[2] = &unk_28898CC;
      v136 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v135,
               0x18u,
               (int)v142);
    AutoPlaceItem::AutoPlaceItem((int *)&v357, (int *)(v136 + 8), 0);
    v143 = v362;
        (int)&v357);
      v144 = v357;
      *v362 = v357;
      v144 = (char *)&unk_28898CC;
      v357 = (char *)&unk_28898CC;
      *((_BYTE *)v143 + 4) = v358;
      v362 = v143 + 2;
    v145 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v334 = (unsigned int *)(v144 - 4);
          v335 = __ldrex(v334);
        while ( __strex(v335 - 1, v334) );
        v335 = (*v334)--;
      if ( v335 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v145);
    v146 = 0x14u % dword_27DB5B8;
    v147 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
    if ( !v147 )
      goto LABEL_231;
    v148 = *(_DWORD *)v147;
    v149 = *(_DWORD *)(*(_DWORD *)v147 + 12);
      v150 = v149 == 20;
      if ( v149 == 20 )
        v150 = *(_DWORD *)(v148 + 4) == 20;
      if ( v150 )
      v151 = *(_DWORD *)v148;
      if ( *(_DWORD *)v148 )
        v149 = *(_DWORD *)(v151 + 12);
        v147 = v148;
        v148 = *(_DWORD *)v148;
        if ( *(_DWORD *)(v151 + 12) % (unsigned int)dword_27DB5B8 == v146 )
    v152 = v147 == 0;
    if ( v147 )
      v147 = *(_DWORD *)v147;
      v152 = v147 == 0;
    if ( v152 )
LABEL_231:
      v153 = operator new(0x10u);
      *v153 = 0;
      v153[1] = 20;
      v153[2] = &unk_28898CC;
      v147 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v146,
               0x14u,
               (int)v153);
    v154 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v147 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v154, (unsigned __int64 *)&v361);
    v354 = 0;
    v355 = 0;
    v356 = 0;
    v155 = 0x1Au % dword_27DB5B8;
    v156 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
    if ( !v156 )
      goto LABEL_244;
    v157 = *(_DWORD *)v156;
    v158 = *(_DWORD *)(*(_DWORD *)v156 + 12);
      v159 = v158 == 26;
      if ( v158 == 26 )
        v159 = *(_DWORD *)(v157 + 4) == 26;
      if ( v159 )
      v160 = *(_DWORD *)v157;
      if ( *(_DWORD *)v157 )
        v158 = *(_DWORD *)(v160 + 12);
        v156 = v157;
        v157 = *(_DWORD *)v157;
        if ( *(_DWORD *)(v160 + 12) % (unsigned int)dword_27DB5B8 == v155 )
    v161 = v156 == 0;
    if ( v156 )
      v156 = *(_DWORD *)v156;
      v161 = v156 == 0;
    if ( v161 )
LABEL_244:
      v162 = operator new(0x10u);
      *v162 = 0;
      v162[1] = 26;
      v162[2] = &unk_28898CC;
      v156 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v155,
               (int)v162);
    AutoPlaceItem::AutoPlaceItem((int *)&v352, (int *)(v156 + 8), 0);
    v163 = v355;
    if ( v355 == v356 )
        (unsigned __int64 *)&v354,
        (int)&v352);
      v164 = v352;
      *v355 = v352;
      v164 = (char *)&unk_28898CC;
      v352 = (char *)&unk_28898CC;
      *((_BYTE *)v163 + 4) = v353;
      v355 = v163 + 2;
    v165 = v164 - 12;
    if ( (int *)(v164 - 12) != &dword_28898C0 )
      v336 = (unsigned int *)(v164 - 4);
          v337 = __ldrex(v336);
        while ( __strex(v337 - 1, v336) );
        v337 = (*v336)--;
      if ( v337 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v165);
    v166 = 0x18u % dword_27DB5B8;
    v167 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
    if ( !v167 )
      goto LABEL_261;
    v168 = *(_DWORD *)v167;
    v169 = *(_DWORD *)(*(_DWORD *)v167 + 12);
      v170 = v169 == 24;
      if ( v169 == 24 )
        v170 = *(_DWORD *)(v168 + 4) == 24;
      if ( v170 )
      v171 = *(_DWORD *)v168;
      if ( *(_DWORD *)v168 )
        v169 = *(_DWORD *)(v171 + 12);
        v167 = v168;
        v168 = *(_DWORD *)v168;
        if ( *(_DWORD *)(v171 + 12) % (unsigned int)dword_27DB5B8 == v166 )
    v172 = v167 == 0;
    if ( v167 )
      v167 = *(_DWORD *)v167;
      v172 = v167 == 0;
    if ( v172 )
LABEL_261:
      v173 = operator new(0x10u);
      *v173 = 0;
      v173[1] = 24;
      v173[2] = &unk_28898CC;
      v167 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v166,
               (int)v173);
    AutoPlaceItem::AutoPlaceItem((int *)&v350, (int *)(v167 + 8), 0);
    v174 = v355;
        (int)&v350);
      v175 = v350;
      *v355 = v350;
      v175 = (char *)&unk_28898CC;
      v350 = (char *)&unk_28898CC;
      *((_BYTE *)v174 + 4) = v351;
      v355 = v174 + 2;
    v176 = v175 - 12;
    if ( (int *)(v175 - 12) != &dword_28898C0 )
      v338 = (unsigned int *)(v175 - 4);
          v339 = __ldrex(v338);
        while ( __strex(v339 - 1, v338) );
        v339 = (*v338)--;
      if ( v339 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v176);
    v177 = 0x15u % dword_27DB5B8;
    v178 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
    if ( !v178 )
      goto LABEL_278;
    v179 = *(_DWORD *)v178;
    v180 = *(_DWORD *)(*(_DWORD *)v178 + 12);
      v181 = v180 == 21;
      if ( v180 == 21 )
        v181 = *(_DWORD *)(v179 + 4) == 21;
      if ( v181 )
      v182 = *(_DWORD *)v179;
      if ( *(_DWORD *)v179 )
        v180 = *(_DWORD *)(v182 + 12);
        v178 = v179;
        v179 = *(_DWORD *)v179;
        if ( *(_DWORD *)(v182 + 12) % (unsigned int)dword_27DB5B8 == v177 )
    v183 = v178 == 0;
    if ( v178 )
      v178 = *(_DWORD *)v178;
      v183 = v178 == 0;
    if ( v183 )
LABEL_278:
      v184 = operator new(0x10u);
      *v184 = 0;
      v184[1] = 21;
      v184[2] = &unk_28898CC;
      v178 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v177,
               0x15u,
               (int)v184);
    v185 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v178 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v185, (unsigned __int64 *)&v354);
    v187 = v355;
    v186 = v354;
    if ( v354 != v355 )
      do
        v190 = (int *)(*v186 - 12);
        if ( v190 != &dword_28898C0 )
        {
          v188 = (unsigned int *)(*v186 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v189 = __ldrex(v188);
            while ( __strex(v189 - 1, v188) );
          }
          else
            v189 = (*v188)--;
          if ( v189 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v190);
        }
        v186 += 2;
      while ( v186 != v187 );
      v186 = v354;
    if ( v186 )
      operator delete(v186);
    v192 = v362;
    v191 = v361;
    if ( v361 != v362 )
        v195 = (int *)(*v191 - 12);
        if ( v195 != &dword_28898C0 )
          v193 = (unsigned int *)(*v191 - 4);
              v194 = __ldrex(v193);
            while ( __strex(v194 - 1, v193) );
            v194 = (*v193)--;
          if ( v194 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v195);
        v191 += 2;
      while ( v191 != v192 );
      v191 = v361;
    if ( v191 )
      operator delete(v191);
    v197 = v369;
    v196 = v368;
    if ( v368 != v369 )
        v200 = (int *)(*v196 - 12);
        if ( v200 != &dword_28898C0 )
          v198 = (unsigned int *)(*v196 - 4);
              v199 = __ldrex(v198);
            while ( __strex(v199 - 1, v198) );
            v199 = (*v198)--;
          if ( v199 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v200);
        v196 += 2;
      while ( v196 != v197 );
      v196 = v368;
    if ( v196 )
      operator delete(v196);
    v202 = v378;
    v201 = v377;
    if ( v377 != v378 )
        v205 = (int *)(*v201 - 12);
        if ( v205 != &dword_28898C0 )
          v203 = (unsigned int *)(*v201 - 4);
              v204 = __ldrex(v203);
            while ( __strex(v204 - 1, v203) );
            v204 = (*v203)--;
          if ( v204 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v205);
        v201 += 2;
      while ( v201 != v202 );
      v201 = v377;
    if ( v201 )
      operator delete(v201);
    v207 = v387;
    v206 = v386;
    if ( v386 != v387 )
        v210 = (int *)(*v206 - 12);
        if ( v210 != &dword_28898C0 )
          v208 = (unsigned int *)(*v206 - 4);
              v209 = __ldrex(v208);
            while ( __strex(v209 - 1, v208) );
            v209 = (*v208)--;
          if ( v209 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v210);
        v206 += 2;
      while ( v206 != v207 );
      v206 = v386;
  }
  else
    v408 = 0;
    v409 = 0;
    v410 = 0;
    v8 = 0x14u % dword_27DB5B8;
    v9 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
    if ( !v9 )
      goto LABEL_356;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 20;
      if ( v11 == 20 )
        v12 = *(_DWORD *)(v10 + 4) == 20;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DB5B8 == v8 )
    v211 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v211 = v9 == 0;
    if ( v211 )
LABEL_356:
      v212 = operator new(0x10u);
      *v212 = 0;
      v212[1] = 20;
      v212[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v8,
             (int)v212);
    AutoPlaceItem::AutoPlaceItem((int *)&v406, (int *)(v9 + 8), 1);
    v213 = v409;
    if ( v409 == v410 )
        (unsigned __int64 *)&v408,
        (int)&v406);
      v214 = v406;
      *v409 = v406;
      v214 = (char *)&unk_28898CC;
      v406 = (char *)&unk_28898CC;
      *((_BYTE *)v213 + 4) = v407;
      v409 = v213 + 2;
    v215 = v214 - 12;
    if ( (int *)(v214 - 12) != &dword_28898C0 )
      v340 = (unsigned int *)(v214 - 4);
          v341 = __ldrex(v340);
        while ( __strex(v341 - 1, v340) );
        v341 = (*v340)--;
      if ( v341 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v215);
    v216 = 0x15u % dword_27DB5B8;
    v217 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
    if ( !v217 )
      goto LABEL_373;
    v218 = *(_DWORD *)v217;
    v219 = *(_DWORD *)(*(_DWORD *)v217 + 12);
      v220 = v219 == 21;
      if ( v219 == 21 )
        v220 = *(_DWORD *)(v218 + 4) == 21;
      if ( v220 )
      v221 = *(_DWORD *)v218;
      if ( *(_DWORD *)v218 )
        v219 = *(_DWORD *)(v221 + 12);
        v217 = v218;
        v218 = *(_DWORD *)v218;
        if ( *(_DWORD *)(v221 + 12) % (unsigned int)dword_27DB5B8 == v216 )
    v222 = v217 == 0;
    if ( v217 )
      v217 = *(_DWORD *)v217;
      v222 = v217 == 0;
    if ( v222 )
LABEL_373:
      v223 = operator new(0x10u);
      *v223 = 0;
      v223[1] = 21;
      v223[2] = &unk_28898CC;
      v217 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v216,
               (int)v223);
    AutoPlaceItem::AutoPlaceItem((int *)&v404, (int *)(v217 + 8), 1);
    v224 = v409;
        (int)&v404);
      v225 = v404;
      *v409 = v404;
      v225 = (char *)&unk_28898CC;
      v404 = (char *)&unk_28898CC;
      *((_BYTE *)v224 + 4) = v405;
      v409 = v224 + 2;
    v226 = v225 - 12;
    if ( (int *)(v225 - 12) != &dword_28898C0 )
      v342 = (unsigned int *)(v225 - 4);
          v343 = __ldrex(v342);
        while ( __strex(v343 - 1, v342) );
        v343 = (*v342)--;
      if ( v343 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v226);
    v227 = 9u % dword_27DB5B8;
    v228 = *(_DWORD *)(dword_27DB5B4 + 4 * (9u % dword_27DB5B8));
    if ( !v228 )
      goto LABEL_390;
    v229 = *(_DWORD *)v228;
    v230 = *(_DWORD *)(*(_DWORD *)v228 + 12);
      v231 = v230 == 9;
      if ( v230 == 9 )
        v231 = *(_DWORD *)(v229 + 4) == 9;
      if ( v231 )
      v232 = *(_DWORD *)v229;
      if ( *(_DWORD *)v229 )
        v230 = *(_DWORD *)(v232 + 12);
        v228 = v229;
        v229 = *(_DWORD *)v229;
        if ( *(_DWORD *)(v232 + 12) % (unsigned int)dword_27DB5B8 == v227 )
    v233 = v228 == 0;
    if ( v228 )
      v228 = *(_DWORD *)v228;
      v233 = v228 == 0;
    if ( v233 )
LABEL_390:
      v234 = operator new(0x10u);
      *v234 = 0;
      v234[1] = 9;
      v234[2] = &unk_28898CC;
      v228 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v227,
               9u,
               (int)v234);
    v235 = (unsigned __int64 *)((char *)v1 + 600);
    v236 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v235,
             (int **)(v228 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v236, (unsigned __int64 *)&v408);
    v401 = 0;
    v402 = 0;
    v403 = 0;
    v237 = 9u % dword_27DB5B8;
    v238 = *(_DWORD *)(dword_27DB5B4 + 4 * (9u % dword_27DB5B8));
    if ( !v238 )
      goto LABEL_403;
    v239 = *(_DWORD *)v238;
    v240 = *(_DWORD *)(*(_DWORD *)v238 + 12);
      v241 = v240 == 9;
      if ( v240 == 9 )
        v241 = *(_DWORD *)(v239 + 4) == 9;
      if ( v241 )
      v242 = *(_DWORD *)v239;
      if ( *(_DWORD *)v239 )
        v240 = *(_DWORD *)(v242 + 12);
        v238 = v239;
        v239 = *(_DWORD *)v239;
        if ( *(_DWORD *)(v242 + 12) % (unsigned int)dword_27DB5B8 == v237 )
    v243 = v238 == 0;
    if ( v238 )
      v238 = *(_DWORD *)v238;
      v243 = v238 == 0;
    if ( v243 )
LABEL_403:
      v244 = operator new(0x10u);
      *v244 = 0;
      v244[1] = 9;
      v244[2] = &unk_28898CC;
      v238 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v237,
               (int)v244);
    AutoPlaceItem::AutoPlaceItem((int *)&v399, (int *)(v238 + 8), 0);
    v245 = v402;
    if ( v402 == v403 )
        (unsigned __int64 *)&v401,
        (int)&v399);
      v246 = v399;
      *v402 = v399;
      v246 = (char *)&unk_28898CC;
      v399 = (char *)&unk_28898CC;
      *((_BYTE *)v245 + 4) = v400;
      v402 = v245 + 2;
    v247 = v246 - 12;
    if ( (int *)(v246 - 12) != &dword_28898C0 )
      v344 = (unsigned int *)(v246 - 4);
          v345 = __ldrex(v344);
        while ( __strex(v345 - 1, v344) );
        v345 = (*v344)--;
      if ( v345 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v247);
    v248 = 0x16u % dword_27DB5B8;
    v249 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
    if ( !v249 )
      goto LABEL_420;
    v250 = *(_DWORD *)v249;
    v251 = *(_DWORD *)(*(_DWORD *)v249 + 12);
      v252 = v251 == 22;
      if ( v251 == 22 )
        v252 = *(_DWORD *)(v250 + 4) == 22;
      if ( v252 )
      v253 = *(_DWORD *)v250;
      if ( *(_DWORD *)v250 )
        v251 = *(_DWORD *)(v253 + 12);
        v249 = v250;
        v250 = *(_DWORD *)v250;
        if ( *(_DWORD *)(v253 + 12) % (unsigned int)dword_27DB5B8 == v248 )
    v254 = v249 == 0;
    if ( v249 )
      v249 = *(_DWORD *)v249;
      v254 = v249 == 0;
    if ( v254 )
LABEL_420:
      v255 = operator new(0x10u);
      *v255 = 0;
      v255[1] = 22;
      v255[2] = &unk_28898CC;
      v249 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v248,
               (int)v255);
    v256 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v249 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v256, (unsigned __int64 *)&v401);
    v396 = 0;
    v397 = 0;
    v398 = 0;
    v257 = 9u % dword_27DB5B8;
    v258 = *(_DWORD *)(dword_27DB5B4 + 4 * (9u % dword_27DB5B8));
    if ( !v258 )
      goto LABEL_433;
    v259 = *(_DWORD *)v258;
    v260 = *(_DWORD *)(*(_DWORD *)v258 + 12);
      v261 = v260 == 9;
      if ( v260 == 9 )
        v261 = *(_DWORD *)(v259 + 4) == 9;
      if ( v261 )
      v262 = *(_DWORD *)v259;
      if ( *(_DWORD *)v259 )
        v260 = *(_DWORD *)(v262 + 12);
        v258 = v259;
        v259 = *(_DWORD *)v259;
        if ( *(_DWORD *)(v262 + 12) % (unsigned int)dword_27DB5B8 == v257 )
    v263 = v258 == 0;
    if ( v258 )
      v258 = *(_DWORD *)v258;
      v263 = v258 == 0;
    if ( v263 )
LABEL_433:
      v264 = operator new(0x10u);
      *v264 = 0;
      v264[1] = 9;
      v264[2] = &unk_28898CC;
      v258 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v257,
               (int)v264);
    AutoPlaceItem::AutoPlaceItem((int *)&v394, (int *)(v258 + 8), 0);
    v265 = v397;
    if ( v397 == v398 )
        (unsigned __int64 *)&v396,
        (int)&v394);
      v266 = v394;
      *v397 = v394;
      v266 = (char *)&unk_28898CC;
      v394 = (char *)&unk_28898CC;
      *((_BYTE *)v265 + 4) = v395;
      v397 = v265 + 2;
    v267 = v266 - 12;
    if ( (int *)(v266 - 12) != &dword_28898C0 )
      v346 = (unsigned int *)(v266 - 4);
          v347 = __ldrex(v346);
        while ( __strex(v347 - 1, v346) );
        v347 = (*v346)--;
      if ( v347 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v267);
    v268 = 0x14u % dword_27DB5B8;
    v269 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
    if ( !v269 )
      goto LABEL_450;
    v270 = *(_DWORD *)v269;
    v271 = *(_DWORD *)(*(_DWORD *)v269 + 12);
      v272 = v271 == 20;
      if ( v271 == 20 )
        v272 = *(_DWORD *)(v270 + 4) == 20;
      if ( v272 )
      v273 = *(_DWORD *)v270;
      if ( *(_DWORD *)v270 )
        v271 = *(_DWORD *)(v273 + 12);
        v269 = v270;
        v270 = *(_DWORD *)v270;
        if ( *(_DWORD *)(v273 + 12) % (unsigned int)dword_27DB5B8 == v268 )
    v274 = v269 == 0;
    if ( v269 )
      v269 = *(_DWORD *)v269;
      v274 = v269 == 0;
    if ( v274 )
LABEL_450:
      v275 = operator new(0x10u);
      *v275 = 0;
      v275[1] = 20;
      v275[2] = &unk_28898CC;
      v269 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v268,
               (int)v275);
    v276 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v269 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v276, (unsigned __int64 *)&v396);
    v391 = 0;
    v392 = 0;
    v393 = 0;
    v277 = 9u % dword_27DB5B8;
    v278 = *(_DWORD *)(dword_27DB5B4 + 4 * (9u % dword_27DB5B8));
    if ( !v278 )
      goto LABEL_463;
    v279 = *(_DWORD *)v278;
    v280 = *(_DWORD *)(*(_DWORD *)v278 + 12);
      v281 = v280 == 9;
      if ( v280 == 9 )
        v281 = *(_DWORD *)(v279 + 4) == 9;
      if ( v281 )
      v282 = *(_DWORD *)v279;
      if ( *(_DWORD *)v279 )
        v280 = *(_DWORD *)(v282 + 12);
        v278 = v279;
        v279 = *(_DWORD *)v279;
        if ( *(_DWORD *)(v282 + 12) % (unsigned int)dword_27DB5B8 == v277 )
    v283 = v278 == 0;
    if ( v278 )
      v278 = *(_DWORD *)v278;
      v283 = v278 == 0;
    if ( v283 )
LABEL_463:
      v284 = operator new(0x10u);
      *v284 = 0;
      v284[1] = 9;
      v284[2] = &unk_28898CC;
      v278 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v277,
               (int)v284);
    AutoPlaceItem::AutoPlaceItem((int *)&v389, (int *)(v278 + 8), 0);
    v285 = v392;
    if ( v392 == v393 )
        (unsigned __int64 *)&v391,
        (int)&v389);
      v286 = v389;
      *v392 = v389;
      v286 = (char *)&unk_28898CC;
      v389 = (char *)&unk_28898CC;
      *((_BYTE *)v285 + 4) = v390;
      v392 = v285 + 2;
    v287 = v286 - 12;
    if ( (int *)(v286 - 12) != &dword_28898C0 )
      v348 = (unsigned int *)(v286 - 4);
          v349 = __ldrex(v348);
        while ( __strex(v349 - 1, v348) );
        v349 = (*v348)--;
      if ( v349 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v287);
    v288 = 0x15u % dword_27DB5B8;
    v289 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
    if ( !v289 )
      goto LABEL_480;
    v290 = *(_DWORD *)v289;
    v291 = *(_DWORD *)(*(_DWORD *)v289 + 12);
      v292 = v291 == 21;
      if ( v291 == 21 )
        v292 = *(_DWORD *)(v290 + 4) == 21;
      if ( v292 )
      v293 = *(_DWORD *)v290;
      if ( *(_DWORD *)v290 )
        v291 = *(_DWORD *)(v293 + 12);
        v289 = v290;
        v290 = *(_DWORD *)v290;
        if ( *(_DWORD *)(v293 + 12) % (unsigned int)dword_27DB5B8 == v288 )
    v294 = v289 == 0;
    if ( v289 )
      v289 = *(_DWORD *)v289;
      v294 = v289 == 0;
    if ( v294 )
LABEL_480:
      v295 = operator new(0x10u);
      *v295 = 0;
      v295[1] = 21;
      v295[2] = &unk_28898CC;
      v289 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v288,
               (int)v295);
    v296 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v289 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v296, (unsigned __int64 *)&v391);
    v298 = v392;
    v297 = v391;
    if ( v391 != v392 )
        v301 = (int *)(*v297 - 12);
        if ( v301 != &dword_28898C0 )
          v299 = (unsigned int *)(*v297 - 4);
              v300 = __ldrex(v299);
            while ( __strex(v300 - 1, v299) );
            v300 = (*v299)--;
          if ( v300 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v301);
        v297 += 2;
      while ( v297 != v298 );
      v297 = v391;
    if ( v297 )
      operator delete(v297);
    v303 = v397;
    v302 = v396;
    if ( v396 != v397 )
        v306 = (int *)(*v302 - 12);
        if ( v306 != &dword_28898C0 )
          v304 = (unsigned int *)(*v302 - 4);
              v305 = __ldrex(v304);
            while ( __strex(v305 - 1, v304) );
            v305 = (*v304)--;
          if ( v305 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v306);
        v302 += 2;
      while ( v302 != v303 );
      v302 = v396;
    if ( v302 )
      operator delete(v302);
    v308 = v402;
    v307 = v401;
    if ( v401 != v402 )
        v311 = (int *)(*v307 - 12);
        if ( v311 != &dword_28898C0 )
          v309 = (unsigned int *)(*v307 - 4);
              v310 = __ldrex(v309);
            while ( __strex(v310 - 1, v309) );
            v310 = (*v309)--;
          if ( v310 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v311);
        v307 += 2;
      while ( v307 != v308 );
      v307 = v401;
    if ( v307 )
      operator delete(v307);
    v312 = v409;
    v206 = v408;
    if ( v408 != v409 )
        v315 = (int *)(*v206 - 12);
        if ( v315 != &dword_28898C0 )
          v313 = (unsigned int *)(*v206 - 4);
              v314 = __ldrex(v313);
            while ( __strex(v314 - 1, v313) );
            v314 = (*v313)--;
          if ( v314 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v315);
      while ( v206 != v312 );
      v206 = v408;
  if ( v206 )
    operator delete(v206);
}


void __fastcall FurnaceScreenController::_registerCoalesceOrder(FurnaceScreenController *this)
{
  FurnaceScreenController::_registerCoalesceOrder(this);
}


void __fastcall FurnaceScreenController::_registerCoalesceOrder(FurnaceScreenController *this)
{
  FurnaceScreenController *v1; // r8@1
  int v2; // r9@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  int *v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r9@16
  int v12; // r0@16
  int v13; // r5@17
  int v14; // r7@17
  bool v15; // zf@18
  int v16; // r4@21
  bool v17; // zf@24
  _DWORD *v18; // r0@28
  int *v19; // r1@29
  int v20; // r9@32
  int v21; // r0@32
  int v22; // r5@33
  int v23; // r7@33
  bool v24; // zf@34
  int v25; // r4@37
  bool v26; // zf@40
  _DWORD *v27; // r0@44
  int *v28; // r1@45
  int v29; // r9@48
  int v30; // r0@48
  int v31; // r5@49
  int v32; // r7@49
  bool v33; // zf@50
  int v34; // r4@53
  bool v35; // zf@56
  _DWORD *v36; // r0@60
  int *v37; // r1@61
  int v38; // r9@64
  int v39; // r0@64
  int v40; // r5@65
  int v41; // r7@65
  bool v42; // zf@66
  int v43; // r4@69
  bool v44; // zf@72
  _DWORD *v45; // r0@76
  int *v46; // r1@77
  int v47; // r9@80
  int v48; // r0@80
  int v49; // r5@81
  int v50; // r7@81
  bool v51; // zf@82
  int v52; // r4@85
  bool v53; // zf@88
  _DWORD *v54; // r0@92
  unsigned __int64 *v55; // r8@93
  int v56; // r0@93
  int v57; // r9@93
  int v58; // r0@93
  int v59; // r5@94
  int v60; // r7@94
  bool v61; // zf@95
  int v62; // r4@98
  bool v63; // zf@101
  int *v64; // r1@104
  _DWORD *v65; // r0@105
  int v66; // r9@108
  int v67; // r0@108
  int v68; // r5@109
  int v69; // r7@109
  bool v70; // zf@110
  int v71; // r4@113
  bool v72; // zf@116
  _DWORD *v73; // r0@120
  int *v74; // r1@121
  int v75; // r9@124
  int v76; // r0@124
  int v77; // r5@125
  int v78; // r7@125
  bool v79; // zf@126
  int v80; // r4@129
  bool v81; // zf@132
  _DWORD *v82; // r0@136
  int *v83; // r1@137
  int v84; // r9@140
  int v85; // r0@140
  int v86; // r5@141
  int v87; // r7@141
  bool v88; // zf@142
  int v89; // r4@145
  bool v90; // zf@148
  _DWORD *v91; // r0@152
  int *v92; // r1@153
  int v93; // r9@156
  int v94; // r0@156
  int v95; // r5@157
  int v96; // r7@157
  bool v97; // zf@158
  int v98; // r4@161
  bool v99; // zf@164
  _DWORD *v100; // r0@168
  int *v101; // r1@169
  int v102; // r9@172
  int v103; // r0@172
  int v104; // r5@173
  int v105; // r7@173
  bool v106; // zf@174
  int v107; // r4@177
  bool v108; // zf@180
  _DWORD *v109; // r0@184
  int v110; // r0@185
  int v111; // r9@185
  int v112; // r0@185
  int v113; // r5@186
  int v114; // r7@186
  bool v115; // zf@187
  int v116; // r4@190
  bool v117; // zf@193
  int *v118; // r1@196
  _DWORD *v119; // r0@197
  int v120; // r9@200
  int v121; // r0@200
  int v122; // r5@201
  int v123; // r7@201
  bool v124; // zf@202
  int v125; // r4@205
  bool v126; // zf@208
  _DWORD *v127; // r0@212
  int *v128; // r1@213
  int v129; // r9@216
  int v130; // r0@216
  int v131; // r5@217
  int v132; // r7@217
  bool v133; // zf@218
  int v134; // r4@221
  bool v135; // zf@224
  _DWORD *v136; // r0@228
  int *v137; // r1@229
  int v138; // r9@232
  int v139; // r0@232
  int v140; // r5@233
  int v141; // r7@233
  bool v142; // zf@234
  int v143; // r4@237
  bool v144; // zf@240
  _DWORD *v145; // r0@244
  int *v146; // r1@245
  int v147; // r9@248
  int v148; // r0@248
  int v149; // r5@249
  int v150; // r7@249
  bool v151; // zf@250
  int v152; // r4@253
  bool v153; // zf@256
  _DWORD *v154; // r0@260
  int *v155; // r1@261
  int v156; // r9@264
  int v157; // r0@264
  int v158; // r5@265
  int v159; // r7@265
  bool v160; // zf@266
  int v161; // r4@269
  bool v162; // zf@272
  _DWORD *v163; // r0@276
  int v164; // r0@277
  int v165; // r9@277
  int v166; // r0@277
  int v167; // r5@278
  int v168; // r7@278
  bool v169; // zf@279
  int v170; // r4@282
  bool v171; // zf@285
  int *v172; // r1@288
  _DWORD *v173; // r0@289
  int v174; // r9@292
  int v175; // r0@292
  int v176; // r5@293
  int v177; // r7@293
  bool v178; // zf@294
  int v179; // r4@297
  bool v180; // zf@300
  _DWORD *v181; // r0@304
  int *v182; // r1@305
  int v183; // r9@308
  int v184; // r0@308
  int v185; // r5@309
  int v186; // r7@309
  bool v187; // zf@310
  int v188; // r4@313
  bool v189; // zf@316
  _DWORD *v190; // r0@320
  int *v191; // r1@321
  int v192; // r9@324
  int v193; // r0@324
  int v194; // r5@325
  int v195; // r7@325
  bool v196; // zf@326
  int v197; // r4@329
  bool v198; // zf@332
  _DWORD *v199; // r0@336
  int *v200; // r1@337
  int v201; // r9@340
  int v202; // r0@340
  int v203; // r5@341
  int v204; // r7@341
  bool v205; // zf@342
  int v206; // r4@345
  bool v207; // zf@348
  _DWORD *v208; // r0@352
  int *v209; // r1@353
  int v210; // r9@356
  int v211; // r0@356
  int v212; // r5@357
  int v213; // r7@357
  bool v214; // zf@358
  int v215; // r4@361
  bool v216; // zf@364
  _DWORD *v217; // r0@368
  int v218; // r0@369
  int v219; // r9@369
  int v220; // r0@369
  int v221; // r5@370
  int v222; // r7@370
  bool v223; // zf@371
  int v224; // r4@374
  bool v225; // zf@377
  int *v226; // r1@380
  _DWORD *v227; // r0@381
  int v228; // r9@384
  int v229; // r0@384
  int v230; // r5@385
  int v231; // r7@385
  bool v232; // zf@386
  int v233; // r4@389
  bool v234; // zf@392
  _DWORD *v235; // r0@396
  int *v236; // r1@397
  int v237; // r9@400
  int v238; // r0@400
  int v239; // r5@401
  int v240; // r7@401
  bool v241; // zf@402
  int v242; // r4@405
  bool v243; // zf@408
  _DWORD *v244; // r0@412
  int *v245; // r1@413
  int v246; // r9@416
  int v247; // r0@416
  int v248; // r5@417
  int v249; // r7@417
  bool v250; // zf@418
  int v251; // r4@421
  bool v252; // zf@424
  _DWORD *v253; // r0@428
  int *v254; // r1@429
  int v255; // r9@432
  int v256; // r0@432
  int v257; // r5@433
  int v258; // r7@433
  bool v259; // zf@434
  int v260; // r4@437
  bool v261; // zf@440
  _DWORD *v262; // r0@444
  int *v263; // r1@445
  int v264; // r9@448
  int v265; // r0@448
  int v266; // r5@449
  int v267; // r7@449
  bool v268; // zf@450
  int v269; // r4@453
  bool v270; // zf@456
  _DWORD *v271; // r0@460
  int v272; // r0@461
  int *v273; // r4@461
  int *v274; // r6@461
  unsigned int *v275; // r2@463
  signed int v276; // r1@465
  int *v277; // r0@471
  int *v278; // r4@476
  int *v279; // r6@476
  unsigned int *v280; // r2@478
  signed int v281; // r1@480
  int *v282; // r0@486
  int *v283; // r4@491
  int *v284; // r6@491
  unsigned int *v285; // r2@493
  signed int v286; // r1@495
  int *v287; // r0@501
  int *v288; // r4@506
  int *v289; // r6@506
  unsigned int *v290; // r2@508
  signed int v291; // r1@510
  int *v292; // r0@516
  int *v293; // r4@521
  int *v294; // r6@521
  unsigned int *v295; // r2@523
  signed int v296; // r1@525
  int *v297; // r0@531
  int *v298; // [sp+0h] [bp-60h]@369
  int *v299; // [sp+4h] [bp-5Ch]@369
  int *v300; // [sp+8h] [bp-58h]@369
  int *v301; // [sp+Ch] [bp-54h]@277
  int *v302; // [sp+10h] [bp-50h]@277
  int *v303; // [sp+14h] [bp-4Ch]@277
  int *v304; // [sp+18h] [bp-48h]@185
  int *v305; // [sp+1Ch] [bp-44h]@185
  int *v306; // [sp+20h] [bp-40h]@185
  int *v307; // [sp+24h] [bp-3Ch]@93
  int *v308; // [sp+28h] [bp-38h]@93
  int *v309; // [sp+2Ch] [bp-34h]@93
  int *v310; // [sp+30h] [bp-30h]@1
  int *v311; // [sp+34h] [bp-2Ch]@1
  int *v312; // [sp+38h] [bp-28h]@1

  v1 = this;
  v310 = 0;
  v311 = 0;
  v312 = 0;
  v2 = 0x18u % dword_27DB5B8;
  v3 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
  if ( v3 )
  {
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 24;
      if ( v5 == 24 )
        v6 = *(_DWORD *)(v4 + 4) == 24;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DB5B8 == v2 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v8 = v3 == 0;
    if ( !v8 )
      v9 = (int *)(v3 + 8);
LABEL_15:
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v310,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DB5B4,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v311 == v312 )
    goto LABEL_15;
  sub_119C854(v311, v9);
  ++v311;
LABEL_16:
  v11 = 0x16u % dword_27DB5B8;
  v12 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 22;
    if ( v14 == 22 )
      v15 = *(_DWORD *)(v13 + 4) == 22;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DB5B8 == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 22;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DB5B4,
            v11,
            0x16u,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v310,
      v19);
  else
    sub_119C854(v311, v19);
    ++v311;
  v20 = 0x14u % dword_27DB5B8;
  v21 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 20;
    if ( v23 == 20 )
      v24 = *(_DWORD *)(v22 + 4) == 20;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DB5B8 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 20;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            0x14u,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_119C854(v311, v28);
  v29 = 0x15u % dword_27DB5B8;
  v30 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 21;
    if ( v32 == 21 )
      v33 = *(_DWORD *)(v31 + 4) == 21;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DB5B8 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 21;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x15u,
            (int)v36);
  v37 = (int *)(v30 + 8);
      v37);
    sub_119C854(v311, v37);
  v38 = 0x1Au % dword_27DB5B8;
  v39 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
  if ( !v39 )
    goto LABEL_76;
  v40 = *(_DWORD *)v39;
  v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
    v42 = v41 == 26;
    if ( v41 == 26 )
      v42 = *(_DWORD *)(v40 + 4) == 26;
    if ( v42 )
    v43 = *(_DWORD *)v40;
    if ( *(_DWORD *)v40 )
      v41 = *(_DWORD *)(v43 + 12);
      v39 = v40;
      v40 = *(_DWORD *)v40;
      if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27DB5B8 == v38 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_76:
    v45 = operator new(0x10u);
    *v45 = 0;
    v45[1] = 26;
    v45[2] = &unk_28898CC;
    v39 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v38,
            0x1Au,
            (int)v45);
  v46 = (int *)(v39 + 8);
      v46);
    sub_119C854(v311, v46);
  v47 = 0x18u % dword_27DB5B8;
  v48 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
  if ( !v48 )
    goto LABEL_92;
  v49 = *(_DWORD *)v48;
  v50 = *(_DWORD *)(*(_DWORD *)v48 + 12);
    v51 = v50 == 24;
    if ( v50 == 24 )
      v51 = *(_DWORD *)(v49 + 4) == 24;
    if ( v51 )
    v52 = *(_DWORD *)v49;
    if ( *(_DWORD *)v49 )
      v50 = *(_DWORD *)(v52 + 12);
      v48 = v49;
      v49 = *(_DWORD *)v49;
      if ( *(_DWORD *)(v52 + 12) % (unsigned int)dword_27DB5B8 == v47 )
  v53 = v48 == 0;
  if ( v48 )
    v48 = *(_DWORD *)v48;
    v53 = v48 == 0;
  if ( v53 )
LABEL_92:
    v54 = operator new(0x10u);
    *v54 = 0;
    v54[1] = 24;
    v54[2] = &unk_28898CC;
    v48 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v47,
            0x18u,
            (int)v54);
  v55 = (unsigned __int64 *)((char *)v1 + 572);
  v56 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v55,
          (int **)(v48 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v56, (unsigned __int64 *)&v310);
  v307 = 0;
  v308 = 0;
  v309 = 0;
  v57 = 0x1Au % dword_27DB5B8;
  v58 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
  if ( v58 )
    v59 = *(_DWORD *)v58;
    v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
      v61 = v60 == 26;
      if ( v60 == 26 )
        v61 = *(_DWORD *)(v59 + 4) == 26;
      if ( v61 )
      v62 = *(_DWORD *)v59;
      if ( *(_DWORD *)v59 )
        v60 = *(_DWORD *)(v62 + 12);
        v58 = v59;
        v59 = *(_DWORD *)v59;
        if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DB5B8 == v57 )
      goto LABEL_105;
    v63 = v58 == 0;
    if ( v58 )
      v58 = *(_DWORD *)v58;
      v63 = v58 == 0;
    if ( !v63 )
      v64 = (int *)(v58 + 8);
LABEL_107:
        (unsigned __int64 *)&v307,
        v64);
      goto LABEL_108;
LABEL_105:
  v65 = operator new(0x10u);
  *v65 = 0;
  v65[1] = 26;
  v65[2] = &unk_28898CC;
  v64 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DB5B4,
                  v57,
                  0x1Au,
                  (int)v65)
              + 8);
  if ( v308 == v309 )
    goto LABEL_107;
  sub_119C854(v308, v64);
  ++v308;
LABEL_108:
  v66 = 0x16u % dword_27DB5B8;
  v67 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 22;
    if ( v69 == 22 )
      v70 = *(_DWORD *)(v68 + 4) == 22;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DB5B8 == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 22;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = (int *)(v67 + 8);
      (unsigned __int64 *)&v307,
      v74);
    sub_119C854(v308, v74);
    ++v308;
  v75 = 0x14u % dword_27DB5B8;
  v76 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
  if ( !v76 )
    goto LABEL_136;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 20;
    if ( v78 == 20 )
      v79 = *(_DWORD *)(v77 + 4) == 20;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DB5B8 == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_136:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 20;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            (int)v82);
  v83 = (int *)(v76 + 8);
      v83);
    sub_119C854(v308, v83);
  v84 = 0x15u % dword_27DB5B8;
  v85 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
  if ( !v85 )
    goto LABEL_152;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 21;
    if ( v87 == 21 )
      v88 = *(_DWORD *)(v86 + 4) == 21;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DB5B8 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_152:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 21;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = (int *)(v85 + 8);
      v92);
    sub_119C854(v308, v92);
  v93 = 0x18u % dword_27DB5B8;
  v94 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
  if ( !v94 )
    goto LABEL_168;
  v95 = *(_DWORD *)v94;
  v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
    v97 = v96 == 24;
    if ( v96 == 24 )
      v97 = *(_DWORD *)(v95 + 4) == 24;
    if ( v97 )
    v98 = *(_DWORD *)v95;
    if ( *(_DWORD *)v95 )
      v96 = *(_DWORD *)(v98 + 12);
      v94 = v95;
      v95 = *(_DWORD *)v95;
      if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DB5B8 == v93 )
  v99 = v94 == 0;
  if ( v94 )
    v94 = *(_DWORD *)v94;
    v99 = v94 == 0;
  if ( v99 )
LABEL_168:
    v100 = operator new(0x10u);
    *v100 = 0;
    v100[1] = 24;
    v100[2] = &unk_28898CC;
    v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v93,
            (int)v100);
  v101 = (int *)(v94 + 8);
      v101);
    sub_119C854(v308, v101);
  v102 = 0x1Au % dword_27DB5B8;
  v103 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
  if ( !v103 )
    goto LABEL_184;
  v104 = *(_DWORD *)v103;
  v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
    v106 = v105 == 26;
    if ( v105 == 26 )
      v106 = *(_DWORD *)(v104 + 4) == 26;
    if ( v106 )
    v107 = *(_DWORD *)v104;
    if ( *(_DWORD *)v104 )
      v105 = *(_DWORD *)(v107 + 12);
      v103 = v104;
      v104 = *(_DWORD *)v104;
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DB5B8 == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_184:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 26;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DB5B4,
             v102,
             0x1Au,
             (int)v109);
  v110 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v55,
           (int **)(v103 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v110, (unsigned __int64 *)&v307);
  v304 = 0;
  v305 = 0;
  v306 = 0;
  v111 = 0x16u % dword_27DB5B8;
  v112 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( v112 )
    v113 = *(_DWORD *)v112;
    v114 = *(_DWORD *)(*(_DWORD *)v112 + 12);
      v115 = v114 == 22;
      if ( v114 == 22 )
        v115 = *(_DWORD *)(v113 + 4) == 22;
      if ( v115 )
      v116 = *(_DWORD *)v113;
      if ( *(_DWORD *)v113 )
        v114 = *(_DWORD *)(v116 + 12);
        v112 = v113;
        v113 = *(_DWORD *)v113;
        if ( *(_DWORD *)(v116 + 12) % (unsigned int)dword_27DB5B8 == v111 )
      goto LABEL_197;
    v117 = v112 == 0;
    if ( v112 )
      v112 = *(_DWORD *)v112;
      v117 = v112 == 0;
    if ( !v117 )
      v118 = (int *)(v112 + 8);
LABEL_199:
        (unsigned __int64 *)&v304,
        v118);
      goto LABEL_200;
LABEL_197:
  v119 = operator new(0x10u);
  *v119 = 0;
  v119[1] = 22;
  v119[2] = &unk_28898CC;
  v118 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DB5B4,
                   v111,
                   0x16u,
                   (int)v119)
               + 8);
  if ( v305 == v306 )
    goto LABEL_199;
  sub_119C854(v305, v118);
  ++v305;
LABEL_200:
  v120 = 0x14u % dword_27DB5B8;
  v121 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
  if ( !v121 )
    goto LABEL_212;
  v122 = *(_DWORD *)v121;
  v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
    v124 = v123 == 20;
    if ( v123 == 20 )
      v124 = *(_DWORD *)(v122 + 4) == 20;
    if ( v124 )
    v125 = *(_DWORD *)v122;
    if ( *(_DWORD *)v122 )
      v123 = *(_DWORD *)(v125 + 12);
      v121 = v122;
      v122 = *(_DWORD *)v122;
      if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DB5B8 == v120 )
  v126 = v121 == 0;
  if ( v121 )
    v121 = *(_DWORD *)v121;
    v126 = v121 == 0;
  if ( v126 )
LABEL_212:
    v127 = operator new(0x10u);
    *v127 = 0;
    v127[1] = 20;
    v127[2] = &unk_28898CC;
    v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v120,
             0x14u,
             (int)v127);
  v128 = (int *)(v121 + 8);
      (unsigned __int64 *)&v304,
      v128);
    sub_119C854(v305, v128);
    ++v305;
  v129 = 0x15u % dword_27DB5B8;
  v130 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
  if ( !v130 )
    goto LABEL_228;
  v131 = *(_DWORD *)v130;
  v132 = *(_DWORD *)(*(_DWORD *)v130 + 12);
    v133 = v132 == 21;
    if ( v132 == 21 )
      v133 = *(_DWORD *)(v131 + 4) == 21;
    if ( v133 )
    v134 = *(_DWORD *)v131;
    if ( *(_DWORD *)v131 )
      v132 = *(_DWORD *)(v134 + 12);
      v130 = v131;
      v131 = *(_DWORD *)v131;
      if ( *(_DWORD *)(v134 + 12) % (unsigned int)dword_27DB5B8 == v129 )
  v135 = v130 == 0;
  if ( v130 )
    v130 = *(_DWORD *)v130;
    v135 = v130 == 0;
  if ( v135 )
LABEL_228:
    v136 = operator new(0x10u);
    *v136 = 0;
    v136[1] = 21;
    v136[2] = &unk_28898CC;
    v130 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v129,
             0x15u,
             (int)v136);
  v137 = (int *)(v130 + 8);
      v137);
    sub_119C854(v305, v137);
  v138 = 0x1Au % dword_27DB5B8;
  v139 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
  if ( !v139 )
    goto LABEL_244;
  v140 = *(_DWORD *)v139;
  v141 = *(_DWORD *)(*(_DWORD *)v139 + 12);
    v142 = v141 == 26;
    if ( v141 == 26 )
      v142 = *(_DWORD *)(v140 + 4) == 26;
    if ( v142 )
    v143 = *(_DWORD *)v140;
    if ( *(_DWORD *)v140 )
      v141 = *(_DWORD *)(v143 + 12);
      v139 = v140;
      v140 = *(_DWORD *)v140;
      if ( *(_DWORD *)(v143 + 12) % (unsigned int)dword_27DB5B8 == v138 )
  v144 = v139 == 0;
  if ( v139 )
    v139 = *(_DWORD *)v139;
    v144 = v139 == 0;
  if ( v144 )
LABEL_244:
    v145 = operator new(0x10u);
    *v145 = 0;
    v145[1] = 26;
    v145[2] = &unk_28898CC;
    v139 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v138,
             (int)v145);
  v146 = (int *)(v139 + 8);
      v146);
    sub_119C854(v305, v146);
  v147 = 0x18u % dword_27DB5B8;
  v148 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
  if ( !v148 )
    goto LABEL_260;
  v149 = *(_DWORD *)v148;
  v150 = *(_DWORD *)(*(_DWORD *)v148 + 12);
    v151 = v150 == 24;
    if ( v150 == 24 )
      v151 = *(_DWORD *)(v149 + 4) == 24;
    if ( v151 )
    v152 = *(_DWORD *)v149;
    if ( *(_DWORD *)v149 )
      v150 = *(_DWORD *)(v152 + 12);
      v148 = v149;
      v149 = *(_DWORD *)v149;
      if ( *(_DWORD *)(v152 + 12) % (unsigned int)dword_27DB5B8 == v147 )
  v153 = v148 == 0;
  if ( v148 )
    v148 = *(_DWORD *)v148;
    v153 = v148 == 0;
  if ( v153 )
LABEL_260:
    v154 = operator new(0x10u);
    *v154 = 0;
    v154[1] = 24;
    v154[2] = &unk_28898CC;
    v148 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v147,
             0x18u,
             (int)v154);
  v155 = (int *)(v148 + 8);
      v155);
    sub_119C854(v305, v155);
  v156 = 0x16u % dword_27DB5B8;
  v157 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( !v157 )
    goto LABEL_276;
  v158 = *(_DWORD *)v157;
  v159 = *(_DWORD *)(*(_DWORD *)v157 + 12);
    v160 = v159 == 22;
    if ( v159 == 22 )
      v160 = *(_DWORD *)(v158 + 4) == 22;
    if ( v160 )
    v161 = *(_DWORD *)v158;
    if ( *(_DWORD *)v158 )
      v159 = *(_DWORD *)(v161 + 12);
      v157 = v158;
      v158 = *(_DWORD *)v158;
      if ( *(_DWORD *)(v161 + 12) % (unsigned int)dword_27DB5B8 == v156 )
  v162 = v157 == 0;
  if ( v157 )
    v157 = *(_DWORD *)v157;
    v162 = v157 == 0;
  if ( v162 )
LABEL_276:
    v163 = operator new(0x10u);
    *v163 = 0;
    v163[1] = 22;
    v163[2] = &unk_28898CC;
    v157 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v156,
             0x16u,
             (int)v163);
  v164 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v157 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v164, (unsigned __int64 *)&v304);
  v301 = 0;
  v302 = 0;
  v303 = 0;
  v165 = 0x14u % dword_27DB5B8;
  v166 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
  if ( v166 )
    v167 = *(_DWORD *)v166;
    v168 = *(_DWORD *)(*(_DWORD *)v166 + 12);
      v169 = v168 == 20;
      if ( v168 == 20 )
        v169 = *(_DWORD *)(v167 + 4) == 20;
      if ( v169 )
      v170 = *(_DWORD *)v167;
      if ( *(_DWORD *)v167 )
        v168 = *(_DWORD *)(v170 + 12);
        v166 = v167;
        v167 = *(_DWORD *)v167;
        if ( *(_DWORD *)(v170 + 12) % (unsigned int)dword_27DB5B8 == v165 )
      goto LABEL_289;
    v171 = v166 == 0;
    if ( v166 )
      v166 = *(_DWORD *)v166;
      v171 = v166 == 0;
    if ( !v171 )
      v172 = (int *)(v166 + 8);
LABEL_291:
        (unsigned __int64 *)&v301,
        v172);
      goto LABEL_292;
LABEL_289:
  v173 = operator new(0x10u);
  *v173 = 0;
  v173[1] = 20;
  v173[2] = &unk_28898CC;
  v172 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v165,
                   0x14u,
                   (int)v173)
  if ( v302 == v303 )
    goto LABEL_291;
  sub_119C854(v302, v172);
  ++v302;
LABEL_292:
  v174 = 0x16u % dword_27DB5B8;
  v175 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( !v175 )
    goto LABEL_304;
  v176 = *(_DWORD *)v175;
  v177 = *(_DWORD *)(*(_DWORD *)v175 + 12);
    v178 = v177 == 22;
    if ( v177 == 22 )
      v178 = *(_DWORD *)(v176 + 4) == 22;
    if ( v178 )
    v179 = *(_DWORD *)v176;
    if ( *(_DWORD *)v176 )
      v177 = *(_DWORD *)(v179 + 12);
      v175 = v176;
      v176 = *(_DWORD *)v176;
      if ( *(_DWORD *)(v179 + 12) % (unsigned int)dword_27DB5B8 == v174 )
  v180 = v175 == 0;
  if ( v175 )
    v175 = *(_DWORD *)v175;
    v180 = v175 == 0;
  if ( v180 )
LABEL_304:
    v181 = operator new(0x10u);
    *v181 = 0;
    v181[1] = 22;
    v181[2] = &unk_28898CC;
    v175 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v174,
             (int)v181);
  v182 = (int *)(v175 + 8);
      (unsigned __int64 *)&v301,
      v182);
    sub_119C854(v302, v182);
    ++v302;
  v183 = 0x15u % dword_27DB5B8;
  v184 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
  if ( !v184 )
    goto LABEL_320;
  v185 = *(_DWORD *)v184;
  v186 = *(_DWORD *)(*(_DWORD *)v184 + 12);
    v187 = v186 == 21;
    if ( v186 == 21 )
      v187 = *(_DWORD *)(v185 + 4) == 21;
    if ( v187 )
    v188 = *(_DWORD *)v185;
    if ( *(_DWORD *)v185 )
      v186 = *(_DWORD *)(v188 + 12);
      v184 = v185;
      v185 = *(_DWORD *)v185;
      if ( *(_DWORD *)(v188 + 12) % (unsigned int)dword_27DB5B8 == v183 )
  v189 = v184 == 0;
  if ( v184 )
    v184 = *(_DWORD *)v184;
    v189 = v184 == 0;
  if ( v189 )
LABEL_320:
    v190 = operator new(0x10u);
    *v190 = 0;
    v190[1] = 21;
    v190[2] = &unk_28898CC;
    v184 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v183,
             (int)v190);
  v191 = (int *)(v184 + 8);
      v191);
    sub_119C854(v302, v191);
  v192 = 0x1Au % dword_27DB5B8;
  v193 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
  if ( !v193 )
    goto LABEL_336;
  v194 = *(_DWORD *)v193;
  v195 = *(_DWORD *)(*(_DWORD *)v193 + 12);
    v196 = v195 == 26;
    if ( v195 == 26 )
      v196 = *(_DWORD *)(v194 + 4) == 26;
    if ( v196 )
    v197 = *(_DWORD *)v194;
    if ( *(_DWORD *)v194 )
      v195 = *(_DWORD *)(v197 + 12);
      v193 = v194;
      v194 = *(_DWORD *)v194;
      if ( *(_DWORD *)(v197 + 12) % (unsigned int)dword_27DB5B8 == v192 )
  v198 = v193 == 0;
  if ( v193 )
    v193 = *(_DWORD *)v193;
    v198 = v193 == 0;
  if ( v198 )
LABEL_336:
    v199 = operator new(0x10u);
    *v199 = 0;
    v199[1] = 26;
    v199[2] = &unk_28898CC;
    v193 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v192,
             (int)v199);
  v200 = (int *)(v193 + 8);
      v200);
    sub_119C854(v302, v200);
  v201 = 0x18u % dword_27DB5B8;
  v202 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
  if ( !v202 )
    goto LABEL_352;
  v203 = *(_DWORD *)v202;
  v204 = *(_DWORD *)(*(_DWORD *)v202 + 12);
    v205 = v204 == 24;
    if ( v204 == 24 )
      v205 = *(_DWORD *)(v203 + 4) == 24;
    if ( v205 )
    v206 = *(_DWORD *)v203;
    if ( *(_DWORD *)v203 )
      v204 = *(_DWORD *)(v206 + 12);
      v202 = v203;
      v203 = *(_DWORD *)v203;
      if ( *(_DWORD *)(v206 + 12) % (unsigned int)dword_27DB5B8 == v201 )
  v207 = v202 == 0;
  if ( v202 )
    v202 = *(_DWORD *)v202;
    v207 = v202 == 0;
  if ( v207 )
LABEL_352:
    v208 = operator new(0x10u);
    *v208 = 0;
    v208[1] = 24;
    v208[2] = &unk_28898CC;
    v202 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v201,
             (int)v208);
  v209 = (int *)(v202 + 8);
      v209);
    sub_119C854(v302, v209);
  v210 = 0x14u % dword_27DB5B8;
  v211 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
  if ( !v211 )
    goto LABEL_368;
  v212 = *(_DWORD *)v211;
  v213 = *(_DWORD *)(*(_DWORD *)v211 + 12);
    v214 = v213 == 20;
    if ( v213 == 20 )
      v214 = *(_DWORD *)(v212 + 4) == 20;
    if ( v214 )
    v215 = *(_DWORD *)v212;
    if ( *(_DWORD *)v212 )
      v213 = *(_DWORD *)(v215 + 12);
      v211 = v212;
      v212 = *(_DWORD *)v212;
      if ( *(_DWORD *)(v215 + 12) % (unsigned int)dword_27DB5B8 == v210 )
  v216 = v211 == 0;
  if ( v211 )
    v211 = *(_DWORD *)v211;
    v216 = v211 == 0;
  if ( v216 )
LABEL_368:
    v217 = operator new(0x10u);
    *v217 = 0;
    v217[1] = 20;
    v217[2] = &unk_28898CC;
    v211 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v210,
             (int)v217);
  v218 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v211 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v218, (unsigned __int64 *)&v301);
  v298 = 0;
  v299 = 0;
  v300 = 0;
  v219 = 0x15u % dword_27DB5B8;
  v220 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
  if ( v220 )
    v221 = *(_DWORD *)v220;
    v222 = *(_DWORD *)(*(_DWORD *)v220 + 12);
      v223 = v222 == 21;
      if ( v222 == 21 )
        v223 = *(_DWORD *)(v221 + 4) == 21;
      if ( v223 )
      v224 = *(_DWORD *)v221;
      if ( *(_DWORD *)v221 )
        v222 = *(_DWORD *)(v224 + 12);
        v220 = v221;
        v221 = *(_DWORD *)v221;
        if ( *(_DWORD *)(v224 + 12) % (unsigned int)dword_27DB5B8 == v219 )
      goto LABEL_381;
    v225 = v220 == 0;
    if ( v220 )
      v220 = *(_DWORD *)v220;
      v225 = v220 == 0;
    if ( !v225 )
      v226 = (int *)(v220 + 8);
LABEL_383:
        (unsigned __int64 *)&v298,
        v226);
      goto LABEL_384;
LABEL_381:
  v227 = operator new(0x10u);
  *v227 = 0;
  v227[1] = 21;
  v227[2] = &unk_28898CC;
  v226 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v219,
                   0x15u,
                   (int)v227)
  if ( v299 == v300 )
    goto LABEL_383;
  sub_119C854(v299, v226);
  ++v299;
LABEL_384:
  v228 = 0x16u % dword_27DB5B8;
  v229 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( !v229 )
    goto LABEL_396;
  v230 = *(_DWORD *)v229;
  v231 = *(_DWORD *)(*(_DWORD *)v229 + 12);
    v232 = v231 == 22;
    if ( v231 == 22 )
      v232 = *(_DWORD *)(v230 + 4) == 22;
    if ( v232 )
    v233 = *(_DWORD *)v230;
    if ( *(_DWORD *)v230 )
      v231 = *(_DWORD *)(v233 + 12);
      v229 = v230;
      v230 = *(_DWORD *)v230;
      if ( *(_DWORD *)(v233 + 12) % (unsigned int)dword_27DB5B8 == v228 )
  v234 = v229 == 0;
  if ( v229 )
    v229 = *(_DWORD *)v229;
    v234 = v229 == 0;
  if ( v234 )
LABEL_396:
    v235 = operator new(0x10u);
    *v235 = 0;
    v235[1] = 22;
    v235[2] = &unk_28898CC;
    v229 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v228,
             (int)v235);
  v236 = (int *)(v229 + 8);
      (unsigned __int64 *)&v298,
      v236);
    sub_119C854(v299, v236);
    ++v299;
  v237 = 0x14u % dword_27DB5B8;
  v238 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
  if ( !v238 )
    goto LABEL_412;
  v239 = *(_DWORD *)v238;
  v240 = *(_DWORD *)(*(_DWORD *)v238 + 12);
    v241 = v240 == 20;
    if ( v240 == 20 )
      v241 = *(_DWORD *)(v239 + 4) == 20;
    if ( v241 )
    v242 = *(_DWORD *)v239;
    if ( *(_DWORD *)v239 )
      v240 = *(_DWORD *)(v242 + 12);
      v238 = v239;
      v239 = *(_DWORD *)v239;
      if ( *(_DWORD *)(v242 + 12) % (unsigned int)dword_27DB5B8 == v237 )
  v243 = v238 == 0;
  if ( v238 )
    v238 = *(_DWORD *)v238;
    v243 = v238 == 0;
  if ( v243 )
LABEL_412:
    v244 = operator new(0x10u);
    *v244 = 0;
    v244[1] = 20;
    v244[2] = &unk_28898CC;
    v238 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v237,
             (int)v244);
  v245 = (int *)(v238 + 8);
      v245);
    sub_119C854(v299, v245);
  v246 = 0x1Au % dword_27DB5B8;
  v247 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x1Au % dword_27DB5B8));
  if ( !v247 )
    goto LABEL_428;
  v248 = *(_DWORD *)v247;
  v249 = *(_DWORD *)(*(_DWORD *)v247 + 12);
    v250 = v249 == 26;
    if ( v249 == 26 )
      v250 = *(_DWORD *)(v248 + 4) == 26;
    if ( v250 )
    v251 = *(_DWORD *)v248;
    if ( *(_DWORD *)v248 )
      v249 = *(_DWORD *)(v251 + 12);
      v247 = v248;
      v248 = *(_DWORD *)v248;
      if ( *(_DWORD *)(v251 + 12) % (unsigned int)dword_27DB5B8 == v246 )
  v252 = v247 == 0;
  if ( v247 )
    v247 = *(_DWORD *)v247;
    v252 = v247 == 0;
  if ( v252 )
LABEL_428:
    v253 = operator new(0x10u);
    *v253 = 0;
    v253[1] = 26;
    v253[2] = &unk_28898CC;
    v247 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v246,
             (int)v253);
  v254 = (int *)(v247 + 8);
      v254);
    sub_119C854(v299, v254);
  v255 = 0x18u % dword_27DB5B8;
  v256 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x18u % dword_27DB5B8));
  if ( !v256 )
    goto LABEL_444;
  v257 = *(_DWORD *)v256;
  v258 = *(_DWORD *)(*(_DWORD *)v256 + 12);
    v259 = v258 == 24;
    if ( v258 == 24 )
      v259 = *(_DWORD *)(v257 + 4) == 24;
    if ( v259 )
    v260 = *(_DWORD *)v257;
    if ( *(_DWORD *)v257 )
      v258 = *(_DWORD *)(v260 + 12);
      v256 = v257;
      v257 = *(_DWORD *)v257;
      if ( *(_DWORD *)(v260 + 12) % (unsigned int)dword_27DB5B8 == v255 )
  v261 = v256 == 0;
  if ( v256 )
    v256 = *(_DWORD *)v256;
    v261 = v256 == 0;
  if ( v261 )
LABEL_444:
    v262 = operator new(0x10u);
    *v262 = 0;
    v262[1] = 24;
    v262[2] = &unk_28898CC;
    v256 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v255,
             (int)v262);
  v263 = (int *)(v256 + 8);
      v263);
    sub_119C854(v299, v263);
  v264 = 0x15u % dword_27DB5B8;
  v265 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x15u % dword_27DB5B8));
  if ( !v265 )
    goto LABEL_460;
  v266 = *(_DWORD *)v265;
  v267 = *(_DWORD *)(*(_DWORD *)v265 + 12);
    v268 = v267 == 21;
    if ( v267 == 21 )
      v268 = *(_DWORD *)(v266 + 4) == 21;
    if ( v268 )
    v269 = *(_DWORD *)v266;
    if ( *(_DWORD *)v266 )
      v267 = *(_DWORD *)(v269 + 12);
      v265 = v266;
      v266 = *(_DWORD *)v266;
      if ( *(_DWORD *)(v269 + 12) % (unsigned int)dword_27DB5B8 == v264 )
  v270 = v265 == 0;
  if ( v265 )
    v265 = *(_DWORD *)v265;
    v270 = v265 == 0;
  if ( v270 )
LABEL_460:
    v271 = operator new(0x10u);
    *v271 = 0;
    v271[1] = 21;
    v271[2] = &unk_28898CC;
    v265 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v264,
             (int)v271);
  v272 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v265 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v272, (unsigned __int64 *)&v298);
  v274 = v299;
  v273 = v298;
  if ( v298 != v299 )
    do
      v277 = (int *)(*v273 - 12);
      if ( v277 != &dword_28898C0 )
        v275 = (unsigned int *)(*v273 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v276 = __ldrex(v275);
          while ( __strex(v276 - 1, v275) );
        }
        else
          v276 = (*v275)--;
        if ( v276 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v277);
      ++v273;
    while ( v273 != v274 );
    v273 = v298;
  if ( v273 )
    operator delete(v273);
  v279 = v302;
  v278 = v301;
  if ( v301 != v302 )
      v282 = (int *)(*v278 - 12);
      if ( v282 != &dword_28898C0 )
        v280 = (unsigned int *)(*v278 - 4);
            v281 = __ldrex(v280);
          while ( __strex(v281 - 1, v280) );
          v281 = (*v280)--;
        if ( v281 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v282);
      ++v278;
    while ( v278 != v279 );
    v278 = v301;
  if ( v278 )
    operator delete(v278);
  v284 = v305;
  v283 = v304;
  if ( v304 != v305 )
      v287 = (int *)(*v283 - 12);
      if ( v287 != &dword_28898C0 )
        v285 = (unsigned int *)(*v283 - 4);
            v286 = __ldrex(v285);
          while ( __strex(v286 - 1, v285) );
          v286 = (*v285)--;
        if ( v286 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v287);
      ++v283;
    while ( v283 != v284 );
    v283 = v304;
  if ( v283 )
    operator delete(v283);
  v289 = v308;
  v288 = v307;
  if ( v307 != v308 )
      v292 = (int *)(*v288 - 12);
      if ( v292 != &dword_28898C0 )
        v290 = (unsigned int *)(*v288 - 4);
            v291 = __ldrex(v290);
          while ( __strex(v291 - 1, v290) );
          v291 = (*v290)--;
        if ( v291 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v292);
      ++v288;
    while ( v288 != v289 );
    v288 = v307;
  if ( v288 )
    operator delete(v288);
  v294 = v311;
  v293 = v310;
  if ( v310 != v311 )
      v297 = (int *)(*v293 - 12);
      if ( v297 != &dword_28898C0 )
        v295 = (unsigned int *)(*v293 - 4);
            v296 = __ldrex(v295);
          while ( __strex(v296 - 1, v295) );
          v296 = (*v295)--;
        if ( v296 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v297);
      ++v293;
    while ( v293 != v294 );
    v293 = v310;
  if ( v293 )
    operator delete(v293);
}


int __fastcall FurnaceScreenController::_onContainerSlotHovered(int a1, const void **a2, int a3)
{
  const void **v3; // r10@1
  int v4; // r9@1
  int v5; // r11@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r5@2
  bool v9; // zf@3
  int v10; // r7@6
  bool v11; // zf@9
  _DWORD *v12; // r0@13
  const void *v13; // r11@14
  _DWORD *v14; // r1@14
  size_t v15; // r4@14
  int v16; // r6@16
  int v17; // r0@16
  int v18; // r9@17
  int v19; // r7@17
  bool v20; // zf@18
  int v21; // r8@21
  MinecraftScreenController *v22; // r2@24
  bool v23; // zf@25
  _DWORD *v24; // r0@29
  const void *v25; // r1@30
  int v26; // r0@31
  _DWORD *v27; // r1@31
  int v29; // [sp+4h] [bp-2Ch]@16
  int v30; // [sp+8h] [bp-28h]@1

  v30 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 0x16u % dword_27DB5B8;
  v6 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x16u % dword_27DB5B8));
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  while ( 1 )
  {
    v9 = v8 == 22;
    if ( v8 == 22 )
      v9 = *(_DWORD *)(v7 + 4) == 22;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 12);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 12) % (unsigned int)dword_27DB5B8 == v5 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v11 = v6 == 0;
  if ( v11 )
LABEL_13:
    v12 = operator new(0x10u);
    *v12 = 0;
    v12[1] = 22;
    v12[2] = &unk_28898CC;
    v6 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DB5B4,
           v5,
           0x16u,
           (int)v12);
  v13 = *v3;
  v14 = *(_DWORD **)(v6 + 8);
  v15 = *((_DWORD *)*v3 - 3);
  if ( v15 != *(v14 - 3) || memcmp(*v3, v14, *((_DWORD *)*v3 - 3)) )
    v29 = v4;
    v16 = 0x14u % dword_27DB5B8;
    v17 = *(_DWORD *)(dword_27DB5B4 + 4 * (0x14u % dword_27DB5B8));
    if ( !v17 )
      goto LABEL_29;
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    while ( 1 )
      v20 = v19 == 20;
      if ( v19 == 20 )
        v20 = *(_DWORD *)(v18 + 4) == 20;
      if ( v20 )
        break;
      v21 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 )
      {
        v19 = *(_DWORD *)(v21 + 12);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v21 + 12) % (unsigned int)dword_27DB5B8 == v16 )
          continue;
      }
    v23 = v17 == 0;
    if ( v17 )
      v17 = *(_DWORD *)v17;
      v23 = v17 == 0;
    if ( v23 )
LABEL_29:
      v24 = operator new(0x10u);
      *v24 = 0;
      v24[1] = 20;
      v24[2] = &unk_28898CC;
      v17 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DB5B4,
              v16,
              0x14u,
              (int)v24);
      v13 = *v3;
      v15 = *((_DWORD *)*v3 - 3);
    v25 = *(const void **)(v17 + 8);
    if ( v15 == *((_DWORD *)v25 - 3) )
      v26 = memcmp(v13, v25, v15);
      v22 = (MinecraftScreenController *)v30;
      v27 = (_DWORD *)(v30 + 636);
      if ( !v26 )
        *v27 = 20;
        v4 = v29;
        return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi_0(v22, v3, v4);
    else
    v4 = v29;
    *v27 = 21;
    return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi_0(v22, v3, v4);
  v22 = (MinecraftScreenController *)v30;
  *(_DWORD *)(v30 + 636) = 22;
  return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi_0(v22, v3, v4);
}


void __fastcall FurnaceScreenController::_registerBindings(FurnaceScreenController *this)
{
  FurnaceScreenController::_registerBindings(this);
}


void **__fastcall FurnaceScreenController::_getButtonADescription(FurnaceScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  void **v3; // r4@1
  void **result; // r0@3

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    if ( *((_DWORD *)v2 + 159) == 22 )
      return sub_1590164(v3, "controller.buttonTip.take");
    return ContainerScreenController::_getButtonADescription((ContainerScreenController *)v3, v2);
  }
  if ( ContainerScreenController::isSlotsPanelFocused(v2) != 1 )
    if ( ContainerScreenController::isInventoryPanelFocused(v2) == 1 )
      return sub_1590164(v3, "controller.buttonTip.addItem");
  if ( *((_DWORD *)v2 + 159) == 22 )
    result = sub_1590164(v3, "controller.buttonTip.takeItem");
  else
    result = sub_1590164(v3, "controller.buttonTip.select.slot");
  return result;
}


void __fastcall FurnaceScreenController::~FurnaceScreenController(FurnaceScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E1EA4;
  v2 = *((_DWORD *)this + 158);
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
  ContainerScreenController::~ContainerScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


ContainerScreenController *__fastcall FurnaceScreenController::~FurnaceScreenController(FurnaceScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E1EA4;
  v2 = *((_DWORD *)this + 158);
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
  return j_j_j__ZN25ContainerScreenControllerD2Ev(v1);
}


void __fastcall FurnaceScreenController::_registerAutoPlaceOrder(FurnaceScreenController *this)
{
  FurnaceScreenController::_registerAutoPlaceOrder(this);
}


int __fastcall FurnaceScreenController::FurnaceScreenController(int a1, int a2, const BlockPos *a3, int a4)
{
  int v4; // r4@1
  const BlockPos *v5; // r5@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  __int64 v14; // r0@21
  int v15; // r5@21
  unsigned int *v16; // r1@22
  unsigned int v17; // r0@24
  unsigned int *v18; // r6@28
  unsigned int v19; // r0@30
  int v20; // r5@35
  unsigned int *v21; // r1@36
  unsigned int v22; // r0@38
  unsigned int *v23; // r6@42
  unsigned int v24; // r0@44
  char v26; // [sp+4h] [bp-24h]@21
  int v27; // [sp+8h] [bp-20h]@21
  int v28; // [sp+Ch] [bp-1Ch]@1
  int v29; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v28 = *(_DWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 4);
  v29 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  ContainerScreenController::ContainerScreenController(v4, (int)&v28, a4);
  v9 = v29;
  if ( v29 )
    v10 = (unsigned int *)(v29 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E1EA4;
  *(_DWORD *)(v4 + 628) = 0;
  *(_DWORD *)(v4 + 632) = 0;
  *(_DWORD *)(v4 + 636) = 21;
  ContainerScreenController::setAssociatedBlockPos((ContainerScreenController *)v4, v5);
  ContainerScreenController::createContainerManagerController<FurnaceContainerManagerModel,FurnaceContainerManagerController,BlockPos &>(
    (int)&v26,
    v4,
    v4 + 488);
  v14 = *(_QWORD *)&v26;
  *(_DWORD *)&v26 = 0;
  v27 = 0;
  *(_DWORD *)(v4 + 628) = v14;
  v15 = *(_DWORD *)(v4 + 632);
  *(_DWORD *)(v4 + 632) = HIDWORD(v14);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v27;
  if ( v27 )
    v21 = (unsigned int *)(v27 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  FurnaceScreenController::_registerBindings((FurnaceScreenController *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


void __fastcall FurnaceScreenController::~FurnaceScreenController(FurnaceScreenController *this)
{
  FurnaceScreenController::~FurnaceScreenController(this);
}
