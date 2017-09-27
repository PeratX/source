

int __fastcall HorseRenderer::setupScale(int a1, int a2, int a3)
{
  int v4; // r0@1

  _R5 = a3;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 1200))(a2);
  __asm
  {
    VLDR            S2, =0.92
    VMOV.F32        S0, #1.0
  }
  if ( v4 == 2 )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VLDR            S2, =0.87 }
  if ( v4 == 1 )
    VLDR            S2, [R5]
    VMUL.F32        S2, S0, S2
    VSTR            S2, [R5]
    VLDR            S2, [R5,#4]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R5,#4]
    VLDR            S2, [R5,#8]
    VSTR            S2, [R5,#8]
    VLDR            S2, [R5,#0xC]
    VSTR            S2, [R5,#0xC]
    VLDR            S2, [R5,#0x10]
    VSTR            S2, [R5,#0x10]
    VLDR            S2, [R5,#0x14]
    VSTR            S2, [R5,#0x14]
    VLDR            S2, [R5,#0x18]
    VSTR            S2, [R5,#0x18]
    VLDR            S2, [R5,#0x1C]
    VSTR            S2, [R5,#0x1C]
    VLDR            S2, [R5,#0x20]
    VSTR            S2, [R5,#0x20]
    VLDR            S2, [R5,#0x24]
    VSTR            S2, [R5,#0x24]
    VLDR            S2, [R5,#0x28]
    VSTR            S2, [R5,#0x28]
    VLDR            S2, [R5,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R5,#0x2C]
  return j_j_j__ZNK11MobRenderer10setupScaleERK3MobR6Matrixf();
}


BaseEntityRenderer *__fastcall HorseRenderer::~HorseRenderer(HorseRenderer *this)
{
  HorseRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB774;
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)this + 1148));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 1124));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 1100));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 1076));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 1052));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 1028));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 1004));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 980));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 956));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 932));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 908));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 884));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 860));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 836));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 812));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 788));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 764));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 740));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((HorseRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall HorseRenderer::~HorseRenderer(HorseRenderer *this)
{
  HorseRenderer::~HorseRenderer(this);
}


void __fastcall HorseRenderer::~HorseRenderer(HorseRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = HorseRenderer::~HorseRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HorseRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  BaseEntityRenderContext *v3; // r5@1 OVERLAPPED
  Entity **v4; // r7@1
  int v5; // r8@1
  Entity *v6; // r4@1
  int v7; // r6@1 OVERLAPPED
  int v8; // r0@1
  int v9; // r10@1
  int v10; // r0@1
  bool v11; // zf@1
  int v12; // r0@7
  unsigned __int8 v13; // r6@9
  unsigned int v14; // r9@9
  int v15; // r0@9
  int v16; // r5@11
  mce::TexturePtr *v17; // r11@11
  int v18; // r6@16
  int v19; // r7@16
  bool v20; // zf@16
  signed int v21; // r0@19
  bool v22; // zf@19
  int v23; // r12@24
  int v24; // r1@24
  int v25; // r2@24
  int v26; // r3@24
  mce::Texture *v27; // r0@26
  mce::Texture *v28; // r0@26
  __int64 v30; // [sp+4h] [bp-44h]@6
  int v31; // [sp+Ch] [bp-3Ch]@9
  char v32; // [sp+10h] [bp-38h]@24
  int v33; // [sp+14h] [bp-34h]@24
  int v34; // [sp+18h] [bp-30h]@24
  int v35; // [sp+1Ch] [bp-2Ch]@24

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *a3;
  v7 = *(_DWORD *)(BaseEntityRenderContext::getScreenContext(a2) + 12);
  v8 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v6 + 1028))(v6, 1);
  v9 = v8;
  v10 = *(_BYTE *)(v8 + 15);
  v11 = v10 == 0;
  if ( v10 )
    v11 = *(_DWORD *)v9 == 0;
  if ( v11 || ItemInstance::isNull((ItemInstance *)v9) || !*(_BYTE *)(v9 + 14) )
  {
    v30 = *(_QWORD *)&v3;
    v12 = 0;
  }
  else
    if ( ItemInstance::isHorseArmorItem((ItemInstance *)v9) == 1 )
      v12 = (*(int (**)(void))(**(_DWORD **)v9 + 276))();
    else
      v12 = 0;
  v31 = v12;
  v13 = Entity::getVariant(v6);
  v14 = Entity::getMarkVariant(v6);
  v15 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 1200))(v6);
  if ( v15 == -1 )
    v15 = 0;
  v16 = v5 + 24 * v15 + 644;
  v17 = (mce::TexturePtr *)(v5 + 932);
  if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 1200))(v6) )
    if ( v14 < 5 )
      v17 = (mce::TexturePtr *)(v5 + 24 * v14 + 932);
    if ( v13 < 7u )
      v16 = v5 + 24 * v13 + 764;
  v18 = (int)v4;
  v19 = *(_DWORD *)(v5 + 140);
  v20 = *(_BYTE *)(v9 + 15) == 0;
  if ( *(_BYTE *)(v9 + 15) )
    v20 = *(_DWORD *)v9 == 0;
  if ( v20 )
    goto LABEL_30;
  v21 = ItemInstance::isNull((ItemInstance *)v9);
  v22 = v21 == 0;
  if ( !v21 )
    v22 = v31 == 1;
  if ( v22 && *(_BYTE *)(v9 + 14) )
    *(_DWORD *)(*(_DWORD *)(v5 + 140) + 28) = v19 + 60;
    (*(void (__fastcall **)(char *))(**(_DWORD **)v9 + 156))(&v32);
    v23 = (int)v6 + 232;
    v24 = v33;
    v25 = v34;
    v26 = v35;
    *(_DWORD *)v23 = *(_DWORD *)&v32;
    *(_DWORD *)(v23 + 4) = v24;
    *(_DWORD *)(v23 + 8) = v25;
    *(_DWORD *)(v23 + 12) = v26;
