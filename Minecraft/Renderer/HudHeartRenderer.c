

mce::MaterialPtr *__fastcall HudHeartRenderer::render(HudHeartRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r5@1
  mce::TextureGroup *v7; // r6@2
  char *v8; // r0@2
  char *v9; // r0@3
  char *v10; // r0@4
  char *v11; // r0@5
  char *v12; // r0@6
  char *v13; // r0@7
  char *v14; // r0@8
  char *v15; // r0@9
  char *v16; // r0@10
  char *v17; // r0@11
  char *v18; // r0@12
  char *v19; // r0@13
  char *v20; // r0@14
  char *v21; // r0@15
  char *v22; // r0@16
  char *v23; // r0@17
  char *v24; // r0@18
  char *v25; // r0@19
  char *v26; // r0@20
  char *v27; // r0@21
  char *v28; // r0@22
  char *v29; // r0@23
  char *v30; // r0@24
  char *v31; // r0@25
  char *v32; // r0@26
  char *v33; // r0@27
  char *v34; // r0@28
  char *v35; // r0@29
  char *v36; // r0@30
  char *v37; // r0@31
  char *v38; // r0@32
  char *v39; // r0@33
  int v41; // r10@35
  unsigned int v49; // r4@35
  int v50; // r0@35
  int v51; // r8@35
  signed int v52; // r1@35
  int v53; // r4@36
  int *v54; // r5@36
  int v55; // r6@36
  AttributeInstance *v56; // r0@37
  AttributeInstance *v58; // r0@37
  char *v64; // r0@41
  void *v65; // r1@41
  __int64 v66; // r10@41
  int v67; // r0@45
  mce::TexturePtr *v69; // r0@47
  mce::TexturePtr *v70; // r7@47
  int v72; // r5@52
  void *v73; // r4@52
  int v74; // r0@52
  int v75; // r6@52
  ShaderColor *v76; // r0@52
  int v77; // r1@52
  signed int v78; // r2@52
  mce::TexturePtr *v79; // r9@56
  void *v81; // r0@58
  unsigned int v82; // r6@59
  void *v83; // r4@63
  void *v84; // r4@67
  void *v85; // r4@71
  void *v86; // r4@75
  void *v87; // r5@79
  char *v88; // r5@81
  int v89; // r0@81
  void *v90; // r4@84
  float v92; // r1@87
  int v94; // r4@89
  Options *v95; // r0@89
  signed int v96; // r5@89
  unsigned int v105; // r1@97
  unsigned int v106; // r0@99
  unsigned int v107; // r6@99
  char *v108; // r0@104
  char *v109; // r5@104
  int v110; // r1@104 OVERLAPPED
  __int64 *v111; // r2@104 OVERLAPPED
  char *v112; // r3@104
  __int64 *v113; // r0@104
  __int64 v114; // kr00_8@105
  void *v115; // r0@106
  unsigned int v116; // r1@106
  int v117; // r7@108
  int v118; // r10@111
  unsigned int v119; // r1@118
  unsigned int v120; // r0@120
  unsigned int v121; // r6@120
  char *v122; // r0@125
  char *v123; // r5@125
  int v124; // r1@125 OVERLAPPED
  __int64 *v125; // r2@125 OVERLAPPED
  char *v126; // r3@125
  __int64 *v127; // r0@125
  __int64 v128; // kr08_8@126
  void *v129; // r0@127
  unsigned int v130; // r1@127
  unsigned int v131; // r1@128
  unsigned int v132; // r0@130
  unsigned int v133; // r6@130
  char *v134; // r0@135
  char *v135; // r5@135
  int v136; // r1@135 OVERLAPPED
  __int64 *v137; // r2@135 OVERLAPPED
  char *v138; // r3@135
  __int64 *v139; // r0@135
  __int64 v140; // kr10_8@136
  void *v141; // r0@137
  unsigned int v142; // r1@137
  int v143; // r7@139
  int v144; // r7@143
  unsigned int v146; // r1@161
  unsigned int v147; // r0@163
  unsigned int v148; // r6@163
  char *v149; // r5@168
  MinecraftUIRenderContext *v150; // r0@168
  int v151; // r1@169
  MinecraftUIRenderContext *v152; // r2@169
  int v153; // r2@170
  unsigned int v154; // r1@171
  unsigned int v155; // r1@172
  unsigned int v156; // r0@174
  unsigned int v157; // r6@174
  char *v158; // r0@179
  char *v159; // r5@179
  int v160; // r1@179 OVERLAPPED
  __int64 *v161; // r2@179 OVERLAPPED
  char *v162; // r3@179
  __int64 *v163; // r0@179
  __int64 v164; // kr18_8@180
  void *v165; // r0@181
  unsigned int v166; // r1@181
  unsigned int v167; // r1@182
  unsigned int v168; // r0@184
  unsigned int v169; // r6@184
  char *v170; // r0@189
  char *v171; // r5@189
  int v172; // r1@189 OVERLAPPED
  __int64 *v173; // r2@189 OVERLAPPED
  char *v174; // r3@189
  __int64 *v175; // r0@189
  __int64 v176; // kr20_8@190
  void *v177; // r0@191
  unsigned int v178; // r1@191
  unsigned int v179; // r1@192
  unsigned int v180; // r0@194
  unsigned int v181; // r6@194
  char *v182; // r0@199
  char *v183; // r5@199
  int v184; // r1@199 OVERLAPPED
  __int64 *v185; // r2@199 OVERLAPPED
  char *v186; // r3@199
  __int64 *v187; // r0@199
  __int64 v188; // kr28_8@200
  void *v189; // r0@201
  unsigned int v190; // r1@201
  int v191; // r7@207
  int v192; // r7@211
  int v193; // r7@215
  unsigned int *v200; // r2@241
  signed int v201; // r1@243
  unsigned int *v202; // r2@249
  signed int v203; // r1@251
  unsigned int *v204; // r2@253
  signed int v205; // r1@255
  unsigned int *v206; // r2@257
  signed int v207; // r1@259
  unsigned int *v208; // r2@261
  signed int v209; // r1@263
  unsigned int *v210; // r2@265
  signed int v211; // r1@267
  unsigned int *v212; // r2@269
  signed int v213; // r1@271
  unsigned int *v214; // r2@273
  signed int v215; // r1@275
  unsigned int *v216; // r2@277
  signed int v217; // r1@279
  unsigned int *v218; // r2@281
  signed int v219; // r1@283
  unsigned int *v220; // r2@285
  signed int v221; // r1@287
  unsigned int *v222; // r2@289
  signed int v223; // r1@291
  unsigned int *v224; // r2@293
  signed int v225; // r1@295
  unsigned int *v226; // r2@297
  signed int v227; // r1@299
  unsigned int *v228; // r2@301
  signed int v229; // r1@303
  unsigned int *v230; // r2@305
  signed int v231; // r1@307
  unsigned int *v232; // r2@309
  signed int v233; // r1@311
  unsigned int *v234; // r2@313
  signed int v235; // r1@315
  unsigned int *v236; // r2@317
  signed int v237; // r1@319
  unsigned int *v238; // r2@321
  signed int v239; // r1@323
  unsigned int *v240; // r2@325
  signed int v241; // r1@327
  unsigned int *v242; // r2@329
  signed int v243; // r1@331
  unsigned int *v244; // r2@333
  signed int v245; // r1@335
  unsigned int *v246; // r2@337
  signed int v247; // r1@339
  unsigned int *v248; // r2@341
  signed int v249; // r1@343
  unsigned int *v250; // r2@345
  signed int v251; // r1@347
  unsigned int *v252; // r2@349
  signed int v253; // r1@351
  unsigned int *v254; // r2@353
  signed int v255; // r1@355
  unsigned int *v256; // r2@357
  signed int v257; // r1@359
  unsigned int *v258; // r2@361
  signed int v259; // r1@363
  unsigned int *v260; // r2@365
  signed int v261; // r1@367
  unsigned int *v262; // r2@369
  signed int v263; // r1@371
  unsigned int *v264; // r2@373
  signed int v265; // r1@375
  int v266; // [sp+0h] [bp-DA0h]@0
  __int64 v267; // [sp+10h] [bp-D90h]@79
  mce::TexturePtr *v268; // [sp+18h] [bp-D88h]@79
  mce::TexturePtr *v269; // [sp+1Ch] [bp-D84h]@44
  mce::TexturePtr *v270; // [sp+20h] [bp-D80h]@44
  int v271; // [sp+24h] [bp-D7Ch]@58
  int v272; // [sp+28h] [bp-D78h]@59
  MinecraftUIRenderContext *v273; // [sp+2Ch] [bp-D74h]@87
  int v274; // [sp+30h] [bp-D70h]@83
  int v275; // [sp+34h] [bp-D6Ch]@87
  MinecraftUIRenderContext *v276; // [sp+38h] [bp-D68h]@1
  MinecraftUIRenderContext *v277; // [sp+38h] [bp-D68h]@87
  int v278; // [sp+3Ch] [bp-D64h]@35
  HudHeartRenderer *v279; // [sp+40h] [bp-D60h]@1
  int v280; // [sp+40h] [bp-D60h]@56
  int v281; // [sp+44h] [bp-D5Ch]@38
  ClientInstance *v282; // [sp+48h] [bp-D58h]@35
  int v283; // [sp+4Ch] [bp-D54h]@35
  UIControl *v284; // [sp+50h] [bp-D50h]@1
  char v285; // [sp+54h] [bp-D4Ch]@218
  char v286; // [sp+64h] [bp-D3Ch]@218
  void *v287; // [sp+74h] [bp-D2Ch]@83
  char *v288; // [sp+78h] [bp-D28h]@83
  char *v289; // [sp+7Ch] [bp-D24h]@83
  void *v290; // [sp+80h] [bp-D20h]@78
  char *v291; // [sp+84h] [bp-D1Ch]@78
  char *v292; // [sp+88h] [bp-D18h]@78
  void *v293; // [sp+8Ch] [bp-D14h]@74
  char *v294; // [sp+90h] [bp-D10h]@74
  char *v295; // [sp+94h] [bp-D0Ch]@74
  void *v296; // [sp+98h] [bp-D08h]@70
  char *v297; // [sp+9Ch] [bp-D04h]@70
  char *v298; // [sp+A0h] [bp-D00h]@70
  void *v299; // [sp+A4h] [bp-CFCh]@66
  char *v300; // [sp+A8h] [bp-CF8h]@66
  char *v301; // [sp+ACh] [bp-CF4h]@66
  void *ptr; // [sp+B0h] [bp-CF0h]@59
  char *v303; // [sp+B4h] [bp-CECh]@59
  char *v304; // [sp+B8h] [bp-CE8h]@59
  int v305; // [sp+C0h] [bp-CE0h]@58
  char v306; // [sp+C4h] [bp-CDCh]@58
  int v307; // [sp+D0h] [bp-CD0h]@52
  signed int v308; // [sp+D4h] [bp-CCCh]@52
  signed int v309; // [sp+D8h] [bp-CC8h]@52
  int v310; // [sp+DCh] [bp-CC4h]@52
  int v311; // [sp+E0h] [bp-CC0h]@35
  int v312; // [sp+E4h] [bp-CBCh]@35
  int v313; // [sp+AA4h] [bp-2FCh]@35
  char v314; // [sp+AA8h] [bp-2F8h]@35
  int v315; // [sp+AACh] [bp-2F4h]@35
  int v316; // [sp+AB0h] [bp-2F0h]@37
  char v317; // [sp+AB4h] [bp-2ECh]@35
  char *v318; // [sp+AC8h] [bp-2D8h]@32
  char *v319; // [sp+ACCh] [bp-2D4h]@32
  int v320; // [sp+AD0h] [bp-2D0h]@32
  char v321; // [sp+AD4h] [bp-2CCh]@32
  char *v322; // [sp+AF0h] [bp-2B0h]@30
  char *v323; // [sp+AF4h] [bp-2ACh]@30
  int v324; // [sp+AF8h] [bp-2A8h]@30
  char v325; // [sp+AFCh] [bp-2A4h]@30
  char *v326; // [sp+B18h] [bp-288h]@28
  char *v327; // [sp+B1Ch] [bp-284h]@28
  int v328; // [sp+B20h] [bp-280h]@28
  char v329; // [sp+B24h] [bp-27Ch]@28
  char *v330; // [sp+B40h] [bp-260h]@26
  char *v331; // [sp+B44h] [bp-25Ch]@26
  int v332; // [sp+B48h] [bp-258h]@26
  char v333; // [sp+B4Ch] [bp-254h]@26
  char *v334; // [sp+B68h] [bp-238h]@24
  char *v335; // [sp+B6Ch] [bp-234h]@24
  int v336; // [sp+B70h] [bp-230h]@24
  char v337; // [sp+B74h] [bp-22Ch]@24
  char *v338; // [sp+B90h] [bp-210h]@22
  char *v339; // [sp+B94h] [bp-20Ch]@22
  int v340; // [sp+B98h] [bp-208h]@22
  char v341; // [sp+B9Ch] [bp-204h]@22
  char *v342; // [sp+BB8h] [bp-1E8h]@20
  char *v343; // [sp+BBCh] [bp-1E4h]@20
  int v344; // [sp+BC0h] [bp-1E0h]@20
  char v345; // [sp+BC4h] [bp-1DCh]@20
  char *v346; // [sp+BE0h] [bp-1C0h]@18
  char *v347; // [sp+BE4h] [bp-1BCh]@18
  int v348; // [sp+BE8h] [bp-1B8h]@18
  char v349; // [sp+BECh] [bp-1B4h]@18
  char *v350; // [sp+C08h] [bp-198h]@16
  char *v351; // [sp+C0Ch] [bp-194h]@16
  int v352; // [sp+C10h] [bp-190h]@16
  char v353; // [sp+C14h] [bp-18Ch]@16
  char *v354; // [sp+C30h] [bp-170h]@14
  char *v355; // [sp+C34h] [bp-16Ch]@14
  int v356; // [sp+C38h] [bp-168h]@14
  char v357; // [sp+C3Ch] [bp-164h]@14
  char *v358; // [sp+C58h] [bp-148h]@12
  char *v359; // [sp+C5Ch] [bp-144h]@12
  int v360; // [sp+C60h] [bp-140h]@12
  char v361; // [sp+C64h] [bp-13Ch]@12
  char *v362; // [sp+C80h] [bp-120h]@10
  char *v363; // [sp+C84h] [bp-11Ch]@10
  int v364; // [sp+C88h] [bp-118h]@10
  char v365; // [sp+C8Ch] [bp-114h]@10
  char *v366; // [sp+CA8h] [bp-F8h]@8
  char *v367; // [sp+CACh] [bp-F4h]@8
  int v368; // [sp+CB0h] [bp-F0h]@8
  char v369; // [sp+CB4h] [bp-ECh]@8
  char *v370; // [sp+CD0h] [bp-D0h]@6
  char *v371; // [sp+CD4h] [bp-CCh]@6
  int v372; // [sp+CD8h] [bp-C8h]@6
  char v373; // [sp+CDCh] [bp-C4h]@6
  char *v374; // [sp+CF8h] [bp-A8h]@4
  char *v375; // [sp+CFCh] [bp-A4h]@4
  int v376; // [sp+D00h] [bp-A0h]@4
  char v377; // [sp+D04h] [bp-9Ch]@4
  char *v378; // [sp+D20h] [bp-80h]@2
  char *v379; // [sp+D24h] [bp-7Ch]@2
  int v380; // [sp+D28h] [bp-78h]@2
  char v381; // [sp+D2Ch] [bp-74h]@2

  v279 = this;
  v6 = a3;
  v284 = a4;
  v276 = a2;
  if ( !HudHeartRenderer::mHasLoadedTextures )
  {
    v7 = (mce::TextureGroup *)ClientInstance::getTextures(a3);
    sub_DA7364((void **)&v378, "textures/ui/heart_background");
    v379 = v378;
    v378 = (char *)&unk_28898CC;
    v380 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v381, v7, (int)&v379, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6694, (mce::TexturePtr *)&v381);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v381);
    v8 = v379 - 12;
    if ( (int *)(v379 - 12) != &dword_28898C0 )
    {
      v202 = (unsigned int *)(v379 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v203 = __ldrex(v202);
        while ( __strex(v203 - 1, v202) );
      }
      else
        v203 = (*v202)--;
      if ( v203 <= 0 )
        j_j_j_j_j__ZdlPv_9(v8);
    }
    v9 = v378 - 12;
    if ( (int *)(v378 - 12) != &dword_28898C0 )
      v204 = (unsigned int *)(v378 - 4);
          v205 = __ldrex(v204);
        while ( __strex(v205 - 1, v204) );
        v205 = (*v204)--;
      if ( v205 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
    sub_DA7364((void **)&v374, "textures/ui/heart_blink");
    v375 = v374;
    v374 = (char *)&unk_28898CC;
    v376 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v377, v7, (int)&v375, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C66AC, (mce::TexturePtr *)&v377);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v377);
    v10 = v375 - 12;
    if ( (int *)(v375 - 12) != &dword_28898C0 )
      v206 = (unsigned int *)(v375 - 4);
          v207 = __ldrex(v206);
        while ( __strex(v207 - 1, v206) );
        v207 = (*v206)--;
      if ( v207 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    v11 = v374 - 12;
    if ( (int *)(v374 - 12) != &dword_28898C0 )
      v208 = (unsigned int *)(v374 - 4);
          v209 = __ldrex(v208);
        while ( __strex(v209 - 1, v208) );
        v209 = (*v208)--;
      if ( v209 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    sub_DA7364((void **)&v370, "textures/ui/heart");
    v371 = v370;
    v370 = (char *)&unk_28898CC;
    v372 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v373, v7, (int)&v371, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C66C4, (mce::TexturePtr *)&v373);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v373);
    v12 = v371 - 12;
    if ( (int *)(v371 - 12) != &dword_28898C0 )
      v210 = (unsigned int *)(v371 - 4);
          v211 = __ldrex(v210);
        while ( __strex(v211 - 1, v210) );
        v211 = (*v210)--;
      if ( v211 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    v13 = v370 - 12;
    if ( (int *)(v370 - 12) != &dword_28898C0 )
      v212 = (unsigned int *)(v370 - 4);
          v213 = __ldrex(v212);
        while ( __strex(v213 - 1, v212) );
        v213 = (*v212)--;
      if ( v213 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    sub_DA7364((void **)&v366, "textures/ui/heart_half");
    v367 = v366;
    v366 = (char *)&unk_28898CC;
    v368 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v369, v7, (int)&v367, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C66DC, (mce::TexturePtr *)&v369);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v369);
    v14 = v367 - 12;
    if ( (int *)(v367 - 12) != &dword_28898C0 )
      v214 = (unsigned int *)(v367 - 4);
          v215 = __ldrex(v214);
        while ( __strex(v215 - 1, v214) );
        v215 = (*v214)--;
      if ( v215 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = v366 - 12;
    if ( (int *)(v366 - 12) != &dword_28898C0 )
      v216 = (unsigned int *)(v366 - 4);
          v217 = __ldrex(v216);
        while ( __strex(v217 - 1, v216) );
        v217 = (*v216)--;
      if ( v217 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    sub_DA7364((void **)&v362, "textures/ui/poison_heart");
    v363 = v362;
    v362 = (char *)&unk_28898CC;
    v364 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v365, v7, (int)&v363, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C66F4, (mce::TexturePtr *)&v365);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v365);
    v16 = v363 - 12;
    if ( (int *)(v363 - 12) != &dword_28898C0 )
      v218 = (unsigned int *)(v363 - 4);
          v219 = __ldrex(v218);
        while ( __strex(v219 - 1, v218) );
        v219 = (*v218)--;
      if ( v219 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    v17 = v362 - 12;
    if ( (int *)(v362 - 12) != &dword_28898C0 )
      v220 = (unsigned int *)(v362 - 4);
          v221 = __ldrex(v220);
        while ( __strex(v221 - 1, v220) );
        v221 = (*v220)--;
      if ( v221 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    sub_DA7364((void **)&v358, "textures/ui/poison_heart_half");
    v359 = v358;
    v358 = (char *)&unk_28898CC;
    v360 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v361, v7, (int)&v359, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6710, (mce::TexturePtr *)&v361);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v361);
    v18 = v359 - 12;
    if ( (int *)(v359 - 12) != &dword_28898C0 )
      v222 = (unsigned int *)(v359 - 4);
          v223 = __ldrex(v222);
        while ( __strex(v223 - 1, v222) );
        v223 = (*v222)--;
      if ( v223 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    v19 = v358 - 12;
    if ( (int *)(v358 - 12) != &dword_28898C0 )
      v224 = (unsigned int *)(v358 - 4);
          v225 = __ldrex(v224);
        while ( __strex(v225 - 1, v224) );
        v225 = (*v224)--;
      if ( v225 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    sub_DA7364((void **)&v354, "textures/ui/wither_heart");
    v355 = v354;
    v354 = (char *)&unk_28898CC;
    v356 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v357, v7, (int)&v355, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6728, (mce::TexturePtr *)&v357);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v357);
    v20 = v355 - 12;
    if ( (int *)(v355 - 12) != &dword_28898C0 )
      v226 = (unsigned int *)(v355 - 4);
          v227 = __ldrex(v226);
        while ( __strex(v227 - 1, v226) );
        v227 = (*v226)--;
      if ( v227 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
    v21 = v354 - 12;
    if ( (int *)(v354 - 12) != &dword_28898C0 )
      v228 = (unsigned int *)(v354 - 4);
          v229 = __ldrex(v228);
        while ( __strex(v229 - 1, v228) );
        v229 = (*v228)--;
      if ( v229 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
    sub_DA7364((void **)&v350, "textures/ui/wither_heart_half");
    v351 = v350;
    v350 = (char *)&unk_28898CC;
    v352 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v353, v7, (int)&v351, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6740, (mce::TexturePtr *)&v353);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v353);
    v22 = v351 - 12;
    if ( (int *)(v351 - 12) != &dword_28898C0 )
      v230 = (unsigned int *)(v351 - 4);
          v231 = __ldrex(v230);
        while ( __strex(v231 - 1, v230) );
        v231 = (*v230)--;
      if ( v231 <= 0 )
        j_j_j_j_j__ZdlPv_9(v22);
    v23 = v350 - 12;
    if ( (int *)(v350 - 12) != &dword_28898C0 )
      v232 = (unsigned int *)(v350 - 4);
          v233 = __ldrex(v232);
        while ( __strex(v233 - 1, v232) );
        v233 = (*v232)--;
      if ( v233 <= 0 )
        j_j_j_j_j__ZdlPv_9(v23);
    sub_DA7364((void **)&v346, "textures/ui/absorption_heart");
    v347 = v346;
    v346 = (char *)&unk_28898CC;
    v348 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v349, v7, (int)&v347, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6758, (mce::TexturePtr *)&v349);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v349);
    v24 = v347 - 12;
    if ( (int *)(v347 - 12) != &dword_28898C0 )
      v234 = (unsigned int *)(v347 - 4);
          v235 = __ldrex(v234);
        while ( __strex(v235 - 1, v234) );
        v235 = (*v234)--;
      if ( v235 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
    v25 = v346 - 12;
    if ( (int *)(v346 - 12) != &dword_28898C0 )
      v236 = (unsigned int *)(v346 - 4);
          v237 = __ldrex(v236);
        while ( __strex(v237 - 1, v236) );
        v237 = (*v236)--;
      if ( v237 <= 0 )
        j_j_j_j_j__ZdlPv_9(v25);
    sub_DA7364((void **)&v342, "textures/ui/absorption_heart_half");
    v343 = v342;
    v342 = (char *)&unk_28898CC;
    v344 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v345, v7, (int)&v343, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6770, (mce::TexturePtr *)&v345);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v345);
    v26 = v343 - 12;
    if ( (int *)(v343 - 12) != &dword_28898C0 )
      v238 = (unsigned int *)(v343 - 4);
          v239 = __ldrex(v238);
        while ( __strex(v239 - 1, v238) );
        v239 = (*v238)--;
      if ( v239 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    v27 = v342 - 12;
    if ( (int *)(v342 - 12) != &dword_28898C0 )
      v240 = (unsigned int *)(v342 - 4);
          v241 = __ldrex(v240);
        while ( __strex(v241 - 1, v240) );
        v241 = (*v240)--;
      if ( v241 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    sub_DA7364((void **)&v338, "textures/ui/heart_flash");
    v339 = v338;
    v338 = (char *)&unk_28898CC;
    v340 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v341, v7, (int)&v339, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6790, (mce::TexturePtr *)&v341);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v341);
    v28 = v339 - 12;
    if ( (int *)(v339 - 12) != &dword_28898C0 )
      v242 = (unsigned int *)(v339 - 4);
          v243 = __ldrex(v242);
        while ( __strex(v243 - 1, v242) );
        v243 = (*v242)--;
      if ( v243 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
    v29 = v338 - 12;
    if ( (int *)(v338 - 12) != &dword_28898C0 )
      v244 = (unsigned int *)(v338 - 4);
          v245 = __ldrex(v244);
        while ( __strex(v245 - 1, v244) );
        v245 = (*v244)--;
      if ( v245 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
    sub_DA7364((void **)&v334, "textures/ui/heart_flash_half");
    v335 = v334;
    v334 = (char *)&unk_28898CC;
    v336 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v337, v7, (int)&v335, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C67A8, (mce::TexturePtr *)&v337);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v337);
    v30 = v335 - 12;
    if ( (int *)(v335 - 12) != &dword_28898C0 )
      v246 = (unsigned int *)(v335 - 4);
          v247 = __ldrex(v246);
        while ( __strex(v247 - 1, v246) );
        v247 = (*v246)--;
      if ( v247 <= 0 )
        j_j_j_j_j__ZdlPv_9(v30);
    v31 = v334 - 12;
    if ( (int *)(v334 - 12) != &dword_28898C0 )
      v248 = (unsigned int *)(v334 - 4);
          v249 = __ldrex(v248);
        while ( __strex(v249 - 1, v248) );
        v249 = (*v248)--;
      if ( v249 <= 0 )
        j_j_j_j_j__ZdlPv_9(v31);
    sub_DA7364((void **)&v330, "textures/ui/poison_heart_flash");
    v331 = v330;
    v330 = (char *)&unk_28898CC;
    v332 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v333, v7, (int)&v331, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C67C0, (mce::TexturePtr *)&v333);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v333);
    v32 = v331 - 12;
    if ( (int *)(v331 - 12) != &dword_28898C0 )
      v250 = (unsigned int *)(v331 - 4);
          v251 = __ldrex(v250);
        while ( __strex(v251 - 1, v250) );
        v251 = (*v250)--;
      if ( v251 <= 0 )
        j_j_j_j_j__ZdlPv_9(v32);
    v33 = v330 - 12;
    if ( (int *)(v330 - 12) != &dword_28898C0 )
      v252 = (unsigned int *)(v330 - 4);
          v253 = __ldrex(v252);
        while ( __strex(v253 - 1, v252) );
        v253 = (*v252)--;
      if ( v253 <= 0 )
        j_j_j_j_j__ZdlPv_9(v33);
    sub_DA7364((void **)&v326, "textures/ui/poison_heart_flash_half");
    v327 = v326;
    v326 = (char *)&unk_28898CC;
    v328 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v329, v7, (int)&v327, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C67D8, (mce::TexturePtr *)&v329);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v329);
    v34 = v327 - 12;
    if ( (int *)(v327 - 12) != &dword_28898C0 )
      v254 = (unsigned int *)(v327 - 4);
          v255 = __ldrex(v254);
        while ( __strex(v255 - 1, v254) );
        v255 = (*v254)--;
      if ( v255 <= 0 )
        j_j_j_j_j__ZdlPv_9(v34);
    v35 = v326 - 12;
    if ( (int *)(v326 - 12) != &dword_28898C0 )
      v256 = (unsigned int *)(v326 - 4);
          v257 = __ldrex(v256);
        while ( __strex(v257 - 1, v256) );
        v257 = (*v256)--;
      if ( v257 <= 0 )
        j_j_j_j_j__ZdlPv_9(v35);
    sub_DA7364((void **)&v322, "textures/ui/wither_heart_flash");
    v323 = v322;
    v322 = (char *)&unk_28898CC;
    v324 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v325, v7, (int)&v323, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C67F0, (mce::TexturePtr *)&v325);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v325);
    v36 = v323 - 12;
    if ( (int *)(v323 - 12) != &dword_28898C0 )
      v258 = (unsigned int *)(v323 - 4);
          v259 = __ldrex(v258);
        while ( __strex(v259 - 1, v258) );
        v259 = (*v258)--;
      if ( v259 <= 0 )
        j_j_j_j_j__ZdlPv_9(v36);
    v37 = v322 - 12;
    if ( (int *)(v322 - 12) != &dword_28898C0 )
      v260 = (unsigned int *)(v322 - 4);
          v261 = __ldrex(v260);
        while ( __strex(v261 - 1, v260) );
        v261 = (*v260)--;
      if ( v261 <= 0 )
        j_j_j_j_j__ZdlPv_9(v37);
    sub_DA7364((void **)&v318, "textures/ui/wither_heart_flash_half");
    v319 = v318;
    v318 = (char *)&unk_28898CC;
    v320 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v321, v7, (int)&v319, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C6810, (mce::TexturePtr *)&v321);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v321);
    v38 = v319 - 12;
    if ( (int *)(v319 - 12) != &dword_28898C0 )
      v262 = (unsigned int *)(v319 - 4);
          v263 = __ldrex(v262);
        while ( __strex(v263 - 1, v262) );
        v263 = (*v262)--;
      if ( v263 <= 0 )
        j_j_j_j_j__ZdlPv_9(v38);
    v39 = v318 - 12;
    if ( (int *)(v318 - 12) != &dword_28898C0 )
      v264 = (unsigned int *)(v318 - 4);
          v265 = __ldrex(v264);
        while ( __strex(v265 - 1, v264) );
        v265 = (*v264)--;
      if ( v265 <= 0 )
        j_j_j_j_j__ZdlPv_9(v39);
    HudHeartRenderer::mHasLoadedTextures = 1;
  }
  _R4 = getTimeS();
  v282 = v6;
  v41 = ClientInstance::getLocalPlayer(v6);
  RectangleArea::RectangleArea((RectangleArea *)&v317);
  __asm { VMOV.F64        D0, #20.0 }
  _R0 = 1431655766;
  __asm
    VMOV            D1, R4, R6
    VMUL.F64        D0, D1, D0
    VCVTR.S32.F64   S0, D0
  _R9 = *(_DWORD *)(v41 + 420);
    SMMUL.W         R6, R9, R0
    VMOV            R11, S0
  v49 = 312871 * _R11;
  v283 = Mob::getHealth((Mob *)v41);
  v278 = *(_DWORD *)(v41 + 3428);
  v311 = 312871 * _R11;
  v313 = 625;
  v50 = 0;
  v51 = (signed int)(_R6 + (_R6 >> 31)) % 2;
  v52 = 1;
  v314 = 0;
  v315 = 0;
  v312 = 312871 * _R11;
  do
    v53 = v49 ^ (v49 >> 30);
    v54 = &v311 + v50;
    v55 = v50++ + 1812433253 * v53;
    v49 = v52++ + 1812433253 * v53;
    v54[2] = v55 + 1;
  while ( v50 != 397 );
  v313 = 624;
  v316 = 398;
  v56 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v41 + 1004))(
                               v41,
                               &SharedAttributes::ABSORPTION);
  _R4 = AttributeInstance::getCurrentValue(v56);
  v58 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v41 + 1004))(
                               &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getMaxValue(v58);
    VMOV            S0, R0
    VCVTR.S32.F32   S18, S0
    VMOV            R7, S18
  if ( Mob::hasEffect((Mob *)v41, (const MobEffect *)MobEffect::REGENERATION) == 1 )
    LODWORD(_R0) = _R7 + 5;
    __asm
      VMOV            S0, R0
      VCVT.F64.S32    D0, S0
      VMOV            R0, R1, D0
    _R0 = COERCE_UNSIGNED_INT64(ceil(_R0));
      VMOV            D0, R0, R1
      VCVTR.S32.F64   S0, D0
      VMOV            R1, S0
    v281 = _R11 % _R1;
  else
    v281 = -1;
  __asm { VMOV            S16, R4 }
  if ( Mob::hasEffect((Mob *)v41, (const MobEffect *)MobEffect::POISON) )
    v64 = (char *)&unk_27C6690;
    v65 = &unk_27C6790;
    LODWORD(v66) = &unk_27C6710;
LABEL_44:
    HIDWORD(v66) = v64 + 100;
    v270 = (mce::TexturePtr *)((char *)v65 + 48);
    v269 = (mce::TexturePtr *)((char *)v65 + 72);
    goto LABEL_52;
  if ( Mob::hasEffect((Mob *)v41, (const MobEffect *)MobEffect::FATAL_POISON) )
    goto LABEL_44;
  v67 = Mob::hasEffect((Mob *)v41, (const MobEffect *)MobEffect::WITHER);
  v65 = &unk_27C6690;
  HIDWORD(v66) = &unk_27C66C4;
  LODWORD(v66) = &unk_27C66DC;
  if ( v67 )
    HIDWORD(v66) = &unk_27C6728;
    LODWORD(v66) = &unk_27C6740;
  _ZF = v67 == 0;
  v69 = (mce::TexturePtr *)&unk_27C6790;
  v70 = (mce::TexturePtr *)&unk_27C6810;
  if ( !_ZF )
    v69 = (mce::TexturePtr *)&unk_27C67F0;
  v270 = v69;
  if ( _ZF )
    v70 = (mce::TexturePtr *)&unk_27C67A8;
  v269 = v70;
LABEL_52:
    VCVT.F32.S32    S0, S18
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  v72 = mce::Math::ceil(_R0, *(float *)&v65);
  v73 = ScreenRenderer::singleton((ScreenRenderer *)v72);
  v74 = MinecraftUIRenderContext::getScreenContext(v276);
  v75 = v74;
  v76 = *(ShaderColor **)(v74 + 48);
  v77 = *((_DWORD *)v279 + 1);
  v307 = 1065353216;
  v308 = 1065353216;
  v309 = 1065353216;
  v310 = v77;
  ShaderColor::setColor(v76, (const Color *)&v307);
  v78 = 0;
  if ( _R9 > 9 )
    v78 = 1;
  if ( v51 != 1 )
    v51 = 0;
  v79 = (mce::TexturePtr *)&unk_27C6694;
  v280 = v78 & v51;
  if ( v78 & v51 )
    v79 = (mce::TexturePtr *)&unk_27C66AC;
  sub_DA7364((void **)&v305, "ui_textured_and_glcolor");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v306,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v305);
  v271 = v75;
  _R8 = v72 / 2;
  v81 = (void *)(v305 - 12);
  if ( (int *)(v305 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v305 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
    else
      v201 = (*v200)--;
    if ( v201 <= 0 )
      j_j_j_j_j__ZdlPv_9(v81);
  v82 = v72 / 2;
  v272 = (int)v73;
  ptr = 0;
  v303 = 0;
  v304 = 0;
  if ( _R8 < 1 )
    v82 = 1;
  if ( v82 >= 0x20000000 )
    sub_DA77B4("vector::reserve");
  if ( v82 )
    v83 = operator new(8 * v82);
    if ( ptr )
      operator delete(ptr);
    ptr = v83;
    v303 = (char *)v83;
    v304 = (char *)v83 + 8 * v82;
  v299 = 0;
  v300 = 0;
  v301 = 0;
    v84 = operator new(8 * v82);
    if ( v299 )
      operator delete(v299);
    v299 = v84;
    v300 = (char *)v84;
    v301 = (char *)v84 + 8 * v82;
  v296 = 0;
  v297 = 0;
  v298 = 0;
    v85 = operator new(8 * v82);
    if ( v296 )
      operator delete(v296);
    v296 = v85;
    v297 = (char *)v85;
    v298 = (char *)v85 + 8 * v82;
  v293 = 0;
  v294 = 0;
  v295 = 0;
    v86 = operator new(8 * v82);
    if ( v293 )
      operator delete(v293);
    v293 = v86;
    v294 = (char *)v86;
    v295 = (char *)v86 + 8 * v82;
  v290 = 0;
  v291 = 0;
  v292 = 0;
    v87 = operator new(8 * v82);
    v268 = v79;
    v267 = v66;
    if ( v290 )
      operator delete(v290);
    v290 = v87;
    v291 = (char *)v87;
    v292 = (char *)v87 + 8 * v82;
    v88 = (char *)operator new(8 * v82);
    v89 = (int)&v88[8 * v82];
    v89 = 0;
    v88 = 0;
  v274 = v89;
  v287 = 0;
  v288 = 0;
  v289 = 0;
    v90 = operator new(8 * v82);
    if ( v287 )
      operator delete(v287);
    v287 = v90;
    v288 = (char *)v90;
    v289 = (char *)v90 + 8 * v82;
    VCVTR.S32.F32   S0, S16
    VLDR            S18, =0.1
    VMOV.F32        S20, #-2.0
  v277 = (MinecraftUIRenderContext *)v88;
  __asm { VMOV.F32        S22, S16 }
  v273 = (MinecraftUIRenderContext *)v88;
  __asm { VMOV            R0, S0 }
  LODWORD(v92) = (_R0 + (_R0 >> 31)) & 0xFFFFFFFE;
  v275 = (signed int)_R0 % 2;
  while ( _R8 > 0 )
      VMOV            S0, R8
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S18
      VMOV            R0, S0
    v94 = mce::Math::ceil(_R0, v92);
    v95 = (Options *)ClientInstance::getOptions(v282);
    v96 = 1;
    if ( !Options::getUIProfile(v95) )
      v96 = -1;
    _R0 = UIControl::getPosition(v284);
      VLDR            S0, [R0]
      VCVTR.S32.F32   S24, S0
      VLDR            S0, [R0,#4]
      VCVTR.S32.F32   S0, S0
    _R9 = _R1 + v96 * (10 * v94 - 10);
    if ( v283 <= 4 )
      _R9 = (Random::_genRandInt32((Random *)&v311) & 1) + _R9 - 1;
    _R0 = 1717986919;
    --_R8;
      SMMUL.W         R0, R8, R0
      VMOV            R1, S24
    _R11 = _R1 + 8 * (_R8 - 10 * (((signed int)_R0 >> 2) + (_R0 >> 31)));
      VMOV            S0, R11
      VCVT.F32.S32    S24, S0
    if ( _R8 == v281 )
      _R9 += 2;
      VMOV            S0, R9
      VCVT.F32.S32    S26, S0
    if ( v303 == v304 )
      v105 = (v303 - (_BYTE *)ptr) >> 3;
      if ( !v105 )
        v105 = 1;
      v106 = v105 + ((v303 - (_BYTE *)ptr) >> 3);
      v107 = v105 + ((v303 - (_BYTE *)ptr) >> 3);
      if ( 0 != v106 >> 29 )
        v107 = 0x1FFFFFFF;
      if ( v106 < v105 )
      if ( v107 >= 0x20000000 )
        sub_DA7414();
      v108 = (char *)operator new(8 * v107);
      v109 = v108;
      *(_QWORD *)&v110 = *(_QWORD *)&ptr;
      v112 = v108;
      __asm
        VSTR            S24, [R0]
        VSTR            S26, [R0,#4]
      v113 = (__int64 *)ptr;
      if ( _ZF )
        v115 = ptr;
        v116 = (unsigned int)v109;
        {
          v114 = *v113;
          ++v113;
          *(_QWORD *)v112 = v114;
          v112 += 8;
        }
        while ( v111 != v113 );
        v116 = (unsigned int)&v109[(((unsigned int)v111 + -v110 - 8) & 0xFFFFFFF8) + 8];
      v117 = v116 + 8;
      if ( v115 )
        operator delete(v115);
      ptr = v109;
      v303 = (char *)v117;
      v304 = &v109[8 * v107];
      v303 += 8;
    v118 = 2 * _R8 | 1;
    if ( v280 == 1 )
      if ( v118 >= v278 )
        if ( v118 == v278 )
          if ( v291 == v292 )
          {
            v131 = (v291 - (_BYTE *)v290) >> 3;
            if ( !v131 )
              v131 = 1;
            v132 = v131 + ((v291 - (_BYTE *)v290) >> 3);
            v133 = v131 + ((v291 - (_BYTE *)v290) >> 3);
            if ( 0 != v132 >> 29 )
              v133 = 0x1FFFFFFF;
            if ( v132 < v131 )
            if ( v133 >= 0x20000000 )
              sub_DA7414();
            v134 = (char *)operator new(8 * v133);
            v135 = v134;
            *(_QWORD *)&v136 = *(_QWORD *)&v290;
            v138 = v134;
            __asm
            {
              VSTR            S24, [R0]
              VSTR            S26, [R0,#4]
            }
            v139 = (__int64 *)v290;
            if ( _ZF )
              v141 = v290;
              v142 = (unsigned int)v135;
            else
              do
              {
                v140 = *v139;
                ++v139;
                *(_QWORD *)v138 = v140;
                v138 += 8;
              }
              while ( v137 != v139 );
              v142 = (unsigned int)&v135[(((unsigned int)v137 + -v136 - 8) & 0xFFFFFFF8) + 8];
            v144 = v142 + 8;
            if ( v141 )
              operator delete(v141);
            v290 = v135;
            v291 = (char *)v144;
            v292 = &v135[8 * v133];
          }
          else
            v291 += 8;
      else if ( v294 == v295 )
        v119 = (v294 - (_BYTE *)v293) >> 3;
        if ( !v119 )
          v119 = 1;
        v120 = v119 + ((v294 - (_BYTE *)v293) >> 3);
        v121 = v119 + ((v294 - (_BYTE *)v293) >> 3);
        if ( 0 != v120 >> 29 )
          v121 = 0x1FFFFFFF;
        if ( v120 < v119 )
        if ( v121 >= 0x20000000 )
          sub_DA7414();
        v122 = (char *)operator new(8 * v121);
        v123 = v122;
        *(_QWORD *)&v124 = *(_QWORD *)&v293;
        v126 = v122;
        __asm
          VSTR            S24, [R0]
          VSTR            S26, [R0,#4]
        v127 = (__int64 *)v293;
        if ( _ZF )
          v129 = v293;
          v130 = (unsigned int)v123;
        else
          do
            v128 = *v127;
            ++v127;
            *(_QWORD *)v126 = v128;
            v126 += 8;
          while ( v125 != v127 );
          v130 = (unsigned int)&v123[(((unsigned int)v125 + -v124 - 8) & 0xFFFFFFF8) + 8];
        v143 = v130 + 8;
        if ( v129 )
          operator delete(v129);
        v293 = v123;
        v294 = (char *)v143;
        v295 = &v123[8 * v121];
        v294 += 8;
      VCMPE.F32       S22, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      if ( v118 >= v283 )
        if ( v118 == v283 )
          if ( v297 == v298 )
            v179 = (v297 - (_BYTE *)v296) >> 3;
            if ( !v179 )
              v179 = 1;
            v180 = v179 + ((v297 - (_BYTE *)v296) >> 3);
            v181 = v179 + ((v297 - (_BYTE *)v296) >> 3);
            if ( 0 != v180 >> 29 )
              v181 = 0x1FFFFFFF;
            if ( v180 < v179 )
            if ( v181 >= 0x20000000 )
            v182 = (char *)operator new(8 * v181);
            v183 = v182;
            *(_QWORD *)&v184 = *(_QWORD *)&v296;
            v186 = v182;
            v187 = (__int64 *)v296;
              v189 = v296;
              v190 = (unsigned int)v183;
                v188 = *v187;
                ++v187;
                *(_QWORD *)v186 = v188;
                v186 += 8;
              while ( v185 != v187 );
              v190 = (unsigned int)&v183[(((unsigned int)v185 + -v184 - 8) & 0xFFFFFFF8) + 8];
            v193 = v190 + 8;
            if ( v189 )
              operator delete(v189);
            v296 = v183;
            v297 = (char *)v193;
            v298 = &v183[8 * v181];
            v297 += 8;
      else if ( v300 == v301 )
        v155 = (v300 - (_BYTE *)v299) >> 3;
        if ( !v155 )
          v155 = 1;
        v156 = v155 + ((v300 - (_BYTE *)v299) >> 3);
        v157 = v155 + ((v300 - (_BYTE *)v299) >> 3);
        if ( 0 != v156 >> 29 )
          v157 = 0x1FFFFFFF;
        if ( v156 < v155 )
        if ( v157 >= 0x20000000 )
        v158 = (char *)operator new(8 * v157);
        v159 = v158;
        *(_QWORD *)&v160 = *(_QWORD *)&v299;
        v162 = v158;
        v163 = (__int64 *)v299;
          v165 = v299;
          v166 = (unsigned int)v159;
            v164 = *v163;
            ++v163;
            *(_QWORD *)v162 = v164;
            v162 += 8;
          while ( v161 != v163 );
          v166 = (unsigned int)&v159[(((unsigned int)v161 + -v160 - 8) & 0xFFFFFFF8) + 8];
        v191 = v166 + 8;
        if ( v165 )
          operator delete(v165);
        v299 = v159;
        v300 = (char *)v191;
        v301 = &v159[8 * v157];
        v300 += 8;
        VCMPE.F32       S22, S16
        VMRS            APSR_nzcv, FPSCR
        _ZF = v275 == 1;
        if ( v277 == (MinecraftUIRenderContext *)v274 )
          v146 = (v277 - v273) >> 3;
          if ( !v146 )
            v146 = 1;
          v147 = v146 + ((v277 - v273) >> 3);
          v148 = v146 + ((v277 - v273) >> 3);
          if ( 0 != v147 >> 29 )
            v148 = 0x1FFFFFFF;
          if ( v147 < v146 )
          if ( v148 >= 0x20000000 )
            sub_DA7414();
          v149 = (char *)operator new(8 * v148);
          __asm
            VSTR            S24, [R0]
            VSTR            S26, [R0,#4]
          v150 = v273;
          if ( v273 == (MinecraftUIRenderContext *)v274 )
            v150 = (MinecraftUIRenderContext *)v274;
            v154 = (unsigned int)v149;
            v151 = 0;
            v152 = v273;
            do
              *(_QWORD *)&v149[v151] = *(_QWORD *)v152;
              v153 = (int)v273 + v151;
              v151 += 8;
              v152 = (MinecraftUIRenderContext *)(v153 + 8);
            while ( v274 - (_DWORD)v273 != v151 );
            v154 = (unsigned int)&v149[((v274 - 8 - (_DWORD)v273) & 0xFFFFFFF8) + 8];
          v277 = (MinecraftUIRenderContext *)(v154 + 8);
          if ( v150 )
            operator delete((void *)v150);
          __asm { VADD.F32        S22, S22, S20 }
          v273 = (MinecraftUIRenderContext *)v149;
          v274 = (int)&v149[8 * v148];
            VSTR            S24, [R1]
            VADD.F32        S22, S22, S20
            VSTR            S26, [R1,#4]
          v277 = (MinecraftUIRenderContext *)((char *)v277 + 8);
      else if ( v288 == v289 )
        v167 = (v288 - (_BYTE *)v287) >> 3;
        if ( !v167 )
          v167 = 1;
        v168 = v167 + ((v288 - (_BYTE *)v287) >> 3);
        v169 = v167 + ((v288 - (_BYTE *)v287) >> 3);
        if ( 0 != v168 >> 29 )
          v169 = 0x1FFFFFFF;
        if ( v168 < v167 )
        if ( v169 >= 0x20000000 )
        v170 = (char *)operator new(8 * v169);
        v171 = v170;
        *(_QWORD *)&v172 = *(_QWORD *)&v287;
        v174 = v170;
        v175 = (__int64 *)v287;
          v177 = v287;
          v178 = (unsigned int)v171;
            v176 = *v175;
            ++v175;
            *(_QWORD *)v174 = v176;
            v174 += 8;
          while ( v173 != v175 );
          v178 = (unsigned int)&v171[(((unsigned int)v173 + -v172 - 8) & 0xFFFFFFF8) + 8];
        v192 = v178 + 8;
        if ( v177 )
          operator delete(v177);
        v287 = v171;
        v288 = (char *)v192;
        v289 = &v171[8 * v169];
        __asm { VADD.F32        S22, S22, S20 }
          VADD.F32        S22, S22, S20
        v288 += 8;
    __asm { VMOV            R1, S24 }
    _R0 = _R11 + 9;
      VMOV            R2, S26
    _R0 = _R9 + 9;
      VMOV            R3, S0
      VSTR            S0, [SP,#0xDA0+var_DA0]
    RectangleArea::RectangleArea(COERCE_FLOAT(&v285), _R1, _R2, _R3, v266);
    RectangleArea::unionRects((RectangleArea *)&v286, (const RectangleArea *)&v317, (int)&v285);
    RectangleArea::operator=((int)&v317, (int)&v286);
  RectangleArea::operator=((int)a6, (int)&v317);
  ScreenRenderer::blitQuadBuffer(v272, (unsigned __int64 *)&ptr, 1091567616, 1091567616, v271, v268, &v306);
  ScreenRenderer::blitQuadBuffer(v272, (unsigned __int64 *)&v293, 1091567616, 1091567616, v271, v270, &v306);
  ScreenRenderer::blitQuadBuffer(v272, (unsigned __int64 *)&v290, 1091567616, 1091567616, v271, v269, &v306);
  ScreenRenderer::blitQuadBuffer(
    v272,
    (unsigned __int64 *)&v287,
    1091567616,
    v271,
    (mce::TexturePtr *)&unk_27C6758,
    &v306);
    (unsigned __int64 *)&v299,
    (mce::TexturePtr *)HIDWORD(v267),
    (unsigned __int64 *)&v296,
    (mce::TexturePtr *)v267,
  if ( v287 )
    operator delete(v287);
  if ( v273 )
    operator delete((void *)v273);
  if ( v290 )
    operator delete(v290);
  if ( v293 )
    operator delete(v293);
  if ( v296 )
    operator delete(v296);
  if ( v299 )
    operator delete(v299);
  if ( ptr )
    operator delete(ptr);
  return mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v306);
}


void __fastcall HudHeartRenderer::~HudHeartRenderer(HudHeartRenderer *this)
{
  HudHeartRenderer::~HudHeartRenderer(this);
}


_QWORD *__fastcall HudHeartRenderer::HudHeartRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26D6C24;
  return result;
}


int __fastcall HudHeartRenderer::clone(HudHeartRenderer *this)
{
  HudHeartRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI16HudHeartRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall HudHeartRenderer::~HudHeartRenderer(HudHeartRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_3(v1);
}


void *__fastcall HudHeartRenderer::reloadTexutres(HudHeartRenderer *this)
{
  void *result; // r0@1

  result = &HudHeartRenderer::mHasLoadedTextures;
  HudHeartRenderer::mHasLoadedTextures = 0;
  return result;
}
