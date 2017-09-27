

void __fastcall NpcInteractScreenController::_registerBindings(NpcInteractScreenController *this)
{
  NpcInteractScreenController::_registerBindings(this);
}


Entity *__fastcall NpcInteractScreenController::_performClosingActions(NpcInteractScreenController *this)
{
  NpcInteractScreenController *v1; // r4@1
  Entity *result; // r0@1
  NpcComponent *v3; // r5@2
  unsigned int v4; // r6@4
  NpcAction *v5; // r7@5

  v1 = this;
  result = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( result )
  {
    result = (Entity *)Entity::getNpcComponent(result);
    v3 = result;
    if ( result )
    {
      NpcComponent::requestClosingCommandActions(result);
      result = (Entity *)NpcComponent::getActionCount(v3);
      if ( result )
      {
        v4 = 0;
        do
        {
          v5 = (NpcAction *)NpcComponent::getActionAt(v3, v4);
          if ( NpcAction::getMode(v5) == 1 && NpcAction::getType(v5) != 1 )
            NpcInteractScreenController::_performAction(v1, v4);
          ++v4;
          result = (Entity *)NpcComponent::getActionCount(v3);
        }
        while ( v4 < (unsigned int)result );
      }
    }
  }
  return result;
}


void __fastcall NpcInteractScreenController::_performAction(NpcInteractScreenController *this, int a2)
{
  NpcInteractScreenController::_performAction(this, a2);
}


int __fastcall NpcInteractScreenController::_getButtonActionAt(NpcInteractScreenController *this, unsigned int a2)
{
  NpcInteractScreenController *v2; // r5@1
  unsigned int v3; // r4@1
  Entity *v4; // r0@1
  NpcComponent *v5; // r0@2
  int result; // r0@3

  v2 = this;
  v3 = NpcInteractScreenController::_buttonToActionIndex(this, a2);
  v4 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)v2 + 106), (unsigned __int64 *)v2 + 55);
  if ( v4 && (v5 = (NpcComponent *)Entity::getNpcComponent(v4)) != 0 )
    result = j_j_j__ZN12NpcComponent11getActionAtEj(v5, v3);
  else
    result = 0;
  return result;
}


int __fastcall NpcInteractScreenController::_getActionAt(NpcInteractScreenController *this, unsigned int a2)
{
  unsigned int v2; // r4@1
  Entity *v3; // r0@1
  NpcComponent *v4; // r0@2
  int result; // r0@3

  v2 = a2;
  v3 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v3 && (v4 = (NpcComponent *)Entity::getNpcComponent(v3)) != 0 )
    result = j_j_j__ZN12NpcComponent11getActionAtEj(v4, v2);
  else
    result = 0;
  return result;
}


void __fastcall NpcInteractScreenController::_getTextInCollection(int *a1, int a2, int a3)
{
  NpcInteractScreenController::_getTextInCollection(a1, a2, a3);
}


void __fastcall NpcInteractScreenController::_getText(int *a1, int a2, int a3)
{
  NpcInteractScreenController::_getText(a1, a2, a3);
}