LABEL_30:
    *(_DWORD *)(*(_DWORD *)(v5 + 140) + 28) = v19 + 48;
  v27 = (mce::Texture *)mce::TexturePtr::get(v17);
  mce::Texture::bindTexture(v27, (mce::RenderContext *)HIDWORD(v30), 1u, 2u);
  v28 = (mce::Texture *)mce::TexturePtr::operator->(v5 + 24 * v31 + 1052);
  mce::Texture::bindTexture(v28, (mce::RenderContext *)HIDWORD(v30), 2u, 2u);
  return MobRenderer::renderModel(v5, (BaseEntityRenderContext *)v30, v18, *(_DWORD *)(v5 + 140), v16);
}


int __fastcall HorseRenderer::HorseRenderer(float a1, int a2, int *a3, mce::TextureGroup *a4, int a5)
{
  mce::TextureGroup *v5; // r6@1
  int v6; // r5@1
  int v7; // r4@1
  char *v13; // r0@1
  char *v14; // r0@2
  unsigned int *v16; // r2@6
  signed int v17; // r1@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  char *v20; // [sp+38h] [bp-50h]@1
  char *v21; // [sp+3Ch] [bp-4Ch]@1
  int v22; // [sp+40h] [bp-48h]@1
  char v23; // [sp+44h] [bp-44h]@1
  int v24; // [sp+5Ch] [bp-2Ch]@1

  v5 = a4;
  v6 = *a3;
  v7 = LODWORD(a1);
  *a3 = 0;
  v24 = v6;
  sub_119C884((void **)&v20, "textures/entity/horse/horse_brown");
  v21 = v20;
  v22 = 0;
  v20 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v23, v5, (int)&v21, 0);
  __asm
  {
    VLDR            S0, [SP,#0x88+arg_0]
    VMOV            R3, S0
  }
  MobRenderer::MobRenderer(v7, &v24, (mce::TexturePtr *)&v23);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v23);
  v13 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  v24 = 0;
  *(_DWORD *)v7 = &off_26DB774;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 644));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 668));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 692));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 716));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 740));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 764));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 788));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 812));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 836));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 860));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 884));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 908));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 932));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 956));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 980));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1004));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1028));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1052));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1076));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1100));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1124));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v7 + 1148));
  return v7;
}


