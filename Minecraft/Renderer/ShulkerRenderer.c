

void __fastcall ShulkerRenderer::~ShulkerRenderer(ShulkerRenderer *this)
{
  ShulkerRenderer::~ShulkerRenderer(this);
}


int __fastcall ShulkerRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  Entity **v3; // r4@1
  int v4; // r6@1
  Entity *v5; // r5@1
  unsigned int v7; // r0@1
  int v8; // r9@3
  int v15; // r0@5
  int v16; // r3@5
  int v18; // [sp+8h] [bp-60h]@5
  int v19; // [sp+Ch] [bp-5Ch]@5
  int v20; // [sp+10h] [bp-58h]@5
  float v21; // [sp+14h] [bp-54h]@5
  char v24; // [sp+20h] [bp-48h]@5
  int v25; // [sp+24h] [bp-44h]@5
  int v26; // [sp+28h] [bp-40h]@5
  int v27; // [sp+2Ch] [bp-3Ch]@5
  int v28; // [sp+30h] [bp-38h]@5
  int v29; // [sp+34h] [bp-34h]@5

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  _R8 = a2;
  v7 = Entity::getVariant(*a3);
  if ( v7 > 0x11 )
    v7 = 17;
  v8 = 16 - v7;
  _R7 = Shulker::getClientSideTeleportInterpolation(v5);
  if ( _R7 >= 1 && Shulker::hasValidInterpolationPositions(v5) )
  {
    Shulker::getShulkerAttachPos((Shulker *)&v27, (int)v5);
    Shulker::getOldShulkerAttachPosition((Shulker *)&v24, (int)v5);
    _R0 = (int)v5 + 4292;
    __asm
    {
      VLDR            S16, [R8,#4]
      VLDR            S0, [R0]
      VCVT.F32.S32    S18, S0
    }
    v18 = v27 - *(_DWORD *)&v24;
    v19 = v28 - v25;
    v20 = v29 - v26;
    Vec3::Vec3((int)&v21, (int)&v18);
      VMOV            S0, R7
      VCVT.F32.S32    S0, S0
      VLDR            S2, [SP,#0x68+var_54]
      VLDR            S4, [SP,#0x68+var_50]
    v15 = v4 + 24 * v8;
      VLDR            S6, [SP,#0x68+var_4C]
      VSUB.F32        S0, S0, S16
      VDIV.F32        S0, S0, S18
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VSTR            S2, [SP,#0x68+var_54]
      VSTR            S4, [SP,#0x68+var_50]
      VSTR            S0, [SP,#0x68+var_4C]
    v16 = *(_DWORD *)(v4 + 140);
  }
  else
  return MobRenderer::renderModel(v4, _R8, (int)v3, v16, v15 + 644);
}


void __fastcall ShulkerRenderer::~ShulkerRenderer(ShulkerRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = ShulkerRenderer::~ShulkerRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall ShulkerRenderer::~ShulkerRenderer(ShulkerRenderer *this)
{
  ShulkerRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBFF4;
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)this + 1028));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 1004));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 980));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 956));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 932));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 908));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 884));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 860));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 836));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 812));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 788));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 764));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 740));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((ShulkerRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


int __fastcall ShulkerRenderer::ShulkerRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r4@1
  const GeometryPtr *v4; // r7@1
  mce::TextureGroup *v5; // r6@1
  ShulkerModel *v6; // r5@1
  char *v7; // r0@1
  char *v8; // r0@2
  mce::TexturePtr *v9; // r5@5
  char *v10; // r0@5
  char *v11; // r0@6
  char *v12; // r0@7
  char *v13; // r0@8
  char *v14; // r0@9
  char *v15; // r0@10
  char *v16; // r0@11
  char *v17; // r0@12
  char *v18; // r0@13
  char *v19; // r0@14
  char *v20; // r0@15
  char *v21; // r0@16
  char *v22; // r0@17
  char *v23; // r0@18
  char *v24; // r0@19
  char *v25; // r0@20
  char *v26; // r0@21
  char *v27; // r0@22
  char *v28; // r0@23
  char *v29; // r0@24
  char *v30; // r0@25
  char *v31; // r0@26
  char *v32; // r0@27
  char *v33; // r0@28
  char *v34; // r0@29
  char *v35; // r0@30
  char *v36; // r0@31
  char *v37; // r0@32
  char *v38; // r0@33
  char *v39; // r0@34
  char *v40; // r0@35
  char *v41; // r0@36
  char *v42; // r0@37
  char *v43; // r0@38
  unsigned int *v45; // r2@40
  signed int v46; // r1@42
  unsigned int *v47; // r2@44
  signed int v48; // r1@46
  unsigned int *v49; // r2@48
  signed int v50; // r1@50
  unsigned int *v51; // r2@52
  signed int v52; // r1@54
  unsigned int *v53; // r2@56
  signed int v54; // r1@58
  unsigned int *v55; // r2@60
  signed int v56; // r1@62
  unsigned int *v57; // r2@64
  signed int v58; // r1@66
  unsigned int *v59; // r2@68
  signed int v60; // r1@70
  unsigned int *v61; // r2@72
  signed int v62; // r1@74
  unsigned int *v63; // r2@76
  signed int v64; // r1@78
  unsigned int *v65; // r2@80
  signed int v66; // r1@82
  unsigned int *v67; // r2@84
  signed int v68; // r1@86
  unsigned int *v69; // r2@88
  signed int v70; // r1@90
  unsigned int *v71; // r2@92
  signed int v72; // r1@94
  unsigned int *v73; // r2@96
  signed int v74; // r1@98
  unsigned int *v75; // r2@100
  signed int v76; // r1@102
  unsigned int *v77; // r2@104
  signed int v78; // r1@106
  unsigned int *v79; // r2@108
  signed int v80; // r1@110
  unsigned int *v81; // r2@112
  signed int v82; // r1@114
  unsigned int *v83; // r2@116
  signed int v84; // r1@118
  unsigned int *v85; // r2@120
  signed int v86; // r1@122
  unsigned int *v87; // r2@124
  signed int v88; // r1@126
  unsigned int *v89; // r2@128
  signed int v90; // r1@130
  unsigned int *v91; // r2@132
  signed int v92; // r1@134
  unsigned int *v93; // r2@136
  signed int v94; // r1@138
  unsigned int *v95; // r2@140
  signed int v96; // r1@142
  unsigned int *v97; // r2@144
  signed int v98; // r1@146
  unsigned int *v99; // r2@148
  signed int v100; // r1@150
  unsigned int *v101; // r2@152
  signed int v102; // r1@154
  unsigned int *v103; // r2@156
  signed int v104; // r1@158
  unsigned int *v105; // r2@160
  signed int v106; // r1@162
  unsigned int *v107; // r2@164
  signed int v108; // r1@166
  unsigned int *v109; // r2@168
  signed int v110; // r1@170
  unsigned int *v111; // r2@172
  signed int v112; // r1@174
  unsigned int *v113; // r2@176
  signed int v114; // r1@178
  unsigned int *v115; // r2@180
  signed int v116; // r1@182
  char *v117; // [sp+38h] [bp-2F8h]@37
  char *v118; // [sp+3Ch] [bp-2F4h]@37
  int v119; // [sp+40h] [bp-2F0h]@37
  char v120; // [sp+44h] [bp-2ECh]@37
  char *v121; // [sp+60h] [bp-2D0h]@35
  char *v122; // [sp+64h] [bp-2CCh]@35
  int v123; // [sp+68h] [bp-2C8h]@35
  char v124; // [sp+6Ch] [bp-2C4h]@35
  char *v125; // [sp+88h] [bp-2A8h]@33
  char *v126; // [sp+8Ch] [bp-2A4h]@33
  int v127; // [sp+90h] [bp-2A0h]@33
  char v128; // [sp+94h] [bp-29Ch]@33
  char *v129; // [sp+B0h] [bp-280h]@31
  char *v130; // [sp+B4h] [bp-27Ch]@31
  int v131; // [sp+B8h] [bp-278h]@31
  char v132; // [sp+BCh] [bp-274h]@31
  char *v133; // [sp+D8h] [bp-258h]@29
  char *v134; // [sp+DCh] [bp-254h]@29
  int v135; // [sp+E0h] [bp-250h]@29
  char v136; // [sp+E4h] [bp-24Ch]@29
  char *v137; // [sp+100h] [bp-230h]@27
  char *v138; // [sp+104h] [bp-22Ch]@27
  int v139; // [sp+108h] [bp-228h]@27
  char v140; // [sp+10Ch] [bp-224h]@27
  char *v141; // [sp+128h] [bp-208h]@25
  char *v142; // [sp+12Ch] [bp-204h]@25
  int v143; // [sp+130h] [bp-200h]@25
  char v144; // [sp+134h] [bp-1FCh]@25
  char *v145; // [sp+150h] [bp-1E0h]@23
  char *v146; // [sp+154h] [bp-1DCh]@23
  int v147; // [sp+158h] [bp-1D8h]@23
  char v148; // [sp+15Ch] [bp-1D4h]@23
  char *v149; // [sp+178h] [bp-1B8h]@21
  char *v150; // [sp+17Ch] [bp-1B4h]@21
  int v151; // [sp+180h] [bp-1B0h]@21
  char v152; // [sp+184h] [bp-1ACh]@21
  char *v153; // [sp+1A0h] [bp-190h]@19
  char *v154; // [sp+1A4h] [bp-18Ch]@19
  int v155; // [sp+1A8h] [bp-188h]@19
  char v156; // [sp+1ACh] [bp-184h]@19
  char *v157; // [sp+1C8h] [bp-168h]@17
  char *v158; // [sp+1CCh] [bp-164h]@17
  int v159; // [sp+1D0h] [bp-160h]@17
  char v160; // [sp+1D4h] [bp-15Ch]@17
  char *v161; // [sp+1F0h] [bp-140h]@15
  char *v162; // [sp+1F4h] [bp-13Ch]@15
  int v163; // [sp+1F8h] [bp-138h]@15
  char v164; // [sp+1FCh] [bp-134h]@15
  char *v165; // [sp+218h] [bp-118h]@13
  char *v166; // [sp+21Ch] [bp-114h]@13
  int v167; // [sp+220h] [bp-110h]@13
  char v168; // [sp+224h] [bp-10Ch]@13
  char *v169; // [sp+240h] [bp-F0h]@11
  char *v170; // [sp+244h] [bp-ECh]@11
  int v171; // [sp+248h] [bp-E8h]@11
  char v172; // [sp+24Ch] [bp-E4h]@11
  char *v173; // [sp+268h] [bp-C8h]@9
  char *v174; // [sp+26Ch] [bp-C4h]@9
  int v175; // [sp+270h] [bp-C0h]@9
  char v176; // [sp+274h] [bp-BCh]@9
  char *v177; // [sp+290h] [bp-A0h]@7
  char *v178; // [sp+294h] [bp-9Ch]@7
  int v179; // [sp+298h] [bp-98h]@7
  char v180; // [sp+29Ch] [bp-94h]@7
  char *v181; // [sp+2B8h] [bp-78h]@5
  char *v182; // [sp+2BCh] [bp-74h]@5
  int v183; // [sp+2C0h] [bp-70h]@5
  char v184; // [sp+2C4h] [bp-6Ch]@5
  char *v185; // [sp+2E0h] [bp-50h]@1
  char *v186; // [sp+2E4h] [bp-4Ch]@1
  int v187; // [sp+2E8h] [bp-48h]@1
  char v188; // [sp+2ECh] [bp-44h]@1
  ShulkerModel *v189; // [sp+304h] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (ShulkerModel *)operator new(0x2DCu);
  ShulkerModel::ShulkerModel(v6, v4);
  v189 = v6;
  sub_119C884((void **)&v185, "textures/entity/shulker/shulker_undyed");
  v186 = v185;
  v185 = (char *)&unk_28898CC;
  v187 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v188, v5, (int)&v186, 0);
  MobRenderer::MobRenderer(v3, (int *)&v189, (mce::TexturePtr *)&v188);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v188);
  v7 = v186 - 12;
  if ( (int *)(v186 - 12) != &dword_28898C0 )
  {
    v45 = (unsigned int *)(v186 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    }
    else
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v185 - 12;
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v185 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v189 )
    (*(void (**)(void))(*(_DWORD *)v189 + 4))();
  v189 = 0;
  *(_DWORD *)v3 = &off_26DBFF4;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 644));
  v9 = (mce::TexturePtr *)(v3 + 668);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 668));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 692));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 716));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 740));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 764));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 788));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 812));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 836));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 860));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 884));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 908));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 932));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 956));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 980));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 1004));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 1028));
  sub_119C884((void **)&v181, "textures/entity/shulker/shulker_undyed");
  v182 = v181;
  v181 = (char *)&unk_28898CC;
  v183 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v184, v5, (int)&v182, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 644), (mce::TexturePtr *)&v184);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v184);
  v10 = v182 - 12;
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v182 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v9 = (mce::TexturePtr *)(v3 + 668);
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v181 - 12;
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v181 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v177, "textures/entity/shulker/shulker_white");
  v178 = v177;
  v177 = (char *)&unk_28898CC;
  v179 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v180, v5, (int)&v178, 0);
  mce::TexturePtr::operator=(v9, (mce::TexturePtr *)&v180);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v180);
  v12 = v178 - 12;
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v178 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v177 - 12;
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v177 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v173, "textures/entity/shulker/shulker_orange");
  v174 = v173;
  v173 = (char *)&unk_28898CC;
  v175 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v176, v5, (int)&v174, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 692), (mce::TexturePtr *)&v176);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v176);
  v14 = v174 - 12;
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v174 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v173 - 12;
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v173 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v169, "textures/entity/shulker/shulker_magenta");
  v170 = v169;
  v169 = (char *)&unk_28898CC;
  v171 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v172, v5, (int)&v170, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 716), (mce::TexturePtr *)&v172);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v172);
  v16 = v170 - 12;
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v170 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v169 - 12;
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v169 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v165, "textures/entity/shulker/shulker_light_blue");
  v166 = v165;
  v165 = (char *)&unk_28898CC;
  v167 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v168, v5, (int)&v166, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 740), (mce::TexturePtr *)&v168);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v168);
  v18 = v166 - 12;
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v166 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v165 - 12;
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v165 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v161, "textures/entity/shulker/shulker_yellow");
  v162 = v161;
  v161 = (char *)&unk_28898CC;
  v163 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v164, v5, (int)&v162, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 764), (mce::TexturePtr *)&v164);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v164);
  v20 = v162 - 12;
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v162 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = v161 - 12;
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v161 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v157, "textures/entity/shulker/shulker_lime");
  v158 = v157;
  v157 = (char *)&unk_28898CC;
  v159 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v160, v5, (int)&v158, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 788), (mce::TexturePtr *)&v160);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v160);
  v22 = v158 - 12;
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v158 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = v157 - 12;
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v157 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  sub_119C884((void **)&v153, "textures/entity/shulker/shulker_pink");
  v154 = v153;
  v153 = (char *)&unk_28898CC;
  v155 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v156, v5, (int)&v154, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 812), (mce::TexturePtr *)&v156);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v156);
  v24 = v154 - 12;
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v154 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v153 - 12;
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v153 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v149, "textures/entity/shulker/shulker_gray");
  v150 = v149;
  v149 = (char *)&unk_28898CC;
  v151 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v152, v5, (int)&v150, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 836), (mce::TexturePtr *)&v152);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v152);
  v26 = v150 - 12;
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v150 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v149 - 12;
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v149 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v145, "textures/entity/shulker/shulker_silver");
  v146 = v145;
  v145 = (char *)&unk_28898CC;
  v147 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v148, v5, (int)&v146, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 860), (mce::TexturePtr *)&v148);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v148);
  v28 = v146 - 12;
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v146 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = v145 - 12;
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v145 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v141, "textures/entity/shulker/shulker_cyan");
  v142 = v141;
  v141 = (char *)&unk_28898CC;
  v143 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v144, v5, (int)&v142, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 884), (mce::TexturePtr *)&v144);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v144);
  v30 = v142 - 12;
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v142 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = v141 - 12;
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v141 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  sub_119C884((void **)&v137, "textures/entity/shulker/shulker_purple");
  v138 = v137;
  v137 = (char *)&unk_28898CC;
  v139 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v140, v5, (int)&v138, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 908), (mce::TexturePtr *)&v140);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v140);
  v32 = v138 - 12;
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v138 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = v137 - 12;
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v137 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v133, "textures/entity/shulker/shulker_blue");
  v134 = v133;
  v133 = (char *)&unk_28898CC;
  v135 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v136, v5, (int)&v134, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 932), (mce::TexturePtr *)&v136);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v136);
  v34 = v134 - 12;
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v134 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v133 - 12;
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v133 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  sub_119C884((void **)&v129, "textures/entity/shulker/shulker_brown");
  v130 = v129;
  v129 = (char *)&unk_28898CC;
  v131 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v132, v5, (int)&v130, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 956), (mce::TexturePtr *)&v132);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v132);
  v36 = v130 - 12;
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v130 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = v129 - 12;
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v129 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v125, "textures/entity/shulker/shulker_green");
  v126 = v125;
  v125 = (char *)&unk_28898CC;
  v127 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v128, v5, (int)&v126, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 980), (mce::TexturePtr *)&v128);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v128);
  v38 = v126 - 12;
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v126 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = v125 - 12;
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v125 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119C884((void **)&v121, "textures/entity/shulker/shulker_red");
  v122 = v121;
  v121 = (char *)&unk_28898CC;
  v123 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v124, v5, (int)&v122, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 1004), (mce::TexturePtr *)&v124);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v124);
  v40 = v122 - 12;
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v122 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = v121 - 12;
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v121 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v117, "textures/entity/shulker/shulker_black");
  v118 = v117;
  v117 = (char *)&unk_28898CC;
  v119 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v120, v5, (int)&v118, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 1028), (mce::TexturePtr *)&v120);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v120);
  v42 = v118 - 12;
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v118 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = v117 - 12;
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v117 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  return v3;
}