void __fastcall NpcInteractScreenController::_registerEventHandlers(NpcInteractScreenController *this)
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
  int v82; // r5@61
  _DWORD *v83; // r0@61
  __int64 v84; // r1@61
  void *v85; // r0@63
  unsigned int *v86; // r2@65
  signed int v87; // r1@67
  unsigned int *v88; // r2@69
  signed int v89; // r1@71
  unsigned int *v90; // r2@73
  signed int v91; // r1@75
  unsigned int *v92; // r2@77
  signed int v93; // r1@79
  unsigned int *v94; // r2@81
  signed int v95; // r1@83
  unsigned int *v96; // r2@85
  signed int v97; // r1@87
  unsigned int *v98; // r2@89
  signed int v99; // r1@91
  unsigned int *v100; // r2@93
  signed int v101; // r1@95
  unsigned int *v102; // r2@97
  signed int v103; // r1@99
  unsigned int *v104; // r2@101
  signed int v105; // r1@103
  unsigned int *v106; // r2@105
  signed int v107; // r1@107
  unsigned int *v108; // r2@109
  signed int v109; // r1@111
  unsigned int *v110; // r2@113
  signed int v111; // r1@115
  unsigned int *v112; // r2@117
  signed int v113; // r1@119
  unsigned int *v114; // r2@121
  signed int v115; // r1@123
  unsigned int *v116; // r2@125
  signed int v117; // r1@127
  unsigned int *v118; // r2@129
  signed int v119; // r1@131
  unsigned int *v120; // r2@133
  signed int v121; // r1@135
  unsigned int *v122; // r2@137
  signed int v123; // r1@139
  unsigned int *v124; // r2@141
  signed int v125; // r1@143
  unsigned int *v126; // r2@145
  signed int v127; // r1@147
  _DWORD *v128; // [sp+4h] [bp-20Ch]@61
  __int64 v129; // [sp+Ch] [bp-204h]@61
  int v130; // [sp+18h] [bp-1F8h]@61
  _DWORD *v131; // [sp+1Ch] [bp-1F4h]@58
  __int64 v132; // [sp+24h] [bp-1ECh]@58
  int v133; // [sp+30h] [bp-1E0h]@58
  _DWORD *v134; // [sp+34h] [bp-1DCh]@55
  __int64 v135; // [sp+3Ch] [bp-1D4h]@55
  int v136; // [sp+48h] [bp-1C8h]@55
  _DWORD *v137; // [sp+4Ch] [bp-1C4h]@52
  __int64 v138; // [sp+54h] [bp-1BCh]@52
  int v139; // [sp+60h] [bp-1B0h]@52
  _DWORD *v140; // [sp+64h] [bp-1ACh]@49
  __int64 v141; // [sp+6Ch] [bp-1A4h]@49
  int v142; // [sp+78h] [bp-198h]@49
  _DWORD *v143; // [sp+7Ch] [bp-194h]@46
  __int64 v144; // [sp+84h] [bp-18Ch]@46
  int v145; // [sp+90h] [bp-180h]@46
  _DWORD *v146; // [sp+94h] [bp-17Ch]@43
  __int64 v147; // [sp+9Ch] [bp-174h]@43
  int v148; // [sp+A8h] [bp-168h]@43
  _DWORD *v149; // [sp+ACh] [bp-164h]@40
  __int64 v150; // [sp+B4h] [bp-15Ch]@40
  int v151; // [sp+C0h] [bp-150h]@40
  _DWORD *v152; // [sp+C4h] [bp-14Ch]@37
  __int64 v153; // [sp+CCh] [bp-144h]@37
  int v154; // [sp+D8h] [bp-138h]@37
  _DWORD *v155; // [sp+DCh] [bp-134h]@34
  __int64 v156; // [sp+E4h] [bp-12Ch]@34
  int v157; // [sp+F0h] [bp-120h]@34
  _DWORD *v158; // [sp+F4h] [bp-11Ch]@31
  __int64 v159; // [sp+FCh] [bp-114h]@31
  int v160; // [sp+108h] [bp-108h]@31
  _DWORD *v161; // [sp+10Ch] [bp-104h]@28
  __int64 v162; // [sp+114h] [bp-FCh]@28
  int v163; // [sp+120h] [bp-F0h]@28
  _DWORD *v164; // [sp+124h] [bp-ECh]@25
  __int64 v165; // [sp+12Ch] [bp-E4h]@25
  int v166; // [sp+138h] [bp-D8h]@25
  _DWORD *v167; // [sp+13Ch] [bp-D4h]@22
  __int64 v168; // [sp+144h] [bp-CCh]@22
  int v169; // [sp+150h] [bp-C0h]@22
  _DWORD *v170; // [sp+154h] [bp-BCh]@19
  __int64 v171; // [sp+15Ch] [bp-B4h]@19
  int v172; // [sp+168h] [bp-A8h]@19
  _DWORD *v173; // [sp+16Ch] [bp-A4h]@16
  __int64 v174; // [sp+174h] [bp-9Ch]@16
  int v175; // [sp+180h] [bp-90h]@16
  _DWORD *v176; // [sp+184h] [bp-8Ch]@13
  __int64 v177; // [sp+18Ch] [bp-84h]@13
  int v178; // [sp+198h] [bp-78h]@13
  _DWORD *v179; // [sp+19Ch] [bp-74h]@10
  __int64 v180; // [sp+1A4h] [bp-6Ch]@10
  int v181; // [sp+1B0h] [bp-60h]@10
  _DWORD *v182; // [sp+1B4h] [bp-5Ch]@7
  __int64 v183; // [sp+1BCh] [bp-54h]@7
  int v184; // [sp+1C8h] [bp-48h]@7
  _DWORD *v185; // [sp+1CCh] [bp-44h]@4
  __int64 v186; // [sp+1D4h] [bp-3Ch]@4
  int v187; // [sp+1E0h] [bp-30h]@4
  _DWORD *v188; // [sp+1E4h] [bp-2Ch]@1
  __int64 v189; // [sp+1ECh] [bp-24h]@1
  int v190; // [sp+1F8h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v190, "button.exit_basic");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v190);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11D3D84;
  *v3 = v1;
  HIDWORD(v4) = sub_11D3D58;
  v188 = v3;
  v189 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v188);
  if ( (_DWORD)v189 )
    ((void (*)(void))v189)();
  v5 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
  {
    v86 = (unsigned int *)(v190 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
    }
    else
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v187, "button.exit_advanced");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v187);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11D3DC8;
  *v7 = v1;
  HIDWORD(v8) = sub_11D3DBA;
  v185 = v7;
  v186 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v185);
  if ( (_DWORD)v186 )
    ((void (*)(void))v186)();
  v9 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v187 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  sub_1590164((void **)&v184, "button.exit_maximized");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v184);
  v11 = operator new(4u);
  LODWORD(v12) = sub_11D3E0C;
  *v11 = v1;
  HIDWORD(v12) = sub_11D3DFE;
  v182 = v11;
  v183 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v182);
  if ( (_DWORD)v183 )
    ((void (*)(void))v183)();
  v13 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v184 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v13);
  sub_1590164((void **)&v181, "button.exit_student");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v181);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11D3E62;
  *v15 = v1;
  HIDWORD(v16) = sub_11D3E42;
  v179 = v15;
  v180 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v179);
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  v17 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v181 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v17);
  sub_1590164((void **)&v178, "#interact_text_box");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v178);
  v19 = operator new(4u);
  LODWORD(v20) = sub_11D3F74;
  *v19 = v1;
  HIDWORD(v20) = sub_11D3E98;
  v176 = v19;
  v177 = v20;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v18, (int)&v176);
  if ( (_DWORD)v177 )
    ((void (*)(void))v177)();
  v21 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v178 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v21);
  sub_1590164((void **)&v175, "#name_text_box");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v175);
  v23 = operator new(4u);
  LODWORD(v24) = sub_11D4088;
  *v23 = v1;
  HIDWORD(v24) = sub_11D3FAC;
  v173 = v23;
  v174 = v24;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v22, (int)&v173);
  if ( (_DWORD)v174 )
    ((void (*)(void))v174)();
  v25 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v175 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v25);
  sub_1590164((void **)&v172, "button.cycle_pack_left");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v172);
  v27 = operator new(4u);
  LODWORD(v28) = sub_11D40D6;
  *v27 = v1;
  HIDWORD(v28) = sub_11D40BE;
  v170 = v27;
  v171 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v170);
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  v29 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v172 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v29);
  sub_1590164((void **)&v169, "button.cycle_pack_right");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v169);
  v31 = operator new(4u);
  LODWORD(v32) = sub_11D412E;
  *v31 = v1;
  HIDWORD(v32) = sub_11D410C;
  v167 = v31;
  v168 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  v33 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v169 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v33);
  sub_1590164((void **)&v166, "button.view_skin");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v166);
  v35 = operator new(4u);
  LODWORD(v36) = sub_11D4200;
  *v35 = v1;
  HIDWORD(v36) = sub_11D4164;
  v164 = v35;
  v165 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v164);
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  v37 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v166 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v37);
  sub_1590164((void **)&v163, "button.skin_hovered");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v163);
  v39 = operator new(4u);
  LODWORD(v40) = sub_11D42A4;
  *v39 = v1;
  HIDWORD(v40) = sub_11D4238;
  v161 = v39;
  v162 = v40;
  ScreenController::registerButtonEventHandler((int)v1, v38, 1, 0, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  v41 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v163 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v41);
  sub_1590164((void **)&v160, "button.skin_unhovered");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v160);
  v43 = operator new(4u);
  LODWORD(v44) = sub_11D4354;
  *v43 = v1;
  HIDWORD(v44) = sub_11D42DC;
  v158 = v43;
  v159 = v44;
  ScreenController::registerButtonEventHandler((int)v1, v42, 0, 2, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  v45 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v160 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v45);
  sub_1590164((void **)&v157, "button.advanced_settings");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v157);
  v47 = operator new(4u);
  LODWORD(v48) = sub_11D4398;
  *v47 = v1;
  HIDWORD(v48) = sub_11D438A;
  v155 = v47;
  v156 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v155);
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v49 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v157 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v49);
  sub_1590164((void **)&v154, "button.add_url");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v154);
  v51 = operator new(4u);
  LODWORD(v52) = sub_11D45D4;
  *v51 = v1;
  HIDWORD(v52) = sub_11D43D0;
  v152 = v51;
  v153 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v53 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v154 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v53);
  sub_1590164((void **)&v151, "button.add_command");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v151);
  v55 = operator new(4u);
  LODWORD(v56) = sub_11D4692;
  *v55 = v1;
  HIDWORD(v56) = sub_11D460A;
  v149 = v55;
  v150 = v56;
  ScreenController::registerButtonClickHandler((int)v1, v54, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v57 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v151 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v57);
  sub_1590164((void **)&v148, "button.delete_action");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v148);
  v59 = operator new(4u);
  LODWORD(v60) = sub_11D4750;
  *v59 = v1;
  HIDWORD(v60) = sub_11D46C8;
  v146 = v59;
  v147 = v60;
  ScreenController::registerButtonClickHandler((int)v1, v58, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  v61 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v148 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v61);
  sub_1590164((void **)&v145, "button_mode_toggle");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v145);
  v63 = operator new(4u);
  LODWORD(v64) = sub_11D481C;
  *v63 = v1;
  HIDWORD(v64) = sub_11D4788;
  v143 = v63;
  v144 = v64;
  ScreenController::registerToggleChangeEventHandler((int)v1, v62, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  v65 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v145 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v65);
  sub_1590164((void **)&v142, "button_name_edit");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v142);
  v67 = operator new(4u);
  LODWORD(v68) = sub_11D4938;
  *v67 = v1;
  HIDWORD(v68) = sub_11D4854;
  v140 = v67;
  v141 = v68;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v66, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  v69 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v142 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v69);
  sub_1590164((void **)&v139, "button.expand_action_edit");
  v70 = MinecraftScreenController::_getNameId(v1, (int **)&v139);
  v71 = operator new(4u);
  LODWORD(v72) = sub_11D49E4;
  *v71 = v1;
  HIDWORD(v72) = sub_11D4970;
  v137 = v71;
  v138 = v72;
  ScreenController::registerButtonClickHandler((int)v1, v70, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v73 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v139 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v73);
  sub_1590164((void **)&v136, "maximized_action_edit_box");
  v74 = MinecraftScreenController::_getNameId(v1, (int **)&v136);
  v75 = operator new(4u);
  LODWORD(v76) = sub_11D4B04;
  *v75 = v1;
  HIDWORD(v76) = sub_11D4A1C;
  v134 = v75;
  v135 = v76;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v74, (int)&v134);
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v77 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v136 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v77);
  sub_1590164((void **)&v133, "action_text_box");
  v78 = MinecraftScreenController::_getNameId(v1, (int **)&v133);
  v79 = operator new(4u);
  LODWORD(v80) = sub_11D4C20;
  *v79 = v1;
  HIDWORD(v80) = sub_11D4B3C;
  v131 = v79;
  v132 = v80;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v78, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v81 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v133 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v81);
  sub_1590164((void **)&v130, "button.student_button");
  v82 = MinecraftScreenController::_getNameId(v1, (int **)&v130);
  v83 = operator new(4u);
  LODWORD(v84) = sub_11D4CE0;
  *v83 = v1;
  HIDWORD(v84) = sub_11D4C58;
  v128 = v83;
  v129 = v84;
  ScreenController::registerButtonClickHandler((int)v1, v82, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  v85 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v130 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v85);
}


