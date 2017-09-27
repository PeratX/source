

int __fastcall LeashKnotModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
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


AppPlatformListener *__fastcall LeashKnotModel::~LeashKnotModel(LeashKnotModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E57CC;
  v2 = (LeashKnotModel *)((char *)this + 48);
  ModelPart::~ModelPart((LeashKnotModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


_QWORD *__fastcall LeashKnotModel::LeashKnotModel(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-44h]@2
  int v7; // [sp+8h] [bp-40h]@2
  int v8; // [sp+Ch] [bp-3Ch]@2
  int v9; // [sp+10h] [bp-38h]@2
  signed int v10; // [sp+14h] [bp-34h]@2
  signed int v11; // [sp+18h] [bp-30h]@2
  int v12; // [sp+1Ch] [bp-2Ch]@2
  signed int v13; // [sp+20h] [bp-28h]@2
  signed int v14; // [sp+24h] [bp-24h]@2
  int v15; // [sp+2Ch] [bp-1Ch]@1

  v1 = a1;
  Model::Model(a1);
  *(_DWORD *)v1 = &off_26E57CC;
  sub_21E94B4((void **)&v15, "leash_knot");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v15);
  v2 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v15 - 4);
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
  Model::registerParts((Model *)v1, (ModelPart *)((char *)v1 + 60));
  *((_DWORD *)v1 + 7) = v1 + 6;
  v12 = -1069547520;
  v13 = -1061158912;
  v14 = -1069547520;
  v9 = 1086324736;
  v10 = 1090519040;
  v11 = 1086324736;
  ModelPart::addBox(
    (ModelPart *)((char *)v1 + 60),
    (const Vec3 *)&v12,
    (const Vec3 *)&v9,
    0.0,
    (const Color *)&Color::WHITE);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  ModelPart::setPos((ModelPart *)((char *)v1 + 60), (const Vec3 *)&v6);
  return v1;
}


void __fastcall LeashKnotModel::setupAnim(LeashKnotModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __asm
  {
    VLDR            S0, [SP,#arg_4]
    VLDR            S4, [SP,#arg_0]
  }
  _R1 = &mce::Math::RADDEG;
    VLDR            S2, [R1]
    VDIV.F32        S0, S0, S2
    VDIV.F32        S2, S4, S2
    VSTR            S0, [R0,#0x60]
    VSTR            S2, [R0,#0x64]
}


void __fastcall LeashKnotModel::~LeashKnotModel(LeashKnotModel *this)
{
  LeashKnotModel::~LeashKnotModel(this);
}


void __fastcall LeashKnotModel::setupAnim(LeashKnotModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  LeashKnotModel::setupAnim(this, a2, a3, a4, a5, a6, a7);
}


void __fastcall LeashKnotModel::~LeashKnotModel(LeashKnotModel *this)
{
  Model *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E57CC;
  v2 = (LeashKnotModel *)((char *)this + 48);
  ModelPart::~ModelPart((LeashKnotModel *)((char *)this + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
