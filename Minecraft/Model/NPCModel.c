

_QWORD *__fastcall NPCModel::NPCModel(_QWORD *a1, int a2)
{
  int v2; // r7@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  int v20; // [sp+Ch] [bp-4Ch]@5
  int v21; // [sp+14h] [bp-44h]@4
  int v22; // [sp+1Ch] [bp-3Ch]@3
  int v23; // [sp+24h] [bp-34h]@2
  int v24; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  HumanoidModel::HumanoidModel(a1, a2);
  *(_DWORD *)v3 = &off_26E5984;
  sub_21E94B4((void **)&v24, "npc");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 4308),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v24);
  v4 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 540), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4540)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 595), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4980)), 0, 0, 64, 32);
  *((_DWORD *)v3 + 7) = (char *)v3 + 4308;
  sub_21E94B4((void **)&v23, "nose");
  ModelPart::load((int)v3 + 4980, v2, (const void **)&v23, 0);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v23 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v22, "arms");
  ModelPart::load((int)(v3 + 540), v2, (const void **)&v22, 0);
  v6 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v21, "leg0");
  ModelPart::load((int)v3 + 4540, v2, (const void **)&v21, 0);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v20, "leg1");
  ModelPart::load((int)(v3 + 595), v2, (const void **)&v20, 0);
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  ModelPart::addChild((ModelPart *)(v3 + 12), (ModelPart *)((char *)v3 + 4980));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 540));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 4540));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 595));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 4980));
  return v3;
}


