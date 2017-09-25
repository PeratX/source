

int __fastcall ShulkerBoxModel::render(int a1, unsigned int a2)
{
  int v7; // r6@1
  unsigned int v8; // r5@1
  __int64 v10; // r0@1
  char v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+10h] [bp-20h]@1
  int v14; // [sp+18h] [bp-18h]@1

  __asm { VMOV.F32        S0, #8.0 }
  _R4 = a1;
  __asm
  {
    VLDR            S2, [R4,#0x1F4]
    VMOV.F32        S4, #24.0
  }
  v7 = a1 + 60;
  v8 = a2;
  v13 = 0;
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [SP,#0x30+var_1C]
  v14 = 0;
  ModelPart::setPos((ModelPart *)(a1 + 60), (const Vec3 *)&v13);
    VLDR            S0, [R4,#0x1F4]
    VADD.F32        S0, S0, S0
  _R0 = &mce::Math::PI;
    VLDR            S2, [R0]
    VSTR            S0, [R4,#0x64]
  MatrixStack::push((MatrixStack *)&v12, *(_DWORD *)(v8 + 16) + 16);
  ModelPart::render(__PAIR__(v8, v7), _R4, 1065353216, 0, 0);
  LODWORD(v10) = _R4 + 280;
  ModelPart::render(v10, _R4, 1065353216, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v12);
}


void __fastcall ShulkerBoxModel::~ShulkerBoxModel(ShulkerBoxModel *this)
{
  ShulkerBoxModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB0CC;
  v2 = (ShulkerBoxModel *)((char *)this + 48);
  ModelPart::~ModelPart((ShulkerBoxModel *)((char *)this + 280));
  ModelPart::~ModelPart((ShulkerBoxModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


_QWORD *__fastcall ShulkerBoxModel::ShulkerBoxModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+8h] [bp-70h]@2
  signed int v7; // [sp+Ch] [bp-6Ch]@2
  int v8; // [sp+10h] [bp-68h]@2
  int v9; // [sp+14h] [bp-64h]@2
  signed int v10; // [sp+18h] [bp-60h]@2
  signed int v11; // [sp+1Ch] [bp-5Ch]@2
  int v12; // [sp+20h] [bp-58h]@2
  signed int v13; // [sp+24h] [bp-54h]@2
  int v14; // [sp+28h] [bp-50h]@2
  int v15; // [sp+2Ch] [bp-4Ch]@2
  signed int v16; // [sp+30h] [bp-48h]@2
  int v17; // [sp+34h] [bp-44h]@2
  int v18; // [sp+38h] [bp-40h]@2
  signed int v19; // [sp+3Ch] [bp-3Ch]@2
  signed int v20; // [sp+40h] [bp-38h]@2
  int v21; // [sp+44h] [bp-34h]@2
  signed int v22; // [sp+48h] [bp-30h]@2
  signed int v23; // [sp+4Ch] [bp-2Ch]@2
  int v24; // [sp+54h] [bp-24h]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26DB0CC;
  sub_119C884((void **)&v24, "shulker_box");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v24);
  v2 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v24 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v1 + 60)), 0, 0, 64, 64);
  ModelPart::ModelPart(COERCE_FLOAT(v1 + 35), 0, 28, 64, 64);
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  Model::registerParts((Model *)v1, (ModelPart *)(v1 + 35));
  *((_DWORD *)v1 + 7) = v1 + 6;
  v21 = -1056964608;
  v22 = -1048576000;
  v23 = -1056964608;
  v18 = 1098907648;
  v19 = 1094713344;
  v20 = 1098907648;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v21,
    (const Vec3 *)&v18,
    0.0,
    (const Color *)&Color::WHITE);
  v15 = 0;
  v16 = 1103101952;
  v17 = 0;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v15);
  v12 = -1056964608;
  v13 = -1056964608;
  v14 = -1056964608;
  v9 = 1098907648;
  v10 = 1090519040;
  v11 = 1098907648;
  ModelPart::addBox((ModelPart *)(v1 + 35), (const Vec3 *)&v12, (const Vec3 *)&v9, 0.0, (const Color *)&Color::WHITE);
  v6 = 0;
  v7 = 1103101952;
  v8 = 0;
  ModelPart::setPos((ModelPart *)(v1 + 35), (const Vec3 *)&v6);
  return v1;
}


AppPlatformListener *__fastcall ShulkerBoxModel::~ShulkerBoxModel(ShulkerBoxModel *this)
{
  ShulkerBoxModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB0CC;
  v2 = (ShulkerBoxModel *)((char *)this + 48);
  ModelPart::~ModelPart((ShulkerBoxModel *)((char *)this + 280));
  ModelPart::~ModelPart((ShulkerBoxModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


void __fastcall ShulkerBoxModel::~ShulkerBoxModel(ShulkerBoxModel *this)
{
  ShulkerBoxModel::~ShulkerBoxModel(this);
}
