

unsigned __int8 *__fastcall HudHungerRenderer::reloadTexutres(HudHungerRenderer *this)
{
  unsigned __int8 *result; // r0@1

  result = HudHungerRenderer::mHasLoadedTextures;
  HudHungerRenderer::mHasLoadedTextures[0] = 0;
  return result;
}


signed int __fastcall HudHungerRenderer::update(HudHungerRenderer *this, ClientInstance *a2, UIControl *a3)
{
  ++*((_DWORD *)this + 2);
  return 1;
}


_QWORD *__fastcall HudHungerRenderer::HudHungerRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26D6C80;
  return result;
}


void __fastcall HudHungerRenderer::~HudHungerRenderer(HudHungerRenderer *this)
{
  HudHungerRenderer::~HudHungerRenderer(this);
}


mce::MaterialPtr *__fastcall HudHungerRenderer::render(HudHungerRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r11@1
  ClientInstance *v7; // r7@1
  MinecraftUIRenderContext *v8; // r9@1
  ScreenRenderer *v9; // r0@1
  mce::TextureGroup *v10; // r5@2
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
  char *v23; // r0@14
  char *v24; // r0@15
  char *v25; // r0@16
  char *v26; // r0@17
  char *v27; // r0@18
  char *v28; // r0@19
  char *v29; // r0@20
  char *v30; // r0@21
  char *v31; // r0@22
  char *v32; // r0@23
  Mob *v33; // r10@25
  AttributeInstance *v34; // r0@25
  AttributeInstance *v40; // r0@25
  unsigned int v44; // r0@28
  int v45; // r1@28
  signed int v46; // r2@28
  int v47; // r0@29
  int *v48; // r4@29
  int v49; // r5@29
  char v50; // r0@30
  int v52; // r4@33
  int v53; // r0@33
  int v54; // r9@33
  ShaderColor *v55; // r0@33
  int v56; // r1@33
  mce::TexturePtr *v57; // r3@33
  __int64 v58; // r10@35
  mce::TexturePtr *v59; // r3@35
  mce::TexturePtr *v60; // r5@37
  int v61; // r7@41
  void *v62; // r0@41
  unsigned int v63; // r5@42
  void *v64; // r4@46
  void *v65; // r4@50
  void *v66; // r4@54
  void *v67; // r4@58
  void *v68; // r4@62
  unsigned int v73; // r1@72
  unsigned int v74; // r0@74
  unsigned int v75; // r9@74
  char *v76; // r0@79
  char *v77; // r10@79
  int v78; // r1@79 OVERLAPPED
  __int64 *v79; // r2@79 OVERLAPPED
  char *v80; // r3@79
  __int64 *v81; // r0@79
  __int64 v82; // kr00_8@80
  void *v83; // r0@81
  unsigned int v84; // r1@81
  int v85; // r6@83
  int v86; // r0@86
  unsigned int v87; // r1@92
  unsigned int v88; // r0@94
  unsigned int v89; // r6@94
  _QWORD *v90; // r0@99
  int v91; // r1@99 OVERLAPPED
  __int64 *v92; // r2@99 OVERLAPPED
  int v93; // r10@99
  int v94; // r9@99
  _QWORD *v95; // r3@99
  __int64 *v96; // r0@99
  __int64 v97; // kr08_8@100
  void *v98; // r0@101
  int v99; // r1@101
  unsigned int v100; // r1@102
  unsigned int v101; // r0@104
  unsigned int v102; // r6@104
  _QWORD *v103; // r0@109
  int v104; // r1@109 OVERLAPPED
  __int64 *v105; // r2@109 OVERLAPPED
  _QWORD *v106; // r3@109
  __int64 *v107; // r0@109
  __int64 v108; // kr10_8@110
  void *v109; // r0@111
  int v110; // r1@111
  unsigned int *v117; // r2@136
  signed int v118; // r1@138
  unsigned int *v119; // r2@144
  signed int v120; // r1@146
  unsigned int *v121; // r2@148
  signed int v122; // r1@150
  unsigned int *v123; // r2@152
  signed int v124; // r1@154
  unsigned int *v125; // r2@156
  signed int v126; // r1@158
  unsigned int *v127; // r2@160
  signed int v128; // r1@162
  unsigned int *v129; // r2@164
  signed int v130; // r1@166
  unsigned int *v131; // r2@168
  signed int v132; // r1@170
  unsigned int *v133; // r2@172
  signed int v134; // r1@174
  unsigned int *v135; // r2@176
  signed int v136; // r1@178
  unsigned int *v137; // r2@180
  signed int v138; // r1@182
  unsigned int *v139; // r2@184
  signed int v140; // r1@186
  unsigned int *v141; // r2@188
  signed int v142; // r1@190
  unsigned int *v143; // r2@192
  signed int v144; // r1@194
  unsigned int *v145; // r2@196
  signed int v146; // r1@198
  unsigned int *v147; // r2@200
  signed int v148; // r1@202
  unsigned int *v149; // r2@204
  signed int v150; // r1@206
  unsigned int *v151; // r2@208
  signed int v152; // r1@210
  unsigned int *v153; // r2@212
  signed int v154; // r1@214
  unsigned int *v155; // r2@216
  signed int v156; // r1@218
  unsigned int *v157; // r2@220
  signed int v158; // r1@222
  unsigned int *v159; // r2@224
  signed int v160; // r1@226
  unsigned int *v161; // r2@228
  signed int v162; // r1@230
  int v163; // [sp+0h] [bp-CA0h]@0
  __int64 v164; // [sp+10h] [bp-C90h]@57
  mce::TexturePtr *v165; // [sp+18h] [bp-C88h]@41
  int v166; // [sp+1Ch] [bp-C84h]@57
  mce::TexturePtr *v167; // [sp+20h] [bp-C80h]@37
  mce::TexturePtr *v168; // [sp+24h] [bp-C7Ch]@35
  void *v169; // [sp+28h] [bp-C78h]@25
  int v170; // [sp+2Ch] [bp-C74h]@65
  int v171; // [sp+30h] [bp-C70h]@41
  signed int v172; // [sp+34h] [bp-C6Ch]@65
  HudHungerRenderer *v173; // [sp+38h] [bp-C68h]@1
  int v174; // [sp+3Ch] [bp-C64h]@65
  int v175; // [sp+40h] [bp-C60h]@28
  int v176; // [sp+44h] [bp-C5Ch]@70
  char v177; // [sp+48h] [bp-C58h]@121
  char v178; // [sp+58h] [bp-C48h]@121
  void *v179; // [sp+68h] [bp-C38h]@61
  void *v180; // [sp+6Ch] [bp-C34h]@61
  char *v181; // [sp+70h] [bp-C30h]@61
  void *v182; // [sp+74h] [bp-C2Ch]@57
  void *v183; // [sp+78h] [bp-C28h]@57
  char *v184; // [sp+7Ch] [bp-C24h]@57
  void *v185; // [sp+80h] [bp-C20h]@53
  char *v186; // [sp+84h] [bp-C1Ch]@53
  char *v187; // [sp+88h] [bp-C18h]@53
  void *v188; // [sp+8Ch] [bp-C14h]@49
  char *v189; // [sp+90h] [bp-C10h]@49
  char *v190; // [sp+94h] [bp-C0Ch]@49
  void *ptr; // [sp+98h] [bp-C08h]@42
  char *v192; // [sp+9Ch] [bp-C04h]@42
  char *v193; // [sp+A0h] [bp-C00h]@42
  int v194; // [sp+A8h] [bp-BF8h]@41
  char v195; // [sp+ACh] [bp-BF4h]@41
  int v196; // [sp+B8h] [bp-BE8h]@33
  signed int v197; // [sp+BCh] [bp-BE4h]@33
  signed int v198; // [sp+C0h] [bp-BE0h]@33
  int v199; // [sp+C4h] [bp-BDCh]@33
  unsigned int v200; // [sp+C8h] [bp-BD8h]@28
  unsigned int v201; // [sp+CCh] [bp-BD4h]@28
  int v202; // [sp+A8Ch] [bp-214h]@28
  char v203; // [sp+A90h] [bp-210h]@28
  int v204; // [sp+A94h] [bp-20Ch]@28
  int v205; // [sp+A98h] [bp-208h]@30
  char v206; // [sp+A9Ch] [bp-204h]@25
  char *v207; // [sp+AB0h] [bp-1F0h]@22
  char *v208; // [sp+AB4h] [bp-1ECh]@22
  int v209; // [sp+AB8h] [bp-1E8h]@22
  char v210; // [sp+ABCh] [bp-1E4h]@22
  char *v211; // [sp+AD8h] [bp-1C8h]@20
  char *v212; // [sp+ADCh] [bp-1C4h]@20
  int v213; // [sp+AE0h] [bp-1C0h]@20
  char v214; // [sp+AE4h] [bp-1BCh]@20
  char *v215; // [sp+B00h] [bp-1A0h]@18
  char *v216; // [sp+B04h] [bp-19Ch]@18
  int v217; // [sp+B08h] [bp-198h]@18
  char v218; // [sp+B0Ch] [bp-194h]@18
  char *v219; // [sp+B28h] [bp-178h]@16
  char *v220; // [sp+B2Ch] [bp-174h]@16
  int v221; // [sp+B30h] [bp-170h]@16
  char v222; // [sp+B34h] [bp-16Ch]@16
  char *v223; // [sp+B50h] [bp-150h]@14
  char *v224; // [sp+B54h] [bp-14Ch]@14
  int v225; // [sp+B58h] [bp-148h]@14
  char v226; // [sp+B5Ch] [bp-144h]@14
  char *v227; // [sp+B78h] [bp-128h]@12
  char *v228; // [sp+B7Ch] [bp-124h]@12
  int v229; // [sp+B80h] [bp-120h]@12
  char v230; // [sp+B84h] [bp-11Ch]@12
  char *v231; // [sp+BA0h] [bp-100h]@10
  char *v232; // [sp+BA4h] [bp-FCh]@10
  int v233; // [sp+BA8h] [bp-F8h]@10
  char v234; // [sp+BACh] [bp-F4h]@10
  char *v235; // [sp+BC8h] [bp-D8h]@8
  char *v236; // [sp+BCCh] [bp-D4h]@8
  int v237; // [sp+BD0h] [bp-D0h]@8
  char v238; // [sp+BD4h] [bp-CCh]@8
  char *v239; // [sp+BF0h] [bp-B0h]@6
  char *v240; // [sp+BF4h] [bp-ACh]@6
  int v241; // [sp+BF8h] [bp-A8h]@6
  char v242; // [sp+BFCh] [bp-A4h]@6
  char *v243; // [sp+C18h] [bp-88h]@4
  char *v244; // [sp+C1Ch] [bp-84h]@4
  int v245; // [sp+C20h] [bp-80h]@4
  char v246; // [sp+C24h] [bp-7Ch]@4
  char *v247; // [sp+C40h] [bp-60h]@2
  char *v248; // [sp+C44h] [bp-5Ch]@2
  int v249; // [sp+C48h] [bp-58h]@2
  char v250; // [sp+C4Ch] [bp-54h]@2

  v173 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (ScreenRenderer *)HudHungerRenderer::mHasLoadedTextures[0];
  if ( !HudHungerRenderer::mHasLoadedTextures[0] )
  {
    v10 = (mce::TextureGroup *)ClientInstance::getTextures(a3);
    sub_DA7364((void **)&v247, "textures/ui/hunger_background");
    v248 = v247;
    v247 = (char *)&unk_28898CC;
    v249 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v250, v10, (int)&v248, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C68E0, (mce::TexturePtr *)&v250);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v250);
    v11 = v248 - 12;
    if ( (int *)(v248 - 12) != &dword_28898C0 )
    {
      v119 = (unsigned int *)(v248 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v120 = __ldrex(v119);
        while ( __strex(v120 - 1, v119) );
      }
      else
        v120 = (*v119)--;
      if ( v120 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    }
    v12 = v247 - 12;
    if ( (int *)(v247 - 12) != &dword_28898C0 )
      v121 = (unsigned int *)(v247 - 4);
          v122 = __ldrex(v121);
        while ( __strex(v122 - 1, v121) );
        v122 = (*v121)--;
      if ( v122 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    sub_DA7364((void **)&v243, "textures/ui/hunger_blink");
    v244 = v243;
    v243 = (char *)&unk_28898CC;
    v245 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v246, v10, (int)&v244, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C68F8, (mce::TexturePtr *)&v246);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v246);
    v13 = v244 - 12;
    if ( (int *)(v244 - 12) != &dword_28898C0 )
      v123 = (unsigned int *)(v244 - 4);
          v124 = __ldrex(v123);
        while ( __strex(v124 - 1, v123) );
        v124 = (*v123)--;
      if ( v124 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = v243 - 12;
    if ( (int *)(v243 - 12) != &dword_28898C0 )
      v125 = (unsigned int *)(v243 - 4);
          v126 = __ldrex(v125);
        while ( __strex(v126 - 1, v125) );
        v126 = (*v125)--;
      if ( v126 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    sub_DA7364((void **)&v239, "textures/ui/hunger_effect_background");
    v240 = v239;
    v239 = (char *)&unk_28898CC;
    v241 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v242, v10, (int)&v240, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6910, (mce::TexturePtr *)&v242);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v242);
    v15 = v240 - 12;
    if ( (int *)(v240 - 12) != &dword_28898C0 )
      v127 = (unsigned int *)(v240 - 4);
          v128 = __ldrex(v127);
        while ( __strex(v128 - 1, v127) );
        v128 = (*v127)--;
      if ( v128 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    v16 = v239 - 12;
    if ( (int *)(v239 - 12) != &dword_28898C0 )
      v129 = (unsigned int *)(v239 - 4);
          v130 = __ldrex(v129);
        while ( __strex(v130 - 1, v129) );
        v130 = (*v129)--;
      if ( v130 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    sub_DA7364((void **)&v235, "textures/ui/hunger_full");
    v236 = v235;
    v235 = (char *)&unk_28898CC;
    v237 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v238, v10, (int)&v236, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6928, (mce::TexturePtr *)&v238);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v238);
    v17 = v236 - 12;
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v131 = (unsigned int *)(v236 - 4);
          v132 = __ldrex(v131);
        while ( __strex(v132 - 1, v131) );
        v132 = (*v131)--;
      if ( v132 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    v18 = v235 - 12;
    if ( (int *)(v235 - 12) != &dword_28898C0 )
      v133 = (unsigned int *)(v235 - 4);
          v134 = __ldrex(v133);
        while ( __strex(v134 - 1, v133) );
        v134 = (*v133)--;
      if ( v134 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    sub_DA7364((void **)&v231, "textures/ui/hunger_half");
    v232 = v231;
    v231 = (char *)&unk_28898CC;
    v233 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v234, v10, (int)&v232, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6940, (mce::TexturePtr *)&v234);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v234);
    v19 = v232 - 12;
    if ( (int *)(v232 - 12) != &dword_28898C0 )
      v135 = (unsigned int *)(v232 - 4);
          v136 = __ldrex(v135);
        while ( __strex(v136 - 1, v135) );
        v136 = (*v135)--;
      if ( v136 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    v20 = v231 - 12;
    if ( (int *)(v231 - 12) != &dword_28898C0 )
      v137 = (unsigned int *)(v231 - 4);
          v138 = __ldrex(v137);
        while ( __strex(v138 - 1, v137) );
        v138 = (*v137)--;
      if ( v138 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
    sub_DA7364((void **)&v227, "textures/ui/hunger_flash_full");
    v228 = v227;
    v227 = (char *)&unk_28898CC;
    v229 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v230, v10, (int)&v228, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6958, (mce::TexturePtr *)&v230);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v230);
    v21 = v228 - 12;
    if ( (int *)(v228 - 12) != &dword_28898C0 )
      v139 = (unsigned int *)(v228 - 4);
          v140 = __ldrex(v139);
        while ( __strex(v140 - 1, v139) );
        v140 = (*v139)--;
      if ( v140 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
    v22 = v227 - 12;
    if ( (int *)(v227 - 12) != &dword_28898C0 )
      v141 = (unsigned int *)(v227 - 4);
          v142 = __ldrex(v141);
        while ( __strex(v142 - 1, v141) );
        v142 = (*v141)--;
      if ( v142 <= 0 )
        j_j_j_j_j__ZdlPv_9(v22);
    sub_DA7364((void **)&v223, "textures/ui/hunger_flash_half");
    v224 = v223;
    v223 = (char *)&unk_28898CC;
    v225 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v226, v10, (int)&v224, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6970, (mce::TexturePtr *)&v226);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v226);
    v23 = v224 - 12;
    if ( (int *)(v224 - 12) != &dword_28898C0 )
      v143 = (unsigned int *)(v224 - 4);
          v144 = __ldrex(v143);
        while ( __strex(v144 - 1, v143) );
        v144 = (*v143)--;
      if ( v144 <= 0 )
        j_j_j_j_j__ZdlPv_9(v23);
    v24 = v223 - 12;
    if ( (int *)(v223 - 12) != &dword_28898C0 )
      v145 = (unsigned int *)(v223 - 4);
          v146 = __ldrex(v145);
        while ( __strex(v146 - 1, v145) );
        v146 = (*v145)--;
      if ( v146 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
    sub_DA7364((void **)&v219, "textures/ui/hunger_effect_full");
    v220 = v219;
    v219 = (char *)&unk_28898CC;
    v221 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v222, v10, (int)&v220, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6988, (mce::TexturePtr *)&v222);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v222);
    v25 = v220 - 12;
    if ( (int *)(v220 - 12) != &dword_28898C0 )
      v147 = (unsigned int *)(v220 - 4);
          v148 = __ldrex(v147);
        while ( __strex(v148 - 1, v147) );
        v148 = (*v147)--;
      if ( v148 <= 0 )
        j_j_j_j_j__ZdlPv_9(v25);
    v26 = v219 - 12;
    if ( (int *)(v219 - 12) != &dword_28898C0 )
      v149 = (unsigned int *)(v219 - 4);
          v150 = __ldrex(v149);
        while ( __strex(v150 - 1, v149) );
        v150 = (*v149)--;
      if ( v150 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    sub_DA7364((void **)&v215, "textures/ui/hunger_effect_half");
    v216 = v215;
    v215 = (char *)&unk_28898CC;
    v217 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v218, v10, (int)&v216, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C69A0, (mce::TexturePtr *)&v218);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v218);
    v27 = v216 - 12;
    if ( (int *)(v216 - 12) != &dword_28898C0 )
      v151 = (unsigned int *)(v216 - 4);
          v152 = __ldrex(v151);
        while ( __strex(v152 - 1, v151) );
        v152 = (*v151)--;
      if ( v152 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    v28 = v215 - 12;
    if ( (int *)(v215 - 12) != &dword_28898C0 )
      v153 = (unsigned int *)(v215 - 4);
          v154 = __ldrex(v153);
        while ( __strex(v154 - 1, v153) );
        v154 = (*v153)--;
      if ( v154 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
    sub_DA7364((void **)&v211, "textures/ui/hunger_effect_flash_full");
    v212 = v211;
    v211 = (char *)&unk_28898CC;
    v213 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v214, v10, (int)&v212, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C69C0, (mce::TexturePtr *)&v214);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v214);
    v29 = v212 - 12;
    if ( (int *)(v212 - 12) != &dword_28898C0 )
      v155 = (unsigned int *)(v212 - 4);
          v156 = __ldrex(v155);
        while ( __strex(v156 - 1, v155) );
        v156 = (*v155)--;
      if ( v156 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
    v30 = v211 - 12;
    if ( (int *)(v211 - 12) != &dword_28898C0 )
      v157 = (unsigned int *)(v211 - 4);
          v158 = __ldrex(v157);
        while ( __strex(v158 - 1, v157) );
        v158 = (*v157)--;
      if ( v158 <= 0 )
        j_j_j_j_j__ZdlPv_9(v30);
    sub_DA7364((void **)&v207, "textures/ui/hunger_effect_flash_half");
    v208 = v207;
    v207 = (char *)&unk_28898CC;
    v209 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v210, v10, (int)&v208, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C69D8, (mce::TexturePtr *)&v210);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v210);
    v31 = v208 - 12;
    if ( (int *)(v208 - 12) != &dword_28898C0 )
      v159 = (unsigned int *)(v208 - 4);
          v160 = __ldrex(v159);
        while ( __strex(v160 - 1, v159) );
        v160 = (*v159)--;
      if ( v160 <= 0 )
        j_j_j_j_j__ZdlPv_9(v31);
    v32 = v207 - 12;
    if ( (int *)(v207 - 12) != &dword_28898C0 )
      v161 = (unsigned int *)(v207 - 4);
          v162 = __ldrex(v161);
        while ( __strex(v162 - 1, v161) );
        v162 = (*v161)--;
      if ( v162 <= 0 )
        j_j_j_j_j__ZdlPv_9(v32);
    v9 = (ScreenRenderer *)HudHungerRenderer::mHasLoadedTextures;
    HudHungerRenderer::mHasLoadedTextures[0] = 1;
  }
  v169 = ScreenRenderer::singleton(v9);
  v33 = (Mob *)ClientInstance::getLocalPlayer(v7);
  RectangleArea::RectangleArea((RectangleArea *)&v206);
  v34 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v33 + 1004))(v33, &Player::HUNGER);
  _R0 = AttributeInstance::getCurrentValue(v34);
  __asm { VMOV            S16, R0 }
  v40 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v33 + 1004))(v33, &Player::SATURATION);
  _R0 = AttributeInstance::getCurrentValue(v40);
  __asm
    VMOV            S0, R0
    VCVTR.S32.F32   S16, S16
  LOBYTE(_R0) = byte_27C68D4;
  __asm { VCVTR.S32.F32   S18, S0 }
  __dmb();
  if ( !(_R0 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C68D4) )
    j___cxa_guard_release((unsigned int *)&byte_27C68D4);
    VMOV            R0, S18
    VMOV            R8, S16
  v175 = _R0;
  v44 = sub_DA7594((int)&Random::mRandomDevice);
  v200 = v44;
  v202 = 625;
  v45 = 0;
  v46 = 1;
  v203 = 0;
  v204 = 0;
  v201 = v44;
  do
    v47 = v44 ^ (v44 >> 30);
    v48 = (int *)(&v200 + v45);
    v49 = v45++ + 1812433253 * v47;
    v44 = v46++ + 1812433253 * v47;
    v48[2] = v49 + 1;
  while ( v45 != 397 );
  v202 = 624;
  v205 = 398;
  v50 = byte_27C68DC[0];
  if ( !(v50 & 1) && j___cxa_guard_acquire(byte_27C68DC) )
    dword_27C68D8 = 10;
    j___cxa_guard_release(byte_27C68DC);
  _R0 = UIControl::getPosition(v6);
    VLDR            S18, [R0]
    VLDR            S16, [R0,#4]
  v52 = Mob::hasEffect(v33, (const MobEffect *)MobEffect::HUNGER);
  v53 = MinecraftUIRenderContext::getScreenContext(v8);
  v54 = v53;
  v55 = *(ShaderColor **)(v53 + 48);
  v56 = *((_DWORD *)v173 + 1);
  v196 = 1065353216;
  v197 = 1065353216;
  v198 = 1065353216;
  v199 = v56;
  ShaderColor::setColor(v55, (const Color *)&v196);
  v57 = (mce::TexturePtr *)&unk_27C68E0;
  if ( v52 )
    v57 = (mce::TexturePtr *)&unk_27C6910;
  LODWORD(v58) = &unk_27C6940;
  v168 = v57;
  v59 = (mce::TexturePtr *)&unk_27C69C0;
  if ( !v52 )
    v59 = (mce::TexturePtr *)&unk_27C6958;
  v60 = (mce::TexturePtr *)&unk_27C6970;
  HIDWORD(v58) = &unk_27C6928;
  v167 = v59;
    v60 = (mce::TexturePtr *)&unk_27C69D8;
    HIDWORD(v58) = &unk_27C6988;
    VCVTR.S32.F32   S18, S18
    LODWORD(v58) = &unk_27C69A0;
  sub_DA7364((void **)&v194, "ui_textured_and_glcolor");
  v61 = _R8;
  v171 = _R8;
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v195,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v194);
  v165 = v60;
  v62 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v194 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v61 = _R8;
    else
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j_j__ZdlPv_9(v62);
  v63 = dword_27C68D8;
  ptr = 0;
  v192 = 0;
  v193 = 0;
  if ( dword_27C68D8 < 1 )
    v63 = 1;
  if ( v63 >= 0x20000000 )
    sub_DA77B4("vector::reserve");
  if ( v63 )
    v64 = operator new(8 * v63);
    if ( ptr )
      operator delete(ptr);
    ptr = v64;
    v192 = (char *)v64;
    v193 = (char *)v64 + 8 * v63;
  v188 = 0;
  v189 = 0;
  v190 = 0;
    v65 = operator new(8 * v63);
    if ( v188 )
      operator delete(v188);
    v188 = v65;
    v189 = (char *)v65;
    v190 = (char *)v65 + 8 * v63;
  v185 = 0;
  v186 = 0;
  v187 = 0;
    v66 = operator new(8 * v63);
    if ( v185 )
      operator delete(v185);
    v185 = v66;
    v186 = (char *)v66;
    v187 = (char *)v66 + 8 * v63;
  v164 = v58;
  v166 = v54;
  v182 = 0;
  v183 = 0;
  v184 = 0;
    v67 = operator new(8 * v63);
    if ( v182 )
      operator delete(v182);
    v182 = v67;
    v183 = v67;
    v184 = (char *)v67 + 8 * v63;
  v179 = 0;
  v180 = 0;
  v181 = 0;
    v68 = operator new(8 * v63);
    if ( v179 )
      operator delete(v179);
    v179 = v68;
    v180 = v68;
    v181 = (char *)v68 + 8 * v63;
  __asm { VMOV            R5, S16 }
  LODWORD(_R4) = 0;
  __asm { VMOV            R0, S18 }
  v174 = _R0;
  v170 = HIDWORD(_R4) - 1;
  v172 = 3 * v61 + 1;
  while ( (signed int)_R4 < dword_27C68D8 )
    _R8 = HIDWORD(_R4);
    if ( v175 <= 0 )
      _R8 = HIDWORD(_R4);
      if ( !(*((_DWORD *)v173 + 2) % v172) )
        _R8 = v170 + (Random::_genRandInt32((Random *)&v200) & 1);
    __asm { VMOV            S0, R8 }
    v176 = _R4 + 1;
    _R11 = v174 - 8 * (_R4 + 1);
    __asm
      VCVT.F32.S32    S16, S0
      VMOV            S0, R11
      VCVT.F32.S32    S18, S0
    if ( v192 == v193 )
      v73 = (v192 - (_BYTE *)ptr) >> 3;
      if ( !v73 )
        v73 = 1;
      v74 = v73 + ((v192 - (_BYTE *)ptr) >> 3);
      v75 = v74;
      if ( 0 != v74 >> 29 )
        v75 = 0x1FFFFFFF;
      if ( v74 < v73 )
      if ( v75 >= 0x20000000 )
        sub_DA7414();
      v76 = (char *)operator new(8 * v75);
      v77 = v76;
      *(_QWORD *)&v78 = *(_QWORD *)&ptr;
      v80 = v76;
      __asm
        VSTR            S18, [R0]
        VSTR            S16, [R0,#4]
      v81 = (__int64 *)ptr;
      if ( _ZF )
        v83 = ptr;
        v84 = (unsigned int)v77;
        {
          v82 = *v81;
          ++v81;
          *(_QWORD *)v80 = v82;
          v80 += 8;
        }
        while ( v79 != v81 );
        v84 = (unsigned int)&v77[(((unsigned int)v79 + -v78 - 8) & 0xFFFFFFF8) + 8];
      v85 = v84 + 8;
      if ( v83 )
        operator delete(v83);
      ptr = v77;
      v192 = (char *)v85;
      v61 = v171;
      v193 = &v77[8 * v75];
      v192 += 8;
    v86 = 2 * _R4 | 1;
    if ( v86 >= v61 )
      if ( v86 != v61 )
        goto LABEL_121;
      if ( v186 != v187 )
        __asm
          VSTR            S18, [R0]
          VSTR            S16, [R0,#4]
        v186 += 8;
      v100 = (v186 - (_BYTE *)v185) >> 3;
      if ( !v100 )
        v100 = 1;
      v101 = v100 + ((v186 - (_BYTE *)v185) >> 3);
      v102 = v101;
      if ( 0 != v101 >> 29 )
        v102 = 0x1FFFFFFF;
      if ( v101 < v100 )
      if ( v102 >= 0x20000000 )
      v103 = operator new(8 * v102);
      LODWORD(_R4) = v103;
      *(_QWORD *)&v104 = *(_QWORD *)&v185;
      v93 = HIDWORD(_R4);
      v94 = v61;
      v106 = v103;
      v107 = (__int64 *)v185;
        v109 = v185;
        v110 = _R4;
          v108 = *v107;
          ++v107;
          *v106 = v108;
          ++v106;
        while ( v105 != v107 );
        v110 = (((unsigned int)v105 + -v104 - 8) & 0xFFFFFFF8) + _R4 + 8;
      HIDWORD(_R4) = v110 + 8;
      if ( v109 )
        operator delete(v109);
      *(_QWORD *)&v185 = _R4;
      v187 = (char *)(_R4 + 8 * v102);
      if ( v189 != v190 )
        v189 += 8;
      v87 = (v189 - (_BYTE *)v188) >> 3;
      if ( !v87 )
        v87 = 1;
      v88 = v87 + ((v189 - (_BYTE *)v188) >> 3);
      v89 = v88;
      if ( 0 != v88 >> 29 )
        v89 = 0x1FFFFFFF;
      if ( v88 < v87 )
      if ( v89 >= 0x20000000 )
      v90 = operator new(8 * v89);
      LODWORD(_R4) = v90;
      *(_QWORD *)&v91 = *(_QWORD *)&v188;
      v95 = v90;
      v96 = (__int64 *)v188;
        v98 = v188;
        v99 = _R4;
          v97 = *v96;
          ++v96;
          *v95 = v97;
          ++v95;
        while ( v92 != v96 );
        v99 = (((unsigned int)v92 + -v91 - 8) & 0xFFFFFFF8) + _R4 + 8;
      HIDWORD(_R4) = v99 + 8;
      if ( v98 )
        operator delete(v98);
      *(_QWORD *)&v188 = _R4;
      v190 = (char *)(_R4 + 8 * v89);
    v61 = v94;
    HIDWORD(_R4) = v93;
LABEL_121:
    __asm { VMOV            R1, S18 }
    _R0 = _R11 + 9;
      VMOV            R2, S16
      VMOV            S0, R0
    _R0 = _R8 + 9;
      VCVT.F32.S32    S0, S0
      VMOV            R3, S0
      VSTR            S0, [SP,#0xCA0+var_CA0]
    RectangleArea::RectangleArea(COERCE_FLOAT(&v177), _R1, _R2, _R3, v163);
    RectangleArea::unionRects((RectangleArea *)&v178, (const RectangleArea *)&v206, (int)&v177);
    RectangleArea::operator=((int)&v206, (int)&v178);
    LODWORD(_R4) = v176;
  RectangleArea::operator=((int)a6, (int)&v206);
  ScreenRenderer::blitQuadBuffer((int)v169, (unsigned __int64 *)&ptr, 1091567616, 1091567616, v166, v168, &v195);
  ScreenRenderer::blitQuadBuffer((int)v169, (unsigned __int64 *)&v182, 1091567616, 1091567616, v166, v167, &v195);
  ScreenRenderer::blitQuadBuffer((int)v169, (unsigned __int64 *)&v179, 1091567616, 1091567616, v166, v165, &v195);
  ScreenRenderer::blitQuadBuffer(
    (int)v169,
    (unsigned __int64 *)&v188,
    1091567616,
    v166,
    (mce::TexturePtr *)HIDWORD(v164),
    &v195);
    (unsigned __int64 *)&v185,
    (mce::TexturePtr *)v164,
  if ( v179 )
    operator delete(v179);
  if ( v182 )
    operator delete(v182);
  if ( v185 )
    operator delete(v185);
  if ( v188 )
    operator delete(v188);
  if ( ptr )
    operator delete(ptr);
  return mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v195);
}


int __fastcall HudHungerRenderer::clone(HudHungerRenderer *this)
{
  HudHungerRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI17HudHungerRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall HudHungerRenderer::~HudHungerRenderer(HudHungerRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_3(v1);
}
