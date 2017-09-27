

AppPlatformListener *__fastcall OcelotModel::~OcelotModel(OcelotModel *this)
{
  OcelotModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E59DC;
  v2 = (OcelotModel *)((char *)this + 52);
  ModelPart::~ModelPart((OcelotModel *)((char *)this + 1604));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 1384));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 1164));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 944));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 724));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 504));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 284));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 64));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


signed int __fastcall OcelotModel::prepareMobModel(OcelotModel *this, Mob *a2, float a3, float a4, float a5)
{
  Entity *v6; // r5@1
  signed int result; // r0@2

  _R4 = this;
  v6 = a2;
  *((_DWORD *)this + 72) = 1094713344;
  *((_DWORD *)this + 73) = -1054867456;
  *((_DWORD *)this + 17) = 1097859072;
  *((_DWORD *)this + 18) = -1055916032;
  *((_DWORD *)this + 127) = 1097859072;
  *((_DWORD *)this + 128) = 1090519040;
  *((_DWORD *)this + 182) = 1101004800;
  *((_DWORD *)this + 183) = 1096810496;
  *((_DWORD *)this + 402) = 1096600781;
  *((_DWORD *)this + 347) = 1096600781;
  *((_DWORD *)this + 403) = -1063256064;
  *((_DWORD *)this + 348) = -1063256064;
  *((_DWORD *)this + 292) = 1099956224;
  *((_DWORD *)this + 237) = 1099956224;
  *((_DWORD *)this + 293) = 1084227584;
  *((_DWORD *)this + 238) = 1084227584;
  *((_DWORD *)this + 135) = 1063675494;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 312))(v6) == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [R4,#0x120]
      VMOV.F32        S4, #2.0
    }
    _R0 = &mce::Math::PI;
      VADD.F32        S2, S2, S0
      VLDR            S6, [R0]
    result = 0;
      VSTR            S2, [R4,#0x120]
      VLDR            S2, [R4,#0x44]
      VADD.F32        S2, S2, S4
      VSTR            S2, [R4,#0x44]
      VLDR            S2, [R4,#0x1FC]
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #-4.0
      VSTR            S0, [R4,#0x1FC]
      VLDR            S0, [R4,#0x2D8]
      VADD.F32        S0, S0, S2
      VMOV.F32        S2, #0.5
      VSTR            S0, [R4,#0x2D8]
      VLDR            S0, [R4,#0x2DC]
      VMUL.F32        S2, S6, S2
      VADD.F32        S0, S0, S4
      VSTR            S0, [R4,#0x2DC]
      VSTR            S2, [R4,#0x21C]
      VSTR            S2, [R4,#0x2F8]
    *((_DWORD *)_R4 + 12) = 0;
  }
  else if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 792))(v6) == 1 )
      VMOV.F32        S0, #2.0
    *((_DWORD *)_R4 + 182) = *((_DWORD *)_R4 + 127);
    __asm { VLDR            S4, [R4,#0x2DC] }
      VADD.F32        S0, S4, S0
    result = 2;
    *((_DWORD *)_R4 + 12) = 2;
  else if ( Entity::isSitting(v6) == 1 )
      VMOV.F32        S6, #-0.5
      VLDR            S0, =45.0
      VLDR            S4, =0.55
      VLDR            S10, =0.85
    _R1 = &mce::Math::DEGRAD;
      VLDR            S2, [R1]
      VMUL.F32        S0, S2, S0
    _R1 = &mce::Math::PI;
      VLDR            S8, [R1]
      VSTR            S0, [R4,#0x140]
      VLDR            S0, [R4,#0x120]
      VMUL.F32        S4, S8, S4
      VMUL.F32        S10, S8, S10
      VMOV.F32        S2, #5.0
      VMUL.F32        S6, S8, S6
      VSTR            S0, [R4,#0x120]
      VLDR            S0, [R4,#0x124]
      VLDR            S2, =-3.3
      VSTR            S0, [R4,#0x124]
      VLDR            S0, [R4,#0x44]
      VMOV.F32        S2, #1.0
      VSTR            S0, [R4,#0x44]
      VLDR            S0, [R4,#0x48]
      VMOV.F32        S2, #8.0
      VSTR            S0, [R4,#0x48]
      VLDR            S0, [R4,#0x1FC]
      VMOV.F32        S2, #-2.0
      VLDR            S0, [R4,#0x200]
      VMOV.F32        S2, #2.0
      VSTR            S0, [R4,#0x200]
      VLDR            S2, =-0.8
      VLDR            S2, =-0.05
      VMUL.F32        S2, S8, S2
      VSTR            S4, [R4,#0x21C]
      VSTR            S10, [R4,#0x2F8]
      VSTR            S2, [R6]
      VSTR            S2, [R1]
    *((_DWORD *)_R4 + 402) = 1098697933;
    *((_DWORD *)_R4 + 347) = 1098697933;
    *((_DWORD *)_R4 + 403) = -1059061760;
    *((_DWORD *)_R4 + 348) = -1059061760;
      VSTR            S6, [R0]
      VSTR            S6, [R4,#0x3D4]
    *((_DWORD *)_R4 + 292) = 1101529088;
    *((_DWORD *)_R4 + 237) = 1101529088;
    *((_DWORD *)_R4 + 293) = 1065353216;
    *((_DWORD *)_R4 + 238) = 1065353216;
    result = 3;
    *((_DWORD *)_R4 + 12) = 3;
  else
    result = 1;
    *((_DWORD *)_R4 + 12) = 1;
  return result;
}


void __fastcall OcelotModel::~OcelotModel(OcelotModel *this)
{
  OcelotModel::~OcelotModel(this);
}


_QWORD *__fastcall OcelotModel::OcelotModel(_QWORD *a1, int a2)
{
  int v2; // r10@1
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
  int v13; // r3@10
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int v33; // [sp+1Ch] [bp-6Ch]@9
  int v34; // [sp+24h] [bp-64h]@8
  int v35; // [sp+2Ch] [bp-5Ch]@7
  int v36; // [sp+34h] [bp-54h]@6
  int v37; // [sp+3Ch] [bp-4Ch]@5
  int v38; // [sp+44h] [bp-44h]@4
  int v39; // [sp+4Ch] [bp-3Ch]@3
  int v40; // [sp+54h] [bp-34h]@2
  int v41; // [sp+5Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E59DC;
  sub_21E94B4((void **)&v41, "ocelot");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 52),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v41);
  v4 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v41 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 8), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 284)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 63), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 724)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 118), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1164)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 173), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1604)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 8));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 284));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 63));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 724));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 118));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1164));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 173));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1604));
  *((_DWORD *)v3 + 7) = (char *)v3 + 52;
  sub_21E94B4((void **)&v40, "head");
  ModelPart::load((int)(v3 + 8), v2, (const void **)&v40, 0);
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v40 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v39, "body");
  ModelPart::load((int)v3 + 284, v2, (const void **)&v39, 0);
  v6 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v39 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v38, "tail1");
  ModelPart::load((int)(v3 + 63), v2, (const void **)&v38, 0);
  v7 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v38 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v37, "tail2");
  ModelPart::load((int)v3 + 724, v2, (const void **)&v37, 0);
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v36, "backLegL");
  ModelPart::load((int)(v3 + 118), v2, (const void **)&v36, 0);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v36 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v35, "backLegR");
  ModelPart::load((int)v3 + 1164, v2, (const void **)&v35, 0);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v34, "frontLegL");
  ModelPart::load((int)(v3 + 173), v2, (const void **)&v34, 0);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v33, "frontLegR");
  ModelPart::load((int)v3 + 1604, v2, (const void **)&v33, 0);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (int)(v3 + 1);
  *(_DWORD *)v13 = 0;
  *(_DWORD *)(v13 + 4) = -1082130432;
  *(_DWORD *)(v13 + 8) = 1053609165;
  return v3;
}


