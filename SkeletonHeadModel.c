

int __fastcall SkeletonHeadModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r5@1
  __int64 v14; // r6@1

  v9 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
  }
  LODWORD(v14) = a1 + 60;
  HIDWORD(v14) = a2;
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R3, S16 }
  return ModelPart::render(v14, v9, _R3, 0, 0);
}


void __fastcall SkeletonHeadModel::setupAnim(SkeletonHeadModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  SkeletonHeadModel::setupAnim(this, a2, a3, a4, a5, a6, a7);
}


void __fastcall SkeletonHeadModel::~SkeletonHeadModel(SkeletonHeadModel *this)
{
  SkeletonHeadModel::~SkeletonHeadModel(this);
}


int __fastcall SkeletonHeadModel::render(__int64 a1)
{
  int v1; // r2@1

  v1 = a1;
  LODWORD(a1) = a1 + 60;
  return ModelPart::render(a1, v1, 1031798784, 0, 0);
}


_QWORD *__fastcall SkeletonHeadModel::SkeletonHeadModel(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r9@1
  int v7; // r6@1
  _QWORD *v8; // r4@1
  void *v9; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+8h] [bp-50h]@2
  int v14; // [sp+Ch] [bp-4Ch]@2
  int v15; // [sp+10h] [bp-48h]@2
  int v16; // [sp+14h] [bp-44h]@2
  signed int v17; // [sp+18h] [bp-40h]@2
  int v18; // [sp+1Ch] [bp-3Ch]@2
  int v19; // [sp+20h] [bp-38h]@2
  signed int v20; // [sp+24h] [bp-34h]@2
  signed int v21; // [sp+28h] [bp-30h]@2
  int v22; // [sp+30h] [bp-28h]@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  Model::Model(a1);
  *(_DWORD *)v8 = &off_26DB1B4;
  sub_119C884((void **)&v22, "mob_head");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v8 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v22);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v8 + 60)), v7, v6, v5, a5);
  *((_DWORD *)v8 + 7) = v8 + 6;
  v19 = -1065353216;
  v20 = -1057174323;
  v21 = -1065353216;
  v16 = 1090519040;
  v17 = 1090519040;
  v18 = 1090519040;
  ModelPart::addBox(
    (ModelPart *)((char *)v8 + 60),
    (const Vec3 *)&v19,
    (const Vec3 *)&v16,
    0.0,
    (const Color *)&Color::WHITE);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  ModelPart::setPos((ModelPart *)((char *)v8 + 60), (const Vec3 *)&v13);
  Model::registerParts((Model *)v8, (ModelPart *)((char *)v8 + 60));
  return v8;
}


void __fastcall SkeletonHeadModel::setupAnim(SkeletonHeadModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VLDR            S4, [SP,#arg_4]
  }
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R0,#0x60]
    VSTR            S0, [R0,#0x64]
}


AppPlatformListener *__fastcall SkeletonHeadModel::~SkeletonHeadModel(SkeletonHeadModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB1B4;
  v2 = (SkeletonHeadModel *)((char *)this + 48);
  ModelPart::~ModelPart((SkeletonHeadModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


void __fastcall SkeletonHeadModel::~SkeletonHeadModel(SkeletonHeadModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB1B4;
  v2 = (SkeletonHeadModel *)((char *)this + 48);
  ModelPart::~ModelPart((SkeletonHeadModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