int __fastcall HorseRenderer::HorseRenderer(int a1, int *a2, mce::TextureGroup *a3)
{
  int v3; // r7@1
  mce::TextureGroup *v4; // r5@1
  int v5; // r11@1
  char *v6; // r0@1
  char *v7; // r0@2
  char *v8; // r0@5
  char *v9; // r0@6
  char *v10; // r0@7
  char *v11; // r0@8
  char *v12; // r0@9
  char *v13; // r0@10
  char *v14; // r0@11
  char *v15; // r0@12
  char *v16; // r0@13
  char *v17; // r0@14
  char *v18; // r0@15
  char *v19; // r0@16
  char *v20; // r0@17
  char *v21; // r0@18
  char *v22; // r0@19
  char *v23; // r0@20
  char *v24; // r0@21
  char *v25; // r0@22
  char *v26; // r0@23
  char *v27; // r0@24
  char *v28; // r0@25
  char *v29; // r0@26
  char *v30; // r0@27
  char *v31; // r0@28
  char *v32; // r0@29
  char *v33; // r0@30
  char *v34; // r0@31
  char *v35; // r0@32
  char *v36; // r0@33
  char *v37; // r0@34
  char *v38; // r0@35
  char *v39; // r0@36
  char *v40; // r0@37
  char *v41; // r0@38
  char *v42; // r0@39
  char *v43; // r0@40
  char *v44; // r0@41
  char *v45; // r0@42
  char *v46; // r0@43
  char *v47; // r0@44
  char *v48; // r0@45
  char *v49; // r0@46
  char *v50; // r0@47
  char *v51; // r0@48
  unsigned int *v53; // r2@50
  signed int v54; // r1@52
  unsigned int *v55; // r2@54
  signed int v56; // r1@56
  unsigned int *v57; // r2@58
  signed int v58; // r1@60
  unsigned int *v59; // r2@62
  signed int v60; // r1@64
  unsigned int *v61; // r2@66
  signed int v62; // r1@68
  unsigned int *v63; // r2@70
  signed int v64; // r1@72
  unsigned int *v65; // r2@74
  signed int v66; // r1@76
  unsigned int *v67; // r2@78
  signed int v68; // r1@80
  unsigned int *v69; // r2@82
  signed int v70; // r1@84
  unsigned int *v71; // r2@86
  signed int v72; // r1@88
  unsigned int *v73; // r2@90
  signed int v74; // r1@92
  unsigned int *v75; // r2@94
  signed int v76; // r1@96
  unsigned int *v77; // r2@98
  signed int v78; // r1@100
  unsigned int *v79; // r2@102
  signed int v80; // r1@104
  unsigned int *v81; // r2@106
  signed int v82; // r1@108
  unsigned int *v83; // r2@110
  signed int v84; // r1@112
  unsigned int *v85; // r2@114
  signed int v86; // r1@116
  unsigned int *v87; // r2@118
  signed int v88; // r1@120
  unsigned int *v89; // r2@122
  signed int v90; // r1@124
  unsigned int *v91; // r2@126
  signed int v92; // r1@128
  unsigned int *v93; // r2@130
  signed int v94; // r1@132
  unsigned int *v95; // r2@134
  signed int v96; // r1@136
  unsigned int *v97; // r2@138
  signed int v98; // r1@140
  unsigned int *v99; // r2@142
  signed int v100; // r1@144
  unsigned int *v101; // r2@146
  signed int v102; // r1@148
  unsigned int *v103; // r2@150
  signed int v104; // r1@152
  unsigned int *v105; // r2@154
  signed int v106; // r1@156
  unsigned int *v107; // r2@158
  signed int v108; // r1@160
  unsigned int *v109; // r2@162
  signed int v110; // r1@164
  unsigned int *v111; // r2@166
  signed int v112; // r1@168
  unsigned int *v113; // r2@170
  signed int v114; // r1@172
  unsigned int *v115; // r2@174
  signed int v116; // r1@176
  unsigned int *v117; // r2@178
  signed int v118; // r1@180
  unsigned int *v119; // r2@182
  signed int v120; // r1@184
  unsigned int *v121; // r2@186
  signed int v122; // r1@188
  unsigned int *v123; // r2@190
  signed int v124; // r1@192
  unsigned int *v125; // r2@194
  signed int v126; // r1@196
  unsigned int *v127; // r2@198
  signed int v128; // r1@200
  unsigned int *v129; // r2@202
  signed int v130; // r1@204
  unsigned int *v131; // r2@206
  signed int v132; // r1@208
  unsigned int *v133; // r2@210
  signed int v134; // r1@212
  unsigned int *v135; // r2@214
  signed int v136; // r1@216
  unsigned int *v137; // r2@218
  signed int v138; // r1@220
  unsigned int *v139; // r2@222
  signed int v140; // r1@224
  unsigned int *v141; // r2@226
  signed int v142; // r1@228
  unsigned int *v143; // r2@230
  signed int v144; // r1@232
  char *v145; // [sp+48h] [bp-3C0h]@47
  char *v146; // [sp+4Ch] [bp-3BCh]@47
  int v147; // [sp+50h] [bp-3B8h]@47
  char v148; // [sp+54h] [bp-3B4h]@47
  char *v149; // [sp+70h] [bp-398h]@45
  char *v150; // [sp+74h] [bp-394h]@45
  int v151; // [sp+78h] [bp-390h]@45
  char v152; // [sp+7Ch] [bp-38Ch]@45
  char *v153; // [sp+98h] [bp-370h]@43
  char *v154; // [sp+9Ch] [bp-36Ch]@43
  int v155; // [sp+A0h] [bp-368h]@43
  char v156; // [sp+A4h] [bp-364h]@43
  char *v157; // [sp+C0h] [bp-348h]@41
  char *v158; // [sp+C4h] [bp-344h]@41
  int v159; // [sp+C8h] [bp-340h]@41
  char v160; // [sp+CCh] [bp-33Ch]@41
  char *v161; // [sp+E8h] [bp-320h]@39
  char *v162; // [sp+ECh] [bp-31Ch]@39
  int v163; // [sp+F0h] [bp-318h]@39
  char v164; // [sp+F4h] [bp-314h]@39
  char *v165; // [sp+110h] [bp-2F8h]@37
  char *v166; // [sp+114h] [bp-2F4h]@37
  int v167; // [sp+118h] [bp-2F0h]@37
  char v168; // [sp+11Ch] [bp-2ECh]@37
  char *v169; // [sp+138h] [bp-2D0h]@35
  char *v170; // [sp+13Ch] [bp-2CCh]@35
  int v171; // [sp+140h] [bp-2C8h]@35
  char v172; // [sp+144h] [bp-2C4h]@35
  char *v173; // [sp+160h] [bp-2A8h]@33
  char *v174; // [sp+164h] [bp-2A4h]@33
  int v175; // [sp+168h] [bp-2A0h]@33
  char v176; // [sp+16Ch] [bp-29Ch]@33
  char *v177; // [sp+188h] [bp-280h]@31
  char *v178; // [sp+18Ch] [bp-27Ch]@31
  int v179; // [sp+190h] [bp-278h]@31
  char v180; // [sp+194h] [bp-274h]@31
  char *v181; // [sp+1B0h] [bp-258h]@29
  char *v182; // [sp+1B4h] [bp-254h]@29
  int v183; // [sp+1B8h] [bp-250h]@29
  char v184; // [sp+1BCh] [bp-24Ch]@29
  char *v185; // [sp+1D8h] [bp-230h]@27
  char *v186; // [sp+1DCh] [bp-22Ch]@27
  int v187; // [sp+1E0h] [bp-228h]@27
  char v188; // [sp+1E4h] [bp-224h]@27
  char *v189; // [sp+200h] [bp-208h]@25
  char *v190; // [sp+204h] [bp-204h]@25
  int v191; // [sp+208h] [bp-200h]@25
  char v192; // [sp+20Ch] [bp-1FCh]@25
  char *v193; // [sp+228h] [bp-1E0h]@23
  char *v194; // [sp+22Ch] [bp-1DCh]@23
  int v195; // [sp+230h] [bp-1D8h]@23
  char v196; // [sp+234h] [bp-1D4h]@23
  char *v197; // [sp+250h] [bp-1B8h]@21
  char *v198; // [sp+254h] [bp-1B4h]@21
  int v199; // [sp+258h] [bp-1B0h]@21
  char v200; // [sp+25Ch] [bp-1ACh]@21
  char *v201; // [sp+278h] [bp-190h]@19
  char *v202; // [sp+27Ch] [bp-18Ch]@19
  int v203; // [sp+280h] [bp-188h]@19
  char v204; // [sp+284h] [bp-184h]@19
  char *v205; // [sp+2A0h] [bp-168h]@17
  char *v206; // [sp+2A4h] [bp-164h]@17
  int v207; // [sp+2A8h] [bp-160h]@17
  char v208; // [sp+2ACh] [bp-15Ch]@17
  char *v209; // [sp+2C8h] [bp-140h]@15
  char *v210; // [sp+2CCh] [bp-13Ch]@15
  int v211; // [sp+2D0h] [bp-138h]@15
  char v212; // [sp+2D4h] [bp-134h]@15
  char *v213; // [sp+2F0h] [bp-118h]@13
  char *v214; // [sp+2F4h] [bp-114h]@13
  int v215; // [sp+2F8h] [bp-110h]@13
  char v216; // [sp+2FCh] [bp-10Ch]@13
  char *v217; // [sp+318h] [bp-F0h]@11
  char *v218; // [sp+31Ch] [bp-ECh]@11
  int v219; // [sp+320h] [bp-E8h]@11
  char v220; // [sp+324h] [bp-E4h]@11
  char *v221; // [sp+340h] [bp-C8h]@9
  char *v222; // [sp+344h] [bp-C4h]@9
  int v223; // [sp+348h] [bp-C0h]@9
  char v224; // [sp+34Ch] [bp-BCh]@9
  char *v225; // [sp+368h] [bp-A0h]@7
  char *v226; // [sp+36Ch] [bp-9Ch]@7
  int v227; // [sp+370h] [bp-98h]@7
  char v228; // [sp+374h] [bp-94h]@7
  char *v229; // [sp+390h] [bp-78h]@5
  char *v230; // [sp+394h] [bp-74h]@5
  int v231; // [sp+398h] [bp-70h]@5
  char v232; // [sp+39Ch] [bp-6Ch]@5
  char *v233; // [sp+3B8h] [bp-50h]@1
  char *v234; // [sp+3BCh] [bp-4Ch]@1
  int v235; // [sp+3C0h] [bp-48h]@1
  char v236; // [sp+3C4h] [bp-44h]@1
  int v237; // [sp+3DCh] [bp-2Ch]@1

  v3 = *a2;
  v4 = a3;
  v5 = a1;
  *a2 = 0;
  v237 = v3;
  sub_119C884((void **)&v233, "textures/entity/horse/horse_brown");
  v234 = v233;
  v235 = 0;
  v233 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v236, v4, (int)&v234, 0);
  MobRenderer::MobRenderer(v5, &v237, (mce::TexturePtr *)&v236);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v236);
  v6 = v234 - 12;
  if ( (int *)(v234 - 12) != &dword_28898C0 )
  {
    v53 = (unsigned int *)(v234 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
    }
    else
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v233 - 12;
  if ( (int *)(v233 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v233 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  if ( v237 )
    (*(void (**)(void))(*(_DWORD *)v237 + 4))();
  v237 = 0;
  *(_DWORD *)v5 = &off_26DB774;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 644));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 668));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 692));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 716));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 740));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 764));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 788));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 812));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 836));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 860));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 884));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 908));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 932));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 956));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 980));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1004));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1028));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1052));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1076));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1100));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1124));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 1148));
  sub_119C884((void **)&v229, "textures/entity/horse/horse_brown");
  v230 = v229;
  v229 = (char *)&unk_28898CC;
  v231 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v232, v4, (int)&v230, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 644), (mce::TexturePtr *)&v232);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v232);
  v8 = v230 - 12;
  if ( (int *)(v230 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v230 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v229 - 12;
  if ( (int *)(v229 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v229 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v225, "textures/entity/horse/mule");
  v226 = v225;
  v225 = (char *)&unk_28898CC;
  v227 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v228, v4, (int)&v226, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 692), (mce::TexturePtr *)&v228);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v228);
  v10 = v226 - 12;
  if ( (int *)(v226 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v226 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v225 - 12;
  if ( (int *)(v225 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v225 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v221, "textures/entity/horse/donkey");
  v222 = v221;
  v221 = (char *)&unk_28898CC;
  v223 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v224, v4, (int)&v222, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 668), (mce::TexturePtr *)&v224);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v224);
  v12 = v222 - 12;
  if ( (int *)(v222 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v222 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v221 - 12;
  if ( (int *)(v221 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v221 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v217, "textures/entity/horse/horse_skeleton");
  v218 = v217;
  v217 = (char *)&unk_28898CC;
  v219 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v220, v4, (int)&v218, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 740), (mce::TexturePtr *)&v220);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v220);
  v14 = v218 - 12;
  if ( (int *)(v218 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v218 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v217 - 12;
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v217 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v213, "textures/entity/horse/horse_zombie");
  v214 = v213;
  v213 = (char *)&unk_28898CC;
  v215 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v216, v4, (int)&v214, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 716), (mce::TexturePtr *)&v216);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v216);
  v16 = v214 - 12;
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v214 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v213 - 12;
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v213 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v209, "textures/entity/horse/horse_white");
  v210 = v209;
  v209 = (char *)&unk_28898CC;
  v211 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v212, v4, (int)&v210, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 764), (mce::TexturePtr *)&v212);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v212);
  v18 = v210 - 12;
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v210 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v209 - 12;
  if ( (int *)(v209 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v209 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v205, "textures/entity/horse/horse_creamy");
  v206 = v205;
  v205 = (char *)&unk_28898CC;
  v207 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v208, v4, (int)&v206, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 788), (mce::TexturePtr *)&v208);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v208);
  v20 = v206 - 12;
  if ( (int *)(v206 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v206 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = v205 - 12;
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v205 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v201, "textures/entity/horse/horse_chestnut");
  v202 = v201;
  v201 = (char *)&unk_28898CC;
  v203 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v204, v4, (int)&v202, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 812), (mce::TexturePtr *)&v204);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v204);
  v22 = v202 - 12;
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v202 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = v201 - 12;
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v201 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  sub_119C884((void **)&v197, "textures/entity/horse/horse_brown");
  v198 = v197;
  v197 = (char *)&unk_28898CC;
  v199 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v200, v4, (int)&v198, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 836), (mce::TexturePtr *)&v200);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v200);
  v24 = v198 - 12;
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v198 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v197 - 12;
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v197 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v193, "textures/entity/horse/horse_black");
  v194 = v193;
  v193 = (char *)&unk_28898CC;
  v195 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v196, v4, (int)&v194, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 860), (mce::TexturePtr *)&v196);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v196);
  v26 = v194 - 12;
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v194 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v193 - 12;
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v193 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v189, "textures/entity/horse/horse_gray");
  v190 = v189;
  v189 = (char *)&unk_28898CC;
  v191 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v192, v4, (int)&v190, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 884), (mce::TexturePtr *)&v192);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v192);
  v28 = v190 - 12;
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v190 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = v189 - 12;
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v189 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v185, "textures/entity/horse/horse_darkbrown");
  v186 = v185;
  v185 = (char *)&unk_28898CC;
  v187 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v188, v4, (int)&v186, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 908), (mce::TexturePtr *)&v188);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v188);
  v30 = v186 - 12;
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v186 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = v185 - 12;
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v185 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  sub_119C884((void **)&v181, "textures/entity/horse/horse_markings_none");
  v182 = v181;
  v181 = (char *)&unk_28898CC;
  v183 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v184, v4, (int)&v182, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 932), (mce::TexturePtr *)&v184);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v184);
  v32 = v182 - 12;
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v182 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = v181 - 12;
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v181 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v177, "textures/entity/horse/horse_markings_white");
  v178 = v177;
  v177 = (char *)&unk_28898CC;
  v179 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v180, v4, (int)&v178, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 956), (mce::TexturePtr *)&v180);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v180);
  v34 = v178 - 12;
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v178 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v177 - 12;
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v177 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  sub_119C884((void **)&v173, "textures/entity/horse/horse_markings_whitefield");
  v174 = v173;
  v173 = (char *)&unk_28898CC;
  v175 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v176, v4, (int)&v174, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 980), (mce::TexturePtr *)&v176);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v176);
  v36 = v174 - 12;
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v174 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = v173 - 12;
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v173 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v169, "textures/entity/horse/horse_markings_whitedots");
  v170 = v169;
  v169 = (char *)&unk_28898CC;
  v171 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v172, v4, (int)&v170, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1004), (mce::TexturePtr *)&v172);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v172);
  v38 = v170 - 12;
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v170 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = v169 - 12;
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v169 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119C884((void **)&v165, "textures/entity/horse/horse_markings_blackdots");
  v166 = v165;
  v165 = (char *)&unk_28898CC;
  v167 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v168, v4, (int)&v166, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1028), (mce::TexturePtr *)&v168);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v168);
  v40 = v166 - 12;
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v166 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = v165 - 12;
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v165 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v161, "textures/entity/horse/armor/horse_armor_none");
  v162 = v161;
  v161 = (char *)&unk_28898CC;
  v163 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v164, v4, (int)&v162, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1052), (mce::TexturePtr *)&v164);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v164);
  v42 = v162 - 12;
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v162 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = v161 - 12;
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v161 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  sub_119C884((void **)&v157, "textures/entity/horse/armor/horse_armor_leather");
  v158 = v157;
  v157 = (char *)&unk_28898CC;
  v159 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v160, v4, (int)&v158, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1076), (mce::TexturePtr *)&v160);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v160);
  v44 = v158 - 12;
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v158 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
  v45 = v157 - 12;
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v157 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  sub_119C884((void **)&v153, "textures/entity/horse/armor/horse_armor_iron");
  v154 = v153;
  v153 = (char *)&unk_28898CC;
  v155 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v156, v4, (int)&v154, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1100), (mce::TexturePtr *)&v156);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v156);
  v46 = v154 - 12;
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v154 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  v47 = v153 - 12;
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v153 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  sub_119C884((void **)&v149, "textures/entity/horse/armor/horse_armor_gold");
  v150 = v149;
  v149 = (char *)&unk_28898CC;
  v151 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v152, v4, (int)&v150, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1124), (mce::TexturePtr *)&v152);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v152);
  v48 = v150 - 12;
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v150 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = v149 - 12;
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v149 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  sub_119C884((void **)&v145, "textures/entity/horse/armor/horse_armor_diamond");
  v146 = v145;
  v145 = (char *)&unk_28898CC;
  v147 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v148, v4, (int)&v146, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1148), (mce::TexturePtr *)&v148);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v148);
  v50 = v146 - 12;
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v146 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v50);
  v51 = v145 - 12;
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v145 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  return v5;
}
