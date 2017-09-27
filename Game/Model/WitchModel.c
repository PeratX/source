

void __fastcall WitchModel::~WitchModel(WitchModel *this)
{
  WitchModel::~WitchModel(this);
}


signed int __fastcall WitchModel::setupAnim(WitchModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  WitchModel *v12; // r4@1
  float v14; // r1@1
  signed int result; // r0@1
  float v19; // [sp+0h] [bp-28h]@0
  float v20; // [sp+4h] [bp-24h]@0
  float v21; // [sp+8h] [bp-20h]@0

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
  VillagerModel::setupAnim(this, a2, a3, a4, v19, v20, v21);
    VLDR            S0, =0.05
    VMOV            S2, R5
    VMUL.F32        S0, S2, S0
    VMOV            R5, S0
  _R0 = mce::Math::sin(_R5, v14);
    VMOV            S2, R0
    VLDR            S0, =0.025
  _R0 = &mce::Math::PI;
    VLDR            S16, [R0]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R6]
  *((_DWORD *)v12 + 300) = 0;
  _R0 = mce::Math::cos(_R5, COERCE_FLOAT(&mce::Math::PI));
    VLDR            S0, =0.013889
    VSTR            S0, [R0]
  result = *((_BYTE *)v12 + 1380);
  if ( *((_BYTE *)v12 + 1380) )
    result = -1092196762;
    *((_DWORD *)v12 + 299) = -1092196762;
  return result;
}


