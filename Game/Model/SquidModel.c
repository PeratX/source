

int __fastcall SquidModel::render(int a1, int a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  Entity *v10; // r9@1
  int v11; // r5@1
  __int64 v17; // r0@3
  int v18; // r0@6
  __int64 v20; // r0@7
  __int64 v21; // r0@7
  __int64 v22; // r0@7
  __int64 v23; // r0@7
  __int64 v24; // r0@7
  __int64 v25; // r0@7
  __int64 v26; // r0@7
  __int64 v27; // r0@7
  int v29; // [sp+10h] [bp-F0h]@6
  int v30; // [sp+14h] [bp-ECh]@6
  int v31; // [sp+18h] [bp-E8h]@6
  int v32; // [sp+1Ch] [bp-E4h]@6
  int v33; // [sp+20h] [bp-E0h]@6
  int v34; // [sp+24h] [bp-DCh]@6
  int v35; // [sp+28h] [bp-D8h]@6
  int v36; // [sp+2Ch] [bp-D4h]@6
  int v37; // [sp+30h] [bp-D0h]@6
  int v38; // [sp+34h] [bp-CCh]@6
  int v39; // [sp+38h] [bp-C8h]@6
  int v40; // [sp+3Ch] [bp-C4h]@6
  int v41; // [sp+40h] [bp-C0h]@6
  int v42; // [sp+44h] [bp-BCh]@6
  int v43; // [sp+48h] [bp-B8h]@6
  int v44; // [sp+4Ch] [bp-B4h]@6
  int v45; // [sp+50h] [bp-B0h]@4
  int v46; // [sp+54h] [bp-ACh]@4
  int v47; // [sp+58h] [bp-A8h]@4
  int v48; // [sp+5Ch] [bp-A4h]@4
  int v49; // [sp+60h] [bp-A0h]@4
  signed int v50; // [sp+64h] [bp-9Ch]@4
  int v51; // [sp+68h] [bp-98h]@4
  int v52; // [sp+6Ch] [bp-94h]@4
  int v53; // [sp+70h] [bp-90h]@4
  int v54; // [sp+74h] [bp-8Ch]@4
  signed int v55; // [sp+78h] [bp-88h]@4
  int v56; // [sp+7Ch] [bp-84h]@4
  int v57; // [sp+80h] [bp-80h]@4
  float v58; // [sp+84h] [bp-7Ch]@4
  int v59; // [sp+88h] [bp-78h]@4
  int v60; // [sp+8Ch] [bp-74h]@4
  char v61; // [sp+90h] [bp-70h]@1
  int v62; // [sp+98h] [bp-68h]@6
  int v63; // [sp+9Ch] [bp-64h]@6
  int v64; // [sp+A0h] [bp-60h]@6
  int v65; // [sp+A4h] [bp-5Ch]@6
  int v66; // [sp+A8h] [bp-58h]@6
  int v67; // [sp+ACh] [bp-54h]@6
  int v68; // [sp+B0h] [bp-50h]@6
  int v69; // [sp+B4h] [bp-4Ch]@6
  int v70; // [sp+B8h] [bp-48h]@6
  int v71; // [sp+BCh] [bp-44h]@6
  int v72; // [sp+C0h] [bp-40h]@6
  int v73; // [sp+C4h] [bp-3Ch]@6
  int v74; // [sp+C8h] [bp-38h]@6
  int v75; // [sp+CCh] [bp-34h]@6
  int v76; // [sp+D0h] [bp-30h]@6
  int v77; // [sp+D4h] [bp-2Ch]@6

  v9 = a1;
  v10 = (Entity *)LODWORD(a3);
  v11 = a2;
  __asm
  {
    VLDR            S0, [SP,#0x100+arg_C]
    VLDR            S2, [SP,#0x100+arg_8]
    VLDR            S16, [SP,#0x100+arg_10]
    VSTR            S2, [SP,#0x100+var_100]
    VSTR            S0, [SP,#0x100+var_FC]
    VSTR            S16, [SP,#0x100+var_F8]
  }
  (*(void (**)(void))(*(_DWORD *)a1 + 64))();
  MatrixStack::push((MatrixStack *)&v61, *(_DWORD *)(v11 + 16) + 16);
  if ( *(_BYTE *)(v9 + 24) )
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v61);
    __asm
    {
      VMOV.F32        S0, #0.75
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S8, [R0,#0x10]
      VLDR            S6, [R0,#0x1C]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    }
  if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)v10 + 208))(v10) )
    v45 = 1065353216;
    v48 = 0;
    v49 = 0;
    v46 = 0;
    v47 = 0;
    v52 = 0;
    v53 = 0;
    v50 = 1065353216;
    v51 = 0;
    v54 = 0;
    v55 = 1065353216;
    v58 = 0.0;
    v59 = 0;
    v56 = 0;
    v57 = 0;
    v60 = 1065353216;
    Entity::isBaby(v10);
      VLDR            S2, =0.2
      VLDR            S0, =0.4
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
    __asm { VSTR            S0, [SP,#0x100+var_7C] }
    v18 = MatrixStack::MatrixStackRef::operator*((int)&v61);
    glm::detail::operator*<float>((int)&v62, (int)&v45, v18);
    _aeabi_memclr8(&v29, 56);
    v29 = v62;
    v30 = v63;
    v31 = v64;
    v32 = v65;
    v33 = v66;
    v34 = v67;
    v35 = v68;
    v36 = v69;
    v37 = v70;
    v38 = v71;
    v39 = v72;
    v40 = v73;
    v41 = v74;
    v42 = v75;
    v43 = v76;
    v44 = v77;
    MatrixStack::MatrixStackRef::operator=((int)&v61, (int)&v29);
  __asm { VMOV            R6, S16 }
  LODWORD(v17) = v9 + 60;
  v20 = __PAIR__(v11, ModelPart::render(v17, v9, _R6, 0, 0));
  LODWORD(v20) = v9 + 280;
  v21 = __PAIR__(v11, ModelPart::render(v20, v9, _R6, 0, 0));
  LODWORD(v21) = v9 + 500;
  v22 = __PAIR__(v11, ModelPart::render(v21, v9, _R6, 0, 0));
  LODWORD(v22) = v9 + 720;
  v23 = __PAIR__(v11, ModelPart::render(v22, v9, _R6, 0, 0));
  LODWORD(v23) = v9 + 940;
  v24 = __PAIR__(v11, ModelPart::render(v23, v9, _R6, 0, 0));
  LODWORD(v24) = v9 + 1160;
  v25 = __PAIR__(v11, ModelPart::render(v24, v9, _R6, 0, 0));
  LODWORD(v25) = v9 + 1380;
  v26 = __PAIR__(v11, ModelPart::render(v25, v9, _R6, 0, 0));
  LODWORD(v26) = v9 + 1600;
  ModelPart::render(v26, v9, _R6, 0, 0);
  HIDWORD(v27) = v11;
  LODWORD(v27) = v9 + 1820;
  ModelPart::render(v27, v9, _R6, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v61);
}


AppPlatformListener *__fastcall SquidModel::~SquidModel(SquidModel *this)
{
  SquidModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5E58;
  v2 = (SquidModel *)((char *)this + 48);
  ModelPart::~ModelPart((SquidModel *)((char *)this + 1820));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall SquidModel::~SquidModel(SquidModel *this)
{
  SquidModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5E58;
  v2 = (SquidModel *)((char *)this + 48);
  ModelPart::~ModelPart((SquidModel *)((char *)this + 1820));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 1600));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 1380));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 1160));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 940));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 720));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 500));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((SquidModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall SquidModel::SquidModel(_QWORD *a1, int a2)
{
  int v2; // r11@1
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
  void *v13; // r0@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  unsigned int *v33; // r2@48
  signed int v34; // r1@50
  int v35; // [sp+1Ch] [bp-74h]@10
  int v36; // [sp+24h] [bp-6Ch]@9
  int v37; // [sp+2Ch] [bp-64h]@8
  int v38; // [sp+34h] [bp-5Ch]@7
  int v39; // [sp+3Ch] [bp-54h]@6
  int v40; // [sp+44h] [bp-4Ch]@5
  int v41; // [sp+4Ch] [bp-44h]@4
  int v42; // [sp+54h] [bp-3Ch]@3
  int v43; // [sp+5Ch] [bp-34h]@2
  int v44; // [sp+64h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5E58;
  sub_21E94B4((void **)&v44, "squid");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v44);
  v4 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v44 - 4);
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
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 90), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 940)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 145), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1380)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 200), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1820)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  *((_DWORD *)v3 + 7) = v3 + 6;
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 90));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 940));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 145));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1380));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 200));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1820));
  sub_21E94B4((void **)&v43, "body");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v43, 0);
  v5 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v43 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v42, "tentacle1");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v42, 0);
  v6 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v42 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v41, "tentacle2");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v41, 0);
  v7 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v41 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v40, "tentacle3");
  ModelPart::load((int)(v3 + 90), v2, (const void **)&v40, 0);
  v8 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v40 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v39, "tentacle4");
  ModelPart::load((int)v3 + 940, v2, (const void **)&v39, 0);
  v9 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v39 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v38, "tentacle5");
  ModelPart::load((int)(v3 + 145), v2, (const void **)&v38, 0);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v38 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v37, "tentacle6");
  ModelPart::load((int)v3 + 1380, v2, (const void **)&v37, 0);
  v11 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v36, "tentacle7");
  ModelPart::load((int)(v3 + 200), v2, (const void **)&v36, 0);
  v12 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v35, "tentacle8");
  ModelPart::load((int)v3 + 1820, v2, (const void **)&v35, 0);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v35 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v3[1] = -4629700416936869888LL;
  *((_DWORD *)v3 + 4) = 0;
  return v3;
}


int __fastcall SquidModel::setupAnim(int result, float a2, float a3, float a4, float a5, float a6, float a7)
{
  *(float *)(result + 316) = a4;
  *(float *)(result + 536) = a4;
  *(float *)(result + 756) = a4;
  *(float *)(result + 976) = a4;
  *(float *)(result + 1196) = a4;
  *(float *)(result + 1416) = a4;
  *(float *)(result + 1636) = a4;
  *(float *)(result + 1856) = a4;
  return result;
}


void __fastcall SquidModel::~SquidModel(SquidModel *this)
{
  SquidModel::~SquidModel(this);
}