int __fastcall ShulkerRenderer::setupRotations(int a1, float a2, int a3, int a4, int a5, int a6)
{
  Shulker *v10; // r5@1
  int result; // r0@1
  signed int v13; // r0@5
  int v26; // [sp+4h] [bp-6Ch]@0
  int v27; // [sp+Ch] [bp-64h]@2
  int v28; // [sp+10h] [bp-60h]@2
  int v29; // [sp+14h] [bp-5Ch]@2
  int v30; // [sp+18h] [bp-58h]@4
  int v31; // [sp+1Ch] [bp-54h]@4
  int v32; // [sp+20h] [bp-50h]@4
  int v33; // [sp+24h] [bp-4Ch]@4
  int v34; // [sp+28h] [bp-48h]@4
  int v35; // [sp+2Ch] [bp-44h]@4
  int v36; // [sp+30h] [bp-40h]@4
  int v37; // [sp+34h] [bp-3Ch]@4
  int v38; // [sp+38h] [bp-38h]@4
  int v39; // [sp+3Ch] [bp-34h]@4
  int v40; // [sp+40h] [bp-30h]@4
  int v41; // [sp+44h] [bp-2Ch]@4
  int v42; // [sp+48h] [bp-28h]@4
  int v43; // [sp+4Ch] [bp-24h]@4
  int v44; // [sp+50h] [bp-20h]@4
  int v45; // [sp+54h] [bp-1Ch]@4
  int v46; // [sp+58h] [bp-18h]@4

  __asm { VLDR            S0, [SP,#0x70+arg_4] }
  v10 = (Shulker *)LODWORD(a2);
  _R4 = a5;
  __asm { VSTR            S0, [SP,#0x70+var_6C] }
  MobRenderer::setupRotations(a1, a2, a3, a4, a5, v26);
  result = Shulker::getAttachFace(v10);
  switch ( result )
  {
    case 1:
      __asm
      {
        VLDR            S0, [R4,#0x14]; jumptable 00EF5466 case 1
        VLDR            S10, [R4,#0x34]
        VLDR            S2, [R4,#0x18]
        VLDR            S12, [R4,#0x38]
        VADD.F32        S0, S10, S0
        VLDR            S4, [R4,#0x1C]
        VLDR            S14, [R4,#0x3C]
        VADD.F32        S2, S12, S2
        VLDR            S6, [R4,#0x10]
        VLDR            S8, [R4,#0x30]
        VADD.F32        S4, S14, S4
        VADD.F32        S6, S8, S6
        VSTR            S6, [R4,#0x30]
        VSTR            S0, [R4,#0x34]
        VSTR            S2, [R4,#0x38]
        VSTR            S4, [R4,#0x3C]
      }
      v27 = 1065353216;
      v28 = 0;
      v29 = 0;
      goto LABEL_5;
    case 2:
        VLDR            S0, [R4,#0x14]; jumptable 00EF5466 case 2
        VMOV.F32        S1, #0.5
        VLDR            S8, [R4,#0x24]
        VLDR            S10, [R4,#0x28]
        VADD.F32        S0, S8, S0
        VLDR            S12, [R4,#0x2C]
        VADD.F32        S2, S10, S2
        VLDR            S6, [R4,#0x20]
        VLDR            S14, [R4,#0x10]
        VADD.F32        S4, S12, S4
        VADD.F32        S6, S6, S14
        VMUL.F32        S0, S0, S1
        VMUL.F32        S2, S2, S1
        VMUL.F32        S4, S4, S1
        VMUL.F32        S6, S6, S1
      v46 = 1119092736;
      glm::rotate<float>((int)&v30, a5, (int)&v46, (int)&v27);
      *(_DWORD *)a5 = v30;
      *(_DWORD *)(a5 + 4) = v31;
      *(_DWORD *)(a5 + 8) = v32;
      *(_DWORD *)(a5 + 12) = v33;
      *(_DWORD *)(a5 + 16) = v34;
      *(_DWORD *)(a5 + 20) = v35;
      *(_DWORD *)(a5 + 24) = v36;
      *(_DWORD *)(a5 + 28) = v37;
      *(_DWORD *)(a5 + 32) = v38;
      *(_DWORD *)(a5 + 36) = v39;
      *(_DWORD *)(a5 + 40) = v40;
      *(_DWORD *)(a5 + 44) = v41;
      *(_DWORD *)(a5 + 48) = v42;
      *(_DWORD *)(a5 + 52) = v43;
      *(_DWORD *)(a5 + 56) = v44;
      *(_DWORD *)(a5 + 60) = v45;
      v27 = 0;
      v29 = 1065353216;
LABEL_5:
      v13 = 1127481344;
      goto LABEL_9;
    case 3:
        VLDR            S0, [R4,#0x14]; jumptable 00EF5466 case 3
        VSUB.F32        S0, S0, S8
        VSUB.F32        S2, S2, S10
        VSUB.F32        S4, S4, S12
        VSUB.F32        S6, S14, S6
        VADD.F32        S0, S0, S10
        VADD.F32        S2, S2, S12
        VADD.F32        S4, S4, S14
        VADD.F32        S6, S6, S8
      v13 = 1119092736;
    case 4:
        VLDR            S0, [R4,#4]; jumptable 00EF5466 case 4
        VLDR            S8, [R4,#0x14]
        VLDR            S2, [R4,#8]
        VLDR            S10, [R4,#0x18]
        VLDR            S4, [R4,#0xC]
        VLDR            S12, [R4,#0x1C]
        VLDR            S14, [R4]
      goto LABEL_10;
    case 5:
        VLDR            S0, [R4,#4]; jumptable 00EF5466 case 5
        VSUB.F32        S0, S8, S0
        VSUB.F32        S2, S10, S2
        VSUB.F32        S4, S12, S4
        VSUB.F32        S6, S6, S14
      v13 = -1028390912;
LABEL_9:
      v46 = v13;
LABEL_10:
      _R0 = v30;
      _R1 = v31;
      __asm { VMOV            S0, R0 }
      _R2 = v32;
      __asm { VMOV            S2, R1 }
      _R3 = v33;
      __asm { VMOV            S4, R2 }
      _R7 = v34;
      __asm { VMOV            S6, R3 }
      _R0 = v35;
      __asm { VMOV            S8, R7 }
      _R1 = v36;
      __asm { VMOV            S10, R0 }
      _R2 = v37;
      __asm { VMOV            S12, R1 }
      _R3 = v38;
      __asm { VMOV            S14, R2 }
      _R7 = v39;
      __asm { VMOV            S1, R3 }
      _R0 = v40;
      __asm { VMOV            S3, R7 }
      _R1 = v41;
      __asm { VMOV            S5, R0 }
      __asm { VMOV            S7, R1 }
      result = v45;
      break;
    default:
        VLDR            S2, [R4,#4]; jumptable 00EF5466 default case
        VLDR            S4, [R4,#8]
        VLDR            S6, [R4,#0xC]
        VLDR            S8, [R4,#0x10]
        VLDR            S10, [R4,#0x14]
        VLDR            S12, [R4,#0x18]
        VLDR            S14, [R4,#0x1C]
        VLDR            S0, [R4]
        VLDR            S1, [R4,#0x20]
        VLDR            S3, [R4,#0x24]
        VLDR            S5, [R4,#0x28]
        VLDR            S7, [R4,#0x2C]
  }
  __asm
    VLDR            S9, =0.999
    VMUL.F32        S0, S0, S9
    VMUL.F32        S2, S2, S9
    VMUL.F32        S4, S4, S9
    VMUL.F32        S6, S6, S9
    VMUL.F32        S8, S8, S9
    VMUL.F32        S10, S10, S9
    VMUL.F32        S1, S1, S9
    VMUL.F32        S3, S3, S9
    VSTR            S0, [R4]
    VMUL.F32        S5, S5, S9
    VSTR            S2, [R4,#4]
    VMUL.F32        S7, S7, S9
    VSTR            S4, [R4,#8]
    VMUL.F32        S12, S12, S9
    VSTR            S6, [R4,#0xC]
    VMUL.F32        S14, S14, S9
    VSTR            S8, [R4,#0x10]
    VSTR            S10, [R4,#0x14]
    VSTR            S12, [R4,#0x18]
    VSTR            S14, [R4,#0x1C]
    VSTR            S1, [R4,#0x20]
    VSTR            S3, [R4,#0x24]
    VSTR            S5, [R4,#0x28]
    VSTR            S7, [R4,#0x2C]
  return result;
}
