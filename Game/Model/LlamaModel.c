

void __fastcall LlamaModel::~LlamaModel(LlamaModel *this)
{
  LlamaModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5824;
  ModelPart::~ModelPart((LlamaModel *)((char *)this + 1828));
  ModelPart::~ModelPart((LlamaModel *)((char *)v1 + 1608));
  mce::MaterialPtr::~MaterialPtr((LlamaModel *)((char *)v1 + 1596));
  QuadrupedModel::~QuadrupedModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall LlamaModel::~LlamaModel(LlamaModel *this)
{
  LlamaModel::~LlamaModel(this);
}


QuadrupedModel *__fastcall LlamaModel::LlamaModel(QuadrupedModel *a1, const GeometryPtr *a2)
{
  const GeometryPtr *v2; // r5@1
  QuadrupedModel *v3; // r4@1
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
  int v33; // [sp+Ch] [bp-64h]@9
  int v34; // [sp+14h] [bp-5Ch]@8
  int v35; // [sp+1Ch] [bp-54h]@7
  int v36; // [sp+24h] [bp-4Ch]@6
  int v37; // [sp+2Ch] [bp-44h]@5
  int v38; // [sp+34h] [bp-3Ch]@4
  int v39; // [sp+3Ch] [bp-34h]@3
  int v40; // [sp+44h] [bp-2Ch]@2
  int v41; // [sp+4Ch] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  QuadrupedModel::QuadrupedModel(a1, a2);
  *(_DWORD *)v3 = &off_26E5824;
  sub_21E94B4((void **)&v41, "llama");
  mce::MaterialPtr::MaterialPtr(
    (QuadrupedModel *)((char *)v3 + 1596),
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
  ModelPart::ModelPart(COERCE_FLOAT((QuadrupedModel *)((char *)v3 + 1608)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((QuadrupedModel *)((char *)v3 + 1828)), 0, 0, 64, 32);
  Model::registerParts(v3, (QuadrupedModel *)((char *)v3 + 1608));
  Model::registerParts(v3, (QuadrupedModel *)((char *)v3 + 1828));
  *((_DWORD *)v3 + 7) = (char *)v3 + 1596;
  sub_21E94B4((void **)&v40, "head");
  ModelPart::load((int)v3 + 48, (int)v2, (const void **)&v40, 0);
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v40 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v39, "body");
  ModelPart::load((int)v3 + 488, (int)v2, (const void **)&v39, 0);
  v6 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v39 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v38, "chest1");
  ModelPart::load((int)v3 + 1608, (int)v2, (const void **)&v38, 0);
  v7 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v38 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v37, "chest2");
  ModelPart::load((int)v3 + 1828, (int)v2, (const void **)&v37, 0);
  v8 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v36, "leg0");
  ModelPart::load((int)v3 + 708, (int)v2, (const void **)&v36, 0);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v36 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v35, "leg1");
  ModelPart::load((int)v3 + 928, (int)v2, (const void **)&v35, 0);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v35 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v34, "leg2");
  ModelPart::load((int)v3 + 1148, (int)v2, (const void **)&v34, 0);
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v33, "leg3");
  ModelPart::load((int)v3 + 1368, (int)v2, (const void **)&v33, 0);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (int)v3 + 8;
  *(_DWORD *)v13 = 0;
  *(_DWORD *)(v13 + 4) = -1087163597;
  *(_DWORD *)(v13 + 8) = 1056964608;
  return v3;
}


AppPlatformListener *__fastcall LlamaModel::~LlamaModel(LlamaModel *this)
{
  LlamaModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5824;
  ModelPart::~ModelPart((LlamaModel *)((char *)this + 1828));
  ModelPart::~ModelPart((LlamaModel *)((char *)v1 + 1608));
  mce::MaterialPtr::~MaterialPtr((LlamaModel *)((char *)v1 + 1596));
  return j_j_j__ZN14QuadrupedModelD2Ev(v1);
}


