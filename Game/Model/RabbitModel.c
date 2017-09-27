

_QWORD *__fastcall RabbitModel::RabbitModel(_QWORD *a1, int a2)
{
  int v2; // r8@1
  _QWORD *v3; // r11@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@35
  signed int v29; // r1@37
  unsigned int *v30; // r2@39
  signed int v31; // r1@41
  unsigned int *v32; // r2@43
  signed int v33; // r1@45
  unsigned int *v34; // r2@47
  signed int v35; // r1@49
  unsigned int *v36; // r2@51
  signed int v37; // r1@53
  unsigned int *v38; // r2@55
  signed int v39; // r1@57
  unsigned int *v40; // r2@59
  signed int v41; // r1@61
  unsigned int *v42; // r2@63
  signed int v43; // r1@65
  int v44; // [sp+54h] [bp-8Ch]@13
  int v45; // [sp+5Ch] [bp-84h]@12
  int v46; // [sp+64h] [bp-7Ch]@11
  int v47; // [sp+6Ch] [bp-74h]@10
  int v48; // [sp+74h] [bp-6Ch]@9
  int v49; // [sp+7Ch] [bp-64h]@8
  int v50; // [sp+84h] [bp-5Ch]@7
  int v51; // [sp+8Ch] [bp-54h]@6
  int v52; // [sp+94h] [bp-4Ch]@5
  int v53; // [sp+9Ch] [bp-44h]@4
  int v54; // [sp+A4h] [bp-3Ch]@3
  int v55; // [sp+ACh] [bp-34h]@2
  int v56; // [sp+B4h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5BF0;
  sub_21E94B4((void **)&v56, "rabbit");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v56);
  v4 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 200), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1820)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 255), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2260)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 310), 0, 0, 64, 32);
  *((_DWORD *)v3 + 675) = 0;
  Model::registerParts<ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &>(
    (ModelPart *)v3,
    (ModelPart *)((char *)v3 + 60),
    (ModelPart *)(v3 + 35),
    (ModelPart *)((char *)v3 + 500),
    (ModelPart *)(v3 + 90),
    (ModelPart *)((char *)v3 + 940),
    (ModelPart *)(v3 + 145),
    (ModelPart *)((char *)v3 + 1380),
    (int)(v3 + 200),
    (ModelPart *)((char *)v3 + 1820),
    (ModelPart *)(v3 + 255),
    (ModelPart *)((char *)v3 + 2260),
    (ModelPart *)(v3 + 310));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v55, "rearFootLeft");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v55, 0);
  v5 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v55 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v54, "rearFootRight");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v54, 0);
  v6 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v54 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v53, "haunchLeft");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v53, 0);
  v7 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v53 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v52, "haunchRight");
  ModelPart::load((int)(v3 + 90), v2, (const void **)&v52, 0);
  v8 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v52 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v51, "body");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v51, 0);
  v9 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v51 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v50, "frontLegLeft");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v50, 0);
  v10 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v50 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v49, "frontLegRight");
  ModelPart::load((int)v3 + 1380, v2, (const void **)&v49, 0);
  v11 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v49 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v48, "head");
  ModelPart::load((int)(v3 + 200), v2, (const void **)&v48, 0);
  v12 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v48 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v47, "earRight");
  ModelPart::load((int)v3 + 1820, v2, (const void **)&v47, 0);
  v13 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v47 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v46, "earLeft");
  ModelPart::load((int)(v3 + 255), v2, (const void **)&v46, 0);
  v14 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v46 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v45, "tail");
  ModelPart::load((int)v3 + 2260, v2, (const void **)&v45, 0);
  v15 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v45 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v44, "nose");
  ModelPart::load((int)(v3 + 310), v2, (const void **)&v44, 0);
  v16 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v44 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v3[1] = -4644111934885462016LL;
  *((_DWORD *)v3 + 4) = 0;
  return v3;
}


void __fastcall RabbitModel::setRotation(RabbitModel *this, ModelPart *a2, __int64 a3, float a4)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VSTR            S0, [R1,#0x2C]
  }
  *(_QWORD *)((char *)a2 + 36) = a3;
}


