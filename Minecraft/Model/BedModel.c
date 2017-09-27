

_QWORD *__fastcall BedModel::BedModel(_QWORD *a1)
{
  _QWORD *v1; // r5@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+10h] [bp-148h]@2
  signed int v7; // [sp+14h] [bp-144h]@2
  int v8; // [sp+18h] [bp-140h]@2
  signed int v9; // [sp+1Ch] [bp-13Ch]@2
  signed int v10; // [sp+20h] [bp-138h]@2
  int v11; // [sp+24h] [bp-134h]@2
  signed int v12; // [sp+28h] [bp-130h]@2
  signed int v13; // [sp+2Ch] [bp-12Ch]@2
  int v14; // [sp+30h] [bp-128h]@2
  int v15; // [sp+34h] [bp-124h]@2
  int v16; // [sp+38h] [bp-120h]@2
  signed int v17; // [sp+3Ch] [bp-11Ch]@2
  int v18; // [sp+40h] [bp-118h]@2
  int v19; // [sp+44h] [bp-114h]@2
  signed int v20; // [sp+48h] [bp-110h]@2
  signed int v21; // [sp+4Ch] [bp-10Ch]@2
  int v22; // [sp+50h] [bp-108h]@2
  signed int v23; // [sp+54h] [bp-104h]@2
  int v24; // [sp+58h] [bp-100h]@2
  signed int v25; // [sp+5Ch] [bp-FCh]@2
  int v26; // [sp+60h] [bp-F8h]@2
  int v27; // [sp+64h] [bp-F4h]@2
  int v28; // [sp+68h] [bp-F0h]@2
  signed int v29; // [sp+6Ch] [bp-ECh]@2
  int v30; // [sp+70h] [bp-E8h]@2
  int v31; // [sp+74h] [bp-E4h]@2
  int v32; // [sp+78h] [bp-E0h]@2
  signed int v33; // [sp+7Ch] [bp-DCh]@2
  signed __int64 v34; // [sp+80h] [bp-D8h]@2
  int v35; // [sp+88h] [bp-D0h]@2
  signed int v36; // [sp+8Ch] [bp-CCh]@2
  int v37; // [sp+90h] [bp-C8h]@2
  signed int v38; // [sp+94h] [bp-C4h]@2
  int v39; // [sp+98h] [bp-C0h]@2
  signed int v40; // [sp+9Ch] [bp-BCh]@2
  signed __int64 v41; // [sp+A0h] [bp-B8h]@2
  signed int v42; // [sp+A8h] [bp-B0h]@2
  signed int v43; // [sp+ACh] [bp-ACh]@2
  int v44; // [sp+B0h] [bp-A8h]@2
  int v45; // [sp+B4h] [bp-A4h]@2
  int v46; // [sp+B8h] [bp-A0h]@2
  signed int v47; // [sp+BCh] [bp-9Ch]@2
  signed int v48; // [sp+C0h] [bp-98h]@2
  int v49; // [sp+C4h] [bp-94h]@2
  signed int v50; // [sp+C8h] [bp-90h]@2
  signed int v51; // [sp+CCh] [bp-8Ch]@2
  int v52; // [sp+D0h] [bp-88h]@2
  signed int v53; // [sp+D4h] [bp-84h]@2
  int v54; // [sp+D8h] [bp-80h]@2
  signed int v55; // [sp+DCh] [bp-7Ch]@2
  int v56; // [sp+E0h] [bp-78h]@2
  int v57; // [sp+E4h] [bp-74h]@2
  int v58; // [sp+E8h] [bp-70h]@2
  signed int v59; // [sp+ECh] [bp-6Ch]@2
  int v60; // [sp+F0h] [bp-68h]@2
  int v61; // [sp+F4h] [bp-64h]@2
  int v62; // [sp+F8h] [bp-60h]@2
  signed int v63; // [sp+FCh] [bp-5Ch]@2
  signed int v64; // [sp+100h] [bp-58h]@2
  int v65; // [sp+104h] [bp-54h]@2
  signed int v66; // [sp+108h] [bp-50h]@2
  signed int v67; // [sp+10Ch] [bp-4Ch]@2
  int v68; // [sp+110h] [bp-48h]@2
  int v69; // [sp+114h] [bp-44h]@2
  int v70; // [sp+118h] [bp-40h]@2
  int v71; // [sp+11Ch] [bp-3Ch]@2
  int v72; // [sp+120h] [bp-38h]@2
  int v73; // [sp+124h] [bp-34h]@2
  int v74; // [sp+12Ch] [bp-2Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E81F4;
  sub_21E94B4((void **)&v74, "bed");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v74);
  v2 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v74 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 64);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 44, 64, 64);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  *((_DWORD *)v1 + 7) = v1 + 6;
  v71 = 0;
  v72 = 0;
  v68 = 1098907648;
  v69 = 1107296256;
  v73 = 0;
  v70 = 1086324736;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v71,
    (const Vec3 *)&v68,
    0.0,
    (const Color *)&Color::WHITE);
  v65 = 1077936128;
  v66 = 1106771968;
  v67 = 1086324736;
  v62 = 1092616192;
  v63 = 1065353216;
  v64 = 1077936128;
  v60 = 38;
  v61 = 2;
  ModelPart::addBoxMapTex((int)v1 + 60, (const Vec3 *)&v65, (const Vec3 *)&v62, &v60, 0.0);
  v57 = 1077936128;
  v58 = 0;
  v59 = 1086324736;
  v54 = 1092616192;
  v55 = 1065353216;
  v56 = 1077936128;
  v52 = 38;
  v53 = 38;
  ModelPart::addBoxMapTex((int)v1 + 60, (const Vec3 *)&v57, (const Vec3 *)&v54, &v52, 0.0);
  v49 = 1097859072;
  v50 = 1077936128;
  v51 = 1086324736;
  v46 = 1065353216;
  v47 = 1104150528;
  v48 = 1077936128;
  v44 = 52;
  v45 = 6;
  ModelPart::addBoxMapTex((int)v1 + 60, (const Vec3 *)&v49, (const Vec3 *)&v46, &v44, 0.0);
  v42 = 1077936128;
  v43 = 1086324736;
  v39 = 1065353216;
  v40 = 1104150528;
  v41 = 1077936128LL;
  v37 = 44;
  v38 = 6;
  ModelPart::addBoxMapTex((int)v1 + 60, (const Vec3 *)((char *)&v41 + 4), (const Vec3 *)&v39, &v37, 0.0);
  v35 = 0;
  v36 = 1086324736;
  v32 = 1077936128;
  v33 = 1077936128;
  v34 = 1077936128LL;
  v30 = 0;
  v31 = 38;
  ModelPart::addBoxMapTex((int)(v1 + 35), (const Vec3 *)((char *)&v34 + 4), (const Vec3 *)&v32, &v30, 0.0);
  v27 = 1095761920;
  v28 = 0;
  v29 = 1086324736;
  v24 = 1077936128;
  v25 = 1077936128;
  v26 = 1077936128;
  v22 = 12;
  v23 = 38;
  ModelPart::addBoxMapTex((int)(v1 + 35), (const Vec3 *)&v27, (const Vec3 *)&v24, &v22, 0.0);
  v19 = 0;
  v20 = 1105723392;
  v21 = 1086324736;
  v16 = 1077936128;
  v17 = 1077936128;
  v14 = 0;
  v18 = 1077936128;
  v15 = 44;
  ModelPart::addBoxMapTex((int)(v1 + 35), (const Vec3 *)&v19, (const Vec3 *)&v16, &v14, 0.0);
  v12 = 1105723392;
  v13 = 1086324736;
  v8 = 1077936128;
  v9 = 1077936128;
  v10 = 1077936128;
  v11 = 1095761920;
  v6 = 12;
  v7 = 44;
  ModelPart::addBoxMapTex((int)(v1 + 35), (const Vec3 *)&v11, (const Vec3 *)&v8, &v6, 0.0);
  return v1;
}


signed __int64 __fastcall BedModel::render(__int64 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  __int64 v3; // r0@1

  v1 = a1;
  LODWORD(a1) = a1 + 60;
  v2 = HIDWORD(a1);
  ModelPart::render(a1, v1, 1031798784, 0, 0);
  LODWORD(v3) = v1 + 280;
  return __PAIR__(v2, ModelPart::render(v3, v1, 1031798784, 0, 0));
}


void __fastcall BedModel::~BedModel(BedModel *this)
{
  BedModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E81F4;
  v2 = (BedModel *)((char *)this + 48);
  ModelPart::~ModelPart((BedModel *)((char *)this + 280));
  ModelPart::~ModelPart((BedModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall BedModel::~BedModel(BedModel *this)
{
  BedModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E81F4;
  v2 = (BedModel *)((char *)this + 48);
  ModelPart::~ModelPart((BedModel *)((char *)this + 280));
  ModelPart::~ModelPart((BedModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall BedModel::~BedModel(BedModel *this)
{
  BedModel::~BedModel(this);
}
