

AppPlatformListener *__fastcall AgentModel::~AgentModel(AgentModel *this)
{
  AgentModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E80EC;
  v2 = (AgentModel *)((char *)this + 48);
  ModelPart::~ModelPart((AgentModel *)((char *)this + 1160));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


_QWORD *__fastcall AgentModel::AgentModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  int v5; // r6@2
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  ModelPart *v27; // [sp+8h] [bp-68h]@2
  int v28; // [sp+14h] [bp-5Ch]@7
  int v29; // [sp+1Ch] [bp-54h]@6
  int v30; // [sp+24h] [bp-4Ch]@5
  int v31; // [sp+2Ch] [bp-44h]@4
  int v32; // [sp+34h] [bp-3Ch]@3
  int v33; // [sp+3Ch] [bp-34h]@2
  int v34; // [sp+44h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E80EC;
  sub_21E94B4((void **)&v34, "agent");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v34);
  v4 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v34 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  v27 = (ModelPart *)ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  v5 = (int)(v3 + 90);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, v27);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 90));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 940));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 145));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v33, "head");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v33, 0);
  v6 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v33 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v5 = (int)(v3 + 90);
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v32, "body");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v32, 0);
  v7 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v31, "leftArm");
  ModelPart::load((int)v27, v2, (const void **)&v31, 0);
  v8 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v30, "rightArm");
  ModelPart::load(v5, v2, (const void **)&v30, 0);
  v9 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v29, "leftLeg");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v29, 0);
  v10 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v29 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v28, "rightLeg");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v28, 0);
  v11 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v28 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v3;
}


void __fastcall AgentModel::~AgentModel(AgentModel *this)
{
  AgentModel::~AgentModel(this);
}


