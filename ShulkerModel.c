

int __fastcall ShulkerModel::render(int a1, int a2, Shulker *this, int a4, int a5, float a6, float a7, float a8, float a9)
{
  int v10; // r10@1
  int v11; // r8@1
  int v12; // r6@1
  __int64 v23; // r0@3
  __int64 v25; // r0@4
  int v54; // r0@9
  __int64 v64; // r0@14
  char v66; // [sp+10h] [bp-80h]@1
  int v67; // [sp+18h] [bp-78h]@6
  int v68; // [sp+1Ch] [bp-74h]@6
  int v69; // [sp+20h] [bp-70h]@6
  int v70; // [sp+24h] [bp-6Ch]@6
  int v71; // [sp+28h] [bp-68h]@6
  int v72; // [sp+2Ch] [bp-64h]@6
  int v73; // [sp+30h] [bp-60h]@6
  int v74; // [sp+34h] [bp-5Ch]@6
  int v75; // [sp+38h] [bp-58h]@6
  int v76; // [sp+3Ch] [bp-54h]@6
  int v77; // [sp+40h] [bp-50h]@6
  int v78; // [sp+44h] [bp-4Ch]@6
  int v79; // [sp+48h] [bp-48h]@6
  int v80; // [sp+4Ch] [bp-44h]@6
  int v81; // [sp+50h] [bp-40h]@6
  float v82; // [sp+54h] [bp-3Ch]@6
  float v83; // [sp+58h] [bp-38h]@6
  float v84; // [sp+5Ch] [bp-34h]@6
  float v85; // [sp+60h] [bp-30h]@6
  int v86; // [sp+64h] [bp-2Ch]@6

  _R7 = this;
  v10 = a1;
  v11 = a2;
  *(_DWORD *)(a1 + 728) = *((_DWORD *)this + 79);
  v12 = a4;
  _R0 = *((_DWORD *)this + 104);
  __asm
  {
    VLDR            S16, [SP,#0x90+arg_4]
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VSUB.F32        S0, S16, S0
    VMOV            R1, S0
  }
  _R0 = Shulker::getClientPeekAmount(this, _R1);
    VMOV.F32        S0, #0.5
    VMOV            S2, R0
  *(_DWORD *)(v10 + 720) = _R0;
  __asm { VMOV            R3, S16 }
  _R1 = &mce::Math::PI;
    VLDR            S16, [SP,#0x90+arg_10]
    VADD.F32        S0, S2, S0
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VLDR            S2, [SP,#0x90+arg_8]
    VSTR            S0, [R10,#0x2D4]
    VLDR            S0, [SP,#0x90+arg_C]
    VSTR            S2, [SP,#0x90+var_90]
    VSTR            S0, [SP,#0x90+var_8C]
    VSTR            S16, [SP,#0x90+var_88]
  (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v10 + 64))(v10, v12, a5, _R3);
  MatrixStack::push((MatrixStack *)&v66, *(_DWORD *)(v11 + 16) + 16);
  _R6 = MatrixStack::MatrixStackRef::operator*((int)&v66);
  if ( (unsigned __int8)Shulker::getAttachFace(_R7) == 1 )
    __asm
    {
      VLDR            S0, [R6,#0x14]
      VLDR            S8, [R7,#0x13C]
      VLDR            S2, [R6,#0x18]
      VLDR            S4, [R6,#0x1C]
      VMUL.F32        S0, S0, S8
      VLDR            S6, [R6,#0x10]
      VMUL.F32        S2, S2, S8
      VMUL.F32        S4, S4, S8
      VLDR            S10, [R6,#0x34]
      VMUL.F32        S6, S6, S8
      VLDR            S8, [R6,#0x30]
      VLDR            S12, [R6,#0x38]
      VLDR            S14, [R6,#0x3C]
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S12, S2
      VADD.F32        S4, S14, S4
      VADD.F32        S6, S8, S6
      VSTR            S6, [R6,#0x30]
      VSTR            S0, [R6,#0x34]
      VSTR            S2, [R6,#0x38]
      VSTR            S4, [R6,#0x3C]
    }
  if ( !(*(int (__fastcall **)(Shulker *))(*(_DWORD *)_R7 + 172))(_R7) )
    __asm { VMOV            R5, S16 }
    LODWORD(v23) = v10 + 280;
    v25 = __PAIR__(v11, ModelPart::render(v23, v10, _R5, 0, 0));
    LODWORD(v25) = v10 + 500;
    ModelPart::render(v25, v10, _R5, 0, 0);
  switch ( Shulker::getAttachFace(_R7) )
    case 1:
      v67 = 1065353216;
      v68 = 0;
      v69 = 0;
      v86 = 1127481344;
      glm::rotate<float>((int)&v70, _R6, (int)&v86, (int)&v67);
      *(_DWORD *)_R6 = v70;
      *(_DWORD *)(_R6 + 4) = v71;
      *(_DWORD *)(_R6 + 8) = v72;
      *(_DWORD *)(_R6 + 12) = v73;
      _R0 = v74;
      *(_DWORD *)(_R6 + 16) = v74;
      _R1 = v75;
      *(_DWORD *)(_R6 + 20) = v75;
      __asm { VMOV            S0, R0 }
      _R0 = v76;
      *(_DWORD *)(_R6 + 24) = v76;
      __asm { VMOV            S2, R1 }
      _R2 = v77;
      __asm { VADD.F32        S0, S0, S0 }
      *(_DWORD *)(_R6 + 28) = v77;
      __asm
      {
        VMOV            S4, R0
        VADD.F32        S2, S2, S2
      }
      *(_DWORD *)(_R6 + 32) = v78;
        VMOV            S6, R2
        VADD.F32        S4, S4, S4
      *(_DWORD *)(_R6 + 36) = v79;
      __asm { VADD.F32        S6, S6, S6 }
      *(_DWORD *)(_R6 + 40) = v80;
      *(_DWORD *)(_R6 + 44) = v81;
        VLDR            S8, [SP,#0x90+var_3C]
        VLDR            S10, [SP,#0x90+var_38]
        VLDR            S12, [SP,#0x90+var_34]
        VSUB.F32        S0, S8, S0
        VLDR            S14, [SP,#0x90+var_30]
        VSUB.F32        S2, S10, S2
        VSUB.F32        S4, S12, S4
        VSUB.F32        S6, S14, S6
      goto LABEL_13;
    case 2:
      v67 = 0;
      v69 = 1065353216;
      *(float *)(_R6 + 48) = v82;
      *(float *)(_R6 + 52) = v83;
      *(float *)(_R6 + 56) = v84;
      *(float *)(_R6 + 60) = v85;
      v86 = 1119092736;
      _R2 = v76;
      _R3 = v77;
      __asm { VMOV            S6, R2 }
      _R0 = v78;
      __asm { VMOV            S10, R3 }
      _R1 = v79;
      __asm { VMOV            S4, R0 }
      _R0 = v80;
        VSUB.F32        S0, S4, S0
        VMOV            S4, R1
      _R1 = v81;
      __asm { VMOV            S8, R0 }
        VSUB.F32        S2, S4, S2
        VSUB.F32        S6, S8, S6
        VSUB.F32        S4, S4, S10
        VADD.F32        S0, S0, S8
        VADD.F32        S2, S2, S10
        VADD.F32        S6, S6, S12
        VADD.F32        S4, S4, S14
        VSTR            S0, [R6,#0x30]
        VSTR            S2, [R6,#0x34]
        VSTR            S6, [R6,#0x38]
        VSTR            S4, [R6,#0x3C]
      break;
    case 3:
      _R0 ^= 0x80000000;
      _R1 ^= 0x80000000;
      _R1 = v77;
      _R2 = v78;
      _R0 = v79;
      __asm { VMOV            S10, R1 }
      _R2 = v80;
        VSUB.F32        S0, S0, S6
        VMOV            S6, R0
      _R0 = v81;
        VMOV            S8, R2
        VSUB.F32        S2, S2, S6
        VSUB.F32        S4, S4, S8
        VSUB.F32        S6, S10, S6
      goto LABEL_12;
    case 4:
      v86 = -1028390912;
      _R0 = v70;
      _R1 = v71;
      _R0 = v72;
      _R1 = v73;
      _R2 = v74;
      _R0 = v75;
      __asm { VMOV            S8, R1 }
      __asm { VSUB.F32        S0, S0, S6 }
      __asm { VMOV            S6, R0 }
        VMOV            S10, R2
      __asm { VSUB.F32        S4, S4, S10 }
      v54 = v79;
      __asm { VMOV            S6, R1 }
      goto LABEL_11;
    case 5:
      _R2 = v72;
      _R3 = v73;
      __asm { VMOV            S4, R2 }
      __asm { VMOV            S8, R3 }
      __asm { VMOV            S10, R0 }
LABEL_11:
      __asm { VSUB.F32        S6, S8, S6 }
      *(_DWORD *)(_R6 + 36) = v54;
LABEL_12:
      *(_DWORD *)(_R6 + 44) = _R0;
        VADD.F32        S4, S4, S12
        VADD.F32        S6, S6, S14
LABEL_13:
        VSTR            S4, [R6,#0x38]
        VSTR            S6, [R6,#0x3C]
    default:
  __asm { VMOV            R3, S16 ; jumptable 013296A6 default case }
  HIDWORD(v64) = v11;
  LODWORD(v64) = v10 + 60;
  ModelPart::render(v64, v10, _R3, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v66);
}


void __fastcall ShulkerModel::~ShulkerModel(ShulkerModel *this)
{
  ShulkerModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5CF8;
  v2 = (ShulkerModel *)((char *)this + 48);
  ModelPart::~ModelPart((ShulkerModel *)((char *)this + 500));
  ModelPart::~ModelPart((ShulkerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((ShulkerModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall ShulkerModel::ShulkerModel(_QWORD *a1, int a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  int v17; // [sp+8h] [bp-40h]@4
  int v18; // [sp+10h] [bp-38h]@3
  int v19; // [sp+18h] [bp-30h]@2
  int v20; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5CF8;
  sub_21E94B4((void **)&v20, "shulker");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v20);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 60)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 35), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 500)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 35));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 500));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 60));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v19, "lid");
  ModelPart::load((int)(v3 + 35), v2, (const void **)&v19, 0);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v18, "base");
  ModelPart::load((int)v3 + 500, v2, (const void **)&v18, 0);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v17, "head");
  ModelPart::load((int)v3 + 60, v2, (const void **)&v17, 0);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v3;
}


void *__fastcall ShulkerModel::setupAnim(ShulkerModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v9; // r1@1
  void *result; // r0@7
  int v21; // [sp+4h] [bp-3Ch]@4
  int v22; // [sp+Ch] [bp-34h]@4

  _R4 = this;
  _R6 = a4;
  _R5 = mce::Math::sin(*((mce::Math **)this + 181), a2);
  __asm { VLDR            S0, [R4,#0x2D4] }
  _R0 = &mce::Math::PI;
  __asm
  {
    VLDR            S16, [R0]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VMOV.F32        S22, #16.0 }
  else
    __asm
    {
      VMOV            S0, R6
      VLDR            S2, =0.1
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    }
    _R0 = mce::Math::sin(_R0, v9);
      VLDR            S0, =0.7
      VMOV            S2, R0
      VMOV.F32        S4, #16.0
      VMUL.F32        S0, S2, S0
      VADD.F32        S22, S0, S4
      VLDR            S0, [R4,#0x2D4]
    VMOV            R0, S0
    VLDR            S20, [SP,#0x40+arg_4]
    VLDR            S18, [SP,#0x40+arg_0]
  _R0 = mce::Math::sin(_R0, v9);
    VMOV.F32        S0, #8.0
    VMOV            S2, R0
  v21 = 0;
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S22, S0
    VSTR            S0, [SP,#0x40+var_38]
  v22 = 0;
  ModelPart::setPos((ShulkerModel *)((char *)_R4 + 280), (const Vec3 *)&v21);
    VLDR            S0, =0.3
    VLDR            S2, [R4,#0x2D0]
    VCMPE.F32       S2, S0
    __asm { VLDR            S0, =0.0 }
      VMOV.F32        S0, #-1.0
      VMOV            S2, R5
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #0.125
      VMUL.F32        S0, S0, S0
      VMUL.F32        S0, S0, S16
  __asm { VSTR            S0, [R4,#0x140] }
  result = &mce::Math::DEGRAD;
    VLDR            S2, [R0]
    VMUL.F32        S4, S2, S20
    VMUL.F32        S2, S2, S18
    VSTR            S4, [R4,#0x60]
    VSTR            S2, [R4,#0x64]
  return result;
}


AppPlatformListener *__fastcall ShulkerModel::~ShulkerModel(ShulkerModel *this)
{
  ShulkerModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5CF8;
  v2 = (ShulkerModel *)((char *)this + 48);
  ModelPart::~ModelPart((ShulkerModel *)((char *)this + 500));
  ModelPart::~ModelPart((ShulkerModel *)((char *)v1 + 280));
  ModelPart::~ModelPart((ShulkerModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


void __fastcall ShulkerModel::~ShulkerModel(ShulkerModel *this)
{
  ShulkerModel::~ShulkerModel(this);
}
