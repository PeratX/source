

void __fastcall PlayerModel::~PlayerModel(PlayerModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = PlayerModel::~PlayerModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall PlayerModel::renderCape(__int64 a1, int a2)
{
  int v2; // r3@1
  int v3; // r2@1

  v2 = a2;
  v3 = a1;
  LODWORD(a1) = a1 + 6972;
  return ModelPart::render(a1, v3, v2, 0, 0);
}


_QWORD *__fastcall PlayerModel::PlayerModel(_QWORD *a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r8@1
  _QWORD *v5; // r4@1
  void *v6; // r0@1
  int v7; // r6@2
  void *v8; // r0@2
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r0@6
  void *v13; // r0@7
  void *v14; // r0@8
  void *v15; // r0@9
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  void *v19; // r0@13
  void *v20; // r0@14
  void *v21; // r0@15
  void *v22; // r0@16
  void *v23; // r0@17
  void *v24; // r0@18
  void *v25; // r0@19
  unsigned int *v27; // r2@21
  signed int v28; // r1@23
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  unsigned int *v35; // r2@37
  signed int v36; // r1@39
  unsigned int *v37; // r2@41
  signed int v38; // r1@43
  unsigned int *v39; // r2@45
  signed int v40; // r1@47
  unsigned int *v41; // r2@49
  signed int v42; // r1@51
  unsigned int *v43; // r2@53
  signed int v44; // r1@55
  unsigned int *v45; // r2@57
  signed int v46; // r1@59
  unsigned int *v47; // r2@61
  signed int v48; // r1@63
  unsigned int *v49; // r2@65
  signed int v50; // r1@67
  unsigned int *v51; // r2@69
  signed int v52; // r1@71
  unsigned int *v53; // r2@73
  signed int v54; // r1@75
  unsigned int *v55; // r2@77
  signed int v56; // r1@79
  unsigned int *v57; // r2@81
  signed int v58; // r1@83
  unsigned int *v59; // r2@85
  signed int v60; // r1@87
  unsigned int *v61; // r2@89
  signed int v62; // r1@91
  unsigned int *v63; // r2@93
  signed int v64; // r1@95
  int v65; // [sp+64h] [bp-BCh]@19
  int v66; // [sp+6Ch] [bp-B4h]@18
  int v67; // [sp+74h] [bp-ACh]@17
  int v68; // [sp+7Ch] [bp-A4h]@16
  int v69; // [sp+84h] [bp-9Ch]@15
  int v70; // [sp+8Ch] [bp-94h]@14
  int v71; // [sp+94h] [bp-8Ch]@13
  int v72; // [sp+9Ch] [bp-84h]@12
  int v73; // [sp+A4h] [bp-7Ch]@11
  int v74; // [sp+ACh] [bp-74h]@10
  int v75; // [sp+B4h] [bp-6Ch]@9
  int v76; // [sp+BCh] [bp-64h]@8
  int v77; // [sp+C4h] [bp-5Ch]@7
  int v78; // [sp+CCh] [bp-54h]@6
  int v79; // [sp+D4h] [bp-4Ch]@5
  int v80; // [sp+DCh] [bp-44h]@4
  int v81; // [sp+E4h] [bp-3Ch]@3
  int v82; // [sp+ECh] [bp-34h]@2
  int v83; // [sp+F4h] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  HumanoidModel::HumanoidModel(a1, a2);
  *(_DWORD *)v5 = &off_26E5AE4;
  sub_21E94B4((void **)&v83, "player");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v5 + 4308),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v83);
  v6 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v83 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v82, "player_alphatest");
  v7 = (int)(v5 + 540);
    (mce::MaterialPtr *)(v5 + 540),
    &v82);
  v8 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v82 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 4332)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 569), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 4772)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 624), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 5212)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 679), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 5652)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 734), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 6092)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 789), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 6532)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 844), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 6972)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 899), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 7412)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v5 + 954), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v5 + 7852)), 0, 0, 64, 32);
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 4332));
  Model::registerParts((Model *)v5, (ModelPart *)(v5 + 569));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 4772));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 5652));
  Model::registerParts((Model *)v5, (ModelPart *)((char *)v5 + 6532));
  Model::registerParts<ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &>(
    (ModelPart *)v5,
    (ModelPart *)((char *)v5 + 6972),
    (ModelPart *)(v5 + 899),
    (ModelPart *)((char *)v5 + 7412),
    (ModelPart *)(v5 + 954),
    (ModelPart *)((char *)v5 + 7852),
    (ModelPart *)(v5 + 734),
    (ModelPart *)(v5 + 624),
    (int)v5 + 6092,
    (ModelPart *)((char *)v5 + 5212),
    (ModelPart *)(v5 + 789),
    (ModelPart *)(v5 + 679),
    (ModelPart *)(v5 + 844));
  *((_DWORD *)v5 + 7) = (char *)v5 + 4308;
  sub_21E94B4((void **)&v81, "helmet");
  ModelPart::load((int)(v5 + 899), v4, (const void **)&v81, 0);
  v9 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v81 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v80, "bodyArmor");
  ModelPart::load((int)v5 + 7412, v4, (const void **)&v80, 0);
  v10 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v80 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v79, "leftArmArmor");
  ModelPart::load((int)(v5 + 954), v4, (const void **)&v79, 0);
  v11 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v79 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v78, "rightArmArmor");
  ModelPart::load((int)v5 + 7852, v4, (const void **)&v78, 0);
  v12 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v78 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v77, "rightSleeve");
  ModelPart::load((int)v5 + 4332, v4, (const void **)&v77, 0);
  v13 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v77 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v76, "leftSleeve");
  ModelPart::load((int)(v5 + 569), v4, (const void **)&v76, 0);
  v14 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v76 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v75, "rightPants");
  ModelPart::load((int)v5 + 5652, v4, (const void **)&v75, 0);
  v15 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v75 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v74, "leftPants");
  ModelPart::load((int)v5 + 4772, v4, (const void **)&v74, 0);
  v16 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v74 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v73, "rightLegging");
  ModelPart::load((int)(v5 + 734), v4, (const void **)&v73, 0);
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v73 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v72, "leftLegging");
  ModelPart::load((int)(v5 + 624), v4, (const void **)&v72, 0);
  v18 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v72 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v71, "rightSock");
  ModelPart::load((int)v5 + 6092, v4, (const void **)&v71, 0);
  v19 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v71 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v70, "leftSock");
  ModelPart::load((int)v5 + 5212, v4, (const void **)&v70, 0);
  v20 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v70 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v69, "rightBoot");
  ModelPart::load((int)(v5 + 789), v4, (const void **)&v69, 0);
  v21 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v69 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v68, "leftBoot");
  ModelPart::load((int)(v5 + 679), v4, (const void **)&v68, 0);
  v22 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v68 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v67, "jacket");
  ModelPart::load((int)v5 + 6532, v4, (const void **)&v67, 0);
  v23 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v67 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v66, "cape");
  ModelPart::load((int)v5 + 6972, v3, (const void **)&v66, 0);
  v24 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v66 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v65, "belt");
  ModelPart::load((int)(v5 + 844), v4, (const void **)&v65, 0);
  v25 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v65 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  *((_DWORD *)v5 + 1820) = v7;
  *((_DWORD *)v5 + 101) = v7;
  *((_DWORD *)v5 + 1105) = v7;
  *((_DWORD *)v5 + 1160) = v7;
  *((_DWORD *)v5 + 1435) = v7;
  *((_DWORD *)v5 + 1490) = v7;
  *((_DWORD *)v5 + 1545) = v7;
  *((_DWORD *)v5 + 1600) = v7;
  *((_DWORD *)v5 + 1215) = v7;
  *((_DWORD *)v5 + 1270) = v7;
  *((_DWORD *)v5 + 1325) = v7;
  *((_DWORD *)v5 + 1380) = v7;
  *((_DWORD *)v5 + 1655) = v7;
  *((_DWORD *)v5 + 1765) = v7;
  *((_DWORD *)v5 + 1875) = v7;
  *((_DWORD *)v5 + 1930) = v7;
  *((_DWORD *)v5 + 1985) = v7;
  *((_DWORD *)v5 + 1710) = v7;
  return v5;
}


