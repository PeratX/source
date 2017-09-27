

AppPlatformListener *__fastcall SheepModel::~SheepModel(SheepModel *this)
{
  SheepModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5C48;
  mce::MaterialPtr::~MaterialPtr((SheepModel *)((char *)this + 1596));
  return j_j_j__ZN14QuadrupedModelD2Ev(v1);
}


void __fastcall SheepModel::~SheepModel(SheepModel *this)
{
  SheepModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5C48;
  mce::MaterialPtr::~MaterialPtr((SheepModel *)((char *)this + 1596));
  QuadrupedModel::~QuadrupedModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


QuadrupedModel *__fastcall SheepModel::SheepModel(QuadrupedModel *a1, const GeometryPtr *a2)
{
  QuadrupedModel *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  QuadrupedModel::QuadrupedModel(a1, a2);
  *(_DWORD *)v2 = &off_26E5C48;
  sub_21E94B4((void **)&v7, "sheep");
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
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = -1092532306;
  *((_DWORD *)v2 + 4) = 1058642330;
  return v2;
}


int __fastcall SheepModel::setupAnim(SheepModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  SheepModel *v11; // r4@1
  int result; // r0@1
  float v13; // [sp+0h] [bp-18h]@0
  float v14; // [sp+4h] [bp-14h]@0
  float v15; // [sp+8h] [bp-10h]@0

  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  v11 = this;
  __asm
  {
    VLDR            S2, [SP,#0x18+arg_4]
    VLDR            S4, [SP,#0x18+arg_8]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  QuadrupedModel::setupAnim(this, a2, a3, a4, v13, v14, v15);
  result = *((_DWORD *)v11 + 402);
  *((_DWORD *)v11 + 21) = result;
  return result;
}


void __fastcall SheepModel::~SheepModel(SheepModel *this)
{
  SheepModel::~SheepModel(this);
}


int __fastcall SheepModel::prepareMobModel(SheepModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r4@1
  SheepModel *v6; // r5@1
  int result; // r0@1

  v5 = a2;
  v6 = this;
  _R0 = Sheep::getHeadEatPositionScale(a2, a5);
  __asm
  {
    VMOV.F32        S0, #9.0
    VMOV            S2, R0
    VMOV.F32        S4, #6.0
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [R5,#0x34]
  }
  result = Sheep::getHeadEatAngleScale(v5, a5);
  *((_DWORD *)v6 + 402) = result;
  return result;
}