unsigned int **__fastcall NpcInteractScreenController::_openUrl(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r6@1
  char *v4; // r0@2
  int v5; // r0@3
  int v6; // r5@5
  unsigned int *v7; // r1@6
  unsigned int v8; // r0@8
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  void *v11; // r0@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@29
  signed int v16; // r1@31
  char *v17; // [sp+4h] [bp-44h]@2
  void *ptr; // [sp+8h] [bp-40h]@1
  int v19; // [sp+Ch] [bp-3Ch]@1
  int v20; // [sp+10h] [bp-38h]@1
  int v21; // [sp+14h] [bp-34h]@1
  char v22; // [sp+1Ch] [bp-2Ch]@1
  int v23; // [sp+20h] [bp-28h]@20
  int v24; // [sp+24h] [bp-24h]@19
  int v25; // [sp+2Ch] [bp-1Ch]@5

  v2 = a2;
  v3 = a1;
  std::basic_regex<char,std::regex_traits<char>>::basic_regex<char const*>(
    (int)&v22,
    "^(([^:/?#]+):)(//([^/?#]*))?([^?#]*)(\\?([^#]*))?(#(.*))?",
    "",
    16);
  v20 = 0;
  v21 = 0;
  ptr = 0;
  v19 = 0;
  if ( !std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,true>(
          (int)*v2,
          (int)*v2 + *((_DWORD *)*v2 - 3),
          (int)&ptr,
          (int)&v22,
          0) )
  {
    v17 = (char *)&unk_28898CC;
    sub_1590424((const void **)&v17, *((_DWORD *)*v2 - 3) + 7);
    sub_1590224((const void **)&v17, "http://", 7u);
    sub_1590394((const void **)&v17, v2);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2,
      (int *)&v17);
    v4 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v4);
    }
  }
  v5 = *(_DWORD *)(v3 + 424);
  MinecraftScreenModel::openUriLink();
  if ( ptr )
    operator delete(ptr);
  v6 = v25;
  if ( v25 )
    v7 = (unsigned int *)(v25 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v24 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v11);
  return sub_21C802C((unsigned int **)&v23);
}


unsigned int __fastcall NpcInteractScreenController::_buttonToActionIndex(NpcInteractScreenController *this, unsigned int a2)
{
  unsigned int v2; // r4@1
  Entity *v3; // r0@1
  NpcComponent *v4; // r0@2
  NpcComponent *v5; // r6@2
  unsigned int v6; // r5@4
  int v7; // r7@4
  NpcAction *v8; // r0@5

  v2 = a2;
  v3 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v3 )
  {
    v4 = (NpcComponent *)Entity::getNpcComponent(v3);
    v5 = v4;
    if ( v4 )
    {
      if ( NpcComponent::getActionCount(v4) )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v8 = (NpcAction *)NpcComponent::getActionAt(v5, v6);
          if ( !NpcAction::getMode(v8) )
          {
            if ( v7 == v2 )
              return v6;
            ++v7;
          }
          ++v6;
        }
        while ( v6 < NpcComponent::getActionCount(v5) );
      }
    }
  }
  return -1;
}


void __fastcall NpcInteractScreenController::_getTextInCollection(int *a1, int a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r5@3
  char *v7; // r1@4
  char *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+8h] [bp-20h]@1
  char v12; // [sp+14h] [bp-14h]@4

  v3 = a1;
  v4 = *(_DWORD *)(a3 + 12);
  sub_1590164((void **)&v11, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v4 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#item_name"), Json::Value::isString(v6) != 1) )
  {
    *v3 = (int)v11;
    v7 = (char *)&unk_28898CC;
    v11 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as(v3, (int)&v12, (int)v6);
    v7 = v11;
  v8 = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v8);
}


int __fastcall NpcInteractScreenController::_isButtonMode(NpcInteractScreenController *this, int a2)
{
  int v2; // r4@1
  Entity *v3; // r0@1
  NpcComponent *v4; // r0@2
  int v5; // r0@3
  signed int v6; // r4@3
  int result; // r0@7

  v2 = a2;
  v3 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v3 && (v4 = (NpcComponent *)Entity::getNpcComponent(v3)) != 0 )
  {
    v5 = NpcComponent::getActionAt(v4, v2);
    v6 = 0;
    if ( v5 )
    {
      if ( !NpcAction::getMode((NpcAction *)v5) )
        v6 = 1;
      v5 = v6;
      v6 = 1;
    }
    result = v5 & v6;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall NpcInteractScreenController::_getSkinIndex(int a1, const void **a2)
{
  int v2; // r7@1
  const void *v3; // r8@2
  signed int v4; // r4@2
  unsigned int v5; // r5@2
  size_t v6; // r6@2
  _DWORD *v7; // r0@3

  v2 = Npc::Skins;
  if ( dword_2801854 == Npc::Skins )
  {
LABEL_6:
    v4 = -1;
  }
  else
    v3 = *a2;
    v4 = 0;
    v5 = (dword_2801854 - Npc::Skins) >> 3;
    v6 = *((_DWORD *)*a2 - 3);
    while ( 1 )
    {
      v7 = *(_DWORD **)(v2 + 8 * v4);
      if ( *(v7 - 3) == v6 && !memcmp(v7, v3, v6) )
        break;
      if ( ++v4 >= v5 )
        goto LABEL_6;
    }
  return v4;
}


void __fastcall NpcInteractScreenController::_getText(int *a1, int a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r6@3
  const char *v7; // r6@4
  Json::Value *v8; // r5@8
  char *v9; // r1@9
  char *v10; // r0@11
  char *v11; // r0@12
  char *v12; // r0@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  char *v19; // [sp+4h] [bp-2Ch]@6
  const char *v20; // [sp+Ch] [bp-24h]@1
  const char *v21; // [sp+10h] [bp-20h]@4
  char v22; // [sp+14h] [bp-1Ch]@4
  char v23; // [sp+18h] [bp-18h]@9

  v3 = a1;
  v4 = *(_DWORD *)(a3 + 12);
  sub_1590164((void **)&v20, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v4 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#property_field"), Json::Value::isString(v6) != 1) )
  {
    v7 = v20;
    v21 = v20;
    v20 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v21, (int)&v22, (int)v6);
    v7 = v21;
  sub_1590164((void **)&v19, (const char *)&unk_257BC67);
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7), Json::Value::isString(v8) != 1) )
    *v3 = (int)v19;
    v9 = (char *)&unk_28898CC;
    v19 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as(v3, (int)&v23, (int)v8);
    v9 = v19;
  v10 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v10);
  v11 = (char *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v11);
  v12 = (char *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v12);
}


int __fastcall NpcInteractScreenController::_getButtonActionCount(NpcInteractScreenController *this)
{
  Entity *v1; // r0@1
  NpcComponent *v2; // r0@2
  NpcComponent *v3; // r4@2
  unsigned int v4; // r6@3
  int v5; // r5@3
  NpcAction *v6; // r0@4
  int result; // r0@7

  v1 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v1 && (v2 = (NpcComponent *)Entity::getNpcComponent(v1), (v3 = v2) != 0) )
  {
    v4 = 0;
    v5 = 0;
    if ( NpcComponent::getActionCount(v2) )
    {
      do
      {
        v6 = (NpcAction *)NpcComponent::getActionAt(v3, v4);
        if ( !NpcAction::getMode(v6) )
          ++v5;
        ++v4;
      }
      while ( v4 < NpcComponent::getActionCount(v3) );
    }
    result = v5;
  }
  else
    result = 0;
  return result;
}


