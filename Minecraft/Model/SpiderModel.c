

AppPlatformListener *__fastcall SpiderModel::~SpiderModel(SpiderModel *this)
{
  SpiderModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB2E8;
  v2 = (SpiderModel *)((char *)this + 48);
  ModelPart::~ModelPart((SpiderModel *)((char *)this + 2260));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 2040));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1820));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


void __fastcall SpiderModel::~SpiderModel(SpiderModel *this)
{
  SpiderModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB2E8;
  v2 = (SpiderModel *)((char *)this + 48);
  ModelPart::~ModelPart((SpiderModel *)((char *)this + 2260));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 2040));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1820));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((SpiderModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


signed __int64 __fastcall SpiderModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r7@1
  int v15; // r8@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1
  __int64 v23; // r0@1
  __int64 v24; // r0@1
  __int64 v25; // r0@1
  __int64 v26; // r0@1

  v9 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
  }
  v14 = a1 + 60;
  v15 = a2;
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(v15, v14), v9, _R6, 0, 0);
  LODWORD(v17) = v9 + 280;
  v18 = __PAIR__(v15, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 500;
  v19 = __PAIR__(v15, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 720;
  v20 = __PAIR__(v15, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 940;
  v21 = __PAIR__(v15, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 1160;
  v22 = __PAIR__(v15, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 1380;
  v23 = __PAIR__(v15, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 1600;
  v24 = __PAIR__(v15, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 1820;
  v25 = __PAIR__(v15, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 2040;
  v26 = __PAIR__(v15, ModelPart::render(v25, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 2260;
  return __PAIR__(v15, ModelPart::render(v26, v9, _R6, 0, 0));
}


SpiderModel *__fastcall SpiderModel::setupAnim(SpiderModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  int v18; // r0@1
  float v21; // r1@1
  float v29; // r1@1
  int v30; // ST00_4@1
  float v31; // r1@1
  int v32; // ST04_4@1
  float v33; // r1@1
  float v35; // r1@1
  float v37; // r1@1
  float v39; // r1@1
  SpiderModel *result; // r0@1

  __asm
  {
    VLDR            S4, =2.6648
    VMOV            S20, R1
  }
  _R4 = this;
  __asm { VMUL.F32        S22, S20, S4 }
  _R5 = a3;
    VMOV.F32        S6, #0.25
    VLDR            S2, [SP,#0x80+arg_0]
    VMOV.F32        S8, #-0.25
  _R0 = &mce::Math::PI;
  __asm { VMOV.F32        S0, #-0.125 }
  _R2 = &mce::Math::DEGRAD;
    VMOV.F32        S10, #0.125
    VLDR            S12, [SP,#0x80+arg_4]
    VLDR            S18, [R0]
    VMOV            R0, S22
    VLDR            S4, [R2]
    VLDR            S14, =0.185
    VMUL.F32        S6, S18, S6
    VLDR            S1, =-0.185
    VMUL.F32        S2, S4, S2
    VMUL.F32        S4, S4, S12
    VMUL.F32        S8, S18, S8
    VMUL.F32        S12, S18, S1
    VMUL.F32        S14, S18, S14
    VMUL.F32        S0, S18, S0
  _R11 = (int)_R4 + 1200;
  __asm { VMUL.F32        S10, S18, S10 }
  _R10 = (int)_R4 + 1420;
    VSTR            S2, [R4,#0x64]
    VSTR            S4, [R4,#0x60]
    VSTR            S8, [R4,#0x2FC]
    VSTR            S6, [R4,#0x3D8]
    VSTR            S12, [R6]
    VSTR            S14, [R7]
    VSTR            S12, [R3]
    VSTR            S14, [R2]
    VSTR            S8, [R1]
    VSTR            S6, [R1]
    VSTR            S6, [R4,#0x2F8]
    VSTR            S8, [R4,#0x3D4]
    VSTR            S10, [R11]
    VSTR            S0, [R10]
    VSTR            S0, [R1]
    VSTR            S10, [R1]
  v18 = mce::Math::cos(_R0, COERCE_FLOAT((SpiderModel *)((char *)_R4 + 2300)));
  __asm { VADD.F32        S0, S18, S22 }
  _R6 = v18;
  __asm { VMOV            R0, S0 }
  _R0 = mce::Math::cos(_R0, v21);
    VMOV.F32        S2, #0.5
    VLDR            S6, =1.3324
    VMOV.F32        S4, #1.5
    VMOV            S24, R0
    VMUL.F32        S6, S20, S6
    VMOV            S16, R5
    VMOV            S0, R6
    VMUL.F32        S2, S18, S2
    VMUL.F32        S4, S18, S4
    VADD.F32        S12, S18, S6
    VLDR            S18, =0.4
    VMOV            R7, S6
    VMUL.F32        S20, S16, S18
    VADD.F32        S8, S2, S22
    VADD.F32        S10, S4, S22
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VMOV            R6, S12
    VMUL.F32        S22, S20, S0
    VMOV            R0, S8
    VMOV            R5, S10
    VMOV            R8, S2
    VMOV            R9, S4
  v30 = mce::Math::cos(_R0, v29);
  v32 = mce::Math::cos(_R5, v31);
  _R7 = mce::Math::sin(_R7, v33);
  _R5 = mce::Math::sin(_R6, v35);
  _R8 = mce::Math::sin(_R8, v37);
  _R0 = mce::Math::sin(_R9, v39);
    VLDR            S0, [R4,#0x2F8]
    VMUL.F32        S2, S20, S24
  _R1 = v30;
    VSUB.F32        S0, S0, S22
    VSTR            S0, [R4,#0x2F8]
    VLDR            S0, [R4,#0x3D4]
    VADD.F32        S0, S0, S22
    VSTR            S0, [R4,#0x3D4]
    VLDR            S0, [R11]
    VSUB.F32        S0, S0, S2
    VSTR            S0, [R11]
    VLDR            S0, [R10]
    VADD.F32        S0, S0, S2
    VMOV            S0, R1
  _R1 = (int)_R4 + 1640;
    VMUL.F32        S0, S20, S0
    VLDR            S2, [R1]
    VSUB.F32        S2, S2, S0
    VSTR            S2, [R1]
  _R1 = (int)_R4 + 1860;
    VADD.F32        S0, S2, S0
  _R1 = v32;
  __asm { VMOV            S0, R1 }
  _R1 = (int)_R4 + 2080;
  _R1 = (int)_R4 + 2300;
    VMOV            S2, R7
    VMUL.F32        S2, S2, S18
    VMOV            S0, R5
    VLDR            S4, [R4,#0x2FC]
    VMUL.F32        S0, S0, S18
  _R1 = (int)_R4 + 1204;
    VABS.F32        S2, S2
    VABS.F32        S0, S0
    VMUL.F32        S2, S2, S16
    VMUL.F32        S0, S0, S16
    VADD.F32        S4, S4, S2
    VSTR            S4, [R4,#0x2FC]
    VLDR            S4, [R4,#0x3D8]
    VSUB.F32        S2, S4, S2
    VMOV            S4, R8
    VMUL.F32        S4, S4, S18
    VSTR            S2, [R4,#0x3D8]
    VADD.F32        S2, S2, S0
    VABS.F32        S4, S4
  _R1 = (int)_R4 + 1424;
    VSUB.F32        S0, S2, S0
    VMUL.F32        S2, S4, S16
    VMOV            S4, R0
  _R0 = (int)_R4 + 1644;
    VLDR            S0, [R0]
    VSTR            S0, [R0]
  _R0 = (int)_R4 + 1864;
  _R0 = (int)_R4 + 2084;
  result = (SpiderModel *)((char *)_R4 + 2304);
  return result;
}


_QWORD *__fastcall SpiderModel::SpiderModel(_QWORD *a1, int a2)
{
  int v2; // r7@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  unsigned int *v31; // r2@42
  signed int v32; // r1@44
  unsigned int *v33; // r2@46
  signed int v34; // r1@48
  unsigned int *v35; // r2@50
  signed int v36; // r1@52
  unsigned int *v37; // r2@54
  signed int v38; // r1@56
  unsigned int *v39; // r2@58
  signed int v40; // r1@60
  int v41; // [sp+24h] [bp-84h]@12
  int v42; // [sp+2Ch] [bp-7Ch]@11
  int v43; // [sp+34h] [bp-74h]@10
  int v44; // [sp+3Ch] [bp-6Ch]@9
  int v45; // [sp+44h] [bp-64h]@8
  int v46; // [sp+4Ch] [bp-5Ch]@7
  int v47; // [sp+54h] [bp-54h]@6
  int v48; // [sp+5Ch] [bp-4Ch]@5
  int v49; // [sp+64h] [bp-44h]@4
  int v50; // [sp+6Ch] [bp-3Ch]@3
  int v51; // [sp+74h] [bp-34h]@2
  int v52; // [sp+7Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26DB2E8;
  sub_119C884((void **)&v52, "spider");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v52);
  v4 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v52 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 200), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1820)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 255), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2260)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 90));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 940));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 145));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1380));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 200));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1820));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 255));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 2260));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_119C884((void **)&v51, "head");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v51, 0);
  v5 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v51 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v50, "body0");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v50, 0);
  v6 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v50 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v49, "body1");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v49, 0);
  v7 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v49 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v48, "leg0");
  ModelPart::load((int)(v3 + 90), v2, (const void **)&v48, 0);
  v8 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v48 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v47, "leg1");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v47, 0);
  v9 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v47 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v46, "leg2");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v46, 0);
  v10 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v46 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v45, "leg3");
  ModelPart::load((int)v3 + 1380, v2, (const void **)&v45, 0);
  v11 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v45 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v44, "leg4");
  ModelPart::load((int)(v3 + 200), v2, (const void **)&v44, 0);
  v12 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v43, "leg5");
  ModelPart::load((int)v3 + 1820, v2, (const void **)&v43, 0);
  v13 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v43 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v42, "leg6");
  ModelPart::load((int)(v3 + 255), v2, (const void **)&v42, 0);
  v14 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v42 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v41, "leg7");
  ModelPart::load((int)v3 + 2260, v2, (const void **)&v41, 0);
  v15 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v41 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  return v3;
}


void __fastcall SpiderModel::~SpiderModel(SpiderModel *this)
{
  SpiderModel::~SpiderModel(this);
}