VillagerModel *__fastcall WitchModel::WitchModel(VillagerModel *a1, const GeometryPtr *a2)
{
  const GeometryPtr *v2; // r6@1
  void *v4; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  void *v11; // r0@4
  void *v12; // r0@5
  unsigned int *v26; // r2@7
  signed int v27; // r1@9
  unsigned int *v28; // r2@11
  signed int v29; // r1@13
  unsigned int *v30; // r2@15
  signed int v31; // r1@17
  unsigned int *v32; // r2@19
  signed int v33; // r1@21
  unsigned int *v34; // r2@23
  signed int v35; // r1@25
  int v36; // [sp+Ch] [bp-4Ch]@5
  int v37; // [sp+14h] [bp-44h]@4
  int v38; // [sp+1Ch] [bp-3Ch]@3
  int v39; // [sp+24h] [bp-34h]@2
  int v40; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  _R4 = a1;
  VillagerModel::VillagerModel(a1, a2);
  *(_DWORD *)_R4 = &off_26DB340;
  sub_119C884((void **)&v40, "witch");
  mce::MaterialPtr::MaterialPtr(
    (VillagerModel *)((char *)_R4 + 1384),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v40);
  v4 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  _R10 = (int)_R4 + 1396;
  ModelPart::ModelPart(COERCE_FLOAT((VillagerModel *)((char *)_R4 + 1396)), 0, 0, 64, 32);
  _R11 = (int)_R4 + 1616;
  ModelPart::ModelPart(COERCE_FLOAT((VillagerModel *)((char *)_R4 + 1616)), 0, 0, 64, 32);
  _R5 = (int)_R4 + 1836;
  ModelPart::ModelPart(COERCE_FLOAT((VillagerModel *)((char *)_R4 + 1836)), 0, 0, 64, 32);
  _R9 = (int)_R4 + 2056;
  ModelPart::ModelPart(COERCE_FLOAT((VillagerModel *)((char *)_R4 + 2056)), 0, 0, 64, 32);
  Model::registerParts(_R4, (VillagerModel *)((char *)_R4 + 1396));
  Model::registerParts(_R4, (VillagerModel *)((char *)_R4 + 1616));
  Model::registerParts(_R4, (VillagerModel *)((char *)_R4 + 1836));
  Model::registerParts(_R4, (VillagerModel *)((char *)_R4 + 2056));
  *((_DWORD *)_R4 + 7) = (char *)_R4 + 1384;
  sub_119C884((void **)&v39, "hat");
  ModelPart::load((int)_R4 + 1396, (int)v2, (const void **)&v39, 0);
  v9 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v39 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v38, "hat2");
  ModelPart::load((int)_R4 + 1616, (int)v2, (const void **)&v38, 0);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v38 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v37, "hat3");
  ModelPart::load((int)_R4 + 1836, (int)v2, (const void **)&v37, 0);
  v11 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v37 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v36, "hat4");
  ModelPart::load((int)_R4 + 2056, (int)v2, (const void **)&v36, 0);
  v12 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v36 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  _R0 = (int)_R4 + 2064;
  _R1 = (int)_R4 + 1840;
  _R2 = (int)_R4 + 1844;
  _R3 = (int)_R4 + 2060;
  __asm
    VLDR            S0, [R5]
    VLDR            S2, [R9]
    VLDR            S4, [R2]
    VLDR            S10, [R0]
    VSUB.F32        S2, S2, S0
    VLDR            S6, [R1]
    VLDR            S8, [R3]
    VSUB.F32        S10, S10, S4
    VSUB.F32        S8, S8, S6
    VSTR            S2, [R9]
    VSTR            S8, [R3]
  _R3 = (int)_R4 + 1620;
  __asm { VSTR            S10, [R0] }
  _R0 = (int)_R4 + 1624;
    VLDR            S2, [R11]
    VSUB.F32        S0, S0, S2
    VSUB.F32        S6, S6, S8
    VSUB.F32        S4, S4, S10
    VSTR            S0, [R5]
    VSTR            S6, [R1]
  _R1 = (int)_R4 + 1404;
  __asm { VSTR            S4, [R2] }
  _R2 = (int)_R4 + 1400;
    VLDR            S0, [R10]
    VSUB.F32        S8, S8, S4
    VSUB.F32        S10, S10, S6
    VSTR            S2, [R11]
    VSTR            S10, [R0]
    VLDR            S2, [R4,#0x3C]
    VLDR            S8, [R4,#0x40]
    VLDR            S10, [R4,#0x44]
    VSUB.F32        S2, S4, S8
    VSUB.F32        S4, S6, S10
    VSTR            S0, [R10]
    VSTR            S2, [R2]
    VSTR            S4, [R1]
  ModelPart::addChild((VillagerModel *)((char *)_R4 + 60), (VillagerModel *)((char *)_R4 + 1396));
  ModelPart::addChild((VillagerModel *)((char *)_R4 + 1396), (VillagerModel *)((char *)_R4 + 1616));
  ModelPart::addChild((VillagerModel *)((char *)_R4 + 1616), (VillagerModel *)((char *)_R4 + 1836));
  ModelPart::addChild((VillagerModel *)((char *)_R4 + 1836), (VillagerModel *)((char *)_R4 + 2056));
  return _R4;
}


void __fastcall WitchModel::~WitchModel(WitchModel *this)
{
  WitchModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB340;
  v2 = (WitchModel *)((char *)this + 60);
  ModelPart::~ModelPart((WitchModel *)((char *)this + 2056));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1836));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1616));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1396));
  mce::MaterialPtr::~MaterialPtr((WitchModel *)((char *)v1 + 1384));
  *(_DWORD *)v1 = &off_26E5F64;
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 280));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((WitchModel *)((char *)v1 + 48));
  Model::~Model(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


AppPlatformListener *__fastcall WitchModel::~WitchModel(WitchModel *this)
{
  WitchModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB340;
  v2 = (WitchModel *)((char *)this + 60);
  ModelPart::~ModelPart((WitchModel *)((char *)this + 2056));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1836));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1616));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1396));
  mce::MaterialPtr::~MaterialPtr((WitchModel *)((char *)v1 + 1384));
  *(_DWORD *)v1 = &off_26E5F64;
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((WitchModel *)((char *)v1 + 280));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((WitchModel *)((char *)v1 + 48));
  return j_j_j__ZN5ModelD2Ev(v1);
}