int __fastcall LlamaModel::render(int a1, int a2, Entity *this, int a4, int a5, int a6, float a7, float a8, float a9)
{
  Entity *v9; // r6@1
  int v10; // r4@1
  int v11; // r7@1
  int v12; // r9@1
  unsigned int v13; // r8@1
  __int64 v18; // r0@1
  __int64 v26; // r0@2
  __int64 v27; // r0@2
  __int64 v28; // r0@2
  __int64 v29; // r0@2
  __int64 v30; // r0@2
  __int64 v32; // r0@3
  __int64 v33; // r0@3
  __int64 v34; // r0@3
  __int64 v35; // r0@3
  __int64 v36; // r0@3
  __int64 v38; // r0@5
  char v40; // [sp+10h] [bp-38h]@2

  v9 = this;
  v10 = a1;
  v11 = a4;
  v12 = a2;
  v13 = Entity::isChested(this);
  __asm
  {
    VLDR            S0, [SP,#0x48+arg_C]
    VLDR            S2, [SP,#0x48+arg_8]
    VLDR            S16, [SP,#0x48+arg_10]
    VSTR            S2, [SP,#0x48+var_48]
    VSTR            S0, [SP,#0x48+var_44]
    VSTR            S16, [SP,#0x48+var_40]
  }
  (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v10 + 64))(v10, v11, a5, a6);
  if ( Entity::isBaby(v9) == 1 )
    MatrixStack::push((MatrixStack *)&v40, *(_DWORD *)(v12 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v40);
    __asm
    {
      VLDR            S0, =1.4286
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VMUL.F32        S0, S2, S0
      VLDR            S2, =1.2987
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VLDR            S2, =1.5873
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
    _R0 = __PAIR__(v12, MatrixStack::MatrixStackRef::operator->((int)&v40));
      VMOV            R7, S16
      VLDR            S2, [R0,#0x18]
      VLDR            S4, [R0,#0x1C]
      VMUL.F32        S0, S0, S16
      VLDR            S6, [R0,#0x20]
      VMUL.F32        S2, S2, S16
      VLDR            S8, [R0,#0x24]
      VMUL.F32        S4, S4, S16
      VLDR            S10, [R0,#0x28]
      VMUL.F32        S6, S6, S16
      VLDR            S12, [R0,#0x2C]
      VMUL.F32        S8, S8, S16
      VLDR            S14, [R0,#0x10]
      VMUL.F32        S10, S10, S16
      VMUL.F32        S12, S12, S16
      VMUL.F32        S14, S14, S16
      VSUB.F32        S0, S8, S0
      VLDR            S8, [R0,#0x30]
      VSUB.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VSUB.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VSUB.F32        S6, S6, S14
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S12, S2
      VADD.F32        S4, S14, S4
      VADD.F32        S6, S8, S6
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
    LODWORD(_R0) = v10 + 48;
    ModelPart::render(_R0, v10, _R7, 0, 0);
      VLDR            S18, =0.90909
      VLDR            S0, [R0]
      VLDR            S2, =0.83333
      VMUL.F32        S0, S0, S18
      VSTR            S0, [R0]
      VLDR            S0, [R0,#4]
      VSTR            S0, [R0,#4]
      VLDR            S0, [R0,#8]
      VSTR            S0, [R0,#8]
      VLDR            S0, [R0,#0xC]
      VMOV.F32        S2, #0.625
      VMOV.F32        S0, #4.0
      VLDR            S4, [R0,#0x14]
      VMOV.F32        S2, #-5.0
      VLDR            S6, [R0,#0x18]
      VLDR            S8, [R0,#0x1C]
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
      VADD.F32        S6, S14, S6
      VADD.F32        S8, S10, S3
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
    LODWORD(_R0) = v10 + 488;
      VLDR            S2, =0.45455
      VMOV.F32        S0, #14.0
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S6, [R0,#0x1C]
      VLDR            S8, [R0,#0x10]
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S10, S2
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
    LODWORD(v26) = v10 + 708;
    v27 = __PAIR__(v12, ModelPart::render(v26, v10, _R7, 0, 0));
    LODWORD(v27) = v10 + 928;
    v28 = __PAIR__(v12, ModelPart::render(v27, v10, _R7, 0, 0));
    LODWORD(v28) = v10 + 1148;
    v29 = __PAIR__(v12, ModelPart::render(v28, v10, _R7, 0, 0));
    LODWORD(v29) = v10 + 1368;
    ModelPart::render(v29, v10, _R7, 0, 0);
    LODWORD(v30) = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v40);
  else
    __asm { VMOV            R7, S16 }
    LODWORD(v18) = v10 + 48;
    v32 = __PAIR__(v12, ModelPart::render(v18, v10, _R7, 0, 0));
    LODWORD(v32) = v10 + 488;
    v33 = __PAIR__(v12, ModelPart::render(v32, v10, _R7, 0, 0));
    LODWORD(v33) = v10 + 708;
    v34 = __PAIR__(v12, ModelPart::render(v33, v10, _R7, 0, 0));
    LODWORD(v34) = v10 + 928;
    v35 = __PAIR__(v12, ModelPart::render(v34, v10, _R7, 0, 0));
    LODWORD(v35) = v10 + 1148;
    v36 = __PAIR__(v12, ModelPart::render(v35, v10, _R7, 0, 0));
    LODWORD(v36) = v10 + 1368;
    v30 = __PAIR__(v12, ModelPart::render(v36, v10, _R7, 0, 0));
  if ( v13 == 1 )
    __asm { VMOV            R6, S16 }
    LODWORD(v30) = v10 + 1608;
    v38 = __PAIR__(v12, ModelPart::render(v30, v10, _R6, 0, 0));
    LODWORD(v38) = v10 + 1828;
    LODWORD(v30) = ModelPart::render(v38, v10, _R6, 0, 0);
  return v30;
}
