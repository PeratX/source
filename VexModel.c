

unsigned __int64 __fastcall VexModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v13; // r6@1
  int v14; // r4@1
  float v15; // r7@1
  float v17; // r8@1
  __int64 v18; // r0@1
  __int64 v20; // r0@1
  float v22; // [sp+0h] [bp-58h]@0
  int v23; // [sp+4h] [bp-54h]@0
  int v24; // [sp+8h] [bp-50h]@0
  int v25; // [sp+Ch] [bp-4Ch]@0
  int v26; // [sp+10h] [bp-48h]@0

  __asm { VLDR            S16, [SP,#0x58+arg_0] }
  v13 = a4;
  v14 = LODWORD(a1);
  v15 = a3;
  __asm
  {
    VMOV            R3, S16
    VLDR            S18, [SP,#0x58+arg_C]
  }
  v17 = a2;
    VLDR            S20, [SP,#0x58+arg_8]
    VLDR            S22, [SP,#0x58+arg_4]
    VLDR            S24, [SP,#0x58+arg_10]
    VSTR            S22, [SP,#0x58+var_58]
    VSTR            S20, [SP,#0x58+var_54]
    VSTR            S18, [SP,#0x58+var_50]
    VSTR            S24, [SP,#0x58+var_4C]
  (*(void (**)(void))(*(_DWORD *)LODWORD(a1) + 80))();
    VSTR            S16, [SP,#0x58+var_58]
    VSTR            S22, [SP,#0x58+var_54]
    VSTR            S20, [SP,#0x58+var_50]
    VSTR            S18, [SP,#0x58+var_4C]
    VSTR            S24, [SP,#0x58+var_48]
  v18 = HumanoidModel::render(*(float *)&v14, v17, v15, v13, v22, v23, v24, v25, v26);
  __asm { VMOV            R6, S24 }
  LODWORD(v18) = v14 + 4540;
  v20 = __PAIR__(LODWORD(v17), ModelPart::render(v18, v14, _R6, 0, 0));
  LODWORD(v20) = v14 + 4320;
  return __PAIR__(LODWORD(v17), ModelPart::render(v20, v14, _R6, 0, 0));
}


AppPlatformListener *__fastcall VexModel::~VexModel(VexModel *this)
{
  VexModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5F08;
  ModelPart::~ModelPart((VexModel *)((char *)this + 4540));
  ModelPart::~ModelPart((VexModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((VexModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}


VexModel *__fastcall VexModel::setupAnim(VexModel *this, Entity *a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  Entity *v12; // r6@1
  VexModel *v14; // r4@1
  VexModel *result; // r0@3
  float v20; // [sp+0h] [bp-30h]@0
  float v21; // [sp+4h] [bp-2Ch]@0
  float v22; // [sp+8h] [bp-28h]@0

  __asm { VLDR            S18, [SP,#0x30+arg_0] }
  v12 = a2;
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_4]
    VMOV            R5, S18
    VLDR            S2, [SP,#0x30+arg_8]
    VLDR            S4, [SP,#0x30+arg_C]
    VSTR            S0, [SP,#0x30+var_30]
  }
  v14 = this;
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S4, [SP,#0x30+var_28]
  HumanoidModel::setupAnim(this, a3, a4, _R5, v20, v21, v22);
  Entity::getStatusFlag((int)v12, 41);
  __asm { VLDR            S2, =0.2 }
  _R1 = &mce::Math::PI;
  __asm { VLDR            S16, [R1] }
  _R1 = (int)v14 + 1232;
  __asm { VMUL.F32        S2, S16, S2 }
  if ( _ZF )
    __asm
    {
      VLDREQ          S0, =1.2
      VMULEQ.F32      S0, S16, S0
      VSTREQ          S0, [R4,#0x318]
    }
    VLDR            S0, =0.8
    VLDR            S4, [R1]
    VMUL.F32        S0, S18, S0
    VMOV            R0, S0
    VADD.F32        S0, S4, S2
    VSTR            S0, [R1]
  *((_DWORD *)v14 + 1137) = 0x40000000;
  *((_DWORD *)v14 + 1082) = 0x40000000;
  *((_DWORD *)v14 + 1136) = 1065353216;
  *((_DWORD *)v14 + 1081) = 1065353216;
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(4324));
    VMOV            S2, R0
    VLDR            S0, =0.05
    VLDR            S6, =-0.15
    VMUL.F32        S0, S2, S0
    VLDR            S2, =0.15
    VMUL.F32        S6, S16, S6
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S16, S2
    VMUL.F32        S4, S0, S16
    VNMUL.F32       S0, S0, S16
    VSTR            S4, [R0]
    VSTR            S0, [R0]
    VSTR            S6, [R0]
    VSTR            S2, [R0]
  result = (VexModel *)((char *)v14 + 4584);
  __asm { VSTR            S2, [R0] }
  return result;
}


void __fastcall VexModel::~VexModel(VexModel *this)
{
  VexModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5F08;
  ModelPart::~ModelPart((VexModel *)((char *)this + 4540));
  ModelPart::~ModelPart((VexModel *)((char *)v1 + 4320));
  mce::MaterialPtr::~MaterialPtr((VexModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall VexModel::~VexModel(VexModel *this)
{
  VexModel::~VexModel(this);
}


_QWORD *__fastcall VexModel::VexModel(_QWORD *a1, int a2)
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
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  unsigned int *v27; // r2@38
  signed int v28; // r1@40
  int v29; // [sp+Ch] [bp-5Ch]@8
  int v30; // [sp+14h] [bp-54h]@7
  int v31; // [sp+1Ch] [bp-4Ch]@6
  int v32; // [sp+24h] [bp-44h]@5
  int v33; // [sp+2Ch] [bp-3Ch]@4
  int v34; // [sp+34h] [bp-34h]@3
  int v35; // [sp+3Ch] [bp-2Ch]@2
  int v36; // [sp+44h] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  HumanoidModel::HumanoidModel(a1, a2);
  *(_DWORD *)v3 = &off_26E5F08;
  sub_21E94B4((void **)&v36, "vex");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 4308),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v36);
  v4 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 540), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4540)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 4540));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 540));
  *((_DWORD *)v3 + 7) = (char *)v3 + 4308;
  *((_BYTE *)v3 + 1469) = 0;
  sub_21E94B4((void **)&v35, "head");
  ModelPart::load((int)(v3 + 12), v2, (const void **)&v35, 0);
  v5 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v35 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v34, "body");
  ModelPart::load((int)(v3 + 67), v2, (const void **)&v34, 0);
  v6 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v34 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v33, "rightarm");
  ModelPart::load((int)v3 + 756, v2, (const void **)&v33, 0);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v33 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v32, "leftarm");
  ModelPart::load((int)(v3 + 122), v2, (const void **)&v32, 0);
  v8 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v32 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v31, "leg0");
  ModelPart::load((int)v3 + 1196, v2, (const void **)&v31, 0);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v30, "leftwing");
  ModelPart::load((int)(v3 + 540), v2, (const void **)&v30, 0);
  v10 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v30 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v29, "rightwing");
  ModelPart::load((int)v3 + 4540, v2, (const void **)&v29, 0);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v29 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v3;
}
