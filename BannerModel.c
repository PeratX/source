

void __fastcall BannerModel::~BannerModel(BannerModel *this)
{
  BannerModel::~BannerModel(this);
}


AppPlatformListener *__fastcall BannerModel::~BannerModel(BannerModel *this)
{
  BannerModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E6758;
  v2 = (BannerModel *)((char *)this + 48);
  mce::MaterialPtr::~MaterialPtr((BannerModel *)((char *)this + 1380));
  mce::MaterialPtr::~MaterialPtr((BannerModel *)((char *)v1 + 1368));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 1148));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 928));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 708));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 488));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 268));
  ModelPart::~ModelPart(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


_QWORD *__fastcall BannerModel::BannerModel(_QWORD *a1)
{
  _QWORD *v1; // r11@1
  int v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  ModelPart *v14; // [sp+10h] [bp-170h]@2
  int v15; // [sp+14h] [bp-16Ch]@2
  int v16; // [sp+18h] [bp-168h]@1
  ModelPart *v17; // [sp+1Ch] [bp-164h]@1
  ModelPart *v18; // [sp+20h] [bp-160h]@1
  int v19; // [sp+28h] [bp-158h]@3
  signed int v20; // [sp+2Ch] [bp-154h]@3
  int v21; // [sp+30h] [bp-150h]@3
  signed int v22; // [sp+34h] [bp-14Ch]@3
  signed int v23; // [sp+38h] [bp-148h]@3
  int v24; // [sp+3Ch] [bp-144h]@3
  signed int v25; // [sp+40h] [bp-140h]@3
  signed int v26; // [sp+44h] [bp-13Ch]@3
  int v27; // [sp+48h] [bp-138h]@3
  int v28; // [sp+4Ch] [bp-134h]@3
  int v29; // [sp+50h] [bp-130h]@3
  signed int v30; // [sp+54h] [bp-12Ch]@3
  int v31; // [sp+58h] [bp-128h]@3
  int v32; // [sp+5Ch] [bp-124h]@3
  signed int v33; // [sp+60h] [bp-120h]@3
  signed int v34; // [sp+64h] [bp-11Ch]@3
  int v35; // [sp+68h] [bp-118h]@3
  int v36; // [sp+6Ch] [bp-114h]@3
  int v37; // [sp+70h] [bp-110h]@3
  signed int v38; // [sp+74h] [bp-10Ch]@3
  signed int v39; // [sp+78h] [bp-108h]@3
  int v40; // [sp+7Ch] [bp-104h]@3
  signed int v41; // [sp+80h] [bp-100h]@3
  int v42; // [sp+84h] [bp-FCh]@3
  int v43; // [sp+88h] [bp-F8h]@3
  int v44; // [sp+8Ch] [bp-F4h]@3
  int v45; // [sp+90h] [bp-F0h]@3
  signed int v46; // [sp+94h] [bp-ECh]@3
  int v47; // [sp+98h] [bp-E8h]@3
  int v48; // [sp+9Ch] [bp-E4h]@3
  int v49; // [sp+A0h] [bp-E0h]@3
  int v50; // [sp+A4h] [bp-DCh]@3
  int v51; // [sp+A8h] [bp-D8h]@3
  signed int v52; // [sp+ACh] [bp-D4h]@3
  int v53; // [sp+B0h] [bp-D0h]@3
  signed int v54; // [sp+B4h] [bp-CCh]@3
  signed int v55; // [sp+B8h] [bp-C8h]@3
  int v56; // [sp+BCh] [bp-C4h]@3
  signed int v57; // [sp+C0h] [bp-C0h]@3
  signed int v58; // [sp+C4h] [bp-BCh]@3
  int v59; // [sp+C8h] [bp-B8h]@3
  int v60; // [sp+CCh] [bp-B4h]@3
  int v61; // [sp+D0h] [bp-B0h]@3
  signed int v62; // [sp+D4h] [bp-ACh]@3
  int v63; // [sp+D8h] [bp-A8h]@3
  int v64; // [sp+DCh] [bp-A4h]@3
  signed int v65; // [sp+E0h] [bp-A0h]@3
  signed int v66; // [sp+E4h] [bp-9Ch]@3
  int v67; // [sp+E8h] [bp-98h]@3
  int v68; // [sp+ECh] [bp-94h]@3
  int v69; // [sp+F0h] [bp-90h]@3
  signed int v70; // [sp+F4h] [bp-8Ch]@3
  signed int v71; // [sp+F8h] [bp-88h]@3
  int v72; // [sp+FCh] [bp-84h]@3
  signed int v73; // [sp+100h] [bp-80h]@3
  signed int v74; // [sp+104h] [bp-7Ch]@3
  int v75; // [sp+108h] [bp-78h]@3
  int v76; // [sp+10Ch] [bp-74h]@3
  int v77; // [sp+110h] [bp-70h]@3
  int v78; // [sp+114h] [bp-6Ch]@3
  int v79; // [sp+118h] [bp-68h]@3
  int v80; // [sp+11Ch] [bp-64h]@3
  int v81; // [sp+120h] [bp-60h]@3
  int v82; // [sp+124h] [bp-5Ch]@3
  int v83; // [sp+128h] [bp-58h]@3
  int v84; // [sp+12Ch] [bp-54h]@3
  int v85; // [sp+130h] [bp-50h]@3
  float v86; // [sp+134h] [bp-4Ch]@3
  int v87; // [sp+140h] [bp-40h]@2
  int v88; // [sp+148h] [bp-38h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E6758;
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 6), 0, 0, 512, 512);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 268)), 0, 0, 512, 512);
  v18 = (ModelPart *)(v1 + 61);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 61), 0, 0, 512, 512);
  v17 = (ModelPart *)((char *)v1 + 708);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 708)), 0, 0, 512, 512);
  v16 = (int)(v1 + 116);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 116), 0, 0, 512, 512);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 1148)), 0, 0, 512, 512);
  v2 = (int)(v1 + 6);
  sub_21E94B4((void **)&v88, "banner");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 171),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v88);
  v3 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v87, "banner_pole");
  v15 = (int)v1 + 1380;
    (mce::MaterialPtr *)((char *)v1 + 1380),
    &v87);
  v14 = (ModelPart *)((char *)v1 + 268);
  v4 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v87 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  *((_DWORD *)v1 + 7) = v1 + 171;
  v85 = 0;
  v86 = 0.0;
  v83 = 0;
  v84 = 0;
  v80 = -1054867456;
  v81 = 0;
  v77 = 1101004800;
  v78 = 1109393408;
  v82 = -1073741824;
  v79 = 1065353216;
  v75 = 0;
  v76 = 0;
  ModelPart::addBoxMapTexColor(v2, (const Vec3 *)&v80, (const Vec3 *)&v77, &v75, (const Color *)&v83, 0.0);
  __asm
    VLDR            S16, =0.0039216
    VLDR            S0, [SP,#0x180+var_4C]
    VADD.F32        S0, S0, S16
    VSTR            S0, [SP,#0x180+var_4C]
  __asm { VSTR            S0, [SP,#0x180+var_4C] }
  *((_DWORD *)v1 + 13) = -1040187392;
  v72 = -1082130432;
  v73 = -1041235968;
  v74 = -1082130432;
  v69 = 0x40000000;
  v70 = 1109917696;
  v71 = 0x40000000;
  v67 = 44;
  v68 = 0;
  ModelPart::addBoxMapTexColor((int)v14, (const Vec3 *)&v72, (const Vec3 *)&v69, &v67, (const Color *)&v83, 0.0);
  v64 = -1054867456;
  v65 = -1040187392;
  v66 = -1082130432;
  v61 = 1101004800;
  v62 = 0x40000000;
  v63 = 0x40000000;
  v59 = 0;
  v60 = 42;
  ModelPart::addBoxMapTexColor((int)v14, (const Vec3 *)&v64, (const Vec3 *)&v61, &v59, (const Color *)&v83, 0.0);
  *((_DWORD *)v1 + 89) = v15;
  v56 = -1054867456;
  v57 = -1040187392;
  v58 = -1082130432;
  v53 = 1101004800;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v51 = 0;
  v52 = 42;
  ModelPart::addBoxMapTexColor((int)v18, (const Vec3 *)&v56, (const Vec3 *)&v53, &v51, (const Color *)&v83, 0.0);
  *((_DWORD *)v1 + 144) = v15;
  v48 = -1054867456;
  v49 = 0;
  v50 = -1073741824;
  v45 = 1101004800;
  v46 = 1109393408;
  v47 = 1065353216;
  v43 = 0;
  v44 = 0;
  ModelPart::addBoxMapTex((int)v17, (const Vec3 *)&v48, (const Vec3 *)&v45, &v43, 0.0);
  *((_DWORD *)v1 + 178) = -1040187392;
  v40 = -1082130432;
  v41 = -1041235968;
  v42 = -1082130432;
  v37 = 0x40000000;
  v38 = 1109917696;
  v39 = 0x40000000;
  v35 = 44;
  v36 = 0;
  ModelPart::addBoxMapTex(v16, (const Vec3 *)&v40, (const Vec3 *)&v37, &v35, 0.0);
  v32 = -1054867456;
  v33 = -1040187392;
  v34 = -1082130432;
  v29 = 1101004800;
  v30 = 0x40000000;
  v31 = 0x40000000;
  v27 = 0;
  v28 = 42;
  ModelPart::addBoxMapTex(v16, (const Vec3 *)&v32, (const Vec3 *)&v29, &v27, 0.0);
  v24 = -1054867456;
  v25 = -1040187392;
  v26 = -1082130432;
  v21 = 1101004800;
  v22 = 0x40000000;
  v23 = 0x40000000;
  v19 = 0;
  v20 = 42;
  ModelPart::addBoxMapTex((int)v1 + 1148, (const Vec3 *)&v24, (const Vec3 *)&v21, &v19, 0.0);
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 6));
  Model::registerParts((Model *)v1, v17);
  Model::registerParts((Model *)v1, v14);
  Model::registerParts((Model *)v1, v18);
  return v1;
}


int __fastcall BannerModel::compile(BannerModel *this, Tessellator *a2, float a3)
{
  BannerModel *v3; // r6@1
  float v4; // r4@1
  Tessellator *v5; // r5@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  ModelPart::compile((BannerModel *)((char *)this + 488), a2, a3);
  ModelPart::compile((BannerModel *)((char *)v3 + 48), v5, v4);
  ModelPart::compile((BannerModel *)((char *)v3 + 268), v5, v4);
  ModelPart::compile((BannerModel *)((char *)v3 + 708), v5, v4);
  ModelPart::compile((BannerModel *)((char *)v3 + 928), v5, v4);
  return j_j_j__ZN9ModelPart7compileER11Tessellatorf((BannerModel *)((char *)v3 + 1148), v5, v4);
}


void __fastcall BannerModel::~BannerModel(BannerModel *this)
{
  BannerModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E6758;
  v2 = (BannerModel *)((char *)this + 48);
  mce::MaterialPtr::~MaterialPtr((BannerModel *)((char *)this + 1380));
  mce::MaterialPtr::~MaterialPtr((BannerModel *)((char *)v1 + 1368));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 1148));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 928));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 708));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 488));
  ModelPart::~ModelPart((BannerModel *)((char *)v1 + 268));
  ModelPart::~ModelPart(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