void __fastcall NPCModel::~NPCModel(NPCModel *this)
{
  NPCModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5984;
  ModelPart::~ModelPart((NPCModel *)((char *)this + 4980));
  ModelPart::~ModelPart((NPCModel *)((char *)v1 + 4760));
  ModelPart::~ModelPart((NPCModel *)((char *)v1 + 4540));
  ModelPart::~ModelPart((NPCModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((NPCModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned __int64 __fastcall NPCModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v13; // r5@1
  int v14; // r4@1
  __int64 v15; // r0@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  float v20; // [sp+0h] [bp-38h]@0
  int v21; // [sp+4h] [bp-34h]@0
  int v22; // [sp+8h] [bp-30h]@0
  int v23; // [sp+Ch] [bp-2Ch]@0
  int v24; // [sp+10h] [bp-28h]@0

  __asm { VLDR            S4, [SP,#0x38+arg_0] }
  v13 = a2;
  __asm { VLDR            S0, [SP,#0x38+arg_8] }
  v14 = LODWORD(a1);
  __asm
  {
    VLDR            S2, [SP,#0x38+arg_4]
    VLDR            S6, [SP,#0x38+arg_C]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S4, [SP,#0x38+var_38]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S0, [SP,#0x38+var_30]
    VSTR            S6, [SP,#0x38+var_2C]
    VSTR            S16, [SP,#0x38+var_28]
  }
  v15 = HumanoidModel::render(a1, a2, a3, a4, v20, v21, v22, v23, v24);
  __asm { VMOV            R6, S16 }
  LODWORD(v15) = v14 + 4540;
  v17 = __PAIR__(LODWORD(v13), ModelPart::render(v15, v14, _R6, 0, 0));
  *((float *)&v17 + 1) = v13;
  LODWORD(v17) = v14 + 4760;
  ModelPart::render(v17, v14, _R6, 0, 0);
  LODWORD(v18) = v14 + 4320;
  return __PAIR__(LODWORD(v13), ModelPart::render(v18, v14, _R6, 0, 0));
}


signed int __fastcall NPCModel::setupAnim(NPCModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  NPCModel *v13; // r4@1
  signed int result; // r0@1
  float v20; // [sp+0h] [bp-28h]@0
  float v21; // [sp+4h] [bp-24h]@0
  float v22; // [sp+8h] [bp-20h]@0

  __asm { VLDR            S0, [SP,#0x28+arg_0] }
  _R5 = a3;
  __asm { VLDR            S2, [SP,#0x28+arg_4] }
  _R6 = a2;
  __asm { VLDR            S4, [SP,#0x28+arg_8] }
  v13 = this;
  __asm
  {
    VSTR            S0, [SP,#0x28+var_28]
    VSTR            S2, [SP,#0x28+var_24]
    VSTR            S4, [SP,#0x28+var_20]
  }
  HumanoidModel::setupAnim(this, a2, a3, a4, v20, v21, v22);
    VLDR            S0, =0.6662
    VMOV            S2, R6
    VMUL.F32        S16, S2, S0
  *((_DWORD *)v13 + 1081) = 1077936128;
  *((_DWORD *)v13 + 1082) = -1082130432;
  __asm { VMOV            R0, S16 }
  *((_DWORD *)v13 + 1089) = -1086324736;
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(4356));
    VMOV            S2, R5
    VLDR            S4, =0.7
  _R1 = &mce::Math::PI;
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S16
    VMUL.F32        S16, S2, S4
    VMOV            R1, S0
    VMOV            S0, R0
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R0]
  _R0 = mce::Math::cos(_R1, *(float *)&_R1);
  *((_DWORD *)v13 + 1145) = 0;
  result = 4800;
  *((_DWORD *)v13 + 1200) = 0;
  return result;
}


unsigned __int64 __fastcall NPCModel::renderGui(int a1, int a2, int a3)
{
  int v3; // r4@1
  __int64 v4; // r8@1
  int v5; // r6@1
  int v6; // r1@1
  int v7; // r0@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r1@1
  int v13; // r2@1
  int v14; // r0@1
  int v15; // r0@1
  int v16; // r0@1
  int v17; // r1@1
  int v18; // r0@1
  int v19; // r0@1
  int v20; // r1@1
  int v21; // r0@1
  int v22; // r1@1
  __int64 v23; // r0@1
  __int64 v24; // r0@1
  __int64 v25; // r0@1
  __int64 v26; // r0@1
  __int64 v27; // r0@1
  __int64 v28; // r0@1
  __int64 v29; // r0@1
  __int64 v30; // r0@1
  __int64 v31; // r0@1
  __int64 v32; // r0@1

  v3 = a1;
  LODWORD(v4) = a1 + 96;
  HIDWORD(v4) = a2;
  (*(void (__cdecl **)(int, int, signed int))(*(_DWORD *)a1 + 64))(a1, a3, 1008981770);
  v5 = *(_DWORD *)(HIDWORD(v4) + 32);
  v6 = *(_DWORD *)(v5 + 560);
  v7 = *(_DWORD *)(v6 + 20);
  *(_DWORD *)v7 = Color::WHITE;
  *(float *)(v7 + 4) = unk_283E614;
  *(_QWORD *)(v7 + 8) = qword_283E618;
  *(_BYTE *)(v6 + 17) = 1;
  v8 = *(_DWORD *)(v5 + 556);
  v9 = *(_DWORD *)(v8 + 20);
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = 0;
  *(_BYTE *)(v8 + 17) = 1;
  v10 = *(_DWORD *)(v5 + 564);
  v11 = *(_DWORD *)(v10 + 20);
  *(_DWORD *)v11 = Color::WHITE;
  *(float *)(v11 + 4) = unk_283E614;
  *(_QWORD *)(v11 + 8) = qword_283E618;
  *(_BYTE *)(v10 + 17) = 1;
  v12 = *(_DWORD *)(v5 + 568);
  v13 = *(_DWORD *)(v12 + 20);
  *(float *)v13 = Color::BLACK;
  *(_DWORD *)(v13 + 4) = unk_283E634;
  *(_DWORD *)(v13 + 8) = unk_283E638;
  *(_DWORD *)(v13 + 12) = unk_283E63C;
  *(_BYTE *)(v12 + 17) = 1;
  mce::ConstantBufferConstantsBase::sync(
    (mce::ConstantBufferConstantsBase *)(v5 + 548),
    *(mce::RenderContext **)(HIDWORD(v4) + 12));
  v14 = *(_DWORD *)(v5 + 544);
  **(_DWORD **)(v14 + 20) = 1148846080;
  *(_BYTE *)(v14 + 17) = 1;
  v15 = *(_DWORD *)(v5 + 524);
  **(_DWORD **)(v15 + 20) = 0;
  *(_BYTE *)(v15 + 17) = 1;
  v16 = *(_DWORD *)(v5 + 528);
  v17 = *(_DWORD *)(v16 + 20);
  *(_DWORD *)v17 = 0;
  *(_DWORD *)(v17 + 4) = 0;
  *(_DWORD *)(v17 + 8) = 0;
  *(_BYTE *)(v16 + 17) = 1;
  v18 = *(_DWORD *)(v5 + 540);
  **(_DWORD **)(v18 + 20) = 1120403456;
  *(_BYTE *)(v18 + 17) = 1;
  v19 = *(_DWORD *)(v5 + 532);
  v20 = *(_DWORD *)(v19 + 20);
  *(_DWORD *)v20 = Color::WHITE;
  *(float *)(v20 + 4) = unk_283E614;
  *(_QWORD *)(v20 + 8) = qword_283E618;
  *(_BYTE *)(v19 + 17) = 1;
  v21 = *(_DWORD *)(v5 + 536);
  v22 = *(_DWORD *)(v21 + 20);
  *(_DWORD *)v22 = 0;
  *(_DWORD *)(v22 + 4) = 1148829696;
  *(_BYTE *)(v21 + 17) = 1;
    (mce::ConstantBufferConstantsBase *)(v5 + 516),
  ModelPart::render(v4, v3, 1065353216, 0, 0);
  LODWORD(v23) = v3 + 536;
  v24 = __PAIR__(HIDWORD(v4), ModelPart::render(v23, v3, 1065353216, 0, 0));
  LODWORD(v24) = v3 + 756;
  v25 = __PAIR__(HIDWORD(v4), ModelPart::render(v24, v3, 1065353216, 0, 0));
  LODWORD(v25) = v3 + 976;
  v26 = __PAIR__(HIDWORD(v4), ModelPart::render(v25, v3, 1065353216, 0, 0));
  LODWORD(v26) = v3 + 1196;
  v27 = __PAIR__(HIDWORD(v4), ModelPart::render(v26, v3, 1065353216, 0, 0));
  LODWORD(v27) = v3 + 1416;
  v28 = __PAIR__(HIDWORD(v4), ModelPart::render(v27, v3, 1065353216, 0, 0));
  LODWORD(v28) = v3 + 316;
  v29 = __PAIR__(HIDWORD(v4), ModelPart::render(v28, v3, 1065353216, 0, 0));
  HIDWORD(v29) = HIDWORD(v4);
  LODWORD(v29) = v3 + 4540;
  ModelPart::render(v29, v3, 1065353216, 0, 0);
  HIDWORD(v30) = HIDWORD(v4);
  LODWORD(v30) = v3 + 4760;
  ModelPart::render(v30, v3, 1065353216, 0, 0);
  HIDWORD(v31) = HIDWORD(v4);
  LODWORD(v31) = v3 + 4980;
  ModelPart::render(v31, v3, 1065353216, 0, 0);
  LODWORD(v32) = v3 + 4320;
  return __PAIR__(HIDWORD(v4), ModelPart::render(v32, v3, 1065353216, 0, 0));
}


AppPlatformListener *__fastcall NPCModel::~NPCModel(NPCModel *this)
{
  NPCModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5984;
  ModelPart::~ModelPart((NPCModel *)((char *)this + 4980));
  ModelPart::~ModelPart((NPCModel *)((char *)v1 + 4760));
  ModelPart::~ModelPart((NPCModel *)((char *)v1 + 4540));
  ModelPart::~ModelPart((NPCModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((NPCModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}


void __fastcall NPCModel::~NPCModel(NPCModel *this)
{
  NPCModel::~NPCModel(this);
}
