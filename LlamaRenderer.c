

int __fastcall LlamaRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  Entity **v3; // r9@1
  int v4; // r6@1
  Entity *v5; // r4@1
  BaseEntityRenderContext *v6; // r5@1
  int v7; // r8@1
  mce::RenderContext *v8; // r7@1
  int v9; // r0@1
  int v10; // r0@4
  mce::Texture *v11; // r0@14
  mce::Texture *v12; // r0@14
  int result; // r0@18
  int v14; // [sp+8h] [bp-68h]@1
  int v15; // [sp+Ch] [bp-64h]@8
  int v16; // [sp+10h] [bp-60h]@18
  char v17; // [sp+16h] [bp-5Ah]@7
  char v18; // [sp+17h] [bp-59h]@1
  void *v19; // [sp+2Ch] [bp-44h]@16
  void *ptr; // [sp+3Ch] [bp-34h]@14

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  v7 = Entity::getVariant(*a3);
  v8 = *(mce::RenderContext **)(BaseEntityRenderContext::getScreenContext(v6) + 12);
  v9 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v5 + 1028))(v5, 1);
  ItemInstance::ItemInstance((ItemInstance *)&v14, v9);
  if ( v18 )
  {
    if ( v14 )
    {
      if ( ItemInstance::isNull((ItemInstance *)&v14) )
      {
        v10 = 0;
      }
      else if ( v17 )
        if ( v15 )
        {
          if ( *(_BYTE *)(v15 + 4) == *(_BYTE *)(Block::mWoolCarpet + 4) )
            v10 = ItemInstance::getAuxValue((ItemInstance *)&v14) + 1;
          else
            v10 = 0;
        }
        else
          v10 = 0;
      else
    }
    else
      v10 = 0;
  }
  else
    v10 = 0;
  v11 = (mce::Texture *)mce::TexturePtr::operator->(v4 + 24 * v10 + 740);
  mce::Texture::bindTexture(v11, v8, 1u, 2u);
  v12 = (mce::Texture *)mce::TexturePtr::operator->(v4 + 740);
  mce::Texture::bindTexture(v12, v8, 2u, 2u);
  MobRenderer::renderModel(v4, v6, (int)v3, *(_DWORD *)(v4 + 140), v4 + 24 * v7 + 644);
  if ( ptr )
    operator delete(ptr);
  if ( v19 )
    operator delete(v19);
  result = v16;
  if ( v16 )
    result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
  return result;
}