int __fastcall NpcInteractScreenController::_leaveFrom(NpcInteractScreenController *this, int a2)
{
  NpcInteractScreenController *v2; // r4@1
  Entity *v3; // r0@2
  NpcComponent *v4; // r0@3
  int result; // r0@6

  v2 = this;
  switch ( a2 )
  {
    case 0:
      v3 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
      if ( v3 )
      {
        v4 = (NpcComponent *)Entity::getNpcComponent(v3);
        if ( v4 )
          NpcComponent::syncActionsWithServer(v4);
      }
      goto LABEL_10;
    case 1:
      *((_BYTE *)this + 449) = 0;
      result = 1;
      break;
    case 2:
      *((_BYTE *)v2 + 449) = 1;
    case 3:
      NpcInteractScreenController::_performClosingActions(this);
LABEL_10:
      MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v2 + 95));
      result = 0;
    default:
  }
  return result;
}


ScreenController *__fastcall NpcInteractScreenController::~NpcInteractScreenController(NpcInteractScreenController *this)
{
  ClientInstanceScreenController *v1; // r4@1
  Entity *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E29FC;
  v2 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v2 )
    Entity::setChanged(v2);
  return j_j_j__ZN30ClientInstanceScreenControllerD2Ev(v1);
}


int __fastcall NpcInteractScreenController::NpcInteractScreenController(int a1, int a2, int a3, Entity *a4, char a5)
{
  int v5; // r8@1
  Entity *v6; // r6@1
  int v7; // r0@1
  int v8; // r5@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r7@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r4@14
  unsigned int v15; // r0@16
  int v16; // r0@21
  char v17; // r2@21
  Npc *v18; // r0@23
  const void **v19; // r0@24
  int v20; // r4@24
  const void *v21; // r9@25
  signed int v22; // r7@25
  unsigned int v23; // r5@25
  size_t v24; // r6@25
  _DWORD *v25; // r0@26
  int v26; // r0@30
  int v28; // [sp+4h] [bp-24h]@1
  int v29; // [sp+8h] [bp-20h]@1

  v5 = a1;
  v28 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v29 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  ClientInstanceScreenController::ClientInstanceScreenController(v5, (int)&v28);
  v11 = v29;
  if ( v29 )
    v12 = (unsigned int *)(v29 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
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
  *(_DWORD *)v5 = &off_26E29FC;
  *(_DWORD *)(v5 + 432) = v8;
  *(_QWORD *)(v5 + 440) = *(_QWORD *)Entity::getUniqueID(v6);
  *(_BYTE *)(v5 + 448) = a5;
  v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 648))(v8);
  v17 = 3;
  if ( v16 )
    v17 = 0;
  *(_BYTE *)(v5 + 449) = v17;
  *(_DWORD *)(v5 + 452) = 0;
  *(_DWORD *)(v5 + 456) = (dword_2801854 - Npc::Skins) >> 3;
  *(_DWORD *)(v5 + 464) = -1;
  *(_DWORD *)(v5 + 468) = -1;
  v18 = (Npc *)ClientInstanceScreenModel::getEntity(*(_DWORD *)(v5 + 424), (unsigned __int64 *)(v5 + 440));
  if ( v18 )
    v19 = Npc::getSkinId(v18);
    v20 = Npc::Skins;
    if ( dword_2801854 == Npc::Skins )
LABEL_29:
      v22 = -1;
      v21 = *v19;
      v22 = 0;
      v23 = (dword_2801854 - Npc::Skins) >> 3;
      v24 = *((_DWORD *)*v19 - 3);
      while ( 1 )
        v25 = *(_DWORD **)(v20 + 8 * v22);
        if ( *(v25 - 3) == v24 && !memcmp(v25, v21, v24) )
          break;
        if ( ++v22 >= v23 )
          goto LABEL_29;
    *(_DWORD *)(v5 + 460) = v22;
    v26 = v22 - 2;
    if ( v22 - 2 <= 0 )
      v26 = 0;
    if ( *(_DWORD *)(v5 + 456) - 5 < v26 )
      v26 = *(_DWORD *)(v5 + 456) - 5;
    *(_DWORD *)(v5 + 452) = v26;
  else
    *(_DWORD *)(v5 + 460) = 0;
  NpcInteractScreenController::_registerEventHandlers((NpcInteractScreenController *)v5);
  NpcInteractScreenController::_registerBindings((NpcInteractScreenController *)v5);
  return v5;
}


int __fastcall NpcInteractScreenController::_getNpcEntity(NpcInteractScreenController *this)
{
  return j_j_j__ZN25ClientInstanceScreenModel9getEntityERK14EntityUniqueID(
           *((_DWORD *)this + 106),
           (unsigned __int64 *)this + 55);
}


void __fastcall NpcInteractScreenController::~NpcInteractScreenController(NpcInteractScreenController *this)
{
  NpcInteractScreenController::~NpcInteractScreenController(this);
}


Npc *__fastcall NpcInteractScreenController::onTerminate(NpcInteractScreenController *this)
{
  NpcInteractScreenController *v1; // r4@1
  Npc *result; // r0@1

  v1 = this;
  result = (Npc *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( result )
    result = (Npc *)j_j_j__ZN20MinecraftScreenModel25triggerNpcUpdateTelemetryER3Npc(
                      *((MinecraftScreenModel **)v1 + 106),
                      result);
  return result;
}


void __fastcall NpcInteractScreenController::_performAction(NpcInteractScreenController *this, int a2)
{
  NpcInteractScreenController *v2; // r5@1
  unsigned __int64 *v3; // r6@1
  int v4; // r4@1
  Entity *v5; // r0@1
  NpcComponent *v6; // r0@2
  NpcAction *v7; // r0@3
  NpcAction *v8; // r7@3
  int v9; // r0@4
  Entity *v10; // r0@6
  NpcComponent *v11; // r0@7
  int *v12; // r0@9
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int v16; // [sp+0h] [bp-20h]@9

  v2 = this;
  v3 = (unsigned __int64 *)((char *)this + 440);
  v4 = a2;
  v5 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v5 )
  {
    v6 = (NpcComponent *)Entity::getNpcComponent(v5);
    if ( v6 )
    {
      v7 = (NpcAction *)NpcComponent::getActionAt(v6, v4);
      v8 = v7;
      if ( v7 )
      {
        v9 = NpcAction::getType(v7);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)v2 + 106), v3);
            if ( v10 )
            {
              v11 = (NpcComponent *)Entity::getNpcComponent(v10);
              if ( v11 )
                j_j_j__ZN12NpcComponent20requestCommandActionEi(v11, v4);
            }
          }
        }
        else
          v12 = (int *)NpcAction::getText(v8);
          sub_15901A4(&v16, v12);
          NpcInteractScreenController::_openUrl((int)v2, (const void **)&v16);
          v13 = (void *)(v16 - 12);
          if ( (int *)(v16 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v16 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            else
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j_j__ZdlPv_9_2(v13);
      }
    }
  }
}


int __fastcall NpcInteractScreenController::_getEntity(NpcInteractScreenController *this)
{
  return j_j_j__ZN25ClientInstanceScreenModel9getEntityERK14EntityUniqueID(
           *((_DWORD *)this + 106),
           (unsigned __int64 *)this + 55);
}


int __fastcall NpcInteractScreenController::_isAddActionAllowed(NpcInteractScreenController *this)
{
  Entity *v1; // r0@1
  int v2; // r0@2
  signed int v3; // r4@2
  int result; // r0@6

  v1 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v1 )
  {
    v2 = Entity::getNpcComponent(v1);
    v3 = 0;
    if ( v2 )
    {
      if ( (unsigned int)NpcComponent::getActionCount((NpcComponent *)v2) < 6 )
        v3 = 1;
      v2 = v3;
      v3 = 1;
    }
    result = v2 & v3;
  }
  else
    result = 0;
  return result;
}


