

signed __int64 __fastcall TripodCameraModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  float v11; // r9@1
  int v12; // r6@1
  int v13; // r10@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  int v26; // [sp+0h] [bp-38h]@1

  v9 = a1;
  _R8 = a4;
  v11 = a3;
  v12 = a1 + 60;
  v13 = a2;
  __asm
  {
    VLDR            S0, [SP,#0x38+arg_C]
    VLDR            S2, [SP,#0x38+arg_8]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S16, [SP,#0x38+var_30]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R7, S16 }
  ModelPart::render(__PAIR__(v13, v12), v9, _R7, 0, 0);
  LODWORD(v19) = v9 + 280;
  v20 = __PAIR__(v13, ModelPart::render(v19, v9, _R7, 0, 0));
  LODWORD(v20) = v9 + 500;
  v21 = __PAIR__(v13, ModelPart::render(v20, v9, _R7, 0, 0));
  LODWORD(v21) = v9 + 720;
  _R0 = __PAIR__(v13, ModelPart::render(v21, v9, _R7, 0, 0));
  if ( *(_BYTE *)(LODWORD(v11) + 4320) )
    _R0 = *(_DWORD *)(LODWORD(v11) + 4324);
    if ( _R0 <= 59 )
    {
      _R1 = 1717986919;
      __asm { SMMUL.W         R0, R0, R1 }
      HIDWORD(_R0) = (unsigned int)_R0 >> 1;
      if ( !((((unsigned int)_R0 >> 1) + ((unsigned int)_R0 >> 31)) & 1) )
      {
        __asm
        {
          VMOV            S0, R8
          VSTR            S0, [SP,#0x38+var_38]
        }
        TripodCameraRenderer::setupColorOverlay(*(float *)(v9 + 1160), v13, v11, COERCE_FLOAT(&Color::WHITE), v26);
      }
    }
  LODWORD(_R0) = v9 + 940;
  return __PAIR__(v13, ModelPart::render(_R0, v9, _R7, 0, 0));
}


_QWORD *__fastcall TripodCameraModel::TripodCameraModel(_QWORD *a1, int a2)
{
  int v2; // r5@1
  void *v4; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+10h] [bp-1F0h]@2
  int v14; // [sp+18h] [bp-1E8h]@2
  int v15; // [sp+1Ch] [bp-1E4h]@2
  int v16; // [sp+20h] [bp-1E0h]@2
  int v17; // [sp+24h] [bp-1DCh]@2
  signed int v18; // [sp+28h] [bp-1D8h]@2
  int v19; // [sp+2Ch] [bp-1D4h]@2
  int v20; // [sp+30h] [bp-1D0h]@2
  int v21; // [sp+34h] [bp-1CCh]@2
  signed int v22; // [sp+38h] [bp-1C8h]@2
  int v23; // [sp+3Ch] [bp-1C4h]@2
  int v24; // [sp+44h] [bp-1BCh]@2
  int v25; // [sp+48h] [bp-1B8h]@2
  int v26; // [sp+4Ch] [bp-1B4h]@2
  int v27; // [sp+50h] [bp-1B0h]@2
  signed int v28; // [sp+54h] [bp-1ACh]@2
  int v29; // [sp+58h] [bp-1A8h]@2
  int v30; // [sp+5Ch] [bp-1A4h]@2
  int v31; // [sp+60h] [bp-1A0h]@2
  signed int v32; // [sp+64h] [bp-19Ch]@2
  int v33; // [sp+68h] [bp-198h]@2
  int v34; // [sp+70h] [bp-190h]@2
  int v35; // [sp+74h] [bp-18Ch]@2
  int v36; // [sp+78h] [bp-188h]@2
  int v37; // [sp+7Ch] [bp-184h]@2
  signed int v38; // [sp+80h] [bp-180h]@2
  int v39; // [sp+84h] [bp-17Ch]@2
  int v40; // [sp+88h] [bp-178h]@2
  int v41; // [sp+8Ch] [bp-174h]@2
  signed int v42; // [sp+90h] [bp-170h]@2
  int v43; // [sp+94h] [bp-16Ch]@2
  int v44; // [sp+9Ch] [bp-164h]@2
  int v45; // [sp+A0h] [bp-160h]@2
  int v46; // [sp+A4h] [bp-15Ch]@2
  int v47; // [sp+A8h] [bp-158h]@2
  signed int v48; // [sp+ACh] [bp-154h]@2
  signed int v49; // [sp+B0h] [bp-150h]@2
  int v50; // [sp+B4h] [bp-14Ch]@2
  int v51; // [sp+B8h] [bp-148h]@2
  signed int v52; // [sp+BCh] [bp-144h]@2
  int v53; // [sp+C0h] [bp-140h]@2
  signed int v54; // [sp+C4h] [bp-13Ch]@2
  int v55; // [sp+C8h] [bp-138h]@2
  int v56; // [sp+CCh] [bp-134h]@2
  signed int v57; // [sp+D0h] [bp-130h]@2
  int v58; // [sp+D4h] [bp-12Ch]@2
  char v59; // [sp+D8h] [bp-128h]@2
  int v60; // [sp+1B8h] [bp-48h]@1

  v2 = a2;
  _R4 = a1;
  Model::Model(a1);
  *(_DWORD *)_R4 = &off_26E5EB0;
  sub_21E94B4((void **)&v60, "camera");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(_R4 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v60);
  v4 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 940)), 0, 0, 64, 32);
  *((_DWORD *)_R4 + 290) = v2;
  ModelPart::ModelPart(COERCE_FLOAT(&v59), 0, 0, 64, 32);
  ModelPart::operator=((int)_R4 + 940, (int)&v59);
  ModelPart::~ModelPart((ModelPart *)&v59);
  v56 = -1065353216;
  v57 = -1065353216;
  v58 = -1061158912;
  v53 = 1090519040;
  v54 = 1090519040;
  v55 = 1092616192;
  ModelPart::addBox(
    (ModelPart *)((char *)_R4 + 940),
    (const Vec3 *)&v56,
    (const Vec3 *)&v53,
    0.0,
    (const Color *)&Color::WHITE);
  *((_DWORD *)_R4 + 236) = 0;
  Model::registerParts((Model *)_R4, (ModelPart *)((char *)_R4 + 940));
  *((_DWORD *)_R4 + 7) = _R4 + 6;
  v50 = -1082130432;
  v51 = 0;
  v52 = -1082130432;
  v47 = 1065353216;
  v48 = 1102053376;
  v49 = 1065353216;
  v45 = 36;
  v46 = 0;
  ModelPart::addBoxMapTex((int)_R4 + 60, (const Vec3 *)&v50, (const Vec3 *)&v47, &v45, 0.0);
  __asm
    VMOV.F32        S16, #3.0
    VLDR            S0, [R4,#0x3B0]
  v43 = 0;
    VADD.F32        S0, S0, S16
    VSTR            S0, [SP,#0x200+var_168]
  v44 = 0;
  ModelPart::setPos((ModelPart *)((char *)_R4 + 60), (const Vec3 *)&v43);
  __asm { VLDR            S0, =0.1 }
  _R0 = &mce::Math::PI;
    VLDR            S20, [R0]
    VMUL.F32        S18, S20, S0
    VSTR            S18, [R4,#0x60]
  v40 = -1082130432;
  v41 = 0;
  v42 = -1082130432;
  v37 = 1065353216;
  v38 = 1102053376;
  v39 = 1065353216;
  v35 = 36;
  v36 = 0;
  ModelPart::addBoxMapTex((int)(_R4 + 35), (const Vec3 *)&v40, (const Vec3 *)&v37, &v35, 0.0);
  __asm { VLDR            S0, [R4,#0x3B0] }
  v33 = 0;
    VSTR            S0, [SP,#0x200+var_194]
  v34 = 0;
  ModelPart::setPos((ModelPart *)(_R4 + 35), (const Vec3 *)&v33);
    VLDR            S0, =-0.1
    VMUL.F32        S20, S20, S0
    VSTR            S20, [R4,#0x13C]
  v30 = -1082130432;
  v31 = 0;
  v32 = -1082130432;
  v27 = 1065353216;
  v28 = 1102053376;
  v29 = 1065353216;
  v25 = 36;
  v26 = 0;
  ModelPart::addBoxMapTex((int)_R4 + 500, (const Vec3 *)&v30, (const Vec3 *)&v27, &v25, 0.0);
  v23 = 0;
    VSTR            S0, [SP,#0x200+var_1C0]
  v24 = 0;
  ModelPart::setPos((ModelPart *)((char *)_R4 + 500), (const Vec3 *)&v23);
  __asm { VSTR            S18, [R4,#0x220] }
  v20 = -1082130432;
  v21 = 0;
  v22 = -1082130432;
  v17 = 1065353216;
  v18 = 1102053376;
  v19 = 1065353216;
  v15 = 36;
  v16 = 0;
  ModelPart::addBoxMapTex((int)(_R4 + 90), (const Vec3 *)&v20, (const Vec3 *)&v17, &v15, 0.0);
  v13 = 0;
    VSTR            S0, [SP,#0x200+var_1EC]
  v14 = 0;
  ModelPart::setPos((ModelPart *)(_R4 + 90), (const Vec3 *)&v13);
  __asm { VSTR            S20, [R4,#0x2FC] }
  Model::registerParts((Model *)_R4, (ModelPart *)((char *)_R4 + 60));
  Model::registerParts((Model *)_R4, (ModelPart *)(_R4 + 35));
  Model::registerParts((Model *)_R4, (ModelPart *)((char *)_R4 + 500));
  Model::registerParts((Model *)_R4, (ModelPart *)(_R4 + 90));
  return _R4;
}


AppPlatformListener *__fastcall TripodCameraModel::~TripodCameraModel(TripodCameraModel *this)
{
  TripodCameraModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5EB0;
  v2 = (TripodCameraModel *)((char *)this + 48);
  ModelPart::~ModelPart((TripodCameraModel *)((char *)this + 940));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall TripodCameraModel::~TripodCameraModel(TripodCameraModel *this)
{
  TripodCameraModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5EB0;
  v2 = (TripodCameraModel *)((char *)this + 48);
  ModelPart::~ModelPart((TripodCameraModel *)((char *)this + 940));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((TripodCameraModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall TripodCameraModel::~TripodCameraModel(TripodCameraModel *this)
{
  TripodCameraModel::~TripodCameraModel(this);
}
