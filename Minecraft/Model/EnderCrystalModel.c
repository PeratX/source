

int __fastcall EnderCrystalModel::render(float a1, float a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9)
{
  float v9; // r8@1
  int v10; // r4@1
  int v11; // r6@1
  int v18; // r0@1
  __int64 v20; // r0@2
  int v21; // r6@3
  int v23; // r7@3
  __int64 v25; // r0@3
  int v27; // r5@3
  int v28; // r5@3
  __int64 v29; // r0@3
  int v31; // r5@3
  int v32; // r5@3
  __int64 v33; // r0@3
  int v35; // [sp+Ch] [bp-9Ch]@3
  signed int v36; // [sp+10h] [bp-98h]@3
  int v37; // [sp+14h] [bp-94h]@3
  char v38; // [sp+18h] [bp-90h]@1
  float v39; // [sp+20h] [bp-88h]@3
  signed int v40; // [sp+24h] [bp-84h]@3
  int v41; // [sp+28h] [bp-80h]@3
  int v42; // [sp+2Ch] [bp-7Ch]@3
  int v43; // [sp+30h] [bp-78h]@3
  int v44; // [sp+34h] [bp-74h]@3
  int v45; // [sp+38h] [bp-70h]@3
  int v46; // [sp+3Ch] [bp-6Ch]@3
  int v47; // [sp+40h] [bp-68h]@3
  int v48; // [sp+44h] [bp-64h]@3
  int v49; // [sp+48h] [bp-60h]@3
  int v50; // [sp+4Ch] [bp-5Ch]@3
  int v51; // [sp+50h] [bp-58h]@3
  int v52; // [sp+54h] [bp-54h]@3
  int v53; // [sp+58h] [bp-50h]@3
  int v54; // [sp+5Ch] [bp-4Ch]@3
  int v55; // [sp+60h] [bp-48h]@3
  int v56; // [sp+64h] [bp-44h]@3
  int v57; // [sp+68h] [bp-40h]@3
  int v58; // [sp+6Ch] [bp-3Ch]@3

  v9 = a2;
  v10 = LODWORD(a1);
  v11 = a3;
  MatrixStack::push((MatrixStack *)&v38, *(_DWORD *)(LODWORD(a2) + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  __asm
  {
    VLDR            S0, [R0]
    VADD.F32        S0, S0, S0
    VSTR            S0, [R0]
    VLDR            S0, [R0,#4]
    VSTR            S0, [R0,#4]
    VLDR            S0, [R0,#8]
    VSTR            S0, [R0,#8]
    VLDR            S0, [R0,#0xC]
    VSTR            S0, [R0,#0xC]
    VLDR            S0, [R0,#0x10]
    VSTR            S0, [R0,#0x10]
    VLDR            S0, [R0,#0x14]
    VSTR            S0, [R0,#0x14]
    VLDR            S0, [R0,#0x18]
    VSTR            S0, [R0,#0x18]
    VLDR            S0, [R0,#0x1C]
    VSTR            S0, [R0,#0x1C]
    VLDR            S0, [R0,#0x20]
    VSTR            S0, [R0,#0x20]
    VLDR            S0, [R0,#0x24]
    VSTR            S0, [R0,#0x24]
    VLDR            S0, [R0,#0x28]
    VSTR            S0, [R0,#0x28]
    VLDR            S0, [R0,#0x2C]
    VSTR            S0, [R0,#0x2C]
  }
    VMOV.F32        S0, #0.5
    VLDR            S2, [R0,#0x14]
    VLDR            S4, [R0,#0x18]
    VLDR            S8, [R0,#0x10]
    VLDR            S6, [R0,#0x1C]
    VLDR            S10, [R0,#0x34]
    VLDR            S12, [R0,#0x38]
    VLDR            S14, [R0,#0x3C]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R0,#0x30]
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S6, S8
    VSUB.F32        S0, S14, S0
    VSTR            S6, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  v18 = Entity::getStatusFlag(v11, 36);
  __asm { VLDR            S18, [SP,#0xA8+arg_10] }
  if ( v18 == 1 )
    __asm { VMOV            R3, S18 }
    *((float *)&v20 + 1) = v9;
    LODWORD(v20) = v10 + 500;
    ModelPart::render(v20, v10, _R3, 0, 0);
  v21 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  v35 = 0;
  v36 = 1065353216;
  __asm { VLDR            S16, [SP,#0xA8+arg_0] }
  v37 = 0;
  __asm { VSTR            S16, [SP,#0xA8+var_88] }
  glm::rotate<float>((int)&v42, v21, (int)&v39, (int)&v35);
  *(_DWORD *)v21 = v42;
  *(_DWORD *)(v21 + 4) = v43;
  *(_DWORD *)(v21 + 8) = v44;
  *(_DWORD *)(v21 + 12) = v45;
  *(_DWORD *)(v21 + 16) = v46;
  *(_DWORD *)(v21 + 20) = v47;
  *(_DWORD *)(v21 + 24) = v48;
  *(_DWORD *)(v21 + 28) = v49;
  *(_DWORD *)(v21 + 32) = v50;
  *(_DWORD *)(v21 + 36) = v51;
  *(_DWORD *)(v21 + 40) = v52;
  *(_DWORD *)(v21 + 44) = v53;
  *(_DWORD *)(v21 + 48) = v54;
  *(_DWORD *)(v21 + 52) = v55;
  *(_DWORD *)(v21 + 56) = v56;
  *(_DWORD *)(v21 + 60) = v57;
    VLDR            S0, [SP,#0xA8+arg_4]
    VLDR            S2, =0.95
    VADD.F32        S0, S0, S2
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S6, S6, S8
    VADD.F32        S0, S14, S0
  v23 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  v39 = 0.7071;
  v40 = 0;
  v41 = 1060439169;
  v58 = 1114636288;
  glm::rotate<float>((int)&v42, v23, (int)&v58, (int)&v39);
  __asm { VMOV            R9, S18 }
  *(_DWORD *)v23 = v42;
  *(_DWORD *)(v23 + 4) = v43;
  *(_DWORD *)(v23 + 8) = v44;
  *(_DWORD *)(v23 + 12) = v45;
  *(_DWORD *)(v23 + 16) = v46;
  *(_DWORD *)(v23 + 20) = v47;
  *(_DWORD *)(v23 + 24) = v48;
  *(_DWORD *)(v23 + 28) = v49;
  *(_DWORD *)(v23 + 32) = v50;
  *(_DWORD *)(v23 + 36) = v51;
  *(_DWORD *)(v23 + 40) = v52;
  *(_DWORD *)(v23 + 44) = v53;
  *(_DWORD *)(v23 + 48) = v54;
  *(_DWORD *)(v23 + 52) = v55;
  *(_DWORD *)(v23 + 56) = v56;
  *(_DWORD *)(v23 + 60) = v57;
  LODWORD(v25) = v10 + 280;
  ModelPart::render(v25, v10, _R9, 0, 0);
    VMOV.F32        S18, #0.875
    VMUL.F32        S0, S0, S18
  v27 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  glm::rotate<float>((int)&v42, v27, (int)&v58, (int)&v39);
  *(_DWORD *)v27 = v42;
  *(_DWORD *)(v27 + 4) = v43;
  *(_DWORD *)(v27 + 8) = v44;
  *(_DWORD *)(v27 + 12) = v45;
  *(_DWORD *)(v27 + 16) = v46;
  *(_DWORD *)(v27 + 20) = v47;
  *(_DWORD *)(v27 + 24) = v48;
  *(_DWORD *)(v27 + 28) = v49;
  *(_DWORD *)(v27 + 32) = v50;
  *(_DWORD *)(v27 + 36) = v51;
  *(_DWORD *)(v27 + 40) = v52;
  *(_DWORD *)(v27 + 44) = v53;
  *(_DWORD *)(v27 + 48) = v54;
  *(_DWORD *)(v27 + 52) = v55;
  *(_DWORD *)(v27 + 56) = v56;
  *(_DWORD *)(v27 + 60) = v57;
  v28 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  v39 = 0.0;
  v40 = 1065353216;
  v41 = 0;
  __asm { VSTR            S16, [SP,#0xA8+var_3C] }
  glm::rotate<float>((int)&v42, v28, (int)&v58, (int)&v39);
  *(_DWORD *)v28 = v42;
  *(_DWORD *)(v28 + 4) = v43;
  *(_DWORD *)(v28 + 8) = v44;
  *(_DWORD *)(v28 + 12) = v45;
  *(_DWORD *)(v28 + 16) = v46;
  *(_DWORD *)(v28 + 20) = v47;
  *(_DWORD *)(v28 + 24) = v48;
  *(_DWORD *)(v28 + 28) = v49;
  *(_DWORD *)(v28 + 32) = v50;
  *(_DWORD *)(v28 + 36) = v51;
  *(_DWORD *)(v28 + 40) = v52;
  *(_DWORD *)(v28 + 44) = v53;
  *(_DWORD *)(v28 + 48) = v54;
  *(_DWORD *)(v28 + 52) = v55;
  *(_DWORD *)(v28 + 56) = v56;
  *(_DWORD *)(v28 + 60) = v57;
  LODWORD(v29) = v10 + 280;
  ModelPart::render(v29, v10, _R9, 0, 0);
  v31 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  glm::rotate<float>((int)&v42, v31, (int)&v58, (int)&v39);
  *(_DWORD *)v31 = v42;
  *(_DWORD *)(v31 + 4) = v43;
  *(_DWORD *)(v31 + 8) = v44;
  *(_DWORD *)(v31 + 12) = v45;
  *(_DWORD *)(v31 + 16) = v46;
  *(_DWORD *)(v31 + 20) = v47;
  *(_DWORD *)(v31 + 24) = v48;
  *(_DWORD *)(v31 + 28) = v49;
  *(_DWORD *)(v31 + 32) = v50;
  *(_DWORD *)(v31 + 36) = v51;
  *(_DWORD *)(v31 + 40) = v52;
  *(_DWORD *)(v31 + 44) = v53;
  *(_DWORD *)(v31 + 48) = v54;
  *(_DWORD *)(v31 + 52) = v55;
  *(_DWORD *)(v31 + 56) = v56;
  *(_DWORD *)(v31 + 60) = v57;
  v32 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  glm::rotate<float>((int)&v42, v32, (int)&v58, (int)&v39);
  *(_DWORD *)v32 = v42;
  *(_DWORD *)(v32 + 4) = v43;
  *(_DWORD *)(v32 + 8) = v44;
  *(_DWORD *)(v32 + 12) = v45;
  *(_DWORD *)(v32 + 16) = v46;
  *(_DWORD *)(v32 + 20) = v47;
  *(_DWORD *)(v32 + 24) = v48;
  *(_DWORD *)(v32 + 28) = v49;
  *(_DWORD *)(v32 + 32) = v50;
  *(_DWORD *)(v32 + 36) = v51;
  *(_DWORD *)(v32 + 40) = v52;
  *(_DWORD *)(v32 + 44) = v53;
  *(_DWORD *)(v32 + 48) = v54;
  *(_DWORD *)(v32 + 52) = v55;
  *(_DWORD *)(v32 + 56) = v56;
  *(_DWORD *)(v32 + 60) = v57;
  LODWORD(v33) = v10 + 60;
  ModelPart::render(v33, v10, _R9, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v38);
}


AppPlatformListener *__fastcall EnderCrystalModel::~EnderCrystalModel(EnderCrystalModel *this)
{
  EnderCrystalModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E82FC;
  v2 = (EnderCrystalModel *)((char *)this + 48);
  ModelPart::~ModelPart((EnderCrystalModel *)((char *)this + 500));
  ModelPart::~ModelPart((EnderCrystalModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EnderCrystalModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


_QWORD *__fastcall EnderCrystalModel::EnderCrystalModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-30Ch]@2
  signed int v7; // [sp+8h] [bp-308h]@2
  signed int v8; // [sp+Ch] [bp-304h]@2
  int v9; // [sp+10h] [bp-300h]@2
  int v10; // [sp+14h] [bp-2FCh]@2
  int v11; // [sp+18h] [bp-2F8h]@2
  int v12; // [sp+1Ch] [bp-2F4h]@2
  signed int v13; // [sp+20h] [bp-2F0h]@2
  int v14; // [sp+24h] [bp-2ECh]@2
  int v15; // [sp+28h] [bp-2E8h]@2
  signed int v16; // [sp+2Ch] [bp-2E4h]@2
  int v17; // [sp+30h] [bp-2E0h]@2
  int v18; // [sp+34h] [bp-2DCh]@2
  signed int v19; // [sp+38h] [bp-2D8h]@2
  int v20; // [sp+3Ch] [bp-2D4h]@2
  int v21; // [sp+40h] [bp-2D0h]@2
  signed int v22; // [sp+44h] [bp-2CCh]@2
  int v23; // [sp+48h] [bp-2C8h]@2
  char v24; // [sp+4Ch] [bp-2C4h]@2
  char v25; // [sp+128h] [bp-1E8h]@2
  char v26; // [sp+204h] [bp-10Ch]@2
  int v27; // [sp+2E4h] [bp-2Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E82FC;
  sub_21E94B4((void **)&v27, "ender_crystal");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v27);
  v2 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v27 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 500)), 0, 0, 64, 32);
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 500));
  *((_DWORD *)v1 + 7) = v1 + 6;
  ModelPart::ModelPart(COERCE_FLOAT(&v26), 0, 0, 64, 32);
  ModelPart::operator=((int)(v1 + 35), (int)&v26);
  ModelPart::~ModelPart((ModelPart *)&v26);
  ModelPart::ModelPart(COERCE_FLOAT(&v25), 32, 0, 64, 32);
  ModelPart::operator=((int)v1 + 60, (int)&v25);
  ModelPart::~ModelPart((ModelPart *)&v25);
  ModelPart::ModelPart(COERCE_FLOAT(&v24), 0, 16, 64, 32);
  ModelPart::operator=((int)v1 + 500, (int)&v24);
  ModelPart::~ModelPart((ModelPart *)&v24);
  v21 = -1065353216;
  v22 = -1065353216;
  v23 = -1065353216;
  v18 = 1090519040;
  v19 = 1090519040;
  v20 = 1090519040;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v21, (const Vec3 *)&v18, 0.0, (const Color *)&Color::WHITE);
  v15 = -1065353216;
  v16 = -1065353216;
  v17 = -1065353216;
  v12 = 1090519040;
  v13 = 1090519040;
  v14 = 1090519040;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v15,
    (const Vec3 *)&v12,
    0.0,
    (const Color *)&Color::WHITE);
  v9 = -1061158912;
  v10 = 0;
  v11 = -1061158912;
  v6 = 1094713344;
  v7 = 1082130432;
  v8 = 1094713344;
    (ModelPart *)((char *)v1 + 500),
    (const Vec3 *)&v9,
    (const Vec3 *)&v6,
  return v1;
}


void __fastcall EnderCrystalModel::~EnderCrystalModel(EnderCrystalModel *this)
{
  EnderCrystalModel::~EnderCrystalModel(this);
}


void __fastcall EnderCrystalModel::~EnderCrystalModel(EnderCrystalModel *this)
{
  EnderCrystalModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E82FC;
  v2 = (EnderCrystalModel *)((char *)this + 48);
  ModelPart::~ModelPart((EnderCrystalModel *)((char *)this + 500));
  ModelPart::~ModelPart((EnderCrystalModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EnderCrystalModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