void __fastcall NpcInteractScreenController::_registerEventHandlers(NpcInteractScreenController *this)
{
  NpcInteractScreenController::_registerEventHandlers(this);
}


signed int __fastcall NpcInteractScreenController::_isCommandEditAllowed(NpcInteractScreenController *this)
{
  unsigned int v1; // r0@1
  signed int v2; // r1@1

  v1 = MinecraftScreenModel::getPlayerCommandPermissionLevel(*((MinecraftScreenModel **)this + 95));
  v2 = 0;
  if ( v1 >= Npc::COMMAND_PERMISSION )
    v2 = 1;
  return v2;
}


int __fastcall NpcInteractScreenController::_leaveScreen(NpcInteractScreenController *this, int a2)
{
  NpcInteractScreenController *v2; // r4@1

  v2 = this;
  if ( a2 == 1 )
    NpcInteractScreenController::_performClosingActions(this);
  return j_j_j__ZN20MinecraftScreenModel11leaveScreenEv_1(*((MinecraftScreenModel **)v2 + 95));
}


void __fastcall NpcInteractScreenController::_registerBindings(NpcInteractScreenController *this)
{
  NpcInteractScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  __int64 v5; // r1@9
  __int64 v6; // r1@13
  _DWORD *v7; // r0@17
  __int64 v8; // r1@17
  _DWORD *v9; // r0@19
  __int64 v10; // r1@19
  __int64 v11; // r1@19
  _DWORD *v12; // r0@23
  __int64 v13; // r1@23
  _DWORD *v14; // r0@25
  __int64 v15; // r1@25
  __int64 v16; // r1@25
  _DWORD *v17; // r0@29
  __int64 v18; // r1@29
  __int64 v19; // r1@29
  _DWORD *v20; // r0@33
  __int64 v21; // r1@33
  __int64 v22; // r1@33
  _DWORD *v23; // r0@37
  __int64 v24; // r1@37
  __int64 v25; // r1@37
  _DWORD *v26; // r0@41
  __int64 v27; // r1@41
  __int64 v28; // r1@41
  _DWORD *v29; // r0@45
  __int64 v30; // r1@45
  __int64 v31; // r1@45
  _DWORD *v32; // r0@49
  __int64 v33; // r1@49
  __int64 v34; // r1@49
  _DWORD *v35; // r0@53
  __int64 v36; // r1@53
  __int64 v37; // r1@53
  _DWORD *v38; // r0@57
  __int64 v39; // r1@57
  __int64 v40; // r1@57
  _DWORD *v41; // r0@61
  __int64 v42; // r1@61
  __int64 v43; // r1@61
  _DWORD *v44; // r0@65
  __int64 v45; // r1@65
  __int64 v46; // r1@65
  _DWORD *v47; // r0@69
  __int64 v48; // r1@69
  _DWORD *v49; // r0@71
  __int64 v50; // r1@71
  __int64 v51; // r1@71
  _DWORD *v52; // r0@75
  __int64 v53; // r1@75
  __int64 v54; // r1@75
  _DWORD *v55; // r0@79
  __int64 v56; // r1@79
  __int64 v57; // r1@79
  _DWORD *v58; // r0@83
  __int64 v59; // r1@83
  __int64 v60; // r1@83
  _DWORD *v61; // r0@87
  __int64 v62; // r1@87
  __int64 v63; // r1@87
  _DWORD *v64; // r0@91
  __int64 v65; // r1@91
  __int64 v66; // r1@91
  _DWORD *v67; // r0@95
  __int64 v68; // r1@95
  __int64 v69; // r1@95
  _DWORD *v70; // r0@99
  __int64 v71; // r1@99
  __int64 v72; // r1@99
  _DWORD *v73; // r0@103
  __int64 v74; // r1@103
  __int64 v75; // r1@103
  _DWORD *v76; // r0@107
  __int64 v77; // r1@107
  __int64 v78; // r1@107
  _DWORD *v79; // r0@111
  __int64 v80; // r1@111
  __int64 v81; // r1@111
  _DWORD *v82; // r0@115
  __int64 v83; // r1@115
  __int64 v84; // r1@115
  void *v85; // [sp+4h] [bp-46Ch]@115
  __int64 v86; // [sp+Ch] [bp-464h]@115
  _DWORD *v87; // [sp+14h] [bp-45Ch]@115
  __int64 v88; // [sp+1Ch] [bp-454h]@115
  int v89; // [sp+24h] [bp-44Ch]@115
  void *v90; // [sp+28h] [bp-448h]@111
  __int64 v91; // [sp+30h] [bp-440h]@111
  _DWORD *v92; // [sp+38h] [bp-438h]@111
  __int64 v93; // [sp+40h] [bp-430h]@111
  int v94; // [sp+48h] [bp-428h]@111
  void *v95; // [sp+4Ch] [bp-424h]@107
  __int64 v96; // [sp+54h] [bp-41Ch]@107
  _DWORD *v97; // [sp+5Ch] [bp-414h]@107
  __int64 v98; // [sp+64h] [bp-40Ch]@107
  int v99; // [sp+6Ch] [bp-404h]@107
  void *v100; // [sp+70h] [bp-400h]@103
  __int64 v101; // [sp+78h] [bp-3F8h]@103
  _DWORD *v102; // [sp+80h] [bp-3F0h]@103
  __int64 v103; // [sp+88h] [bp-3E8h]@103
  int v104; // [sp+90h] [bp-3E0h]@103
  void *v105; // [sp+94h] [bp-3DCh]@99
  __int64 v106; // [sp+9Ch] [bp-3D4h]@99
  _DWORD *v107; // [sp+A4h] [bp-3CCh]@99
  __int64 v108; // [sp+ACh] [bp-3C4h]@99
  int v109; // [sp+B4h] [bp-3BCh]@99
  void *v110; // [sp+B8h] [bp-3B8h]@95
  __int64 v111; // [sp+C0h] [bp-3B0h]@95
  _DWORD *v112; // [sp+C8h] [bp-3A8h]@95
  __int64 v113; // [sp+D0h] [bp-3A0h]@95
  int v114; // [sp+D8h] [bp-398h]@95
  void *v115; // [sp+DCh] [bp-394h]@91
  __int64 v116; // [sp+E4h] [bp-38Ch]@91
  _DWORD *v117; // [sp+ECh] [bp-384h]@91
  __int64 v118; // [sp+F4h] [bp-37Ch]@91
  int v119; // [sp+FCh] [bp-374h]@91
  void *v120; // [sp+100h] [bp-370h]@87
  __int64 v121; // [sp+108h] [bp-368h]@87
  _DWORD *v122; // [sp+110h] [bp-360h]@87
  __int64 v123; // [sp+118h] [bp-358h]@87
  int v124; // [sp+120h] [bp-350h]@87
  int v125; // [sp+124h] [bp-34Ch]@87
  void *v126; // [sp+128h] [bp-348h]@83
  __int64 v127; // [sp+130h] [bp-340h]@83
  _DWORD *v128; // [sp+138h] [bp-338h]@83
  __int64 v129; // [sp+140h] [bp-330h]@83
  int v130; // [sp+148h] [bp-328h]@83
  int v131; // [sp+14Ch] [bp-324h]@83
  void *v132; // [sp+150h] [bp-320h]@79
  __int64 v133; // [sp+158h] [bp-318h]@79
  _DWORD *v134; // [sp+160h] [bp-310h]@79
  __int64 v135; // [sp+168h] [bp-308h]@79
  int v136; // [sp+170h] [bp-300h]@79
  int v137; // [sp+174h] [bp-2FCh]@79
  void *v138; // [sp+178h] [bp-2F8h]@75
  __int64 v139; // [sp+180h] [bp-2F0h]@75
  _DWORD *v140; // [sp+188h] [bp-2E8h]@75
  __int64 v141; // [sp+190h] [bp-2E0h]@75
  int v142; // [sp+198h] [bp-2D8h]@75
  int v143; // [sp+19Ch] [bp-2D4h]@75
  void *v144; // [sp+1A0h] [bp-2D0h]@71
  __int64 v145; // [sp+1A8h] [bp-2C8h]@71
  _DWORD *v146; // [sp+1B0h] [bp-2C0h]@71
  __int64 v147; // [sp+1B8h] [bp-2B8h]@71
  int v148; // [sp+1C0h] [bp-2B0h]@71
  _DWORD *v149; // [sp+1C4h] [bp-2ACh]@69
  __int64 v150; // [sp+1CCh] [bp-2A4h]@69
  int v151; // [sp+1D4h] [bp-29Ch]@69
  void *v152; // [sp+1D8h] [bp-298h]@65
  __int64 v153; // [sp+1E0h] [bp-290h]@65
  _DWORD *v154; // [sp+1E8h] [bp-288h]@65
  __int64 v155; // [sp+1F0h] [bp-280h]@65
  int v156; // [sp+1F8h] [bp-278h]@65
  void *v157; // [sp+1FCh] [bp-274h]@61
  __int64 v158; // [sp+204h] [bp-26Ch]@61
  _DWORD *v159; // [sp+20Ch] [bp-264h]@61
  __int64 v160; // [sp+214h] [bp-25Ch]@61
  int v161; // [sp+21Ch] [bp-254h]@61
  void *v162; // [sp+220h] [bp-250h]@57
  __int64 v163; // [sp+228h] [bp-248h]@57
  _DWORD *v164; // [sp+230h] [bp-240h]@57
  __int64 v165; // [sp+238h] [bp-238h]@57
  int v166; // [sp+240h] [bp-230h]@57
  void *v167; // [sp+244h] [bp-22Ch]@53
  __int64 v168; // [sp+24Ch] [bp-224h]@53
  _DWORD *v169; // [sp+254h] [bp-21Ch]@53
  __int64 v170; // [sp+25Ch] [bp-214h]@53
  int v171; // [sp+264h] [bp-20Ch]@53
  void *v172; // [sp+268h] [bp-208h]@49
  __int64 v173; // [sp+270h] [bp-200h]@49
  _DWORD *v174; // [sp+278h] [bp-1F8h]@49
  __int64 v175; // [sp+280h] [bp-1F0h]@49
  int v176; // [sp+288h] [bp-1E8h]@49
  int v177; // [sp+28Ch] [bp-1E4h]@49
  void *v178; // [sp+290h] [bp-1E0h]@45
  __int64 v179; // [sp+298h] [bp-1D8h]@45
  _DWORD *v180; // [sp+2A0h] [bp-1D0h]@45
  __int64 v181; // [sp+2A8h] [bp-1C8h]@45
  int v182; // [sp+2B0h] [bp-1C0h]@45
  int v183; // [sp+2B4h] [bp-1BCh]@45
  void *v184; // [sp+2B8h] [bp-1B8h]@41
  __int64 v185; // [sp+2C0h] [bp-1B0h]@41
  _DWORD *v186; // [sp+2C8h] [bp-1A8h]@41
  __int64 v187; // [sp+2D0h] [bp-1A0h]@41
  int v188; // [sp+2D8h] [bp-198h]@41
  int v189; // [sp+2DCh] [bp-194h]@41
  void *v190; // [sp+2E0h] [bp-190h]@37
  __int64 v191; // [sp+2E8h] [bp-188h]@37
  _DWORD *v192; // [sp+2F0h] [bp-180h]@37
  __int64 v193; // [sp+2F8h] [bp-178h]@37
  int v194; // [sp+300h] [bp-170h]@37
  int v195; // [sp+304h] [bp-16Ch]@37
  void *v196; // [sp+308h] [bp-168h]@33
  __int64 v197; // [sp+310h] [bp-160h]@33
  _DWORD *v198; // [sp+318h] [bp-158h]@33
  __int64 v199; // [sp+320h] [bp-150h]@33
  int v200; // [sp+328h] [bp-148h]@33
  int v201; // [sp+32Ch] [bp-144h]@33
  void *v202; // [sp+330h] [bp-140h]@29
  __int64 v203; // [sp+338h] [bp-138h]@29
  _DWORD *v204; // [sp+340h] [bp-130h]@29
  __int64 v205; // [sp+348h] [bp-128h]@29
  int v206; // [sp+350h] [bp-120h]@29
  int v207; // [sp+354h] [bp-11Ch]@29
  void *v208; // [sp+358h] [bp-118h]@25
  __int64 v209; // [sp+360h] [bp-110h]@25
  _DWORD *v210; // [sp+368h] [bp-108h]@25
  __int64 v211; // [sp+370h] [bp-100h]@25
  int v212; // [sp+378h] [bp-F8h]@25
  _DWORD *v213; // [sp+37Ch] [bp-F4h]@23
  __int64 v214; // [sp+384h] [bp-ECh]@23
  int v215; // [sp+38Ch] [bp-E4h]@23
  void *v216; // [sp+390h] [bp-E0h]@19
  __int64 v217; // [sp+398h] [bp-D8h]@19
  _DWORD *v218; // [sp+3A0h] [bp-D0h]@19
  __int64 v219; // [sp+3A8h] [bp-C8h]@19
  int v220; // [sp+3B0h] [bp-C0h]@19
  int v221; // [sp+3B4h] [bp-BCh]@19
  _DWORD *v222; // [sp+3B8h] [bp-B8h]@17
  __int64 v223; // [sp+3C0h] [bp-B0h]@17
  int v224; // [sp+3C8h] [bp-A8h]@17
  int v225; // [sp+3CCh] [bp-A4h]@17
  void *v226; // [sp+3D0h] [bp-A0h]@13
  __int64 v227; // [sp+3D8h] [bp-98h]@13
  void *v228; // [sp+3E0h] [bp-90h]@13
  void (*v229)(void); // [sp+3E8h] [bp-88h]@13
  _QWORD *(__fastcall *v230)(_QWORD *); // [sp+3ECh] [bp-84h]@13
  int v231; // [sp+3F0h] [bp-80h]@13
  void *v232; // [sp+3F4h] [bp-7Ch]@9
  __int64 v233; // [sp+3FCh] [bp-74h]@9
  _DWORD *v234; // [sp+404h] [bp-6Ch]@9
  void (*v235)(void); // [sp+40Ch] [bp-64h]@9
  int *(__fastcall *v236)(int *, int); // [sp+410h] [bp-60h]@9
  int v237; // [sp+414h] [bp-5Ch]@9
  void *v238; // [sp+418h] [bp-58h]@5
  void (*v239)(void); // [sp+420h] [bp-50h]@5
  signed int (*v240)(); // [sp+424h] [bp-4Ch]@5
  _DWORD *v241; // [sp+428h] [bp-48h]@5
  void (*v242)(void); // [sp+430h] [bp-40h]@5
  int *(__fastcall *v243)(NpcComponent *, int); // [sp+434h] [bp-3Ch]@5
  int v244; // [sp+438h] [bp-38h]@5
  void *v245; // [sp+43Ch] [bp-34h]@1
  void (*v246)(void); // [sp+444h] [bp-2Ch]@1
  signed int (*v247)(); // [sp+448h] [bp-28h]@1
  _DWORD *v248; // [sp+44Ch] [bp-24h]@1
  void (*v249)(void); // [sp+454h] [bp-1Ch]@1
  void *(__fastcall *v250)(void **, int **); // [sp+458h] [bp-18h]@1
  int v251; // [sp+45Ch] [bp-14h]@1

  v1 = this;
  v251 = -900593982;
  v2 = operator new(4u);
  *v2 = v1;
  v248 = v2;
  v250 = sub_11D4D18;
  v249 = (void (*)(void))sub_11D4DC8;
  v245 = operator new(1u);
  v247 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v246 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v251, (int)&v248, (int)&v245);
  if ( v246 )
    v246();
  if ( v249 )
    v249();
  v244 = -1712918574;
  v3 = operator new(4u);
  *v3 = v1;
  v241 = v3;
  v243 = sub_11D4E00;
  v242 = (void (*)(void))sub_11D4E38;
  v238 = operator new(1u);
  v240 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v239 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v244, (int)&v241, (int)&v238);
  if ( v239 )
    v239();
  if ( v242 )
    v242();
  v237 = 2030373625;
  v4 = operator new(4u);
  *v4 = v1;
  v234 = v4;
  v236 = sub_11D4E70;
  v235 = (void (*)(void))sub_11D4EA8;
  v232 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v233 = v5;
  ScreenController::bindString((int)v1, &v237, (int)&v234, (int)&v232);
  if ( (_DWORD)v233 )
    ((void (*)(void))v233)();
  if ( v235 )
    v235();
  StringHash::StringHash<char [23]>(&v231, (int)"#skins_grid_dimensions");
  v228 = operator new(1u);
  v229 = (void (*)(void))sub_11D4EE8;
  v230 = sub_11D4EDE;
  v226 = operator new(1u);
  LODWORD(v6) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v6) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v227 = v6;
  ScreenController::bindGridSize((int)v1, &v231, (int)&v228, (int)&v226);
  if ( (_DWORD)v227 )
    ((void (*)(void))v227)();
  if ( v229 )
    v229();
  v224 = 579206884;
  v225 = 411527482;
  v7 = operator new(4u);
  LODWORD(v8) = sub_11D4F68;
  *v7 = v1;
  HIDWORD(v8) = sub_11D4F18;
  v222 = v7;
  v223 = v8;
  ScreenController::bindForCollection((int)v1, &v225, &v224, (int)&v222);
  if ( (_DWORD)v223 )
    ((void (*)(void))v223)();
  v221 = 411527482;
  v220 = 797522314;
  v9 = operator new(4u);
  LODWORD(v10) = sub_11D4FB6;
  *v9 = v1;
  HIDWORD(v10) = sub_11D4F9E;
  v218 = v9;
  v219 = v10;
  v216 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v217 = v11;
  ScreenController::bindBoolForCollection((int)v1, &v221, &v220, (int)&v218, (int)&v216);
  if ( (_DWORD)v217 )
    ((void (*)(void))v217)();
  if ( (_DWORD)v219 )
    ((void (*)(void))v219)();
  v215 = 578608258;
  v12 = operator new(4u);
  LODWORD(v13) = sub_11D5064;
  *v12 = v1;
  HIDWORD(v13) = sub_11D4FEC;
  v213 = v12;
  v214 = v13;
  ScreenController::bindForGlobal((int)v1, &v215, (int)&v213);
  if ( (_DWORD)v214 )
    ((void (*)(void))v214)();
  v212 = 1275445772;
  v14 = operator new(4u);
  LODWORD(v15) = sub_11D50C2;
  *v14 = v1;
  HIDWORD(v15) = sub_11D509A;
  v210 = v14;
  v211 = v15;
  v208 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v209 = v16;
  ScreenController::bindInt((int)v1, &v212, (int)&v210, (int)&v208);
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  if ( (_DWORD)v211 )
    ((void (*)(void))v211)();
  v206 = 1206416495;
  v207 = -790251019;
  v17 = operator new(4u);
  LODWORD(v18) = sub_11D5134;
  *v17 = v1;
  HIDWORD(v18) = sub_11D50F8;
  v204 = v17;
  v205 = v18;
  v202 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v203 = v19;
  ScreenController::bindBoolForCollection((int)v1, &v207, &v206, (int)&v204, (int)&v202);
  if ( (_DWORD)v203 )
    ((void (*)(void))v203)();
  if ( (_DWORD)v205 )
    ((void (*)(void))v205)();
  v201 = -790251019;
  v200 = 1157346555;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11D51A8;
  *v20 = v1;
  HIDWORD(v21) = sub_11D516A;
  v198 = v20;
  v199 = v21;
  v196 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v197 = v22;
  ScreenController::bindBoolForCollection((int)v1, &v201, &v200, (int)&v198, (int)&v196);
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  if ( (_DWORD)v199 )
    ((void (*)(void))v199)();
  v195 = -790251019;
  v194 = 1587147710;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11D521C;
  *v23 = v1;
  HIDWORD(v24) = sub_11D51DE;
  v192 = v23;
  v193 = v24;
  v190 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v191 = v25;
  ScreenController::bindBoolForCollection((int)v1, &v195, &v194, (int)&v192, (int)&v190);
  if ( (_DWORD)v191 )
    ((void (*)(void))v191)();
  if ( (_DWORD)v193 )
    ((void (*)(void))v193)();
  v189 = -790251019;
  StringHash::StringHash<char [26]>(&v188, (int)"#button_name_edit_visible");
  v26 = operator new(4u);
  LODWORD(v27) = sub_11D5290;
  *v26 = v1;
  HIDWORD(v27) = sub_11D5252;
  v186 = v26;
  v187 = v27;
  v184 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v185 = v28;
  ScreenController::bindBoolForCollection((int)v1, &v189, &v188, (int)&v186, (int)&v184);
  if ( (_DWORD)v185 )
    ((void (*)(void))v185)();
  if ( (_DWORD)v187 )
    ((void (*)(void))v187)();
  v183 = -790251019;
  v182 = 1614560154;
  v29 = operator new(4u);
  LODWORD(v30) = sub_11D5308;
  *v29 = v1;
  HIDWORD(v30) = sub_11D52C8;
  v180 = v29;
  v181 = v30;
  v178 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v179 = v31;
  ScreenController::bindStringForCollection((int)v1, &v183, &v182, (int)&v180, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( (_DWORD)v181 )
    ((void (*)(void))v181)();
  v177 = -790251019;
  v176 = 237564022;
  v32 = operator new(4u);
  LODWORD(v33) = sub_11D5380;
  *v32 = v1;
  HIDWORD(v33) = sub_11D5340;
  v174 = v32;
  v175 = v33;
  v172 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v173 = v34;
  ScreenController::bindStringForCollection((int)v1, &v177, &v176, (int)&v174, (int)&v172);
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  StringHash::StringHash<char [23]>(&v171, (int)"#maximized_action_text");
  v35 = operator new(4u);
  LODWORD(v36) = sub_11D5400;
  *v35 = v1;
  HIDWORD(v36) = sub_11D53B8;
  v169 = v35;
  v170 = v36;
  v167 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v168 = v37;
  ScreenController::bindString((int)v1, &v171, (int)&v169, (int)&v167);
  if ( (_DWORD)v168 )
    ((void (*)(void))v168)();
  if ( (_DWORD)v170 )
    ((void (*)(void))v170)();
  v166 = 1880252189;
  v38 = operator new(4u);
  LODWORD(v39) = sub_11D546A;
  *v38 = v1;
  HIDWORD(v39) = sub_11D5436;
  v164 = v38;
  v165 = v39;
  v162 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v163 = v40;
  ScreenController::bindBool((int)v1, &v166, (int)&v164, (int)&v162);
  if ( (_DWORD)v163 )
    ((void (*)(void))v163)();
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  v161 = 2097482518;
  v41 = operator new(4u);
  LODWORD(v42) = sub_11D54C8;
  *v41 = v1;
  HIDWORD(v42) = sub_11D54A0;
  v159 = v41;
  v160 = v42;
  v157 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v158 = v43;
  ScreenController::bindBool((int)v1, &v161, (int)&v159, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  v156 = -1707040861;
  v44 = operator new(4u);
  LODWORD(v45) = sub_11D5540;
  *v44 = v1;
  HIDWORD(v45) = sub_11D5500;
  v154 = v44;
  v155 = v45;
  v152 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v153 = v46;
  ScreenController::bindString((int)v1, &v156, (int)&v154, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  if ( (_DWORD)v155 )
    ((void (*)(void))v155)();
  v151 = -1845391079;
  v47 = operator new(4u);
  LODWORD(v48) = sub_11D560C;
  *v47 = v1;
  HIDWORD(v48) = sub_11D5578;
  v149 = v47;
  v150 = v48;
  ScreenController::bindForGlobal((int)v1, &v151, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  StringHash::StringHash<char [32]>(&v148, (int)"#student_button_grid_dimensions");
  v49 = operator new(4u);
  LODWORD(v50) = sub_11D56A6;
  *v49 = v1;
  HIDWORD(v50) = sub_11D5642;
  v146 = v49;
  v147 = v50;
  v144 = operator new(1u);
  LODWORD(v51) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v51) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v145 = v51;
  ScreenController::bindGridSize((int)v1, &v148, (int)&v146, (int)&v144);
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  StringHash::StringHash<char [27]>(&v143, (int)"student_buttons_collection");
  v142 = -788824672;
  v52 = operator new(4u);
  LODWORD(v53) = sub_11D5724;
  *v52 = v1;
  HIDWORD(v53) = sub_11D56DC;
  v140 = v52;
  v141 = v53;
  v138 = operator new(1u);
  LODWORD(v54) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v54) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v139 = v54;
  ScreenController::bindStringForCollection((int)v1, &v143, &v142, (int)&v140, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  StringHash::StringHash<char [27]>(&v137, (int)"student_buttons_collection");
  v136 = 2034270753;
  v55 = operator new(4u);
  LODWORD(v56) = sub_11D579C;
  *v55 = v1;
  HIDWORD(v56) = sub_11D575A;
  v134 = v55;
  v135 = v56;
  v132 = operator new(1u);
  LODWORD(v57) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v57) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v133 = v57;
  ScreenController::bindBoolForCollection((int)v1, &v137, &v136, (int)&v134, (int)&v132);
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  StringHash::StringHash<char [27]>(&v131, (int)"student_buttons_collection");
  v130 = -701192275;
  v58 = operator new(4u);
  LODWORD(v59) = sub_11D5816;
  *v58 = v1;
  HIDWORD(v59) = sub_11D57D2;
  v128 = v58;
  v129 = v59;
  v126 = operator new(1u);
  LODWORD(v60) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v60) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v127 = v60;
  ScreenController::bindBoolForCollection((int)v1, &v131, &v130, (int)&v128, (int)&v126);
  if ( (_DWORD)v127 )
    ((void (*)(void))v127)();
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  StringHash::StringHash<char [27]>(&v125, (int)"student_buttons_collection");
  StringHash::StringHash<char [24]>(&v124, (int)"#student_button_visible");
  v61 = operator new(4u);
  LODWORD(v62) = sub_11D5880;
  *v61 = v1;
  HIDWORD(v62) = sub_11D584C;
  v122 = v61;
  v123 = v62;
  v120 = operator new(1u);
  LODWORD(v63) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v63) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v121 = v63;
  ScreenController::bindBoolForCollection((int)v1, &v125, &v124, (int)&v122, (int)&v120);
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  StringHash::StringHash<char [28]>(&v119, (int)"#maximized_placeholder_text");
  v64 = operator new(4u);
  LODWORD(v65) = sub_11D5934;
  *v64 = v1;
  HIDWORD(v65) = sub_11D58B8;
  v117 = v64;
  v118 = v65;
  v115 = operator new(1u);
  LODWORD(v66) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v66) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v116 = v66;
  ScreenController::bindString((int)v1, &v119, (int)&v117, (int)&v115);
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  StringHash::StringHash<char [24]>(&v114, (int)"#maximized_edit_visible");
  v67 = operator new(4u);
  LODWORD(v68) = sub_11D597C;
  *v67 = v1;
  HIDWORD(v68) = sub_11D596A;
  v112 = v67;
  v113 = v68;
  v110 = operator new(1u);
  LODWORD(v69) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v69) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v111 = v69;
  ScreenController::bindBool((int)v1, &v114, (int)&v112, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  v109 = -449314671;
  v70 = operator new(4u);
  LODWORD(v71) = sub_11D59C4;
  *v70 = v1;
  HIDWORD(v71) = sub_11D59B2;
  v107 = v70;
  v108 = v71;
  v105 = operator new(1u);
  LODWORD(v72) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v72) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v106 = v72;
  ScreenController::bindBool((int)v1, &v109, (int)&v107, (int)&v105);
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v104 = -393170671;
  v73 = operator new(4u);
  LODWORD(v74) = sub_11D5A0A;
  *v73 = v1;
  HIDWORD(v74) = sub_11D59FA;
  v102 = v73;
  v103 = v74;
  v100 = operator new(1u);
  LODWORD(v75) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v75) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v101 = v75;
  ScreenController::bindBool((int)v1, &v104, (int)&v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  v99 = 299798288;
  v76 = operator new(4u);
  LODWORD(v77) = sub_11D5A74;
  *v76 = v1;
  HIDWORD(v77) = sub_11D5A40;
  v97 = v76;
  v98 = v77;
  v95 = operator new(1u);
  LODWORD(v78) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v78) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v96 = v78;
  ScreenController::bindBool((int)v1, &v99, (int)&v97, (int)&v95);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  v94 = -1084242795;
  v79 = operator new(4u);
  LODWORD(v80) = sub_11D5ABC;
  *v79 = v1;
  HIDWORD(v80) = sub_11D5AAA;
  v92 = v79;
  v93 = v80;
  v90 = operator new(1u);
  LODWORD(v81) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v81) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v91 = v81;
  ScreenController::bindBool((int)v1, &v94, (int)&v92, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v89 = -318513338;
  v82 = operator new(4u);
  LODWORD(v83) = sub_11D5B04;
  *v82 = v1;
  HIDWORD(v83) = sub_11D5AF2;
  v87 = v82;
  v88 = v83;
  v85 = operator new(1u);
  LODWORD(v84) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v84) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v86 = v84;
  ScreenController::bindBool((int)v1, &v89, (int)&v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
}


