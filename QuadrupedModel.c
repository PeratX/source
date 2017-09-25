

void __fastcall QuadrupedModel::~QuadrupedModel(QuadrupedModel *this)
{
  QuadrupedModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5B98;
  v2 = (QuadrupedModel *)((char *)this + 48);
  ModelPart::~ModelPart((QuadrupedModel *)((char *)this + 1368));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 1148));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 928));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 708));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 488));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 268));
  ModelPart::~ModelPart(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


QuadrupedModel *__fastcall QuadrupedModel::setupAnim(QuadrupedModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  QuadrupedModel *v11; // r4@1
  QuadrupedModel *result; // r0@1

  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.6662
  }
  v11 = this;
    VMUL.F32        S0, S2, S0
    VLDR            S4, [SP,#0x10+arg_0]
    VLDR            S6, =90.0
  _R5 = a3;
  _R1 = &mce::Math::DEGRAD;
    VLDR            S2, [R1]
    VMOV            R0, S0
    VLDR            S0, [SP,#0x10+arg_4]
    VMUL.F32        S4, S2, S4
    VMUL.F32        S2, S2, S6
    VSTR            S2, [R4,#0x20C]
    VSTR            S0, [R4,#0x54]
    VSTR            S4, [R4,#0x58]
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::DEGRAD));
    VLDR            S0, =1.4
    VMOV            S2, R5
    VMOV            S2, R0
    VMUL.F32        S4, S0, S2
    VNMUL.F32       S0, S0, S2
    VSTR            S4, [R4,#0x2E8]
    VSTR            S0, [R4,#0x3C4]
    VSTR            S0, [R0]
  result = (QuadrupedModel *)((char *)v11 + 1404);
  __asm { VSTR            S4, [R0] }
  return result;
}


void __fastcall QuadrupedModel::~QuadrupedModel(QuadrupedModel *this)
{
  QuadrupedModel::~QuadrupedModel(this);
}


AppPlatformListener *__fastcall QuadrupedModel::~QuadrupedModel(QuadrupedModel *this)
{
  QuadrupedModel *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5B98;
  v2 = (QuadrupedModel *)((char *)this + 48);
  ModelPart::~ModelPart((QuadrupedModel *)((char *)this + 1368));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 1148));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 928));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 708));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 488));
  ModelPart::~ModelPart((QuadrupedModel *)((char *)v1 + 268));
  ModelPart::~ModelPart(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


signed __int64 __fastcall QuadrupedModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  __int64 v21; // r0@2
  __int64 v22; // r0@2
  __int64 v25; // r0@4
  __int64 v26; // r0@4
  __int64 v27; // r0@4
  __int64 v28; // r0@4
  char v30; // [sp+10h] [bp-28h]@2

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
    MatrixStack::push((MatrixStack *)&v30, *(_DWORD *)(v14 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v30);
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
    _R1 = v9 + 1588;
      VLDR            S4, [R0,#0x14]
      VLDR            S6, [R0,#0x18]
      VMOV            R3, S16
      VLDR            S0, [R1]
    _R1 = v9 + 1592;
      VLDR            S8, [R0,#0x1C]
      VLDR            S2, [R1]
      VMUL.F32        S0, S0, S16
      VLDR            S3, [R0,#0x10]
      VMUL.F32        S2, S2, S16
      VLDR            S10, [R0,#0x20]
      VLDR            S12, [R0,#0x24]
      VLDR            S14, [R0,#0x28]
      VLDR            S1, [R0,#0x2C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S3, S3, S0
      VMUL.F32        S12, S12, S2
      VMUL.F32        S6, S6, S0
      VMUL.F32        S14, S14, S2
      VMUL.F32        S10, S10, S2
      VMUL.F32        S0, S8, S0
      VMUL.F32        S2, S1, S2
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VADD.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S8, S10, S3
      VLDR            S10, [R0,#0x34]
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0,#0x30]
      VADD.F32        S4, S4, S10
      VADD.F32        S6, S6, S12
      VADD.F32        S2, S8, S2
      VADD.F32        S0, S0, S14
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    HIDWORD(v21) = v14;
    LODWORD(v21) = v9 + 48;
    ModelPart::render(v21, v9, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v30);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v15) = v9 + 48;
    v22 = __PAIR__(v14, ModelPart::render(v15, v9, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v22) = v9 + 488;
  v25 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 708;
  v26 = __PAIR__(v14, ModelPart::render(v25, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 928;
  v27 = __PAIR__(v14, ModelPart::render(v26, v9, _R6, 0, 0));
  LODWORD(v27) = v9 + 1148;
  v28 = __PAIR__(v14, ModelPart::render(v27, v9, _R6, 0, 0));
  LODWORD(v28) = v9 + 1368;
  return __PAIR__(v14, ModelPart::render(v28, v9, _R6, 0, 0));
}


_QWORD *__fastcall QuadrupedModel::QuadrupedModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // [sp+14h] [bp-54h]@6
  int v24; // [sp+1Ch] [bp-4Ch]@5
  int v25; // [sp+24h] [bp-44h]@4
  int v26; // [sp+2Ch] [bp-3Ch]@3
  int v27; // [sp+34h] [bp-34h]@2
  int v28; // [sp+3Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5B98;
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 6), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 268)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 61), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 708)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 116), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1148)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 171), 0, 0, 64, 32);
  *((_DWORD *)v3 + 397) = -1065353216;
  *((_DWORD *)v3 + 398) = 1082130432;
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 6));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 61));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 708));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 116));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1148));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 171));
  sub_21E94B4((void **)&v28, "head");
  ModelPart::load((int)(v3 + 6), v2, (const void **)&v28, 0);
  v4 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v27, "body");
  ModelPart::load((int)(v3 + 61), v2, (const void **)&v27, 0);
  v5 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v27 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v26, "leg0");
  ModelPart::load((int)v3 + 708, v2, (const void **)&v26, 0);
  v6 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v25, "leg1");
  ModelPart::load((int)(v3 + 116), v2, (const void **)&v25, 0);
  v7 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v24, "leg2");
  ModelPart::load((int)v3 + 1148, v2, (const void **)&v24, 0);
  v8 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v23, "leg3");
  ModelPart::load((int)(v3 + 171), v2, (const void **)&v23, 0);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v3;
}