void *__fastcall OcelotModel::setupAnim(OcelotModel *this, float a2, float _R2, float a4, float a5, float a6, float a7)
{
  OcelotModel *v7; // r4@1
  void *result; // r0@1
  float v16; // r1@2
  float v24; // r1@4
  float v28; // r1@3
  float v30; // r1@3
  int v32; // r6@3
  float v33; // r1@3

  v7 = this;
  __asm { VLDR            S2, [SP,#0x38+arg_4] }
  _R5 = (mce::Math *)LODWORD(a2);
  __asm { VLDR            S4, [SP,#0x38+arg_0] }
  result = &mce::Math::RADDEG;
  __asm
  {
    VLDR            S0, [R0]
    VDIV.F32        S2, S2, S0
    VDIV.F32        S4, S4, S0
    VSTR            S2, [R4,#0x64]
    VSTR            S4, [R4,#0x68]
  }
  if ( *((_DWORD *)v7 + 12) != 3 )
    __asm
    {
      VMOV            S2, R5
      VLDR            S4, =0.6662
      VLDR            S6, =90.0
      VMOV            S16, R2
      VMUL.F32        S20, S2, S4
      VDIV.F32        S0, S6, S0
      VMOV            R6, S20
      VSTR            S0, [R4,#0x140]
    }
    _R0 = mce::Math::cos(_R6, a2);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R4,#0x3D4]
    if ( _ZF )
      __asm
      {
        VLDR            S0, =0.3
        VADD.F32        S18, S20, S0
        VMOV            R0, S18
      }
      _R0 = mce::Math::cos(_R0, v16);
      _R1 = &mce::Math::PI;
        VLDR            S22, [R1]
        VADD.F32        S0, S18, S22
        VMOV            R1, S0
        VMOV            S0, R0
        VMUL.F32        S0, S0, S16
        VSTR            S0, [R0]
      _R0 = mce::Math::cos(_R1, *(float *)&_R1);
        VADD.F32        S0, S22, S20
        VLDR            S2, =0.1
        VMUL.F32        S16, S16, S2
      result = (void *)mce::Math::cos(_R5, v24);
        VLDR            S2, =0.55
        VMUL.F32        S0, S16, S0
        VADD.F32        S0, S0, S2
        VMUL.F32        S0, S0, S22
    else
      _R0 = &mce::Math::PI;
        VLDR            S18, [R0]
        VADD.F32        S0, S18, S20
        VMOV            R7, S0
      _R0 = mce::Math::cos(_R7, v16);
      _R0 = mce::Math::cos(_R7, v28);
      _R0 = mce::Math::cos(_R6, v30);
        VMUL.F32        S20, S18, S2
      v32 = *((_DWORD *)v7 + 12);
      result = (void *)mce::Math::cos(_R5, v33);
      __asm { VMOV            S0, R0 }
      if ( _ZF )
        __asm { VMOVEQ.F32      S2, #0.25 }
      else
        __asm { VLDRNE          S2, =0.15 }
        VMUL.F32        S2, S16, S2
        VMUL.F32        S2, S2, S18
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S20
    __asm { VSTR            S0, [R4,#0x2F8] }
  return result;
}


void __fastcall OcelotModel::~OcelotModel(OcelotModel *this)
{
  OcelotModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E59DC;
  v2 = (OcelotModel *)((char *)this + 52);
  ModelPart::~ModelPart((OcelotModel *)((char *)this + 1604));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 1384));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 1164));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 944));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 724));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 504));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 284));
  ModelPart::~ModelPart((OcelotModel *)((char *)v1 + 64));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


