

AppPlatformListener *__fastcall VindicationIllagerModel::~VindicationIllagerModel(VindicationIllagerModel *this)
{
  VindicationIllagerModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6014;
  ModelPart::~ModelPart((VindicationIllagerModel *)((char *)this + 4540));
  ModelPart::~ModelPart((VindicationIllagerModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((VindicationIllagerModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}


void __fastcall VindicationIllagerModel::~VindicationIllagerModel(VindicationIllagerModel *this)
{
  VindicationIllagerModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6014;
  ModelPart::~ModelPart((VindicationIllagerModel *)((char *)this + 4540));
  ModelPart::~ModelPart((VindicationIllagerModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((VindicationIllagerModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall VindicationIllagerModel::setupAnim(VindicationIllagerModel *this, float _R1, float a3, float a4, float a5, float a6, float a7)
{
  float v21; // r1@1
  int v22; // r0@1
  float v25; // r1@1
  int v26; // r0@1
  float v29; // r1@1
  float v33; // r1@1
  float v35; // r1@1
  float v38; // r1@1
  float v40; // r1@1
  int result; // r0@1

  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.6662
  }
  _R4 = this;
    VMUL.F32        S16, S2, S0
    VLDR            S0, [SP,#0x38+arg_0]
    VLDR            S4, [SP,#0x38+arg_4]
  _R6 = a3;
  _R0 = &mce::Math::DEGRAD;
  _R5 = a4;
    VLDR            S2, [R0]
    VMOV            R0, S16
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R4,#0x84]
    VSTR            S0, [R4,#0x88]
  *((_DWORD *)_R4 + 1081) = 1077936128;
  *((_DWORD *)_R4 + 1082) = -1082130432;
  *((_DWORD *)_R4 + 1089) = -1086324736;
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(4356));
    VMOV            S2, R6
    VLDR            S4, =0.7
  _R1 = &mce::Math::PI;
    VLDR            S22, [R1]
    VADD.F32        S0, S22, S16
    VMUL.F32        S16, S2, S4
    VMOV            R1, S0
    VMOV            S0, R0
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R0]
  _R0 = mce::Math::cos(_R1, *(float *)&_R1);
  *((_DWORD *)_R4 + 309) = 0;
  *((_DWORD *)_R4 + 364) = 0;
    VLDR            S0, [R4,#0x14]
    VMUL.F32        S0, S22, S0
    VMOV            R0, S0
  v22 = mce::Math::sin(_R0, v21);
    VMOV.F32        S0, #1.0
    VLDR            S2, [R4,#0x14]
  _R8 = v22;
    VSUB.F32        S2, S0, S2
    VMUL.F32        S2, S2, S2
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S22
  v26 = mce::Math::sin(_R0, v25);
    VLDR            S0, =0.09
    VMOV            S18, R5
    VLDR            S20, =-0.05
  _R7 = v26;
    VMUL.F32        S0, S18, S0
    VLDR            S16, =0.05
    VMUL.F32        S2, S22, S20
  *((_DWORD *)_R4 + 200) = 0;
  *((_DWORD *)_R4 + 255) = 0;
    VMOV            R5, S0
    VMUL.F32        S0, S22, S16
    VSTR            S0, [R4,#0x31C]
    VSTR            S2, [R4,#0x3F8]
  _R0 = mce::Math::cos(_R5, v29);
    VLDR            S0, =0.19
    VMOV            S4, R0
    VLDR            S2, =-0.6
    VMUL.F32        S2, S22, S2
    VLDR            S0, =0.15
    VMUL.F32        S0, S4, S0
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x318]
    VLDR            S0, =2.2
    VMOV            S2, R8
    VLDR            S4, =-0.4
    VMOV            S6, R7
    VLDR            S8, =1.2
    VMUL.F32        S4, S6, S4
    VMUL.F32        S2, S2, S8
    VMOV.F32        S6, #0.5
    VMOV            S8, R0
    VADD.F32        S0, S4, S0
    VADD.F32        S2, S4, S2
    VMUL.F32        S4, S8, S6
    VLDR            S6, [R4,#0x318]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S4
    VSTR            S2, [R4,#0x3F4]
  _R0 = mce::Math::cos(_R5, v33);
    VLDR            S2, [R4,#0x320]
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S16
    VSTR            S0, [R4,#0x320]
  _R0 = mce::Math::cos(_R5, v35);
    VLDR            S0, =0.067
    VMOV            S2, R0
    VMUL.F32        S2, S2, S20
    VADD.F32        S0, S2, S20
    VLDR            S2, [R4,#0x3FC]
    VSTR            S0, [R4,#0x3FC]
  _R0 = mce::Math::sin(_R5, v38);
    VLDR            S2, [R4,#0x318]
    VADD.F32        S0, S2, S0
  result = mce::Math::sin(_R5, v40);
    VLDR            S2, [R4,#0x3F4]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [R4,#0x3F4]
  return result;
}


_QWORD *__fastcall VindicationIllagerModel::VindicationIllagerModel(_QWORD *a1, int a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  int v32; // [sp+8h] [bp-68h]@9
  int v33; // [sp+10h] [bp-60h]@8
  int v34; // [sp+18h] [bp-58h]@7
  int v35; // [sp+20h] [bp-50h]@6
  int v36; // [sp+28h] [bp-48h]@5
  int v37; // [sp+30h] [bp-40h]@4
  int v38; // [sp+38h] [bp-38h]@3
  int v39; // [sp+40h] [bp-30h]@2
  int v40; // [sp+48h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  HumanoidModel::HumanoidModel(a1, a2);
  *(_DWORD *)v3 = &off_26E6014;
  sub_21E94B4((void **)&v40, "vindicator");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 4308),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v40);
  v4 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 540), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4540)), 0, 0, 64, 32);
  *((_DWORD *)v3 + 7) = (char *)v3 + 4308;
  sub_21E94B4((void **)&v39, "head");
  ModelPart::load((int)(v3 + 12), v2, (const void **)&v39, 0);
  v5 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v39 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v38, "nose");
  ModelPart::load((int)v3 + 4540, v2, (const void **)&v38, 0);
  v6 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v38 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v37, "body");
  ModelPart::load((int)(v3 + 67), v2, (const void **)&v37, 0);
  v7 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v37 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v36, "arms");
  ModelPart::load((int)(v3 + 540), v2, (const void **)&v36, 0);
  v8 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v36 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v35, "leg0");
  ModelPart::load((int)v3 + 1196, v2, (const void **)&v35, 0);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v34, "leg1");
  ModelPart::load((int)(v3 + 177), v2, (const void **)&v34, 0);
  v10 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v34 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v33, "rightarm");
  ModelPart::load((int)v3 + 756, v2, (const void **)&v33, 0);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v33 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v32, "leftarm");
  ModelPart::load((int)(v3 + 122), v2, (const void **)&v32, 0);
  v12 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v32 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  ModelPart::addChild((ModelPart *)(v3 + 12), (ModelPart *)((char *)v3 + 4540));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 4540));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 540));
  return v3;
}


void __fastcall VindicationIllagerModel::~VindicationIllagerModel(VindicationIllagerModel *this)
{
  VindicationIllagerModel::~VindicationIllagerModel(this);
}


signed __int64 __fastcall VindicationIllagerModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  Entity *v10; // r8@1
  int v15; // r7@1
  int v16; // r9@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  unsigned __int64 v21; // r0@1
  __int64 v22; // r0@1

  v9 = a1;
  v10 = (Entity *)LODWORD(a3);
  __asm { VLDR            S0, [SP,#0x38+arg_C] }
  v15 = a1 + 96;
  v16 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x38+arg_8]
    VLDR            S16, [SP,#0x38+arg_10]
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S16, [SP,#0x38+var_30]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  __asm { VMOV            R6, S16 }
  ModelPart::render(__PAIR__(v16, v15), v9, _R6, 0, 0);
  LODWORD(v18) = v9 + 536;
  v19 = __PAIR__(v16, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 1196;
  v20 = __PAIR__(v16, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 1416;
  v21 = __PAIR__(v16, ModelPart::render(v20, v9, _R6, 0, 0));
  if ( Entity::isAngry(v10) == 1 )
    LODWORD(v22) = v9 + 756;
    v22 = __PAIR__(v16, ModelPart::render(v22, v9, _R6, 0, 0));
    LODWORD(v22) = v9 + 976;
  else
    LODWORD(v22) = v9 + 4320;
  return __PAIR__(v16, ModelPart::render(v22, v9, _R6, 0, 0));
}
