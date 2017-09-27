

AppPlatformListener *__fastcall PigModel::~PigModel(PigModel *this)
{
  PigModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5A8C;
  mce::MaterialPtr::~MaterialPtr((PigModel *)((char *)this + 1596));
  return j_j_j__ZN14QuadrupedModelD2Ev(v1);
}


QuadrupedModel *__fastcall PigModel::PigModel(QuadrupedModel *a1, const GeometryPtr *a2)
{
  QuadrupedModel *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  QuadrupedModel::QuadrupedModel(a1, a2);
  *(_DWORD *)v2 = &off_26E5A8C;
  sub_21E94B4((void **)&v7, "pig");
  mce::MaterialPtr::MaterialPtr(
    (QuadrupedModel *)((char *)v2 + 1596),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *((_DWORD *)v2 + 7) = (char *)v2 + 1596;
  *((_DWORD *)v2 + 397) = -1056964608;
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = -1083808154;
  *((_DWORD *)v2 + 4) = 1054951342;
  return v2;
}


void __fastcall PigModel::~PigModel(PigModel *this)
{
  PigModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5A8C;
  mce::MaterialPtr::~MaterialPtr((PigModel *)((char *)this + 1596));
  QuadrupedModel::~QuadrupedModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall PigModel::~PigModel(PigModel *this)
{
  PigModel::~PigModel(this);
}


int __fastcall PigModel::prepareMobModel(PigModel *this, Mob *a2, float a3, float a4, float a5)
{
  int result; // r0@1
  BoostableComponent *v9; // r0@2
  float v10; // r1@2

  _R4 = a2;
  _R6 = a4;
  _R5 = a3;
  result = Entity::getBoostableComponent(a2);
  if ( result )
  {
    v9 = (BoostableComponent *)Entity::getBoostableComponent(_R4);
    result = BoostableComponent::isBoosting(v9);
    if ( result == 1 )
    {
      __asm
      {
        VMOV            S0, R5
        VLDR            S2, =0.3
        VMOV            S16, R6
        VLDR            S18, [R4,#0x78]
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
      }
      result = mce::Math::cos(_R0, v10);
        VMOV.F32        S0, #5.0
        VMOV            S2, R0
        VMUL.F32        S0, S16, S0
        VADD.F32        S0, S0, S18
        VSTR            S0, [R4,#0x78]
    }
  }
  return result;
}