int __fastcall PlayerModel::_copyModelPartsExceptHead(PlayerModel *this, int a2, ModelPart *a3)
{
  PlayerModel *v3; // r4@1
  Model *v4; // r5@1
  ModelPart *v5; // r2@1
  ModelPart *v6; // r2@1
  ModelPart *v7; // r2@1
  ModelPart *v8; // r2@1
  ModelPart *v9; // r2@1
  ModelPart *v10; // r2@1
  ModelPart *v11; // r2@1
  ModelPart *v12; // r2@1
  ModelPart *v13; // r2@1
  ModelPart *v14; // r2@1
  ModelPart *v15; // r2@1
  ModelPart *v16; // r2@1
  ModelPart *v17; // r2@1
  ModelPart *v18; // r2@1

  v3 = this;
  v4 = (PlayerModel *)((char *)this + 1416);
  Model::copyModelPart((PlayerModel *)((char *)this + 1416), (PlayerModel *)((char *)this + 4772), a3);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 1196), (PlayerModel *)((char *)v3 + 5652), v5);
  Model::copyModelPart(v4, (PlayerModel *)((char *)v3 + 4992), v6);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 1196), (PlayerModel *)((char *)v3 + 5872), v7);
  Model::copyModelPart(v4, (PlayerModel *)((char *)v3 + 5212), v8);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 1196), (PlayerModel *)((char *)v3 + 6092), v9);
  Model::copyModelPart(v4, (PlayerModel *)((char *)v3 + 5432), v10);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 1196), (PlayerModel *)((char *)v3 + 6312), v11);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 976), (PlayerModel *)((char *)v3 + 4552), v12);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 756), (PlayerModel *)((char *)v3 + 4332), v13);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 536), (PlayerModel *)((char *)v3 + 6532), v14);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 536), (PlayerModel *)((char *)v3 + 7412), v15);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 536), (PlayerModel *)((char *)v3 + 6752), v16);
  Model::copyModelPart((PlayerModel *)((char *)v3 + 976), (PlayerModel *)((char *)v3 + 7632), v17);
  return j_j_j__ZN5Model13copyModelPartERK9ModelPartRS0_(
           (PlayerModel *)((char *)v3 + 756),
           (PlayerModel *)((char *)v3 + 7852),
           v18);
}