void __fastcall NpcInteractScreenController::~NpcInteractScreenController(NpcInteractScreenController *this)
{
  ClientInstanceScreenController *v1; // r4@1
  Entity *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E29FC;
  v2 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v2 )
    Entity::setChanged(v2);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall NpcInteractScreenController::_isStillValid(NpcInteractScreenController *this)
{
  NpcInteractScreenController *v1; // r4@1
  int v2; // r5@1
  Entity *v8; // r7@2
  int v9; // r0@2
  signed int result; // r0@3
  int v12; // [sp+0h] [bp-48h]@2
  float v13; // [sp+Ch] [bp-3Ch]@2

  v1 = this;
  v2 = ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( !v2 )
    goto LABEL_7;
  _R6 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106));
  AABB::getBounds((AABB *)&v13, v2 + 264);
  __asm
  {
    VLDR            S16, [SP,#0x48+var_3C]
    VLDR            S18, [SP,#0x48+var_38]
    VLDR            S20, [SP,#0x48+var_34]
  }
  v8 = (Entity *)*((_DWORD *)v1 + 108);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
  BlockPos::BlockPos((int)&v12, v9);
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VMUL.F32        S4, S20, S20
    VADD.F32        S0, S2, S0
    VMOV            S2, R6
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VADD.F32        S16, S0, S2
  _R0 = Entity::distanceSqrToBlockPosCenter(v8, (const BlockPos *)&v12);
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_7:
    result = MinecraftScreenController::_isStillValid(v1);
  else
    result = 0;
  return result;
}


int __fastcall NpcInteractScreenController::_getNpcComponent(NpcInteractScreenController *this)
{
  Entity *v1; // r0@1
  int result; // r0@2

  v1 = (Entity *)ClientInstanceScreenModel::getEntity(*((_DWORD *)this + 106), (unsigned __int64 *)this + 55);
  if ( v1 )
    result = j_j_j__ZNK6Entity15getNpcComponentEv(v1);
  else
    result = 0;
  return result;
}
