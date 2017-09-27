

void __fastcall PistonBlockEntityRenderer::~PistonBlockEntityRenderer(PistonBlockEntityRenderer *this)
{
  PistonBlockEntityRenderer::~PistonBlockEntityRenderer(this);
}


int __fastcall PistonBlockEntityRenderer::~PistonBlockEntityRenderer(PistonBlockEntityRenderer *this)
{
  PistonBlockEntityRenderer *v1; // r4@1
  ModelPart *v2; // r5@1
  Model *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB03C;
  v2 = (PistonBlockEntityRenderer *)((char *)this + 184);
  *((_DWORD *)this + 31) = &off_26DB058;
  v3 = (PistonBlockEntityRenderer *)((char *)this + 124);
  ModelPart::~ModelPart((PistonBlockEntityRenderer *)((char *)this + 624));
  ModelPart::~ModelPart((PistonBlockEntityRenderer *)((char *)v1 + 404));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((PistonBlockEntityRenderer *)((char *)v1 + 172));
  Model::~Model(v3);
  mce::TexturePtr::~TexturePtr((PistonBlockEntityRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr((PistonBlockEntityRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


int __fastcall PistonBlockEntityRenderer::render(PistonBlockEntityRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BaseEntityRenderContext *v3; // r7@1
  PistonBlockEntityRenderer *v4; // r4@1
  BlockEntityRenderData *v5; // r6@1
  int v6; // r0@1
  BlockSource *v7; // r5@1
  char *v9; // r0@1
  unsigned int v10; // r5@1
  signed int v11; // r6@1
  int v12; // r0@1
  int v13; // r1@1
  __int64 v14; // r8@3
  char *v15; // r0@3
  int v16; // r0@3
  int v25; // r5@7
  int v27; // r5@8
  int v29; // r5@9
  int v30; // r5@9
  int v32; // r5@10
  int v33; // r5@10
  int v35; // r5@11
  int v36; // r5@11
  int v38; // r0@13
  int v39; // r5@13
  int v40; // r0@15
  int v42; // [sp+0h] [bp-110h]@0
  int v43; // [sp+Ch] [bp-104h]@1
  int v44; // [sp+10h] [bp-100h]@1
  unsigned int v45; // [sp+14h] [bp-FCh]@1
  BaseEntityRenderContext *v46; // [sp+18h] [bp-F8h]@1
  char v47; // [sp+1Ch] [bp-F4h]@13
  __int64 v48; // [sp+28h] [bp-E8h]@10
  int v49; // [sp+30h] [bp-E0h]@10
  int v50; // [sp+34h] [bp-DCh]@10
  int v51; // [sp+38h] [bp-D8h]@10
  int v52; // [sp+3Ch] [bp-D4h]@10
  __int64 v53; // [sp+40h] [bp-D0h]@11
  int v54; // [sp+48h] [bp-C8h]@11
  int v55; // [sp+4Ch] [bp-C4h]@11
  int v56; // [sp+50h] [bp-C0h]@11
  int v57; // [sp+54h] [bp-BCh]@11
  int v58; // [sp+58h] [bp-B8h]@9
  signed int v59; // [sp+5Ch] [bp-B4h]@9
  int v60; // [sp+60h] [bp-B0h]@9
  int v61; // [sp+64h] [bp-ACh]@9
  int v62; // [sp+68h] [bp-A8h]@9
  int v63; // [sp+6Ch] [bp-A4h]@9
  int v64; // [sp+70h] [bp-A0h]@8
  int v65; // [sp+74h] [bp-9Ch]@8
  int v66; // [sp+78h] [bp-98h]@8
  int v67; // [sp+7Ch] [bp-94h]@7
  int v68; // [sp+80h] [bp-90h]@7
  int v69; // [sp+84h] [bp-8Ch]@7
  char v70; // [sp+88h] [bp-88h]@3
  float v71; // [sp+90h] [bp-80h]@3
  int v74; // [sp+9Ch] [bp-74h]@7
  int v75; // [sp+A0h] [bp-70h]@7
  int v76; // [sp+A4h] [bp-6Ch]@7
  int v77; // [sp+A8h] [bp-68h]@7
  int v78; // [sp+ACh] [bp-64h]@7
  int v79; // [sp+B0h] [bp-60h]@7
  int v80; // [sp+B4h] [bp-5Ch]@7
  int v81; // [sp+B8h] [bp-58h]@7
  int v82; // [sp+BCh] [bp-54h]@7
  int v83; // [sp+C0h] [bp-50h]@7
  int v84; // [sp+C4h] [bp-4Ch]@7
  int v85; // [sp+C8h] [bp-48h]@7
  int v86; // [sp+CCh] [bp-44h]@7
  int v87; // [sp+D0h] [bp-40h]@7
  int v88; // [sp+D4h] [bp-3Ch]@7
  int v89; // [sp+D8h] [bp-38h]@7
  int v90; // [sp+DCh] [bp-34h]@7

  v3 = a2;
  v4 = this;
  v5 = a3;
  v46 = a2;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *(BlockSource **)v5;
  v45 = v6;
  v44 = *(_DWORD *)v5;
  _KR00_8 = *(_QWORD *)((char *)v5 + 4);
  v9 = BlockEntity::getPosition((BlockEntity *)*(_QWORD *)((char *)v5 + 4));
  v10 = BlockSource::getData(v7, (const BlockPos *)v9);
  v43 = *((_DWORD *)v5 + 3);
  v11 = BlockEntity::isInWorld((BlockEntity *)_KR00_8);
  v12 = PistonBlockEntity::isSticky((PistonBlockEntity *)_KR00_8);
  v13 = (int)v4 + 76;
  if ( v12 )
    v13 = (int)v4 + 100;
  *((_DWORD *)v4 + 39) = v13;
  v14 = *(_QWORD *)Block::getBlockState(Block::mPiston, 15);
  v15 = BlockEntity::getPosition((BlockEntity *)_KR00_8);
  Vec3::Vec3((int)&v71, (int)v15);
  v16 = BaseEntityRenderContext::getWorldMatrix(v3);
  MatrixStack::push((MatrixStack *)&v70, v16);
  if ( !v11 )
    v10 = 0;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v70);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R10]
    VLDR            S4, [R10,#4]
    VLDR            S6, [R10,#8]
    VLDR            S8, [R0]
    VLDR            S10, [R0,#4]
    VLDR            S1, [R0,#0x14]
    VLDR            S3, [R0,#0x10]
    VADD.F32        S2, S2, S0
    VLDR            S14, [R0,#0xC]
    VADD.F32        S4, S4, S0
    VLDR            S5, [R0,#0x18]
    VLDR            S12, [R0,#8]
    VADD.F32        S6, S6, S0
    VLDR            S7, [R0,#0x1C]
    VLDR            S9, [R0,#0x20]
    VMUL.F32        S8, S8, S2
    VMUL.F32        S3, S3, S4
    VMUL.F32        S10, S10, S2
    VMUL.F32        S1, S1, S4
    VMUL.F32        S14, S14, S2
    VMUL.F32        S2, S12, S2
    VLDR            S12, [R0,#0x24]
    VMUL.F32        S5, S5, S4
    VMUL.F32        S4, S7, S4
    VMUL.F32        S7, S9, S6
    VLDR            S9, [R0,#0x28]
    VADD.F32        S8, S3, S8
    VADD.F32        S10, S1, S10
    VLDR            S1, [R0,#0x2C]
    VMUL.F32        S12, S12, S6
    VMUL.F32        S3, S9, S6
    VADD.F32        S2, S5, S2
    VADD.F32        S4, S4, S14
    VLDR            S14, [R0,#0x38]
    VMUL.F32        S6, S1, S6
    VADD.F32        S8, S8, S7
    VADD.F32        S10, S10, S12
    VLDR            S12, [R0,#0x34]
    VADD.F32        S2, S2, S3
    VADD.F32        S4, S4, S6
    VLDR            S6, [R0,#0x30]
    VADD.F32        S6, S8, S6
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S14
    VADD.F32        S4, S4, S8
    VSTR            S6, [R0,#0x30]
    VSTR            S10, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
    VLDR            S2, [SP,#0x110+var_80]
    VSTR            S2, [SP,#0x110+var_80]
    VLDR            S2, [SP,#0x110+var_7C]
    VSTR            S2, [SP,#0x110+var_7C]
    VLDR            S2, [SP,#0x110+var_78]
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x110+var_78]
  }
  _R0 = PistonBlockEntity::getProgress((PistonBlockEntity *)_KR00_8, *((float *)v46 + 1));
    VMOV.F32        S2, #0.375
    VMOV            S0, R0
    VADD.F32        S16, S0, S2
  switch ( (unsigned __int8)(v10 >> (1 - BYTE4(v14) + v14)) & (unsigned __int8)(0xFu >> (4 - BYTE4(v14))) )
    case 0:
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      __asm
      {
        VLDR            S0, [R0,#0x14]
        VLDR            S2, [R0,#0x18]
        VLDR            S4, [R0,#0x1C]
        VMUL.F32        S0, S0, S16
        VLDR            S6, [R0,#0x10]
        VMUL.F32        S2, S2, S16
        VMUL.F32        S4, S4, S16
        VLDR            S10, [R0,#0x34]
        VMUL.F32        S6, S6, S16
        VLDR            S8, [R0,#0x30]
        VLDR            S12, [R0,#0x38]
        VLDR            S14, [R0,#0x3C]
        VSUB.F32        S0, S10, S0
        VSUB.F32        S2, S12, S2
        VSUB.F32        S4, S14, S4
        VSUB.F32        S6, S8, S6
        VSTR            S6, [R0,#0x30]
        VSTR            S0, [R0,#0x34]
        VSTR            S2, [R0,#0x38]
        VSTR            S4, [R0,#0x3C]
        VLDR            S0, [SP,#0x110+var_7C]
        VSUB.F32        S0, S0, S16
        VSTR            S0, [SP,#0x110+var_7C]
      }
      break;
    case 1:
        VADD.F32        S0, S10, S0
        VADD.F32        S2, S12, S2
        VADD.F32        S4, S14, S4
        VADD.F32        S6, S8, S6
      v25 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v67 = 0;
      v68 = 0;
      v69 = 1065353216;
      v90 = 1127481344;
      glm::rotate<float>((int)&v74, v25, (int)&v90, (int)&v67);
      *(_DWORD *)v25 = v74;
      *(_DWORD *)(v25 + 4) = v75;
      *(_DWORD *)(v25 + 8) = v76;
      *(_DWORD *)(v25 + 12) = v77;
      *(_DWORD *)(v25 + 16) = v78;
      *(_DWORD *)(v25 + 20) = v79;
      *(_DWORD *)(v25 + 24) = v80;
      *(_DWORD *)(v25 + 28) = v81;
      *(_DWORD *)(v25 + 32) = v82;
      *(_DWORD *)(v25 + 36) = v83;
      *(_DWORD *)(v25 + 40) = v84;
      *(_DWORD *)(v25 + 44) = v85;
      *(_DWORD *)(v25 + 48) = v86;
      *(_DWORD *)(v25 + 52) = v87;
      *(_DWORD *)(v25 + 56) = v88;
      *(_DWORD *)(v25 + 60) = v89;
        VADD.F32        S0, S0, S16
    case 2:
        VLDR            S0, [R0,#0x20]
        VLDR            S2, [R0,#0x24]
        VLDR            S4, [R0,#0x28]
        VLDR            S6, [R0,#0x2C]
        VADD.F32        S0, S8, S0
        VADD.F32        S2, S10, S2
        VADD.F32        S4, S12, S4
        VADD.F32        S6, S14, S6
        VSTR            S0, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S4, [R0,#0x38]
        VSTR            S6, [R0,#0x3C]
      v27 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v64 = 1065353216;
      v65 = 0;
      v66 = 0;
      v90 = 1132920832;
      glm::rotate<float>((int)&v74, v27, (int)&v90, (int)&v64);
      *(_DWORD *)v27 = v74;
      *(_DWORD *)(v27 + 4) = v75;
      *(_DWORD *)(v27 + 8) = v76;
      *(_DWORD *)(v27 + 12) = v77;
      *(_DWORD *)(v27 + 16) = v78;
      *(_DWORD *)(v27 + 20) = v79;
      *(_DWORD *)(v27 + 24) = v80;
      *(_DWORD *)(v27 + 28) = v81;
      *(_DWORD *)(v27 + 32) = v82;
      *(_DWORD *)(v27 + 36) = v83;
      *(_DWORD *)(v27 + 40) = v84;
      *(_DWORD *)(v27 + 44) = v85;
      *(_DWORD *)(v27 + 48) = v86;
      *(_DWORD *)(v27 + 52) = v87;
      *(_DWORD *)(v27 + 56) = v88;
      *(_DWORD *)(v27 + 60) = v89;
        VLDR            S0, [SP,#0x110+var_78]
        VSTR            S0, [SP,#0x110+var_78]
    case 3:
        VSUB.F32        S0, S8, S0
        VSUB.F32        S2, S10, S2
        VSUB.F32        S4, S12, S4
        VSUB.F32        S6, S14, S6
      v29 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v61 = 1065353216;
      v62 = 0;
      v63 = 0;
      v90 = 1119092736;
      glm::rotate<float>((int)&v74, v29, (int)&v90, (int)&v61);
      *(_DWORD *)v29 = v74;
      *(_DWORD *)(v29 + 4) = v75;
      *(_DWORD *)(v29 + 8) = v76;
      *(_DWORD *)(v29 + 12) = v77;
      *(_DWORD *)(v29 + 16) = v78;
      *(_DWORD *)(v29 + 20) = v79;
      *(_DWORD *)(v29 + 24) = v80;
      *(_DWORD *)(v29 + 28) = v81;
      *(_DWORD *)(v29 + 32) = v82;
      *(_DWORD *)(v29 + 36) = v83;
      *(_DWORD *)(v29 + 40) = v84;
      *(_DWORD *)(v29 + 44) = v85;
      *(_DWORD *)(v29 + 48) = v86;
      *(_DWORD *)(v29 + 52) = v87;
      *(_DWORD *)(v29 + 56) = v88;
      *(_DWORD *)(v29 + 60) = v89;
      v30 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v58 = 0;
      v59 = 1065353216;
      v60 = 0;
      glm::rotate<float>((int)&v74, v30, (int)&v90, (int)&v58);
      *(_DWORD *)v30 = v74;
      *(_DWORD *)(v30 + 4) = v75;
      *(_DWORD *)(v30 + 8) = v76;
      *(_DWORD *)(v30 + 12) = v77;
      *(_DWORD *)(v30 + 16) = v78;
      *(_DWORD *)(v30 + 20) = v79;
      *(_DWORD *)(v30 + 24) = v80;
      *(_DWORD *)(v30 + 28) = v81;
      *(_DWORD *)(v30 + 32) = v82;
      *(_DWORD *)(v30 + 36) = v83;
      *(_DWORD *)(v30 + 40) = v84;
      *(_DWORD *)(v30 + 44) = v85;
      *(_DWORD *)(v30 + 48) = v86;
      *(_DWORD *)(v30 + 52) = v87;
      *(_DWORD *)(v30 + 56) = v88;
      *(_DWORD *)(v30 + 60) = v89;
    case 4:
        VLDR            S0, [R0,#4]
        VLDR            S2, [R0,#8]
        VLDR            S4, [R0,#0xC]
        VLDR            S6, [R0]
      v32 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v50 = 0;
      v51 = 0;
      v52 = 1065353216;
      glm::rotate<float>((int)&v74, v32, (int)&v90, (int)&v50);
      *(_DWORD *)v32 = v74;
      *(_DWORD *)(v32 + 4) = v75;
      *(_DWORD *)(v32 + 8) = v76;
      *(_DWORD *)(v32 + 12) = v77;
      *(_DWORD *)(v32 + 16) = v78;
      *(_DWORD *)(v32 + 20) = v79;
      *(_DWORD *)(v32 + 24) = v80;
      *(_DWORD *)(v32 + 28) = v81;
      *(_DWORD *)(v32 + 32) = v82;
      *(_DWORD *)(v32 + 36) = v83;
      *(_DWORD *)(v32 + 40) = v84;
      *(_DWORD *)(v32 + 44) = v85;
      *(_DWORD *)(v32 + 48) = v86;
      *(_DWORD *)(v32 + 52) = v87;
      *(_DWORD *)(v32 + 56) = v88;
      *(_DWORD *)(v32 + 60) = v89;
      v33 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v48 = 4575657221408423936LL;
      v49 = 0;
      glm::rotate<float>((int)&v74, v33, (int)&v90, (int)&v48);
      *(_DWORD *)v33 = v74;
      *(_DWORD *)(v33 + 4) = v75;
      *(_DWORD *)(v33 + 8) = v76;
      *(_DWORD *)(v33 + 12) = v77;
      *(_DWORD *)(v33 + 16) = v78;
      *(_DWORD *)(v33 + 20) = v79;
      *(_DWORD *)(v33 + 24) = v80;
      *(_DWORD *)(v33 + 28) = v81;
      *(_DWORD *)(v33 + 32) = v82;
      *(_DWORD *)(v33 + 36) = v83;
      *(_DWORD *)(v33 + 40) = v84;
      *(_DWORD *)(v33 + 44) = v85;
      *(_DWORD *)(v33 + 48) = v86;
      *(_DWORD *)(v33 + 52) = v87;
      *(_DWORD *)(v33 + 56) = v88;
      *(_DWORD *)(v33 + 60) = v89;
        VLDR            S0, [SP,#0x110+var_80]
      goto LABEL_12;
    case 5:
      v35 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v55 = 0;
      v56 = 0;
      v57 = 1065353216;
      glm::rotate<float>((int)&v74, v35, (int)&v90, (int)&v55);
      *(_DWORD *)v35 = v74;
      *(_DWORD *)(v35 + 4) = v75;
      *(_DWORD *)(v35 + 8) = v76;
      *(_DWORD *)(v35 + 12) = v77;
      *(_DWORD *)(v35 + 16) = v78;
      *(_DWORD *)(v35 + 20) = v79;
      *(_DWORD *)(v35 + 24) = v80;
      *(_DWORD *)(v35 + 28) = v81;
      *(_DWORD *)(v35 + 32) = v82;
      *(_DWORD *)(v35 + 36) = v83;
      *(_DWORD *)(v35 + 40) = v84;
      *(_DWORD *)(v35 + 44) = v85;
      *(_DWORD *)(v35 + 48) = v86;
      *(_DWORD *)(v35 + 52) = v87;
      *(_DWORD *)(v35 + 56) = v88;
      *(_DWORD *)(v35 + 60) = v89;
      v36 = MatrixStack::MatrixStackRef::operator->((int)&v70);
      v53 = 4575657221408423936LL;
      v54 = 0;
      glm::rotate<float>((int)&v74, v36, (int)&v90, (int)&v53);
      *(_DWORD *)v36 = v74;
      *(_DWORD *)(v36 + 4) = v75;
      *(_DWORD *)(v36 + 8) = v76;
      *(_DWORD *)(v36 + 12) = v77;
      *(_DWORD *)(v36 + 16) = v78;
      *(_DWORD *)(v36 + 20) = v79;
      *(_DWORD *)(v36 + 24) = v80;
      *(_DWORD *)(v36 + 28) = v81;
      *(_DWORD *)(v36 + 32) = v82;
      *(_DWORD *)(v36 + 36) = v83;
      *(_DWORD *)(v36 + 40) = v84;
      *(_DWORD *)(v36 + 44) = v85;
      *(_DWORD *)(v36 + 48) = v86;
      *(_DWORD *)(v36 + 52) = v87;
      *(_DWORD *)(v36 + 56) = v88;
      *(_DWORD *)(v36 + 60) = v89;
LABEL_12:
      __asm { VSTR            S0, [SP,#0x110+var_80] }
    default:
  BlockPos::BlockPos((int)&v47, (int)&v71);
  _R0 = v46;
  __asm { VLDR            S16, [R0,#4] }
  v38 = BaseEntityRenderContext::isIgnoringLightning(v46);
  __asm { VSTR            S16, [SP,#0x110+var_110] }
  EntityShaderManager::_setupShaderParameters((int)v4, v45, v44, (int)&v47, v42, v38, &Vec2::ONE);
  v39 = *((_DWORD *)v4 + 38);
  if ( *(_DWORD *)(v43 + 4) )
    *((_DWORD *)v4 + 38) = v43;
  v40 = PistonBlockEntity::getProgress((PistonBlockEntity *)_KR00_8, *((float *)v46 + 1));
  PistonArmModel::renderArm((int)v4 + 124, v45, v40);
  *((_DWORD *)v4 + 38) = v39;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v70);
}


void __fastcall PistonBlockEntityRenderer::~PistonBlockEntityRenderer(PistonBlockEntityRenderer *this)
{
  PistonBlockEntityRenderer *v1; // r4@1
  ModelPart *v2; // r5@1
  Model *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB03C;
  v2 = (PistonBlockEntityRenderer *)((char *)this + 184);
  *((_DWORD *)this + 31) = &off_26DB058;
  v3 = (PistonBlockEntityRenderer *)((char *)this + 124);
  ModelPart::~ModelPart((PistonBlockEntityRenderer *)((char *)this + 624));
  ModelPart::~ModelPart((PistonBlockEntityRenderer *)((char *)v1 + 404));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((PistonBlockEntityRenderer *)((char *)v1 + 172));
  Model::~Model(v3);
  mce::TexturePtr::~TexturePtr((PistonBlockEntityRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr((PistonBlockEntityRenderer *)((char *)v1 + 76));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall PistonBlockEntityRenderer::PistonBlockEntityRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r7@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  char *v7; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  char *v17; // [sp+8h] [bp-70h]@3
  char *v18; // [sp+Ch] [bp-6Ch]@3
  int v19; // [sp+10h] [bp-68h]@3
  char v20; // [sp+14h] [bp-64h]@3
  char *v21; // [sp+30h] [bp-48h]@1
  char *v22; // [sp+34h] [bp-44h]@1
  int v23; // [sp+38h] [bp-40h]@1
  char v24; // [sp+3Ch] [bp-3Ch]@1

  v2 = a2;
  v3 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v3 = &off_26DB03C;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 76));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 100));
  PistonArmModel::PistonArmModel((BaseEntityRenderer *)((char *)v3 + 124));
  sub_119C884((void **)&v21, "textures/entity/pistonarm/pistonArm");
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v24, v2, (int)&v22, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 76), (mce::TexturePtr *)&v24);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v24);
  v4 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v21 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v17, "textures/entity/pistonarm/pistonArmSticky");
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v20, v2, (int)&v18, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 100), (mce::TexturePtr *)&v20);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v20);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return v3;
}