char *__fastcall PlayerModel::getRightSleeve(PlayerModel *this)
{
  return (char *)this + 4332;
}


int __fastcall PlayerModel::setupAnim(PlayerModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  PlayerModel *v11; // r4@1
  int v12; // r1@1
  ModelPart *v13; // r2@1
  float v15; // [sp+0h] [bp-18h]@0
  float v16; // [sp+4h] [bp-14h]@0
  float v17; // [sp+8h] [bp-10h]@0

  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  v11 = this;
  __asm
  {
    VLDR            S2, [SP,#0x18+arg_4]
    VLDR            S4, [SP,#0x18+arg_8]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  HumanoidModel::setupAnim(this, a2, a3, a4, v15, v16, v17);
  return j_j_j__ZN11PlayerModel25_copyModelPartsExceptHeadEv(v11, v12, v13);
}


char *__fastcall PlayerModel::getLeftSleeve(PlayerModel *this)
{
  return (char *)this + 4552;
}


unsigned __int64 __fastcall PlayerModel::renderGui(int a1, float a2, float a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  Model *v12; // r8@1
  float v13; // r10@1
  int v14; // r7@1
  mce::RenderContext *v15; // r9@1
  int v16; // r0@1
  int v17; // r1@1
  int v18; // r0@1
  int v19; // r1@1
  int v20; // r0@1
  int v21; // r1@1
  int v22; // r1@1
  int v23; // r2@1
  int v24; // r0@1
  int v25; // r0@1
  int v26; // r0@1
  int v27; // r1@1
  int v28; // r0@1
  int v29; // r0@1
  int v30; // r1@1
  int v31; // r0@1
  int v32; // r1@1
  __int64 v33; // r0@1
  __int64 v34; // r0@1
  __int64 v35; // r0@1
  __int64 v36; // r0@1
  __int64 v37; // r0@1
  __int64 v38; // r0@1
  unsigned __int64 v39; // r0@1
  ModelPart *v40; // r2@1
  int v41; // r1@1
  ModelPart *v42; // r2@1
  __int64 v43; // r0@1
  __int64 v44; // r0@1
  __int64 v45; // r0@1
  __int64 v46; // r0@1
  __int64 v47; // r0@1
  __int64 v48; // r0@1
  __int64 v49; // r0@1
  __int64 v50; // r0@1
  __int64 v51; // r0@1
  __int64 v52; // r0@1
  __int64 v53; // r0@1
  __int64 v54; // r0@1
  __int64 v55; // r0@1
  __int64 v56; // r0@1
  __int64 v57; // r0@1
  __int64 v58; // r0@1

  v7 = a1;
  __asm { VLDR            S0, [SP,#0x48+arg_4] }
  v12 = (Model *)(a1 + 96);
  v13 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x48+arg_8]
    VSTR            S2, [SP,#0x48+var_44]
    VSTR            S0, [SP,#0x48+var_48]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  v14 = *(_DWORD *)(LODWORD(v13) + 32);
  v15 = *(mce::RenderContext **)(LODWORD(v13) + 12);
  v16 = *(_DWORD *)(v14 + 560);
  v17 = *(_DWORD *)(v16 + 20);
  *(_DWORD *)v17 = Color::WHITE;
  *(float *)(v17 + 4) = unk_283E614;
  *(_QWORD *)(v17 + 8) = qword_283E618;
  *(_BYTE *)(v16 + 17) = 1;
  v18 = *(_DWORD *)(v14 + 556);
  v19 = *(_DWORD *)(v18 + 20);
  *(_DWORD *)v19 = 0;
  *(_DWORD *)(v19 + 4) = 0;
  *(_DWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v19 + 12) = 0;
  *(_BYTE *)(v18 + 17) = 1;
  v20 = *(_DWORD *)(v14 + 564);
  v21 = *(_DWORD *)(v20 + 20);
  *(_DWORD *)v21 = Color::WHITE;
  *(float *)(v21 + 4) = unk_283E614;
  *(_QWORD *)(v21 + 8) = qword_283E618;
  *(_BYTE *)(v20 + 17) = 1;
  v22 = *(_DWORD *)(v14 + 568);
  v23 = *(_DWORD *)(v22 + 20);
  *(float *)v23 = Color::BLACK;
  *(_DWORD *)(v23 + 4) = unk_283E634;
  *(_DWORD *)(v23 + 8) = unk_283E638;
  *(_DWORD *)(v23 + 12) = unk_283E63C;
  *(_BYTE *)(v22 + 17) = 1;
  mce::ConstantBufferConstantsBase::sync((mce::ConstantBufferConstantsBase *)(v14 + 548), v15);
  v24 = *(_DWORD *)(v14 + 544);
  **(_DWORD **)(v24 + 20) = 1148846080;
  *(_BYTE *)(v24 + 17) = 1;
  v25 = *(_DWORD *)(v14 + 524);
  **(_DWORD **)(v25 + 20) = 0;
  *(_BYTE *)(v25 + 17) = 1;
  v26 = *(_DWORD *)(v14 + 528);
  v27 = *(_DWORD *)(v26 + 20);
  *(_DWORD *)v27 = 0;
  *(_DWORD *)(v27 + 4) = 0;
  *(_DWORD *)(v27 + 8) = 0;
  *(_BYTE *)(v26 + 17) = 1;
  v28 = *(_DWORD *)(v14 + 540);
  **(_DWORD **)(v28 + 20) = 1120403456;
  *(_BYTE *)(v28 + 17) = 1;
  v29 = *(_DWORD *)(v14 + 532);
  v30 = *(_DWORD *)(v29 + 20);
  *(_DWORD *)v30 = Color::WHITE;
  *(float *)(v30 + 4) = unk_283E614;
  *(_QWORD *)(v30 + 8) = qword_283E618;
  *(_BYTE *)(v29 + 17) = 1;
  v31 = *(_DWORD *)(v14 + 536);
  v32 = *(_DWORD *)(v31 + 20);
  *(_DWORD *)v32 = 0;
  *(_DWORD *)(v32 + 4) = 1148829696;
  *(_BYTE *)(v31 + 17) = 1;
  mce::ConstantBufferConstantsBase::sync((mce::ConstantBufferConstantsBase *)(v14 + 516), v15);
  ModelPart::render(__PAIR__(LODWORD(v13), (unsigned int)v12), v7, 1065353216, 0, 0);
  LODWORD(v33) = v7 + 536;
  v34 = __PAIR__(LODWORD(v13), ModelPart::render(v33, v7, 1065353216, 0, 0));
  LODWORD(v34) = v7 + 756;
  v35 = __PAIR__(LODWORD(v13), ModelPart::render(v34, v7, 1065353216, 0, 0));
  LODWORD(v35) = v7 + 976;
  v36 = __PAIR__(LODWORD(v13), ModelPart::render(v35, v7, 1065353216, 0, 0));
  LODWORD(v36) = v7 + 1196;
  v37 = __PAIR__(LODWORD(v13), ModelPart::render(v36, v7, 1065353216, 0, 0));
  LODWORD(v37) = v7 + 1416;
  v38 = __PAIR__(LODWORD(v13), ModelPart::render(v37, v7, 1065353216, 0, 0));
  LODWORD(v38) = v7 + 316;
  v39 = __PAIR__(LODWORD(v13), ModelPart::render(v38, v7, 1065353216, 0, 0));
  Model::copyModelPart(v12, (const ModelPart *)(v7 + 7192), v40);
  PlayerModel::_copyModelPartsExceptHead((PlayerModel *)v7, v41, v42);
  *((float *)&v43 + 1) = v13;
  LODWORD(v43) = v7 + 4772;
  ModelPart::render(v43, v7, 1065353216, 0, 0);
  *((float *)&v44 + 1) = v13;
  LODWORD(v44) = v7 + 5652;
  ModelPart::render(v44, v7, 1065353216, 0, 0);
  LODWORD(v45) = v7 + 4992;
  v46 = __PAIR__(LODWORD(v13), ModelPart::render(v45, v7, 1065353216, 0, 0));
  *((float *)&v46 + 1) = v13;
  LODWORD(v46) = v7 + 5872;
  ModelPart::render(v46, v7, 1065353216, 0, 0);
  *((float *)&v47 + 1) = v13;
  LODWORD(v47) = v7 + 5212;
  ModelPart::render(v47, v7, 1065353216, 0, 0);
  *((float *)&v48 + 1) = v13;
  LODWORD(v48) = v7 + 6092;
  ModelPart::render(v48, v7, 1065353216, 0, 0);
  *((float *)&v49 + 1) = v13;
  LODWORD(v49) = v7 + 5432;
  ModelPart::render(v49, v7, 1065353216, 0, 0);
  *((float *)&v50 + 1) = v13;
  LODWORD(v50) = v7 + 6312;
  ModelPart::render(v50, v7, 1065353216, 0, 0);
  *((float *)&v51 + 1) = v13;
  LODWORD(v51) = v7 + 4552;
  ModelPart::render(v51, v7, 1065353216, 0, 0);
  *((float *)&v52 + 1) = v13;
  LODWORD(v52) = v7 + 4332;
  ModelPart::render(v52, v7, 1065353216, 0, 0);
  *((float *)&v53 + 1) = v13;
  LODWORD(v53) = v7 + 6532;
  ModelPart::render(v53, v7, 1065353216, 0, 0);
  LODWORD(v54) = v7 + 7192;
  v55 = __PAIR__(LODWORD(v13), ModelPart::render(v54, v7, 1065353216, 0, 0));
  *((float *)&v55 + 1) = v13;
  LODWORD(v55) = v7 + 7412;
  ModelPart::render(v55, v7, 1065353216, 0, 0);
  *((float *)&v56 + 1) = v13;
  LODWORD(v56) = v7 + 7632;
  ModelPart::render(v56, v7, 1065353216, 0, 0);
  *((float *)&v57 + 1) = v13;
  LODWORD(v57) = v7 + 7852;
  ModelPart::render(v57, v7, 1065353216, 0, 0);
  LODWORD(v58) = v7 + 6752;
  return __PAIR__(LODWORD(v13), ModelPart::render(v58, v7, 1065353216, 0, 0));
}


AppPlatformListener *__fastcall PlayerModel::~PlayerModel(PlayerModel *this)
{
  PlayerModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5AE4;
  ModelPart::~ModelPart((PlayerModel *)((char *)this + 7852));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 7632));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 7412));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 7192));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 6972));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 6752));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 6532));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 6312));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 6092));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 5872));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 5652));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 5432));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 5212));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 4992));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 4772));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 4552));
  ModelPart::~ModelPart((PlayerModel *)((char *)v1 + 4332));
  mce::MaterialPtr::~MaterialPtr((PlayerModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((PlayerModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}


char *__fastcall PlayerModel::getHelmet(PlayerModel *this)
{
  return (char *)this + 7192;
}


void __fastcall PlayerModel::~PlayerModel(PlayerModel *this)
{
  PlayerModel::~PlayerModel(this);
}


char *__fastcall PlayerModel::getCape(PlayerModel *this)
{
  return (char *)this + 6972;
}


int __fastcall PlayerModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v9; // r7@1
  int v10; // r4@1
  float v11; // r5@1
  float v12; // r8@1
  int v13; // r0@1
  int v14; // r0@1
  int v15; // r0@1
  int v16; // r0@1
  char v17; // r6@1
  int v18; // r9@3
  char v19; // r0@4
  ModelPart *v24; // r2@14
  int v25; // r1@14
  ModelPart *v26; // r2@14
  __int64 v28; // r0@14
  __int64 v29; // r0@14
  __int64 v30; // r0@14
  __int64 v31; // r0@14
  __int64 v32; // r0@14
  __int64 v33; // r0@15
  __int64 v34; // r0@16
  __int64 v35; // r0@17
  __int64 v36; // r0@18
  __int64 v37; // r0@19
  __int64 v38; // r0@21
  __int64 v39; // r0@22
  __int64 v40; // r0@23
  __int64 v41; // r0@24
  __int64 v42; // r0@24
  __int64 v43; // r0@27
  int result; // r0@50
  float v45; // [sp+0h] [bp-160h]@0
  int v46; // [sp+4h] [bp-15Ch]@0
  int v47; // [sp+8h] [bp-158h]@0
  int v48; // [sp+Ch] [bp-154h]@0
  int v49; // [sp+10h] [bp-150h]@0
  char v50; // [sp+18h] [bp-148h]@1
  int v51; // [sp+20h] [bp-140h]@32
  void *v52; // [sp+3Ch] [bp-124h]@30
  void *ptr; // [sp+4Ch] [bp-114h]@28
  char v54; // [sp+60h] [bp-100h]@1
  int v55; // [sp+68h] [bp-F8h]@38
  void *v56; // [sp+84h] [bp-DCh]@36
  void *v57; // [sp+94h] [bp-CCh]@34
  char v58; // [sp+A8h] [bp-B8h]@1
  int v59; // [sp+B0h] [bp-B0h]@44
  void *v60; // [sp+CCh] [bp-94h]@42
  void *v61; // [sp+DCh] [bp-84h]@40
  int v62; // [sp+F0h] [bp-70h]@1
  int v63; // [sp+F4h] [bp-6Ch]@9
  int v64; // [sp+F8h] [bp-68h]@50
  char v65; // [sp+FEh] [bp-62h]@8
  char v66; // [sp+FFh] [bp-61h]@1
  void *v67; // [sp+114h] [bp-4Ch]@48
  void *v68; // [sp+124h] [bp-3Ch]@46

  v9 = a3;
  v10 = LODWORD(a1);
  v11 = a2;
  v12 = a4;
  v13 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(a3) + 1028))(LODWORD(a3), 0);
  ItemInstance::ItemInstance((ItemInstance *)&v62, v13);
  v14 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)LODWORD(v9) + 1028))(LODWORD(v9), 2);
  ItemInstance::ItemInstance((ItemInstance *)&v58, v14);
  v15 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)LODWORD(v9) + 1028))(LODWORD(v9), 3);
  ItemInstance::ItemInstance((ItemInstance *)&v54, v15);
  v16 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)LODWORD(v9) + 1028))(LODWORD(v9), 1);
  ItemInstance::ItemInstance((ItemInstance *)&v50, v16);
  v17 = *(_BYTE *)(v10 + 149);
  if ( v66 )
  {
    if ( v62 )
    {
      v18 = *(_DWORD *)(v10 + 4292);
      if ( ItemInstance::isNull((ItemInstance *)&v62) )
      {
        v19 = 0;
      }
      else
        if ( !(v18 & 0x40) && v65 )
        {
          if ( v63 == Block::mPumpkin )
          {
            v19 = 1;
          }
          else
            v19 = 0;
            if ( v62 == Item::mSkull )
              v19 = 1;
        }
    }
    else
      v19 = 0;
  }
  else
    v19 = 0;
  __asm
    VLDR            S16, [SP,#0x160+arg_10]
    VLDR            S0, [SP,#0x160+arg_C]
    VLDR            S2, [SP,#0x160+arg_8]
    VLDR            S4, [SP,#0x160+arg_4]
    VLDR            S6, [SP,#0x160+arg_0]
  *(_BYTE *)(v10 + 149) = v19 ^ 1;
    VSTR            S6, [SP,#0x160+var_160]
    VSTR            S4, [SP,#0x160+var_15C]
    VSTR            S2, [SP,#0x160+var_158]
    VSTR            S0, [SP,#0x160+var_154]
    VSTR            S16, [SP,#0x160+var_150]
  HumanoidModel::render(*(float *)&v10, v11, v9, v12, v45, v46, v47, v48, v49);
  *(_BYTE *)(v10 + 149) = v17;
  Model::copyModelPart((Model *)(v10 + 96), (const ModelPart *)(v10 + 7192), v24);
  PlayerModel::_copyModelPartsExceptHead((PlayerModel *)v10, v25, v26);
  __asm { VMOV            R6, S16 }
  LODWORD(v28) = v10 + 4772;
  ModelPart::render(v28, v10, _R6, 0, 0);
  *((float *)&v29 + 1) = v11;
  LODWORD(v29) = v10 + 5652;
  ModelPart::render(v29, v10, _R6, 0, 0);
  LODWORD(v30) = v10 + 4552;
  ModelPart::render(v30, v10, _R6, 0, 0);
  *((float *)&v31 + 1) = v11;
  LODWORD(v31) = v10 + 4332;
  ModelPart::render(v31, v10, _R6, 0, 0);
  *((float *)&v32 + 1) = v11;
  LODWORD(v32) = v10 + 6532;
  ModelPart::render(v32, v10, _R6, 0, 0);
  if ( ItemInstance::isNull((ItemInstance *)&v62) == 1 )
    *((float *)&v33 + 1) = v11;
    LODWORD(v33) = v10 + 7192;
    ModelPart::render(v33, v10, _R6, 0, 0);
  if ( ItemInstance::isNull((ItemInstance *)&v58) == 1 )
    LODWORD(v34) = v10 + 4992;
    ModelPart::render(v34, v10, _R6, 0, 0);
    *((float *)&v35 + 1) = v11;
    LODWORD(v35) = v10 + 5872;
    ModelPart::render(v35, v10, _R6, 0, 0);
  if ( ItemInstance::isNull((ItemInstance *)&v54) == 1 )
    LODWORD(v36) = v10 + 5432;
    ModelPart::render(v36, v10, _R6, 0, 0);
    *((float *)&v37 + 1) = v11;
    LODWORD(v37) = v10 + 6312;
    ModelPart::render(v37, v10, _R6, 0, 0);
  if ( ItemInstance::isNull((ItemInstance *)&v58) == 1 && ItemInstance::isNull((ItemInstance *)&v54) == 1 )
    LODWORD(v38) = v10 + 5212;
    ModelPart::render(v38, v10, _R6, 0, 0);
    *((float *)&v39 + 1) = v11;
    LODWORD(v39) = v10 + 6092;
    ModelPart::render(v39, v10, _R6, 0, 0);
  if ( ItemInstance::isNull((ItemInstance *)&v50) == 1 )
    LODWORD(v40) = v10 + 7412;
    ModelPart::render(v40, v10, _R6, 0, 0);
    *((float *)&v41 + 1) = v11;
    LODWORD(v41) = v10 + 7632;
    ModelPart::render(v41, v10, _R6, 0, 0);
    *((float *)&v42 + 1) = v11;
    LODWORD(v42) = v10 + 7852;
    ModelPart::render(v42, v10, _R6, 0, 0);
  if ( ItemInstance::isNull((ItemInstance *)&v50) == 1 && ItemInstance::isNull((ItemInstance *)&v58) == 1 )
    *((float *)&v43 + 1) = v11;
    LODWORD(v43) = v10 + 6752;
    ModelPart::render(v43, v10, _R6, 0, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v52 )
    operator delete(v52);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  if ( v57 )
    operator delete(v57);
  if ( v56 )
    operator delete(v56);
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 4))();
  if ( v61 )
    operator delete(v61);
  if ( v60 )
    operator delete(v60);
  if ( v59 )
    (*(void (**)(void))(*(_DWORD *)v59 + 4))();
  if ( v68 )
    operator delete(v68);
  if ( v67 )
    operator delete(v67);
  result = v64;
  if ( v64 )
    result = (*(int (**)(void))(*(_DWORD *)v64 + 4))();
  return result;
}
