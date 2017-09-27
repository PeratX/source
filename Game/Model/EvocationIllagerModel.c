

void __fastcall EvocationIllagerModel::~EvocationIllagerModel(EvocationIllagerModel *this)
{
  EvocationIllagerModel::~EvocationIllagerModel(this);
}


int __fastcall EvocationIllagerModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v13; // r6@1
  float v14; // r5@1
  int v15; // r4@1
  __int64 v16; // r0@1
  __int64 v18; // r0@2
  int v19; // r2@2
  float v22; // [sp+0h] [bp-38h]@0
  int v23; // [sp+4h] [bp-34h]@0
  int v24; // [sp+8h] [bp-30h]@0
  int v25; // [sp+Ch] [bp-2Ch]@0
  int v26; // [sp+10h] [bp-28h]@0

  __asm { VLDR            S4, [SP,#0x38+arg_0] }
  v13 = LODWORD(a3);
  __asm { VLDR            S0, [SP,#0x38+arg_8] }
  v14 = a2;
  __asm { VLDR            S2, [SP,#0x38+arg_4] }
  v15 = LODWORD(a1);
  __asm
  {
    VLDR            S6, [SP,#0x38+arg_C]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S4, [SP,#0x38+var_38]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S0, [SP,#0x38+var_30]
    VSTR            S6, [SP,#0x38+var_2C]
    VSTR            S16, [SP,#0x38+var_28]
  }
  IllagerModel::render(SLODWORD(a1), SLODWORD(a2), a3, a4, v22, v23, v24, v25, v26);
  if ( Entity::getStatusFlag(v13, 40) == 1 )
    __asm { VMOV            R6, S16 }
    LODWORD(v16) = v15 + 1600;
    ModelPart::render(v16, v15, _R6, 0, 0);
    LODWORD(v18) = v15 + 1380;
    *((float *)&v18 + 1) = v14;
    v19 = v15;
    _R3 = _R6;
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v18) = v15 + 500;
  return ModelPart::render(v18, v19, _R3, 0, 0);
}


AppPlatformListener *__fastcall EvocationIllagerModel::~EvocationIllagerModel(EvocationIllagerModel *this)
{
  EvocationIllagerModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5508;
  mce::MaterialPtr::~MaterialPtr((EvocationIllagerModel *)((char *)this + 1820));
  *(_DWORD *)v1 = &off_26E56C4;
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 1380));
  *(_DWORD *)v1 = &off_26E5F64;
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr((EvocationIllagerModel *)((char *)v1 + 48));
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


EvocationIllagerModel *__fastcall EvocationIllagerModel::setupAnim(EvocationIllagerModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  EvocationIllagerModel *v12; // r4@1
  float v14; // r1@1
  float v16; // r1@1
  EvocationIllagerModel *result; // r0@1
  float v20; // [sp+0h] [bp-28h]@0
  float v21; // [sp+4h] [bp-24h]@0
  float v22; // [sp+8h] [bp-20h]@0

  __asm { VLDR            S0, [SP,#0x28+arg_0] }
  _R5 = a4;
  __asm { VLDR            S2, [SP,#0x28+arg_4] }
  v12 = this;
  __asm
  {
    VLDR            S4, [SP,#0x28+arg_8]
    VSTR            S0, [SP,#0x28+var_28]
    VSTR            S2, [SP,#0x28+var_24]
    VSTR            S4, [SP,#0x28+var_20]
  }
  VillagerModel::setupAnim(this, a2, a3, a4, v20, v21, v22);
    VLDR            S0, =0.6662
    VMOV            S2, R5
    VMUL.F32        S0, S2, S0
  *((_DWORD *)v12 + 402) = 0;
  *((_DWORD *)v12 + 400) = -1063256064;
  *((_DWORD *)v12 + 347) = 0;
  *((_DWORD *)v12 + 345) = 1084227584;
  __asm { VMOV            R5, S0 }
  _R0 = mce::Math::cos(_R5, v14);
    VMOV.F32        S16, #0.25
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R0]
  _R0 = mce::Math::cos(_R5, v16);
    VMOV.F32        S0, #0.75
    VMOV.F32        S2, #-0.75
    VMOV            S4, R0
  _R1 = &mce::Math::PI;
    VMUL.F32        S4, S4, S16
    VLDR            S6, [R1]
    VMUL.F32        S0, S6, S0
    VMUL.F32        S2, S6, S2
    VSTR            S4, [R0]
  result = (EvocationIllagerModel *)((char *)v12 + 1424);
  __asm { VSTR            S2, [R0] }
  *((_DWORD *)v12 + 410) = 0;
  *((_DWORD *)v12 + 355) = 0;
  return result;
}


IllagerModel *__fastcall EvocationIllagerModel::EvocationIllagerModel(IllagerModel *a1, const GeometryPtr *a2)
{
  IllagerModel *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+8h] [bp-20h]@1

  v2 = a1;
  IllagerModel::IllagerModel(a1, a2);
  *(_DWORD *)v2 = &off_26E5508;
  sub_21E94B4((void **)&v7, "evoker");
  mce::MaterialPtr::MaterialPtr(
    (IllagerModel *)((char *)v2 + 1820),
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
  *((_DWORD *)v2 + 7) = (char *)v2 + 1820;
  return v2;
}


void __fastcall EvocationIllagerModel::~EvocationIllagerModel(EvocationIllagerModel *this)
{
  EvocationIllagerModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5508;
  mce::MaterialPtr::~MaterialPtr((EvocationIllagerModel *)((char *)this + 1820));
  *(_DWORD *)v1 = &off_26E56C4;
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 1380));
  *(_DWORD *)v1 = &off_26E5F64;
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((EvocationIllagerModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr((EvocationIllagerModel *)((char *)v1 + 48));
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