signed __int64 __fastcall OcelotModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  __int64 v19; // r0@2
  __int64 v22; // r0@4
  __int64 v23; // r0@4
  __int64 v24; // r0@4
  __int64 v25; // r0@4
  __int64 v26; // r0@4
  __int64 v27; // r0@4
  char v29; // [sp+10h] [bp-28h]@2

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
    MatrixStack::push((MatrixStack *)&v29, *(_DWORD *)(v14 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    __asm
    {
      VMOV.F32        S0, #1.5
      VLDR            S2, [R0]
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
    _R0 = __PAIR__(v14, MatrixStack::MatrixStackRef::operator->((int)&v29));
      VMOV.F32        S0, #-5.0
      VLDR            S4, [R0,#0x14]
      VMOV.F32        S2, #4.0
      VLDR            S6, [R0,#0x18]
      VLDR            S8, [R0,#0x1C]
      VMOV            R3, S16
      VLDR            S10, [R0,#0x20]
      VLDR            S12, [R0,#0x24]
      VLDR            S14, [R0,#0x28]
      VLDR            S1, [R0,#0x2C]
      VMUL.F32        S0, S16, S0
      VLDR            S3, [R0,#0x10]
      VMUL.F32        S2, S16, S2
      VMUL.F32        S4, S4, S0
      VMUL.F32        S12, S12, S2
      VMUL.F32        S3, S3, S0
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
    LODWORD(_R0) = v9 + 64;
    ModelPart::render(_R0, v9, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v15) = v9 + 64;
    v19 = __PAIR__(v14, ModelPart::render(v15, v9, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v19) = v9 + 284;
  v22 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 504;
  v23 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 724;
  v24 = __PAIR__(v14, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 944;
  v25 = __PAIR__(v14, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 1164;
  v26 = __PAIR__(v14, ModelPart::render(v25, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 1384;
  v27 = __PAIR__(v14, ModelPart::render(v26, v9, _R6, 0, 0));
  LODWORD(v27) = v9 + 1604;
  return __PAIR__(v14, ModelPart::render(v27, v9, _R6, 0, 0));
}