char *__fastcall RabbitModel::setupAnim(RabbitModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  char *result; // r0@1

  __asm
  {
    VMOV.F32        S2, #-15.0
    VMOV.F32        S0, #15.0
    VLDR            S4, [SP,#8+arg_0]
    VLDR            S6, [SP,#8+arg_4]
  }
  _R1 = &mce::Math::DEGRAD;
    VLDR            S10, =50.0
    VADD.F32        S2, S4, S2
    VLDR            S8, [R1]
    VADD.F32        S0, S4, S0
    VMUL.F32        S6, S8, S6
    VMUL.F32        S4, S8, S4
    VMUL.F32        S2, S8, S2
    VMUL.F32        S0, S8, S0
    VSTR            S6, [R2]
    VSTR            S6, [R1]
    VSTR            S6, [R3]
    VSTR            S6, [LR]
    VSTR            S4, [R12]
    VSTR            S4, [R1]
    VLDR            S6, =-40.0
    VSTR            S2, [R1]
    VMOV.F32        S2, #-21.0
    VSTR            S0, [R1]
  _R1 = (char *)this + 2700;
    VLDR            S0, [R1]
    VMUL.F32        S4, S0, S10
    VMOV.F32        S10, #-11.0
    VMUL.F32        S0, S0, S6
    VMUL.F32        S4, S4, S8
    VADD.F32        S0, S0, S10
    VMUL.F32        S2, S2, S8
    VMUL.F32        S0, S0, S8
    VSTR            S2, [R0,#0x2F4]
    VSTR            S2, [R0,#0x218]
    VSTR            S4, [R0,#0x13C]
    VSTR            S4, [R0,#0x60]
  result = (char *)this + 1196;
    VSTR            S0, [R0]
  return result;
}


signed __int64 __fastcall RabbitModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  __int64 v19; // r0@2
  __int64 v20; // r0@2
  __int64 v21; // r0@2
  __int64 v22; // r0@2
  unsigned __int64 v23; // r0@2
  __int64 v24; // r0@2
  __int64 v25; // r0@2
  __int64 v26; // r0@2
  __int64 v27; // r0@2
  __int64 v28; // r0@2
  __int64 v29; // r0@2
  __int64 v30; // r0@2
  __int64 v31; // r0@2
  __int64 v32; // r0@3
  __int64 v33; // r0@3
  __int64 v34; // r0@3
  __int64 v35; // r0@3
  __int64 v36; // r0@3
  __int64 v37; // r0@3
  __int64 v38; // r0@3
  __int64 v39; // r0@3
  __int64 v40; // r0@3
  __int64 v41; // r0@3
  char v43; // [sp+10h] [bp-28h]@2

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
    MatrixStack::push((MatrixStack *)&v43, *(_DWORD *)(v14 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v43);
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
      VMOV.F32        S0, #-4.0
      VLDR            S8, [R0,#0x20]
      VLDR            S10, [R0,#0x24]
      VMOV            R6, S16
      VLDR            S12, [R0,#0x28]
      VMUL.F32        S8, S8, S16
      VLDR            S14, [R0,#0x2C]
      VMUL.F32        S10, S10, S16
      VMUL.F32        S12, S12, S16
      VLDR            S4, [R0,#0x18]
      VMUL.F32        S14, S14, S16
      VLDR            S6, [R0,#0x1C]
      VMUL.F32        S0, S16, S0
      VLDR            S1, [R0,#0x10]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S1, S1, S0
      VMUL.F32        S0, S6, S0
      VADD.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VADD.F32        S6, S8, S1
      VLDR            S8, [R0,#0x30]
      VADD.F32        S0, S14, S0
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S0, S14
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    LODWORD(v19) = v9 + 1600;
    v20 = __PAIR__(v14, ModelPart::render(v19, v9, _R6, 0, 0));
    LODWORD(v20) = v9 + 2040;
    v21 = __PAIR__(v14, ModelPart::render(v20, v9, _R6, 0, 0));
    LODWORD(v21) = v9 + 1820;
    v22 = __PAIR__(v14, ModelPart::render(v21, v9, _R6, 0, 0));
    LODWORD(v22) = v9 + 2480;
    v23 = __PAIR__(v14, ModelPart::render(v22, v9, _R6, 0, 0));
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v43);
    LODWORD(v24) = v9 + 60;
    v25 = __PAIR__(v14, ModelPart::render(v24, v9, _R6, 0, 0));
    LODWORD(v25) = v9 + 280;
    v26 = __PAIR__(v14, ModelPart::render(v25, v9, _R6, 0, 0));
    LODWORD(v26) = v9 + 500;
    v27 = __PAIR__(v14, ModelPart::render(v26, v9, _R6, 0, 0));
    LODWORD(v27) = v9 + 720;
    v28 = __PAIR__(v14, ModelPart::render(v27, v9, _R6, 0, 0));
    LODWORD(v28) = v9 + 940;
    v29 = __PAIR__(v14, ModelPart::render(v28, v9, _R6, 0, 0));
    LODWORD(v29) = v9 + 1160;
    v30 = __PAIR__(v14, ModelPart::render(v29, v9, _R6, 0, 0));
    LODWORD(v30) = v9 + 1380;
    v31 = __PAIR__(v14, ModelPart::render(v30, v9, _R6, 0, 0));
    LODWORD(v31) = v9 + 2260;
  else
    __asm { VMOV            R6, S16 }
    LODWORD(v15) = v9 + 60;
    v32 = __PAIR__(v14, ModelPart::render(v15, v9, _R6, 0, 0));
    LODWORD(v32) = v9 + 280;
    v33 = __PAIR__(v14, ModelPart::render(v32, v9, _R6, 0, 0));
    LODWORD(v33) = v9 + 500;
    v34 = __PAIR__(v14, ModelPart::render(v33, v9, _R6, 0, 0));
    LODWORD(v34) = v9 + 720;
    v35 = __PAIR__(v14, ModelPart::render(v34, v9, _R6, 0, 0));
    LODWORD(v35) = v9 + 940;
    v36 = __PAIR__(v14, ModelPart::render(v35, v9, _R6, 0, 0));
    LODWORD(v36) = v9 + 1160;
    v37 = __PAIR__(v14, ModelPart::render(v36, v9, _R6, 0, 0));
    LODWORD(v37) = v9 + 1380;
    v38 = __PAIR__(v14, ModelPart::render(v37, v9, _R6, 0, 0));
    LODWORD(v38) = v9 + 1600;
    v39 = __PAIR__(v14, ModelPart::render(v38, v9, _R6, 0, 0));
    LODWORD(v39) = v9 + 1820;
    v40 = __PAIR__(v14, ModelPart::render(v39, v9, _R6, 0, 0));
    LODWORD(v40) = v9 + 2040;
    v41 = __PAIR__(v14, ModelPart::render(v40, v9, _R6, 0, 0));
    LODWORD(v41) = v9 + 2260;
    v31 = __PAIR__(v14, ModelPart::render(v41, v9, _R6, 0, 0));
    LODWORD(v31) = v9 + 2480;
  return __PAIR__(v14, ModelPart::render(v31, v9, _R6, 0, 0));
}


AppPlatformListener *__fastcall RabbitModel::~RabbitModel(RabbitModel *this)
{
  RabbitModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5BF0;
  v2 = (RabbitModel *)((char *)this + 48);
  ModelPart::~ModelPart((RabbitModel *)((char *)this + 2480));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 2260));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 2040));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 1820));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((RabbitModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall RabbitModel::~RabbitModel(RabbitModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = RabbitModel::~RabbitModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall RabbitModel::prepareMobModel(RabbitModel *this, Mob *a2, float a3, float a4, float a5)
{
  RabbitModel *v5; // r4@1
  int result; // r0@1

  v5 = this;
  _R0 = Rabbit::getJumpCompletion(a2, a5);
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  result = mce::Math::sin(_R0, COERCE_FLOAT(&mce::Math::PI));
  *((_DWORD *)v5 + 675) = result;
  return result;
}


void __fastcall RabbitModel::~RabbitModel(RabbitModel *this)
{
  RabbitModel::~RabbitModel(this);
}
