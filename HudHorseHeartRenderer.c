

mce::MaterialPtr *__fastcall HudHorseHeartRenderer::render(HudHorseHeartRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  HudHorseHeartRenderer *v6; // r8@1
  UIControl *v7; // r4@1
  ClientInstance *v8; // r5@1
  MinecraftUIRenderContext *v9; // r10@1
  mce::TextureGroup *v10; // r6@2
  char *v11; // r0@2
  char *v12; // r0@3
  char *v13; // r0@4
  char *v14; // r0@5
  char *v15; // r0@6
  char *v16; // r0@7
  char *v17; // r0@8
  char *v18; // r0@9
  char *v19; // r0@10
  char *v20; // r0@11
  char *v21; // r0@12
  char *v22; // r0@13
  void *v28; // r6@15
  int v29; // r0@15
  int v30; // r9@15
  mce::MaterialPtr *result; // r0@15
  int v32; // r0@16
  int v33; // r0@17
  int v34; // r0@18
  Mob *v36; // r11@19
  ClientInstance *v37; // r10@19
  unsigned int v38; // r7@19
  int v41; // r0@19
  signed int v42; // r1@19
  int v43; // r7@20
  int *v44; // r6@20
  int v45; // r5@20
  AttributeInstance *v46; // r0@21
  ClientInstance *v52; // r8@24
  Options *v53; // r0@26
  int v54; // r4@26
  int v55; // r0@26
  int v56; // r0@31
  signed int v57; // r1@31
  int v58; // r0@34
  int v59; // r0@37
  int v60; // r10@37
  ShaderColor *v61; // r0@37
  int v62; // r1@37
  signed int v63; // r9@37
  void *v65; // r0@37
  unsigned int v66; // r5@38
  void *v67; // r6@42
  void *v68; // r7@46
  void *v69; // r6@50
  void *v70; // r7@54
  void *v71; // r6@58
  UIControl *v72; // r6@61
  void *v73; // r7@62
  signed int v74; // r0@66
  float v75; // r1@68
  int v77; // r4@71
  Options *v78; // r0@71
  signed int v79; // r5@71
  int v85; // r9@75
  unsigned int v90; // r1@86
  unsigned int v91; // r0@88
  unsigned int v92; // r10@88
  _QWORD *v93; // r0@93
  int v94; // r1@93 OVERLAPPED
  __int64 *v95; // r2@93 OVERLAPPED
  _QWORD *v96; // r3@93
  __int64 *v97; // r0@93
  __int64 v98; // kr00_8@94
  void *v99; // r0@95
  int v100; // r7@95
  int v101; // r1@95
  unsigned int v102; // r1@96
  unsigned int v103; // r0@98
  unsigned int v104; // r7@98
  char *v105; // r0@103
  char *v106; // r4@103
  __int64 v107; // kr08_8@103
  char *v108; // r3@103
  __int64 *v109; // r0@103
  __int64 v110; // kr10_8@104
  void *v111; // r0@105
  char *v112; // r1@105
  unsigned int v113; // r1@110
  unsigned int v114; // r0@112
  unsigned int v115; // r7@112
  char *v116; // r0@117
  char *v117; // r4@117
  __int64 v118; // kr18_8@117
  char *v119; // r3@117
  __int64 *v120; // r0@117
  __int64 v121; // kr20_8@118
  void *v122; // r0@119
  char *v123; // r1@119
  int v124; // r10@121
  int v125; // r10@125
  unsigned int v126; // r1@130
  unsigned int v127; // r0@132
  unsigned int v128; // r7@132
  _QWORD *v129; // r0@137
  _QWORD *v130; // r3@137
  int v131; // r1@137 OVERLAPPED
  __int64 *v132; // r2@137 OVERLAPPED
  __int64 *v133; // r0@137
  __int64 v134; // r5@138
  void *v135; // r0@139
  int v136; // r1@139
  unsigned int v137; // r1@150
  unsigned int v138; // r0@152
  unsigned int v139; // r7@152
  _QWORD *v140; // r0@157
  UIControl *v141; // r10@157
  int v142; // r1@157 OVERLAPPED
  __int64 *v143; // r2@157 OVERLAPPED
  _QWORD *v144; // r3@157
  __int64 *v145; // r0@157
  __int64 v146; // kr28_8@158
  void *v147; // r0@159
  int v148; // r1@159
  unsigned int v149; // r1@160
  unsigned int v150; // r0@162
  unsigned int v151; // r7@162
  _QWORD *v152; // r0@167
  int v153; // r1@167 OVERLAPPED
  __int64 *v154; // r2@167 OVERLAPPED
  _QWORD *v155; // r3@167
  __int64 *v156; // r0@167
  __int64 v157; // kr30_8@168
  void *v158; // r0@169
  int v159; // r1@169
  unsigned int *v165; // r2@201
  signed int v166; // r1@203
  unsigned int *v167; // r2@205
  signed int v168; // r1@207
  unsigned int *v169; // r2@209
  signed int v170; // r1@211
  unsigned int *v171; // r2@213
  signed int v172; // r1@215
  unsigned int *v173; // r2@217
  signed int v174; // r1@219
  unsigned int *v175; // r2@221
  signed int v176; // r1@223
  unsigned int *v177; // r2@225
  signed int v178; // r1@227
  unsigned int *v179; // r2@229
  signed int v180; // r1@231
  unsigned int *v181; // r2@233
  signed int v182; // r1@235
  unsigned int *v183; // r2@237
  signed int v184; // r1@239
  unsigned int *v185; // r2@241
  signed int v186; // r1@243
  unsigned int *v187; // r2@245
  signed int v188; // r1@247
  unsigned int *v189; // r2@249
  signed int v190; // r1@251
  int v191; // [sp+0h] [bp-BE0h]@0
  int v192; // [sp+10h] [bp-BD0h]@65
  int v193; // [sp+14h] [bp-BCCh]@19
  UIControl *v194; // [sp+18h] [bp-BC8h]@19
  int v195; // [sp+1Ch] [bp-BC4h]@19
  int v196; // [sp+20h] [bp-BC0h]@19
  int v197; // [sp+20h] [bp-BC0h]@137
  int v198; // [sp+20h] [bp-BC0h]@157
  signed int v199; // [sp+24h] [bp-BBCh]@19
  int v200; // [sp+24h] [bp-BBCh]@70
  int v201; // [sp+28h] [bp-BB8h]@22
  signed int v202; // [sp+2Ch] [bp-BB4h]@28
  ClientInstance *v203; // [sp+30h] [bp-BB0h]@19
  ClientInstance *v204; // [sp+30h] [bp-BB0h]@61
  int v205; // [sp+34h] [bp-BACh]@19
  HudHorseHeartRenderer *v206; // [sp+38h] [bp-BA8h]@19
  signed int v207; // [sp+38h] [bp-BA8h]@71
  char v208; // [sp+3Ch] [bp-BA4h]@179
  char v209; // [sp+4Ch] [bp-B94h]@179
  void *v210; // [sp+5Ch] [bp-B84h]@61
  char *v211; // [sp+60h] [bp-B80h]@61
  char *v212; // [sp+64h] [bp-B7Ch]@61
  void *v213; // [sp+68h] [bp-B78h]@57
  char *v214; // [sp+6Ch] [bp-B74h]@57
  char *v215; // [sp+70h] [bp-B70h]@57
  void *v216; // [sp+74h] [bp-B6Ch]@53
  char *v217; // [sp+78h] [bp-B68h]@53
  char *v218; // [sp+7Ch] [bp-B64h]@53
  void *v219; // [sp+80h] [bp-B60h]@49
  char *v220; // [sp+84h] [bp-B5Ch]@49
  char *v221; // [sp+88h] [bp-B58h]@49
  void *v222; // [sp+8Ch] [bp-B54h]@45
  char *v223; // [sp+90h] [bp-B50h]@45
  char *v224; // [sp+94h] [bp-B4Ch]@45
  void *ptr; // [sp+98h] [bp-B48h]@38
  char *v226; // [sp+9Ch] [bp-B44h]@38
  char *v227; // [sp+A0h] [bp-B40h]@38
  int v228; // [sp+A8h] [bp-B38h]@37
  char v229; // [sp+ACh] [bp-B34h]@37
  int v230; // [sp+B8h] [bp-B28h]@37
  signed int v231; // [sp+BCh] [bp-B24h]@37
  signed int v232; // [sp+C0h] [bp-B20h]@37
  int v233; // [sp+C4h] [bp-B1Ch]@37
  char v234; // [sp+C8h] [bp-B18h]@37
  int v235; // [sp+D8h] [bp-B08h]@19
  int v236; // [sp+DCh] [bp-B04h]@19
  int v237; // [sp+A9Ch] [bp-144h]@19
  char v238; // [sp+AA0h] [bp-140h]@19
  int v239; // [sp+AA4h] [bp-13Ch]@19
  int v240; // [sp+AA8h] [bp-138h]@21
  char *v241; // [sp+AB0h] [bp-130h]@12
  char *v242; // [sp+AB4h] [bp-12Ch]@12
  int v243; // [sp+AB8h] [bp-128h]@12
  char v244; // [sp+ABCh] [bp-124h]@12
  char *v245; // [sp+AD8h] [bp-108h]@10
  char *v246; // [sp+ADCh] [bp-104h]@10
  int v247; // [sp+AE0h] [bp-100h]@10
  char v248; // [sp+AE4h] [bp-FCh]@10
  char *v249; // [sp+B00h] [bp-E0h]@8
  char *v250; // [sp+B04h] [bp-DCh]@8
  int v251; // [sp+B08h] [bp-D8h]@8
  char v252; // [sp+B0Ch] [bp-D4h]@8
  char *v253; // [sp+B28h] [bp-B8h]@6
  char *v254; // [sp+B2Ch] [bp-B4h]@6
  int v255; // [sp+B30h] [bp-B0h]@6
  char v256; // [sp+B34h] [bp-ACh]@6
  char *v257; // [sp+B50h] [bp-90h]@4
  char *v258; // [sp+B54h] [bp-8Ch]@4
  int v259; // [sp+B58h] [bp-88h]@4
  char v260; // [sp+B5Ch] [bp-84h]@4
  char *v261; // [sp+B78h] [bp-68h]@2
  char *v262; // [sp+B7Ch] [bp-64h]@2
  int v263; // [sp+B80h] [bp-60h]@2
  char v264; // [sp+B84h] [bp-5Ch]@2

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !HudHorseHeartRenderer::mHasLoadedTextures )
  {
    v10 = (mce::TextureGroup *)ClientInstance::getTextures(a3);
    sub_119C884((void **)&v261, "textures/ui/heart_background");
    v262 = v261;
    v261 = (char *)&unk_28898CC;
    v263 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v264, v10, (int)&v262, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8BF4, (mce::TexturePtr *)&v264);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v264);
    v11 = v262 - 12;
    if ( (int *)(v262 - 12) != &dword_28898C0 )
    {
      v167 = (unsigned int *)(v262 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v168 = __ldrex(v167);
        while ( __strex(v168 - 1, v167) );
      }
      else
        v168 = (*v167)--;
      if ( v168 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    }
    v12 = v261 - 12;
    if ( (int *)(v261 - 12) != &dword_28898C0 )
      v169 = (unsigned int *)(v261 - 4);
          v170 = __ldrex(v169);
        while ( __strex(v170 - 1, v169) );
        v170 = (*v169)--;
      if ( v170 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    sub_119C884((void **)&v257, "textures/ui/heart_blink");
    v258 = v257;
    v257 = (char *)&unk_28898CC;
    v259 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v260, v10, (int)&v258, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8C0C, (mce::TexturePtr *)&v260);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v260);
    v13 = v258 - 12;
    if ( (int *)(v258 - 12) != &dword_28898C0 )
      v171 = (unsigned int *)(v258 - 4);
          v172 = __ldrex(v171);
        while ( __strex(v172 - 1, v171) );
        v172 = (*v171)--;
      if ( v172 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = v257 - 12;
    if ( (int *)(v257 - 12) != &dword_28898C0 )
      v173 = (unsigned int *)(v257 - 4);
          v174 = __ldrex(v173);
        while ( __strex(v174 - 1, v173) );
        v174 = (*v173)--;
      if ( v174 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    sub_119C884((void **)&v253, "textures/ui/horse_heart");
    v254 = v253;
    v253 = (char *)&unk_28898CC;
    v255 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v256, v10, (int)&v254, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8C24, (mce::TexturePtr *)&v256);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v256);
    v15 = v254 - 12;
    if ( (int *)(v254 - 12) != &dword_28898C0 )
      v175 = (unsigned int *)(v254 - 4);
          v176 = __ldrex(v175);
        while ( __strex(v176 - 1, v175) );
        v176 = (*v175)--;
      if ( v176 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = v253 - 12;
    if ( (int *)(v253 - 12) != &dword_28898C0 )
      v177 = (unsigned int *)(v253 - 4);
          v178 = __ldrex(v177);
        while ( __strex(v178 - 1, v177) );
        v178 = (*v177)--;
      if ( v178 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    sub_119C884((void **)&v249, "textures/ui/horse_heart_half");
    v250 = v249;
    v249 = (char *)&unk_28898CC;
    v251 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v252, v10, (int)&v250, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8C3C, (mce::TexturePtr *)&v252);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v252);
    v17 = v250 - 12;
    if ( (int *)(v250 - 12) != &dword_28898C0 )
      v179 = (unsigned int *)(v250 - 4);
          v180 = __ldrex(v179);
        while ( __strex(v180 - 1, v179) );
        v180 = (*v179)--;
      if ( v180 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = v249 - 12;
    if ( (int *)(v249 - 12) != &dword_28898C0 )
      v181 = (unsigned int *)(v249 - 4);
          v182 = __ldrex(v181);
        while ( __strex(v182 - 1, v181) );
        v182 = (*v181)--;
      if ( v182 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    sub_119C884((void **)&v245, "textures/ui/horse_heart_flash");
    v246 = v245;
    v245 = (char *)&unk_28898CC;
    v247 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v248, v10, (int)&v246, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8C54, (mce::TexturePtr *)&v248);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v248);
    v19 = v246 - 12;
    if ( (int *)(v246 - 12) != &dword_28898C0 )
      v183 = (unsigned int *)(v246 - 4);
          v184 = __ldrex(v183);
        while ( __strex(v184 - 1, v183) );
        v184 = (*v183)--;
      if ( v184 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = v245 - 12;
    if ( (int *)(v245 - 12) != &dword_28898C0 )
      v185 = (unsigned int *)(v245 - 4);
          v186 = __ldrex(v185);
        while ( __strex(v186 - 1, v185) );
        v186 = (*v185)--;
      if ( v186 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    sub_119C884((void **)&v241, "textures/ui/horse_heart_flash_half");
    v242 = v241;
    v241 = (char *)&unk_28898CC;
    v243 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v244, v10, (int)&v242, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8C70, (mce::TexturePtr *)&v244);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v244);
    v21 = v242 - 12;
    if ( (int *)(v242 - 12) != &dword_28898C0 )
      v187 = (unsigned int *)(v242 - 4);
          v188 = __ldrex(v187);
        while ( __strex(v188 - 1, v187) );
        v188 = (*v187)--;
      if ( v188 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v22 = v241 - 12;
    if ( (int *)(v241 - 12) != &dword_28898C0 )
      v189 = (unsigned int *)(v241 - 4);
          v190 = __ldrex(v189);
        while ( __strex(v190 - 1, v189) );
        v190 = (*v189)--;
      if ( v190 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
    HudHorseHeartRenderer::mHasLoadedTextures = 1;
  }
  _R0 = (ScreenRenderer *)getTimeS();
  __asm
    VMOV.F64        D0, #20.0
    VMOV            D1, R0, R1
    VMUL.F64        D0, D1, D0
    VCVTR.S32.F64   S16, D0
  v28 = ScreenRenderer::singleton(_R0);
  v29 = ClientInstance::getLocalPlayer(v8);
  v30 = v29;
  result = *(mce::MaterialPtr **)(v29 + 512);
  if ( result )
    v32 = (*(int (**)(void))(*(_DWORD *)result + 488))();
    if ( EntityClassTree::isTypeInstanceOf(v32, 2118400)
      || (v33 = (*(int (**)(void))(**(_DWORD **)(v30 + 512) + 488))(), EntityClassTree::isTypeInstanceOf(v33, 4876))
      || (v34 = (*(int (**)(void))(**(_DWORD **)(v30 + 512) + 488))(),
          result = (mce::MaterialPtr *)EntityClassTree::isTypeInstanceOf(v34, 4893),
          result == (mce::MaterialPtr *)1) )
      v206 = v6;
      __asm { VMOV            R8, S16 }
      v36 = *(Mob **)(v30 + 512);
      v194 = v7;
      v203 = v9;
      v37 = v8;
      v193 = (int)v28;
      v199 = *((_DWORD *)v36 + 105);
      v38 = 312871 * _R8;
      _R0 = 1431655766;
      __asm { SMMUL.W         R4, R1, R0 }
      v205 = Mob::getHealth(*(Mob **)(v30 + 512));
      v195 = *((_DWORD *)v36 + 857);
      v235 = 312871 * _R8;
      v237 = 625;
      v41 = 0;
      v196 = (signed int)(_R4 + (_R4 >> 31)) % 2;
      v42 = 1;
      v238 = 0;
      v239 = 0;
      v236 = 312871 * _R8;
      do
        v43 = v38 ^ (v38 >> 30);
        v44 = &v235 + v41;
        v45 = v41++ + 1812433253 * v43;
        v38 = v42++ + 1812433253 * v43;
        v44[2] = v45 + 1;
      while ( v41 != 397 );
      v237 = 624;
      v240 = 398;
      v46 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v36 + 1004))(
                                   v36,
                                   &SharedAttributes::HEALTH);
      _R0 = AttributeInstance::getMaxValue(v46);
      __asm
        VMOV            S0, R0
        VCVTR.S32.F32   S0, S0
        VMOV            R5, S0
      if ( Mob::hasEffect(v36, (const MobEffect *)MobEffect::REGENERATION) == 1 )
        LODWORD(_R0) = _R5 + 5;
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.S32    D0, S0
          VMOV            R0, R1, D0
        }
        _R0 = COERCE_UNSIGNED_INT64(ceil(_R0));
          VMOV            D0, R0, R1
          VCVTR.S32.F64   S0, D0
          VMOV            R1, S0
        v201 = _R8 % _R1;
        v201 = -1;
      v52 = v37;
      if ( !Mob::hasEffect(v36, (const MobEffect *)MobEffect::POISON) )
        Mob::hasEffect(v36, (const MobEffect *)MobEffect::WITHER);
      v53 = (Options *)ClientInstance::getOptions(v37);
      v54 = Options::getUIProfile(v53);
      v55 = (*(int (__fastcall **)(int))(*(_DWORD *)v30 + 652))(v30);
      if ( v54 )
        if ( v55 )
          v202 = 0;
        else
          v56 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v30 + 220))(v30, 5);
          v57 = 10;
          if ( v56 )
            v57 = 20;
          v202 = v57;
      else if ( v55 )
        v202 = 16;
        v58 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v30 + 220))(v30, 5);
        if ( v58 )
          v58 = -10;
        v202 = v58;
      RectangleArea::RectangleArea((RectangleArea *)&v234);
      v59 = MinecraftUIRenderContext::getScreenContext(v203);
      v60 = v59;
      v61 = *(ShaderColor **)(v59 + 48);
      v62 = *((_DWORD *)v206 + 1);
      v230 = 1065353216;
      v231 = 1065353216;
      v232 = 1065353216;
      v233 = v62;
      ShaderColor::setColor(v61, (const Color *)&v230);
      sub_119C884((void **)&v228, "ui_textured_and_glcolor");
      mce::MaterialPtr::MaterialPtr(
        (mce::MaterialPtr *)&v229,
        (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
        &v228);
      v63 = _R5;
      _R4 = _R5 / 2;
      v65 = (void *)(v228 - 12);
      if ( (int *)(v228 - 12) != &dword_28898C0 )
        v165 = (unsigned int *)(v228 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v166 = __ldrex(v165);
          while ( __strex(v166 - 1, v165) );
          v166 = (*v165)--;
        if ( v166 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v65);
      v66 = _R5 / 2;
      ptr = 0;
      v226 = 0;
      v227 = 0;
      if ( _R4 < 1 )
        v66 = 1;
      if ( v66 >= 0x20000000 )
        sub_119C9C4("vector::reserve");
      if ( v66 )
        v67 = operator new(8 * v66);
        if ( ptr )
          operator delete(ptr);
        ptr = v67;
        v226 = (char *)v67;
        v227 = (char *)v67 + 8 * v66;
      v222 = 0;
      v223 = 0;
      v224 = 0;
        v68 = operator new(8 * v66);
        if ( v222 )
          operator delete(v222);
        v222 = v68;
        v223 = (char *)v68;
        v224 = (char *)v68 + 8 * v66;
      v219 = 0;
      v220 = 0;
      v221 = 0;
        v69 = operator new(8 * v66);
        if ( v219 )
          operator delete(v219);
        v219 = v69;
        v220 = (char *)v69;
        v221 = (char *)v69 + 8 * v66;
      v216 = 0;
      v217 = 0;
      v218 = 0;
        v70 = operator new(8 * v66);
        if ( v216 )
          operator delete(v216);
        v216 = v70;
        v217 = (char *)v70;
        v218 = (char *)v70 + 8 * v66;
      v213 = 0;
      v214 = 0;
      v215 = 0;
        v71 = operator new(8 * v66);
        if ( v213 )
          operator delete(v213);
        v213 = v71;
        v214 = (char *)v71;
        v215 = (char *)v71 + 8 * v66;
      v204 = v52;
      v210 = 0;
      v211 = 0;
      v72 = v194;
      v212 = 0;
        v73 = operator new(8 * v66);
        if ( v210 )
          operator delete(v210);
        v210 = v73;
        v211 = (char *)v73;
        v212 = (char *)v73 + 8 * v66;
      v192 = v60;
      if ( v63 >= 2 )
        __asm { VLDR            S16, =0.1 }
        v74 = 0;
        if ( v199 > 9 )
          v74 = 1;
        v75 = *(float *)&v196;
        if ( v196 != 1 )
          v75 = 0.0;
        v200 = v74 & LODWORD(v75);
          __asm { VMOV            S0, R4 }
          v207 = _R4;
          __asm
          {
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S16
            VMOV            R0, S0
          }
          v77 = mce::Math::ceil(_R0, v75);
          v78 = (Options *)ClientInstance::getOptions(v204);
          v79 = 1;
          if ( !Options::getUIProfile(v78) )
            v79 = -1;
          _R0 = UIControl::getPosition(v72);
            VLDR            S0, [R0]
            VCVTR.S32.F32   S18, S0
            VLDR            S0, [R0,#4]
            VCVTR.S32.F32   S0, S0
          _R11 = v202 + v79 * (10 * v77 - 10) + _R0;
          if ( v205 <= 4 )
            _R11 = (Random::_genRandInt32((Random *)&v235) & 1) + _R11 - 1;
          _R8 = v207 - 1;
          v85 = 2 * (v207 - 1) | 1;
          _R0 = 1717986919;
            SMMUL.W         R0, R8, R0
            VMOV            R1, S18
          HIDWORD(_R4) = _R1 - 8 * (v207 - 1 - 10 * (((signed int)_R0 >> 2) + (_R0 >> 31))) - 8;
            VMOV            S0, R5
            VCVT.F32.S32    S18, S0
          if ( v207 - 1 == v201 )
            _R11 += 2;
            VMOV            S0, R11
            VCVT.F32.S32    S20, S0
          if ( v200 == 1 )
            if ( v85 >= v195 )
            {
              if ( v85 == v195 )
              {
                if ( v211 == v212 )
                {
                  v113 = (v211 - (_BYTE *)v210) >> 3;
                  if ( !v113 )
                    v113 = 1;
                  v114 = v113 + ((v211 - (_BYTE *)v210) >> 3);
                  v115 = v114;
                  if ( 0 != v114 >> 29 )
                    v115 = 0x1FFFFFFF;
                  if ( v114 < v113 )
                  if ( v115 >= 0x20000000 )
                    sub_119C874();
                  v116 = (char *)operator new(8 * v115);
                  v117 = v116;
                  v118 = *(_QWORD *)&v210;
                  v119 = v116;
                  __asm
                  {
                    VSTR            S18, [R0]
                    VSTR            S20, [R0,#4]
                  }
                  v120 = (__int64 *)v210;
                  if ( _ZF )
                    v122 = v210;
                    v123 = v117;
                  else
                    do
                    {
                      v121 = *v120;
                      ++v120;
                      *(_QWORD *)v119 = v121;
                      v119 += 8;
                    }
                    while ( (__int64 *)HIDWORD(v118) != v120 );
                    v123 = &v117[((HIDWORD(v118) - 8 - v118) & 0xFFFFFFF8) + 8];
                  v125 = (int)(v123 + 8);
                  if ( v122 )
                    operator delete(v122);
                  v210 = v117;
                  v211 = (char *)v125;
                  v212 = &v117[8 * v115];
                }
                else
                  v211 += 8;
              }
            }
            else if ( v214 == v215 )
              v102 = (v214 - (_BYTE *)v213) >> 3;
              if ( !v102 )
                v102 = 1;
              v103 = v102 + ((v214 - (_BYTE *)v213) >> 3);
              v104 = v103;
              if ( 0 != v103 >> 29 )
                v104 = 0x1FFFFFFF;
              if ( v103 < v102 )
              if ( v104 >= 0x20000000 )
                sub_119C874();
              v105 = (char *)operator new(8 * v104);
              v106 = v105;
              v107 = *(_QWORD *)&v213;
              v108 = v105;
              __asm
                VSTR            S18, [R0]
                VSTR            S20, [R0,#4]
              v109 = (__int64 *)v213;
              if ( _ZF )
                v111 = v213;
                v112 = v106;
              else
                do
                  v110 = *v109;
                  ++v109;
                  *(_QWORD *)v108 = v110;
                  v108 += 8;
                while ( (__int64 *)HIDWORD(v107) != v109 );
                v112 = &v106[((HIDWORD(v107) - 8 - v107) & 0xFFFFFFF8) + 8];
              v124 = (int)(v112 + 8);
              if ( v111 )
                operator delete(v111);
              v213 = v106;
              v214 = (char *)v124;
              v215 = &v106[8 * v104];
            else
              v214 += 8;
            if ( v223 == v224 )
              v126 = (v223 - (_BYTE *)v222) >> 3;
              if ( !v126 )
                v126 = 1;
              v127 = v126 + ((v223 - (_BYTE *)v222) >> 3);
              v128 = v127;
              if ( 0 != v127 >> 29 )
                v128 = 0x1FFFFFFF;
              if ( v127 < v126 )
              if ( v128 >= 0x20000000 )
              v129 = operator new(8 * v128);
              LODWORD(_R4) = v129;
              v197 = HIDWORD(_R4);
              v130 = v129;
              *(_QWORD *)&v131 = *(_QWORD *)&v222;
              v133 = (__int64 *)v222;
                v135 = v222;
                v136 = _R4;
                  v134 = *v133;
                  ++v133;
                  *v130 = v134;
                  ++v130;
                while ( v132 != v133 );
                v136 = (((unsigned int)v132 + -v131 - 8) & 0xFFFFFFF8) + _R4 + 8;
              HIDWORD(_R4) = v136 + 8;
              if ( v135 )
                operator delete(v135);
              *(_QWORD *)&v222 = _R4;
              v224 = (char *)(_R4 + 8 * v128);
              v72 = v194;
              HIDWORD(_R4) = v197;
              v223 += 8;
          else if ( v226 == v227 )
            v90 = (v226 - (_BYTE *)ptr) >> 3;
            if ( !v90 )
              v90 = 1;
            v91 = v90 + ((v226 - (_BYTE *)ptr) >> 3);
            v92 = v91;
            if ( 0 != v91 >> 29 )
              v92 = 0x1FFFFFFF;
            if ( v91 < v90 )
            if ( v92 >= 0x20000000 )
              sub_119C874();
            v93 = operator new(8 * v92);
            LODWORD(_R4) = v93;
            *(_QWORD *)&v94 = *(_QWORD *)&ptr;
            v96 = v93;
            __asm
              VSTR            S18, [R0]
              VSTR            S20, [R0,#4]
            v97 = (__int64 *)ptr;
            if ( _ZF )
              v99 = ptr;
              v100 = HIDWORD(_R4);
              v101 = _R4;
              do
                v98 = *v97;
                ++v97;
                *v96 = v98;
                ++v96;
              while ( v95 != v97 );
              v101 = (((unsigned int)v95 + -v94 - 8) & 0xFFFFFFF8) + _R4 + 8;
            HIDWORD(_R4) = v101 + 8;
            if ( v99 )
              operator delete(v99);
            *(_QWORD *)&ptr = _R4;
            HIDWORD(_R4) = v100;
            v72 = v194;
            v227 = (char *)(_R4 + 8 * v92);
          else
            v226 += 8;
          if ( v85 >= v205 )
            if ( v85 == v205 )
              if ( v217 == v218 )
                v149 = (v217 - (_BYTE *)v216) >> 3;
                if ( !v149 )
                  v149 = 1;
                v150 = v149 + ((v217 - (_BYTE *)v216) >> 3);
                v151 = v150;
                if ( 0 != v150 >> 29 )
                  v151 = 0x1FFFFFFF;
                if ( v150 < v149 )
                if ( v151 >= 0x20000000 )
                  sub_119C874();
                v152 = operator new(8 * v151);
                LODWORD(_R4) = v152;
                v198 = HIDWORD(_R4);
                v141 = v72;
                *(_QWORD *)&v153 = *(_QWORD *)&v216;
                v155 = v152;
                __asm
                  VSTR            S18, [R0]
                  VSTR            S20, [R0,#4]
                v156 = (__int64 *)v216;
                if ( _ZF )
                  v158 = v216;
                  v159 = _R4;
                  do
                    v157 = *v156;
                    ++v156;
                    *v155 = v157;
                    ++v155;
                  while ( v154 != v156 );
                  v159 = (((unsigned int)v154 + -v153 - 8) & 0xFFFFFFF8) + _R4 + 8;
                HIDWORD(_R4) = v159 + 8;
                if ( v158 )
                  operator delete(v158);
                *(_QWORD *)&v216 = _R4;
                v218 = (char *)(_R4 + 8 * v151);
                goto LABEL_178;
              v217 += 8;
            if ( v220 == v221 )
              v137 = (v220 - (_BYTE *)v219) >> 3;
              if ( !v137 )
                v137 = 1;
              v138 = v137 + ((v220 - (_BYTE *)v219) >> 3);
              v139 = v138;
              if ( 0 != v138 >> 29 )
                v139 = 0x1FFFFFFF;
              if ( v138 < v137 )
              if ( v139 >= 0x20000000 )
              v140 = operator new(8 * v139);
              LODWORD(_R4) = v140;
              v198 = HIDWORD(_R4);
              v141 = v72;
              *(_QWORD *)&v142 = *(_QWORD *)&v219;
              v144 = v140;
              v145 = (__int64 *)v219;
                v147 = v219;
                v148 = _R4;
                  v146 = *v145;
                  ++v145;
                  *v144 = v146;
                  ++v144;
                while ( v143 != v145 );
                v148 = (((unsigned int)v143 + -v142 - 8) & 0xFFFFFFF8) + _R4 + 8;
              HIDWORD(_R4) = v148 + 8;
              if ( v147 )
                operator delete(v147);
              *(_QWORD *)&v219 = _R4;
              v221 = (char *)(_R4 + 8 * v139);
LABEL_178:
              HIDWORD(_R4) = v198;
              v72 = v141;
              goto LABEL_179;
            v220 += 8;
LABEL_179:
          __asm { VMOV            R1, S18 }
          _R0 = HIDWORD(_R4) + 9;
            VMOV            R2, S20
            VMOV            S0, R0
          _R0 = _R11 + 9;
            VMOV            R3, S0
            VSTR            S0, [SP,#0xBE0+var_BE0]
          RectangleArea::RectangleArea(COERCE_FLOAT(&v209), _R1, _R2, _R3, v191);
          RectangleArea::unionRects((RectangleArea *)&v208, (const RectangleArea *)&v234, (int)&v209);
          RectangleArea::operator=((int)&v234, (int)&v208);
          _R4 = v207 - 1;
        while ( v207 > 1 );
      RectangleArea::operator=((int)a6, (int)&v234);
      ScreenRenderer::blitQuadBuffer(
        v193,
        (unsigned __int64 *)&ptr,
        1091567616,
        v192,
        (mce::TexturePtr *)&unk_27D8BF4,
        &v229);
        (unsigned __int64 *)&v222,
        (mce::TexturePtr *)&unk_27D8C0C,
        (unsigned __int64 *)&v213,
        (mce::TexturePtr *)&unk_27D8C54,
        (unsigned __int64 *)&v210,
        (mce::TexturePtr *)&unk_27D8C70,
        (unsigned __int64 *)&v219,
        (mce::TexturePtr *)&unk_27D8C24,
        (unsigned __int64 *)&v216,
        (mce::TexturePtr *)&unk_27D8C3C,
      if ( v210 )
        operator delete(v210);
      if ( v213 )
        operator delete(v213);
      if ( v216 )
        operator delete(v216);
      if ( v219 )
        operator delete(v219);
      if ( v222 )
        operator delete(v222);
      if ( ptr )
        operator delete(ptr);
      result = mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v229);
  return result;
}


void __fastcall HudHorseHeartRenderer::~HudHorseHeartRenderer(HudHorseHeartRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall HudHorseHeartRenderer::~HudHorseHeartRenderer(HudHorseHeartRenderer *this)
{
  HudHorseHeartRenderer::~HudHorseHeartRenderer(this);
}


int __fastcall HudHorseHeartRenderer::clone(HudHorseHeartRenderer *this)
{
  HudHorseHeartRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI21HudHorseHeartRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


_QWORD *__fastcall HudHorseHeartRenderer::HudHorseHeartRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0350;
  return result;
}
