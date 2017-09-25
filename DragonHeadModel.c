

int __fastcall DragonHeadModel::render(int a1, int a2)
{
  int v2; // r4@1
  int v13; // [sp+0h] [bp-20h]@1

  v2 = a2;
  _R5 = a1;
  MatrixStack::push((MatrixStack *)&v13, *(_DWORD *)(a2 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v13);
  __asm
  {
    VLDR            S0, =0.37437
    VLDR            S2, [R0,#0x14]
    VLDR            S4, [R0,#0x18]
    VLDR            S8, [R0,#0x10]
    VMUL.F32        S2, S2, S0
    VLDR            S6, [R0,#0x1C]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S8, S0
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R0,#0x30]
    VLDR            S12, [R0,#0x38]
    VLDR            S14, [R0,#0x3C]
    VSUB.F32        S2, S10, S2
    VLDR            S16, =0.2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S6, S8
    VSUB.F32        S0, S14, S0
    VSTR            S6, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
    VLDR            S0, [R5,#0x30]
  }
  _R0 = &mce::Math::PI;
    VMUL.F32        S0, S0, S16
    VLDR            S2, [R0]
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, COERCE_FLOAT(&mce::Math::PI));
    VMOV.F32        S2, #1.0
    VMOV            S0, R0
    VADD.F32        S0, S0, S2
    VSTR            S0, [R5,#0x140]
  (*(void (__fastcall **)(int, int, signed int))(*(_DWORD *)_R5 + 80))(_R5, v2, 1027604480);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v13);
}


void __fastcall DragonHeadModel::~DragonHeadModel(DragonHeadModel *this)
{
  DragonHeadModel::~DragonHeadModel(this);
}


_QWORD *__fastcall DragonHeadModel::DragonHeadModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+Ch] [bp-11Ch]@2
  int v7; // [sp+10h] [bp-118h]@2
  int v8; // [sp+14h] [bp-114h]@2
  signed int v9; // [sp+18h] [bp-110h]@2
  int v10; // [sp+1Ch] [bp-10Ch]@2
  int v11; // [sp+20h] [bp-108h]@2
  int v12; // [sp+24h] [bp-104h]@2
  int v13; // [sp+28h] [bp-100h]@2
  int v14; // [sp+2Ch] [bp-FCh]@2
  int v15; // [sp+30h] [bp-F8h]@2
  int v16; // [sp+34h] [bp-F4h]@2
  int v17; // [sp+38h] [bp-F0h]@2
  int v18; // [sp+3Ch] [bp-ECh]@2
  int v19; // [sp+40h] [bp-E8h]@2
  signed int v20; // [sp+44h] [bp-E4h]@2
  signed int v21; // [sp+48h] [bp-E0h]@2
  int v22; // [sp+4Ch] [bp-DCh]@2
  signed int v23; // [sp+50h] [bp-D8h]@2
  signed int v24; // [sp+54h] [bp-D4h]@2
  int v25; // [sp+58h] [bp-D0h]@2
  int v26; // [sp+5Ch] [bp-CCh]@2
  int v27; // [sp+60h] [bp-C8h]@2
  int v28; // [sp+64h] [bp-C4h]@2
  int v29; // [sp+68h] [bp-C0h]@2
  int v30; // [sp+6Ch] [bp-BCh]@2
  signed int v31; // [sp+70h] [bp-B8h]@2
  int v32; // [sp+74h] [bp-B4h]@2
  int v33; // [sp+78h] [bp-B0h]@2
  int v34; // [sp+7Ch] [bp-ACh]@2
  int v35; // [sp+80h] [bp-A8h]@2
  signed int v36; // [sp+84h] [bp-A4h]@2
  int v37; // [sp+88h] [bp-A0h]@2
  int v38; // [sp+8Ch] [bp-9Ch]@2
  int v39; // [sp+90h] [bp-98h]@2
  int v40; // [sp+94h] [bp-94h]@2
  int v41; // [sp+98h] [bp-90h]@2
  int v42; // [sp+9Ch] [bp-8Ch]@2
  int v43; // [sp+A0h] [bp-88h]@2
  int v44; // [sp+A4h] [bp-84h]@2
  int v45; // [sp+A8h] [bp-80h]@2
  int v46; // [sp+ACh] [bp-7Ch]@2
  int v47; // [sp+B0h] [bp-78h]@2
  int v48; // [sp+B4h] [bp-74h]@2
  int v49; // [sp+B8h] [bp-70h]@2
  int v50; // [sp+BCh] [bp-6Ch]@2
  int v51; // [sp+C0h] [bp-68h]@2
  signed int v52; // [sp+C4h] [bp-64h]@2
  signed int v53; // [sp+C8h] [bp-60h]@2
  int v54; // [sp+CCh] [bp-5Ch]@2
  int v55; // [sp+D0h] [bp-58h]@2
  int v56; // [sp+D4h] [bp-54h]@2
  int v57; // [sp+D8h] [bp-50h]@2
  int v58; // [sp+DCh] [bp-4Ch]@2
  int v59; // [sp+E0h] [bp-48h]@2
  signed int v60; // [sp+E4h] [bp-44h]@2
  int v61; // [sp+E8h] [bp-40h]@2
  int v62; // [sp+ECh] [bp-3Ch]@2
  signed int v63; // [sp+F0h] [bp-38h]@2
  int v64; // [sp+F4h] [bp-34h]@2
  int v65; // [sp+FCh] [bp-2Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E53A4;
  *((_DWORD *)v1 + 12) = 0;
  sub_21E94B4((void **)&v65, "dragon_head");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v1 + 52),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v65);
  v2 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v65 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 8), 0, 0, 256, 256);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 284)), 0, 0, 256, 256);
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 8));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 284));
  *((_DWORD *)v1 + 7) = (char *)v1 + 52;
  v62 = -1056964608;
  v63 = -1056964608;
  v64 = -1054867456;
  v59 = 1098907648;
  v60 = 1098907648;
  v57 = 112;
  v61 = 1098907648;
  v58 = 30;
  ModelPart::addBoxMapTex((int)(v1 + 8), (const Vec3 *)&v62, (const Vec3 *)&v59, &v57, 0.0);
  v54 = -1061158912;
  v55 = -1082130432;
  v56 = -1044381696;
  v51 = 1094713344;
  v52 = 1084227584;
  v53 = 1098907648;
  v49 = 176;
  v50 = 44;
  ModelPart::addBoxMapTex((int)(v1 + 8), (const Vec3 *)&v54, (const Vec3 *)&v51, &v49, 0.0);
  *((_BYTE *)v1 + 116) = 1;
  v46 = -1063256064;
  v47 = -1052770304;
  v48 = -1065353216;
  v43 = 0x40000000;
  v44 = 1082130432;
  v45 = 1086324736;
  v41 = 0;
  v42 = 0;
  ModelPart::addBoxMapTex((int)(v1 + 8), (const Vec3 *)&v46, (const Vec3 *)&v43, &v41, 0.0);
  v38 = -1063256064;
  v39 = -1069547520;
  v40 = -1045430272;
  v35 = 0x40000000;
  v36 = 0x40000000;
  v37 = 1082130432;
  v33 = 112;
  v34 = 0;
  ModelPart::addBoxMapTex((int)(v1 + 8), (const Vec3 *)&v38, (const Vec3 *)&v35, &v33, 0.0);
  *((_BYTE *)v1 + 116) = 0;
  v30 = 1077936128;
  v31 = -1052770304;
  v32 = -1065353216;
  v27 = 0x40000000;
  v28 = 1082130432;
  v29 = 1086324736;
  v25 = 0;
  v26 = 0;
  ModelPart::addBoxMapTex((int)(v1 + 8), (const Vec3 *)&v30, (const Vec3 *)&v27, &v25, 0.0);
  v23 = -1069547520;
  v24 = -1045430272;
  v19 = 0x40000000;
  v20 = 0x40000000;
  v21 = 1082130432;
  v22 = 1077936128;
  v17 = 112;
  v18 = 0;
  ModelPart::addBoxMapTex((int)(v1 + 8), (const Vec3 *)&v22, (const Vec3 *)&v19, &v17, 0.0);
  v14 = 0;
  v15 = 1082130432;
  v16 = -1056964608;
  ModelPart::setPos((ModelPart *)((char *)v1 + 284), (const Vec3 *)&v14);
  v11 = -1061158912;
  v12 = 0;
  v13 = -1048576000;
  v8 = 1094713344;
  v9 = 1082130432;
  v10 = 1098907648;
  v6 = 176;
  v7 = 65;
  ModelPart::addBoxMapTex((int)v1 + 284, (const Vec3 *)&v11, (const Vec3 *)&v8, &v6, 0.0);
  return v1;
}


AppPlatformListener *__fastcall DragonHeadModel::~DragonHeadModel(DragonHeadModel *this)
{
  DragonHeadModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E53A4;
  v2 = (DragonHeadModel *)((char *)this + 52);
  ModelPart::~ModelPart((DragonHeadModel *)((char *)this + 284));
  ModelPart::~ModelPart((DragonHeadModel *)((char *)v1 + 64));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


signed __int64 __fastcall DragonHeadModel::render(__int64 a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  unsigned int v4; // r5@1
  __int64 v5; // r0@1

  v2 = a1;
  v3 = a2;
  LODWORD(a1) = a1 + 284;
  v4 = HIDWORD(a1);
  ModelPart::render(a1, v2, a2, 0, 0);
  LODWORD(v5) = v2 + 64;
  return __PAIR__(v4, ModelPart::render(v5, v2, v3, 0, 0));
}


void __fastcall DragonHeadModel::~DragonHeadModel(DragonHeadModel *this)
{
  DragonHeadModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E53A4;
  v2 = (DragonHeadModel *)((char *)this + 52);
  ModelPart::~ModelPart((DragonHeadModel *)((char *)this + 284));
  ModelPart::~ModelPart((DragonHeadModel *)((char *)v1 + 64));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