void __fastcall AgentModel::~AgentModel(AgentModel *this)
{
  AgentModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E80EC;
  v2 = (AgentModel *)((char *)this + 48);
  ModelPart::~ModelPart((AgentModel *)((char *)this + 1160));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((AgentModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


signed __int64 __fastcall AgentModel::render(int a1, int a2, Agent *this, int a4, int a5, int a6, float a7, float a8, float a9)
{
  int v9; // r4@1
  int v10; // r6@1
  int v11; // r5@1
  __int64 v17; // r0@1
  __int64 v18; // r0@1
  __int64 v19; // r0@1
  __int64 v20; // r0@1
  __int64 v21; // r0@1
  __int64 v22; // r0@1

  v9 = a1;
  v10 = a4;
  v11 = a2;
  *(_BYTE *)(a1 + 1380) = Agent::isHovering(this);
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_C]
    VLDR            S2, [SP,#0x30+arg_8]
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S2, [SP,#0x30+var_30]
    VSTR            S0, [SP,#0x30+var_2C]
    VSTR            S16, [SP,#0x30+var_28]
  }
  (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v9 + 64))(v9, v10, a5, a6);
  __asm { VMOV            R6, S16 }
  LODWORD(v17) = v9 + 60;
  v18 = __PAIR__(v11, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v18) = v9 + 280;
  v19 = __PAIR__(v11, ModelPart::render(v18, v9, _R6, 0, 0));
  LODWORD(v19) = v9 + 940;
  v20 = __PAIR__(v11, ModelPart::render(v19, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 1160;
  v21 = __PAIR__(v11, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 500;
  v22 = __PAIR__(v11, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 720;
  return __PAIR__(v11, ModelPart::render(v22, v9, _R6, 0, 0));
}


int __fastcall AgentModel::prepareMobModel(AgentModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r4@1
  mce::Math *v7; // r5@1
  float v10; // r2@1
  int result; // r0@2
  float v19; // r2@3

  v5 = a2;
  _R6 = a4;
  v7 = (mce::Math *)LODWORD(a3);
  _R7 = Agent::getSwingAnimationTick(a2);
  _R0 = Agent::getSwingAnimationDuration(v5);
  if ( _R7 < 1 )
  {
    __asm { VMOV            S16, R6 }
    _R0 = mce::Math::remainder(v7, 13.0, v10);
    __asm
    {
      VMOV.F32        S18, #-6.5
      VLDR            S22, =0.46154
      VMOV            S0, R0
      VLDR            S24, =-0.2
      VMOV.F32        S20, #-3.25
      VADD.F32        S0, S0, S18
      VABS.F32        S0, S0
      VADD.F32        S0, S0, S20
      VMUL.F32        S0, S0, S22
      VADD.F32        S0, S0, S24
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R8,#0x218]
    }
    result = mce::Math::remainder(v7, 13.0, v19);
      VSUB.F32        S0, S24, S0
  }
  else
      VMOV            S2, R7
      VLDR            S0, [SP,#0x40+arg_0]
      VMOV            S4, R0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S16, S4
      VSUB.F32        S0, S2, S0
      VMOV            R1, S16
      VMOV            R0, S0
    result = mce::Math::remainder(_R0, _R1, v10);
      VMOV.F32        S0, #-0.5
      VMOV            S2, R0
      VMOV.F32        S4, #0.25
      VMUL.F32        S0, S16, S0
      VADD.F32        S0, S2, S0
      VMUL.F32        S2, S16, S4
      VMOV.F32        S4, #-2.0
      VSUB.F32        S0, S0, S2
      VDIV.F32        S0, S0, S2
      VMOV.F32        S2, #1.5
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S0, S4
  __asm { VSTR            S0, [R8,#0x2F4] }
  return result;
}


int __fastcall AgentModel::setupAnim(AgentModel *this, mce::Math *a2, float a3, float a4, float a5, float a6, float a7)
{
  mce::Math *v12; // r7@1
  float v17; // r2@1
  float v24; // r1@1
  int result; // r0@1

  _R4 = this;
  __asm
  {
    VLDR            S0, [SP,#0x38+arg_0]
    VLDR            S4, [SP,#0x38+arg_4]
  }
  v12 = a2;
  _R0 = &mce::Math::RADDEG;
  _R8 = a4;
  _R6 = a3;
    VLDR            S2, [R0]
    VDIV.F32        S0, S0, S2
    VDIV.F32        S2, S4, S2
    VSTR            S2, [R4,#0x60]
    VSTR            S0, [R4,#0x64]
  _R0 = mce::Math::remainder(a2, 13.0, a3);
    VMOV.F32        S16, #-6.5
    VLDR            S2, =-0.46154
    VMOV            S0, R0
    VMOV.F32        S18, #-3.25
    VMOV            S20, R6
    VMUL.F32        S2, S20, S2
    VADD.F32        S0, S0, S16
    VABS.F32        S0, S0
    VADD.F32        S0, S0, S18
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x3D0]
  _R0 = mce::Math::remainder(v12, 13.0, v17);
    VLDR            S2, =0.1
    VLDR            S4, =0.46154
  _R5 = (int)_R4 + 1196;
    VMOV            S16, R8
    VMUL.F32        S4, S20, S4
    VMUL.F32        S2, S16, S2
    VMOV            R0, S2
    VMUL.F32        S0, S4, S0
    VSTR            S0, [R5]
  *((_DWORD *)_R4 + 245) = 0;
  *((_DWORD *)_R4 + 300) = 0;
  _R0 = mce::Math::cos(_R0, 0.0);
    VCVT.F64.F32    D0, S16
    VLDR            D1, =0.07
    VLDR            S18, =0.02
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VMOV            R1, S0
    VMOV.F32        S0, #1.0
    VMOV            S2, R0
    VADD.F32        S20, S2, S0
    VMUL.F32        S22, S20, S18
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VNMUL.F32       S0, S20, S18
    VLDR            S2, =0.08
    VMOV            S4, R0
    VSTR            S22, [R4,#0x2FC]
    VMUL.F32        S2, S4, S2
    VSTR            S0, [R4,#0x220]
    VLDR            S0, [R4,#0x2F4]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x2F4]
    VLDR            S0, [R4,#0x218]
    VSUB.F32        S0, S0, S2
    VSTR            S0, [R4,#0x218]
  result = *((_BYTE *)_R4 + 1380);
  if ( *((_BYTE *)_R4 + 1380) )
    __asm
    {
      VLDR            S0, =0.04
      VMUL.F32        S0, S16, S0
      VMOV            R0, S0
    }
    result = mce::Math::sin(_R0, v24);
      VMOV            S0, R0
      VLDR            S2, [R5]
      VMUL.F32        S0, S0, S18
      VSUB.F32        S2, S2, S0
      VSTR            S2, [R5]
      VLDR            S2, [R4,#0x3D0]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x3D0]
  return result;
}


int __fastcall AgentModel::_triangleWave(AgentModel *this, float a2, float a3)
{
  int result; // r0@1

  _R4 = a3;
  _R0 = mce::Math::remainder((mce::Math *)LODWORD(a2), a3, a3);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S2, R4
    VMOV            S4, R0
    VMOV.F32        S6, #0.25
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S6
    VADD.F32        S0, S4, S0
    VABS.F32        S0, S0
    VSUB.F32        S0, S0, S2
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}