int __fastcall LlamaRenderer::LlamaRenderer(int a1, mce::TextureGroup *a2, int *a3)
{
  mce::TextureGroup *v3; // r11@1
  int v4; // r6@1
  int v5; // r4@1
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
  unsigned int *v51; // r2@48
  signed int v52; // r1@50
  unsigned int *v53; // r2@52
  signed int v54; // r1@54
  unsigned int *v55; // r2@56
  signed int v56; // r1@58
  unsigned int *v57; // r2@60
  signed int v58; // r1@62
  unsigned int *v59; // r2@64
  signed int v60; // r1@66
  unsigned int *v61; // r2@68
  signed int v62; // r1@70
  unsigned int *v63; // r2@72
  signed int v64; // r1@74
  unsigned int *v65; // r2@76
  signed int v66; // r1@78
  unsigned int *v67; // r2@80
  signed int v68; // r1@82
  unsigned int *v69; // r2@84
  signed int v70; // r1@86
  unsigned int *v71; // r2@88
  signed int v72; // r1@90
  unsigned int *v73; // r2@92
  signed int v74; // r1@94
  unsigned int *v75; // r2@96
  signed int v76; // r1@98
  unsigned int *v77; // r2@100
  signed int v78; // r1@102
  unsigned int *v79; // r2@104
  signed int v80; // r1@106
  unsigned int *v81; // r2@108
  signed int v82; // r1@110
  unsigned int *v83; // r2@112
  signed int v84; // r1@114
  unsigned int *v85; // r2@116
  signed int v86; // r1@118
  unsigned int *v87; // r2@120
  signed int v88; // r1@122
  unsigned int *v89; // r2@124
  signed int v90; // r1@126
  unsigned int *v91; // r2@128
  signed int v92; // r1@130
  unsigned int *v93; // r2@132
  signed int v94; // r1@134
  unsigned int *v95; // r2@136
  signed int v96; // r1@138
  unsigned int *v97; // r2@140
  signed int v98; // r1@142
  unsigned int *v99; // r2@144
  signed int v100; // r1@146
  unsigned int *v101; // r2@148
  signed int v102; // r1@150
  unsigned int *v103; // r2@152
  signed int v104; // r1@154
  unsigned int *v105; // r2@156
  signed int v106; // r1@158
  unsigned int *v107; // r2@160
  signed int v108; // r1@162
  unsigned int *v109; // r2@164
  signed int v110; // r1@166
  unsigned int *v111; // r2@168
  signed int v112; // r1@170
  unsigned int *v113; // r2@172
  signed int v114; // r1@174
  unsigned int *v115; // r2@176
  signed int v116; // r1@178
  unsigned int *v117; // r2@180
  signed int v118; // r1@182
  unsigned int *v119; // r2@184
  signed int v120; // r1@186
  unsigned int *v121; // r2@188
  signed int v122; // r1@190
  unsigned int *v123; // r2@192
  signed int v124; // r1@194
  unsigned int *v125; // r2@196
  signed int v126; // r1@198
  unsigned int *v127; // r2@200
  signed int v128; // r1@202
  unsigned int *v129; // r2@204
  signed int v130; // r1@206
  unsigned int *v131; // r2@208
  signed int v132; // r1@210
  unsigned int *v133; // r2@212
  signed int v134; // r1@214
  unsigned int *v135; // r2@216
  signed int v136; // r1@218
  unsigned int *v137; // r2@220
  signed int v138; // r1@222
  char *v139; // [sp+48h] [bp-398h]@45
  char *v140; // [sp+4Ch] [bp-394h]@45
  int v141; // [sp+50h] [bp-390h]@45
  char v142; // [sp+54h] [bp-38Ch]@45
  char *v143; // [sp+70h] [bp-370h]@43
  char *v144; // [sp+74h] [bp-36Ch]@43
  int v145; // [sp+78h] [bp-368h]@43
  char v146; // [sp+7Ch] [bp-364h]@43
  char *v147; // [sp+98h] [bp-348h]@41
  char *v148; // [sp+9Ch] [bp-344h]@41
  int v149; // [sp+A0h] [bp-340h]@41
  char v150; // [sp+A4h] [bp-33Ch]@41
  char *v151; // [sp+C0h] [bp-320h]@39
  char *v152; // [sp+C4h] [bp-31Ch]@39
  int v153; // [sp+C8h] [bp-318h]@39
  char v154; // [sp+CCh] [bp-314h]@39
  char *v155; // [sp+E8h] [bp-2F8h]@37
  char *v156; // [sp+ECh] [bp-2F4h]@37
  int v157; // [sp+F0h] [bp-2F0h]@37
  char v158; // [sp+F4h] [bp-2ECh]@37
  char *v159; // [sp+110h] [bp-2D0h]@35
  char *v160; // [sp+114h] [bp-2CCh]@35
  int v161; // [sp+118h] [bp-2C8h]@35
  char v162; // [sp+11Ch] [bp-2C4h]@35
  char *v163; // [sp+138h] [bp-2A8h]@33
  char *v164; // [sp+13Ch] [bp-2A4h]@33
  int v165; // [sp+140h] [bp-2A0h]@33
  char v166; // [sp+144h] [bp-29Ch]@33
  char *v167; // [sp+160h] [bp-280h]@31
  char *v168; // [sp+164h] [bp-27Ch]@31
  int v169; // [sp+168h] [bp-278h]@31
  char v170; // [sp+16Ch] [bp-274h]@31
  char *v171; // [sp+188h] [bp-258h]@29
  char *v172; // [sp+18Ch] [bp-254h]@29
  int v173; // [sp+190h] [bp-250h]@29
  char v174; // [sp+194h] [bp-24Ch]@29
  char *v175; // [sp+1B0h] [bp-230h]@27
  char *v176; // [sp+1B4h] [bp-22Ch]@27
  int v177; // [sp+1B8h] [bp-228h]@27
  char v178; // [sp+1BCh] [bp-224h]@27
  char *v179; // [sp+1D8h] [bp-208h]@25
  char *v180; // [sp+1DCh] [bp-204h]@25
  int v181; // [sp+1E0h] [bp-200h]@25
  char v182; // [sp+1E4h] [bp-1FCh]@25
  char *v183; // [sp+200h] [bp-1E0h]@23
  char *v184; // [sp+204h] [bp-1DCh]@23
  int v185; // [sp+208h] [bp-1D8h]@23
  char v186; // [sp+20Ch] [bp-1D4h]@23
  char *v187; // [sp+228h] [bp-1B8h]@21
  char *v188; // [sp+22Ch] [bp-1B4h]@21
  int v189; // [sp+230h] [bp-1B0h]@21
  char v190; // [sp+234h] [bp-1ACh]@21
  char *v191; // [sp+250h] [bp-190h]@19
  char *v192; // [sp+254h] [bp-18Ch]@19
  int v193; // [sp+258h] [bp-188h]@19
  char v194; // [sp+25Ch] [bp-184h]@19
  char *v195; // [sp+278h] [bp-168h]@17
  char *v196; // [sp+27Ch] [bp-164h]@17
  int v197; // [sp+280h] [bp-160h]@17
  char v198; // [sp+284h] [bp-15Ch]@17
  char *v199; // [sp+2A0h] [bp-140h]@15
  char *v200; // [sp+2A4h] [bp-13Ch]@15
  int v201; // [sp+2A8h] [bp-138h]@15
  char v202; // [sp+2ACh] [bp-134h]@15
  char *v203; // [sp+2C8h] [bp-118h]@13
  char *v204; // [sp+2CCh] [bp-114h]@13
  int v205; // [sp+2D0h] [bp-110h]@13
  char v206; // [sp+2D4h] [bp-10Ch]@13
  char *v207; // [sp+2F0h] [bp-F0h]@11
  char *v208; // [sp+2F4h] [bp-ECh]@11
  int v209; // [sp+2F8h] [bp-E8h]@11
  char v210; // [sp+2FCh] [bp-E4h]@11
  char *v211; // [sp+318h] [bp-C8h]@9
  char *v212; // [sp+31Ch] [bp-C4h]@9
  int v213; // [sp+320h] [bp-C0h]@9
  char v214; // [sp+324h] [bp-BCh]@9
  char *v215; // [sp+340h] [bp-A0h]@7
  char *v216; // [sp+344h] [bp-9Ch]@7
  int v217; // [sp+348h] [bp-98h]@7
  char v218; // [sp+34Ch] [bp-94h]@7
  char *v219; // [sp+368h] [bp-78h]@5
  char *v220; // [sp+36Ch] [bp-74h]@5
  int v221; // [sp+370h] [bp-70h]@5
  char v222; // [sp+374h] [bp-6Ch]@5
  char *v223; // [sp+390h] [bp-50h]@1
  char *v224; // [sp+394h] [bp-4Ch]@1
  int v225; // [sp+398h] [bp-48h]@1
  char v226; // [sp+39Ch] [bp-44h]@1
  int v227; // [sp+3B4h] [bp-2Ch]@1

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  *a3 = 0;
  v227 = v4;
  sub_119C884((void **)&v223, "textures/entity/llama/llama");
  v224 = v223;
  v225 = 0;
  v223 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v226, v3, (int)&v224, 0);
  MobRenderer::MobRenderer(v5, &v227, (mce::TexturePtr *)&v226);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v226);
  v6 = v224 - 12;
  if ( (int *)(v224 - 12) != &dword_28898C0 )
  {
    v51 = (unsigned int *)(v224 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
    }
    else
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v223 - 12;
  if ( (int *)(v223 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v223 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  if ( v227 )
    (*(void (**)(void))(*(_DWORD *)v227 + 4))();
  v227 = 0;
  *(_DWORD *)v5 = &off_26DBA5C;
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
  sub_119C884((void **)&v219, "textures/entity/llama/llama_creamy");
  v220 = v219;
  v219 = (char *)&unk_28898CC;
  v221 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v222, v3, (int)&v220, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 644), (mce::TexturePtr *)&v222);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v222);
  v8 = v220 - 12;
  if ( (int *)(v220 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v220 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v219 - 12;
  if ( (int *)(v219 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v219 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v215, "textures/entity/llama/llama_white");
  v216 = v215;
  v215 = (char *)&unk_28898CC;
  v217 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v218, v3, (int)&v216, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 668), (mce::TexturePtr *)&v218);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v218);
  v10 = v216 - 12;
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v216 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v215 - 12;
  if ( (int *)(v215 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v215 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v211, "textures/entity/llama/llama_brown");
  v212 = v211;
  v211 = (char *)&unk_28898CC;
  v213 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v214, v3, (int)&v212, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 692), (mce::TexturePtr *)&v214);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v214);
  v12 = v212 - 12;
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v212 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v211 - 12;
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v211 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v207, "textures/entity/llama/llama_gray");
  v208 = v207;
  v207 = (char *)&unk_28898CC;
  v209 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v210, v3, (int)&v208, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 716), (mce::TexturePtr *)&v210);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v210);
  v14 = v208 - 12;
  if ( (int *)(v208 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v208 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v207 - 12;
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v207 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v203, "textures/entity/llama/decor/decor_none");
  v204 = v203;
  v203 = (char *)&unk_28898CC;
  v205 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v206, v3, (int)&v204, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 740), (mce::TexturePtr *)&v206);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v206);
  v16 = v204 - 12;
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v204 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v203 - 12;
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v203 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v199, "textures/entity/llama/decor/decor_white");
  v200 = v199;
  v199 = (char *)&unk_28898CC;
  v201 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v202, v3, (int)&v200, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 764), (mce::TexturePtr *)&v202);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v202);
  v18 = v200 - 12;
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v200 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v199 - 12;
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v199 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v195, "textures/entity/llama/decor/decor_orange");
  v196 = v195;
  v195 = (char *)&unk_28898CC;
  v197 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v198, v3, (int)&v196, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 788), (mce::TexturePtr *)&v198);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v198);
  v20 = v196 - 12;
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v196 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = v195 - 12;
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v195 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v191, "textures/entity/llama/decor/decor_magenta");
  v192 = v191;
  v191 = (char *)&unk_28898CC;
  v193 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v194, v3, (int)&v192, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 812), (mce::TexturePtr *)&v194);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v194);
  v22 = v192 - 12;
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v192 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = v191 - 12;
  if ( (int *)(v191 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v191 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  sub_119C884((void **)&v187, "textures/entity/llama/decor/decor_light_blue");
  v188 = v187;
  v187 = (char *)&unk_28898CC;
  v189 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v190, v3, (int)&v188, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 836), (mce::TexturePtr *)&v190);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v190);
  v24 = v188 - 12;
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v188 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v187 - 12;
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v187 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v183, "textures/entity/llama/decor/decor_yellow");
  v184 = v183;
  v183 = (char *)&unk_28898CC;
  v185 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v186, v3, (int)&v184, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 860), (mce::TexturePtr *)&v186);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v186);
  v26 = v184 - 12;
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v184 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v183 - 12;
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v183 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v179, "textures/entity/llama/decor/decor_lime");
  v180 = v179;
  v179 = (char *)&unk_28898CC;
  v181 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v182, v3, (int)&v180, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 884), (mce::TexturePtr *)&v182);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v182);
  v28 = v180 - 12;
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v180 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = v179 - 12;
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v179 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v175, "textures/entity/llama/decor/decor_pink");
  v176 = v175;
  v175 = (char *)&unk_28898CC;
  v177 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v178, v3, (int)&v176, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 908), (mce::TexturePtr *)&v178);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v178);
  v30 = v176 - 12;
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v176 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = v175 - 12;
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v175 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  sub_119C884((void **)&v171, "textures/entity/llama/decor/decor_gray");
  v172 = v171;
  v171 = (char *)&unk_28898CC;
  v173 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v174, v3, (int)&v172, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 932), (mce::TexturePtr *)&v174);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v174);
  v32 = v172 - 12;
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v172 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = v171 - 12;
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v171 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v167, "textures/entity/llama/decor/decor_silver");
  v168 = v167;
  v167 = (char *)&unk_28898CC;
  v169 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v170, v3, (int)&v168, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 956), (mce::TexturePtr *)&v170);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v170);
  v34 = v168 - 12;
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v168 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v167 - 12;
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v167 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  sub_119C884((void **)&v163, "textures/entity/llama/decor/decor_cyan");
  v164 = v163;
  v163 = (char *)&unk_28898CC;
  v165 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v166, v3, (int)&v164, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 980), (mce::TexturePtr *)&v166);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v166);
  v36 = v164 - 12;
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v164 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = v163 - 12;
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v163 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v159, "textures/entity/llama/decor/decor_purple");
  v160 = v159;
  v159 = (char *)&unk_28898CC;
  v161 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v162, v3, (int)&v160, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1004), (mce::TexturePtr *)&v162);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v162);
  v38 = v160 - 12;
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v160 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = v159 - 12;
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v159 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119C884((void **)&v155, "textures/entity/llama/decor/decor_blue");
  v156 = v155;
  v155 = (char *)&unk_28898CC;
  v157 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v158, v3, (int)&v156, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1028), (mce::TexturePtr *)&v158);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v158);
  v40 = v156 - 12;
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v156 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = v155 - 12;
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v155 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v151, "textures/entity/llama/decor/decor_brown");
  v152 = v151;
  v151 = (char *)&unk_28898CC;
  v153 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v154, v3, (int)&v152, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1052), (mce::TexturePtr *)&v154);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v154);
  v42 = v152 - 12;
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v152 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = v151 - 12;
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v151 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  sub_119C884((void **)&v147, "textures/entity/llama/decor/decor_green");
  v148 = v147;
  v147 = (char *)&unk_28898CC;
  v149 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v150, v3, (int)&v148, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1076), (mce::TexturePtr *)&v150);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v150);
  v44 = v148 - 12;
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v148 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
  v45 = v147 - 12;
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v147 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  sub_119C884((void **)&v143, "textures/entity/llama/decor/decor_red");
  v144 = v143;
  v143 = (char *)&unk_28898CC;
  v145 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v146, v3, (int)&v144, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1100), (mce::TexturePtr *)&v146);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v146);
  v46 = v144 - 12;
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v144 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  v47 = v143 - 12;
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v143 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  sub_119C884((void **)&v139, "textures/entity/llama/decor/decor_black");
  v140 = v139;
  v139 = (char *)&unk_28898CC;
  v141 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v142, v3, (int)&v140, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 1124), (mce::TexturePtr *)&v142);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v142);
  v48 = v140 - 12;
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v140 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = v139 - 12;
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v139 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  return v5;
}


void __fastcall LlamaRenderer::~LlamaRenderer(LlamaRenderer *this)
{
  LlamaRenderer::~LlamaRenderer(this);
}


void __fastcall LlamaRenderer::~LlamaRenderer(LlamaRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = LlamaRenderer::~LlamaRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall LlamaRenderer::~LlamaRenderer(LlamaRenderer *this)
{
  LlamaRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBA5C;
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)this + 1124));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 1100));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 1076));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 1052));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 1028));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 1004));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 980));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 956));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 932));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 908));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 884));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 860));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 836));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 812));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 788));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 764));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 740));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((LlamaRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}
