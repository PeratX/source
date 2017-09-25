

AppPlatformListener *__fastcall VillagerModel::~VillagerModel(VillagerModel *this)
{
  VillagerModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5F64;
  v2 = (VillagerModel *)((char *)this + 48);
  ModelPart::~ModelPart((VillagerModel *)((char *)this + 1160));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


int __fastcall VillagerModel::setupAnim(VillagerModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  VillagerModel *v11; // r4@1
  __int64 v14; // r1@1
  int result; // r0@1

  __asm
  {
    VLDR            S0, =0.6662
    VMOV            S2, R1
  }
  v11 = this;
    VMUL.F32        S16, S2, S0
    VLDR            S0, =0.0055556
    VLDR            S2, [SP,#0x20+arg_0]
    VLDR            S4, [SP,#0x20+arg_4]
  _R1 = &mce::Math::PI;
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S4, S0
  _R5 = a3;
  HIDWORD(v14) = -1082130432;
  __asm { VLDR            S18, [R1] }
  LODWORD(v14) = 1077936128;
    VMOV            R0, S16
    VMUL.F32        S2, S2, S18
    VMUL.F32        S0, S0, S18
    VSTR            S2, [R4,#0x64]
    VSTR            S0, [R4,#0x60]
  *((_DWORD *)v11 + 134) = -1086324736;
  *((_QWORD *)v11 + 63) = v14;
  _R0 = mce::Math::cos(_R0, 3.0);
    VADD.F32        S0, S18, S16
    VLDR            S4, =0.7
    VMOV            S2, R5
    VMUL.F32        S16, S2, S4
    VMOV            R1, S0
    VMOV            S0, R0
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R4,#0x2F4]
  _R0 = mce::Math::cos(_R1, *(float *)&_R1);
  __asm { VMOV            S0, R0 }
  result = 0;
    VSTR            S0, [R4,#0x3D0]
  *((_DWORD *)v11 + 190) = 0;
  *((_DWORD *)v11 + 245) = 0;
  return result;
}


signed __int64 __fastcall VillagerModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  __int64 v18; // r0@2
  __int64 v21; // r0@4
  __int64 v22; // r0@4
  __int64 v23; // r0@4
  char v25; // [sp+10h] [bp-28h]@2

  v9 = a1;
  __asm { VLDR            S0, [SP,#0x38+arg_C] }
  v14 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x38+arg_8]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S16, [SP,#0x38+var_30]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  if ( *(_BYTE *)(v9 + 24) )
    MatrixStack::push((MatrixStack *)&v25, *(_DWORD *)(v14 + 16) + 16);
    _R0 = __PAIR__(v14, MatrixStack::MatrixStackRef::operator->((int)&v25));
    __asm
    {
      VMOV.F32        S0, #1.5
      VLDR            S2, [R0]
      VMOV            R3, S16
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
    }
    LODWORD(_R0) = v9 + 60;
    ModelPart::render(_R0, v9, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v25);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v15) = v9 + 60;
    v18 = __PAIR__(v14, ModelPart::render(v15, v9, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v18) = v9 + 280;
  v21 = __PAIR__(v14, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 720;
  v22 = __PAIR__(v14, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 940;
  v23 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 500;
  return __PAIR__(v14, ModelPart::render(v23, v9, _R6, 0, 0));
}


void __fastcall VillagerModel::~VillagerModel(VillagerModel *this)
{
  VillagerModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5F64;
  v2 = (VillagerModel *)((char *)this + 48);
  ModelPart::~ModelPart((VillagerModel *)((char *)this + 1160));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((VillagerModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall VillagerModel::VillagerModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  ModelPart *v5; // r5@2
  ModelPart *v6; // r6@2
  ModelPart *v7; // r9@2
  void *v8; // r0@2
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  unsigned int *v23; // r2@25
  signed int v24; // r1@27
  unsigned int *v25; // r2@29
  signed int v26; // r1@31
  unsigned int *v27; // r2@33
  signed int v28; // r1@35
  int v29; // [sp+14h] [bp-5Ch]@7
  int v30; // [sp+1Ch] [bp-54h]@6
  int v31; // [sp+24h] [bp-4Ch]@5
  int v32; // [sp+2Ch] [bp-44h]@4
  int v33; // [sp+34h] [bp-3Ch]@3
  int v34; // [sp+3Ch] [bp-34h]@2
  int v35; // [sp+44h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5F64;
  sub_21E94B4((void **)&v35, "villager");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v35);
  v4 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  v5 = (ModelPart *)(v3 + 35);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  v6 = (ModelPart *)ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  *((_DWORD *)v3 + 7) = v3 + 6;
  v7 = (ModelPart *)(v3 + 90);
  sub_21E94B4((void **)&v34, "head");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v34, 0);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v34 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v5 = (ModelPart *)(v3 + 35);
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v33, "nose");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v33, 0);
  v9 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v33 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v32, "body");
  ModelPart::load((int)v5, v2, (const void **)&v32, 0);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v32 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v31, "arms");
  ModelPart::load((int)v6, v2, (const void **)&v31, 0);
  v11 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v30, "leg0");
  ModelPart::load((int)v7, v2, (const void **)&v30, 0);
  v12 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v30 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v29, "leg1");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v29, 0);
  v13 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v29 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  ModelPart::addChild((ModelPart *)((char *)v3 + 60), (ModelPart *)(v3 + 145));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 145));
  Model::registerParts((Model *)v3, v5);
  Model::registerParts((Model *)v3, v6);
  Model::registerParts((Model *)v3, v7);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 940));
  return v3;
}


void __fastcall VillagerModel::~VillagerModel(VillagerModel *this)
{
  VillagerModel::~VillagerModel(this);
}
