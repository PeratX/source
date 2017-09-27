

void __fastcall EnchantingTableRenderer::~EnchantingTableRenderer(EnchantingTableRenderer *this)
{
  EnchantingTableRenderer::~EnchantingTableRenderer(this);
}


int __fastcall EnchantingTableRenderer::render(EnchantingTableRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  EnchantingTableRenderer *v4; // r11@1
  BlockEntityRenderData *v5; // r5@1
  int v6; // r9@1
  char *v9; // r0@2
  int v10; // r0@3
  float v18; // r1@3
  int v21; // r5@11
  int v23; // r5@11
  float v25; // r1@11
  float v28; // r1@11
  int *v30; // r2@11
  float *v31; // r3@11
  int *v33; // r2@13
  float v34; // r5@17
  int *v35; // r1@17
  Dimension *v37; // r0@19
  int v38; // r0@19
  int v39; // r4@19
  int v42; // [sp+0h] [bp-D8h]@19
  int v43; // [sp+4h] [bp-D4h]@0
  int v44; // [sp+14h] [bp-C4h]@1
  int v45; // [sp+18h] [bp-C0h]@17
  int v46; // [sp+1Ch] [bp-BCh]@13
  int v47; // [sp+20h] [bp-B8h]@11
  int v48; // [sp+24h] [bp-B4h]@11
  float v49; // [sp+28h] [bp-B0h]@14
  float v50; // [sp+2Ch] [bp-ACh]@12
  char v51; // [sp+30h] [bp-A8h]@3
  int v52; // [sp+38h] [bp-A0h]@11
  signed int v53; // [sp+3Ch] [bp-9Ch]@11
  int v54; // [sp+40h] [bp-98h]@11
  int v55; // [sp+44h] [bp-94h]@11
  int v56; // [sp+48h] [bp-90h]@11
  int v57; // [sp+4Ch] [bp-8Ch]@11
  int v58; // [sp+50h] [bp-88h]@11
  int v59; // [sp+54h] [bp-84h]@11
  int v60; // [sp+58h] [bp-80h]@11
  int v61; // [sp+5Ch] [bp-7Ch]@11
  int v62; // [sp+60h] [bp-78h]@11
  int v63; // [sp+64h] [bp-74h]@11
  int v64; // [sp+68h] [bp-70h]@11
  int v65; // [sp+6Ch] [bp-6Ch]@11
  int v66; // [sp+70h] [bp-68h]@11
  int v67; // [sp+74h] [bp-64h]@11
  int v68; // [sp+78h] [bp-60h]@11
  int v69; // [sp+7Ch] [bp-5Ch]@11
  int v70; // [sp+80h] [bp-58h]@11
  float v71; // [sp+84h] [bp-54h]@11

  _R6 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *(_QWORD *)v5;
  _KR08_8 = *((_QWORD *)v5 + 1);
  v44 = *((_QWORD *)v5 + 1) >> 32;
  if ( BlockEntity::isInWorld((BlockEntity *)(*(_QWORD *)v5 >> 32)) == 1 )
  {
    v9 = BlockEntity::getPosition((BlockEntity *)HIDWORD(_KR00_8));
    BlockSource::getData((BlockSource *)_KR00_8, (const BlockPos *)v9);
  }
  v10 = BaseEntityRenderContext::getWorldMatrix(_R6);
  MatrixStack::push((MatrixStack *)&v51, v10);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v51);
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4]
    VMOV.F32        S18, #0.75
    VLDR            S4, [R4,#4]
    VLDR            S6, [R4,#8]
    VLDR            S8, [R0]
    VLDR            S10, [R0,#4]
    VLDR            S1, [R0,#0x10]
    VLDR            S12, [R0,#8]
    VADD.F32        S2, S2, S0
    VLDR            S14, [R0,#0xC]
    VADD.F32        S4, S4, S18
    VLDR            S3, [R0,#0x18]
    VADD.F32        S0, S6, S0
    VLDR            S5, [R0,#0x1C]
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S6, S8, S2
    VLDR            S8, [R0,#0x14]
    VMUL.F32        S1, S1, S4
    VMUL.F32        S10, S10, S2
    VMUL.F32        S8, S8, S4
    VMUL.F32        S14, S14, S2
    VMUL.F32        S2, S12, S2
    VLDR            S12, [R0,#0x24]
    VMUL.F32        S3, S3, S4
    VMUL.F32        S4, S5, S4
    VMUL.F32        S5, S7, S0
    VLDR            S7, [R0,#0x28]
    VADD.F32        S6, S1, S6
    VADD.F32        S8, S8, S10
    VLDR            S10, [R0,#0x2C]
    VMUL.F32        S12, S12, S0
    VMUL.F32        S1, S7, S0
    VADD.F32        S2, S3, S2
    VMUL.F32        S0, S10, S0
    VLDR            S10, [R0,#0x34]
    VADD.F32        S4, S4, S14
    VADD.F32        S6, S6, S5
    VADD.F32        S8, S8, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S2, S2, S1
    VADD.F32        S0, S4, S0
    VLDR            S4, [R0,#0x30]
    VADD.F32        S4, S6, S4
    VLDR            S6, [R0,#0x3C]
    VADD.F32        S2, S2, S12
    VADD.F32        S0, S0, S6
    VSTR            S4, [R0,#0x30]
    VSTR            S8, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
    VLDR            S0, [R7,#0x8C]
    VCVT.F32.S32    S16, S0
    VLDR            S20, [R6,#4]
  _R5 = MatrixStack::MatrixStackRef::operator->((int)&v51);
    VADD.F32        S16, S16, S20
    VLDR            S20, =0.1
    VMUL.F32        S0, S16, S20
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, v18);
    VMOV            S0, R0
    VLDR            S2, =0.01
    VLDR            S4, [R5,#0x18]
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R5,#0x14]
    VLDR            S6, [R5,#0x1C]
    VLDR            S8, [R5,#0x10]
    VLDR            S10, [R5,#0x34]
    VLDR            S12, [R5,#0x38]
    VLDR            S14, [R5,#0x3C]
    VADD.F32        S0, S0, S20
  _R0 = &mce::Math::PI;
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R5,#0x30]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S6, S6, S8
    VADD.F32        S0, S14, S0
    VSTR            S6, [R5,#0x30]
    VSTR            S2, [R5,#0x34]
    VSTR            S4, [R5,#0x38]
    VSTR            S0, [R5,#0x3C]
    VLDR            S0, [R7,#0x70]
    VLDR            S20, [R7,#0x74]
    VSUB.F32        S22, S0, S20
    VLDR            S0, [R0]
    VCMPE.F32       S22, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm { VADD.F32        S2, S0, S0 }
    do
    {
      __asm
      {
        VSUB.F32        S22, S22, S2
        VCMPE.F32       S22, S0
        VMRS            APSR_nzcv, FPSCR
      }
    }
    while ( !(_NF ^ _VF) );
    VNEG.F32        S2, S0
    VCMPE.F32       S22, S2
  if ( _NF ^ _VF )
    __asm { VADD.F32        S0, S0, S0 }
        VADD.F32        S22, S0, S22
        VCMPE.F32       S22, S2
    while ( _NF ^ _VF );
  __asm { VLDR            S24, [R6,#4] }
  v21 = MatrixStack::MatrixStackRef::operator->((int)&v51);
  __asm { VMUL.F32        S0, S24, S22 }
  _R0 = &mce::Math::RADDEG;
  v52 = 0;
  v53 = 1065353216;
  v54 = 0;
    VLDR            S2, [R0]
    VNMUL.F32       S0, S0, S2
    VSTR            S0, [SP,#0xD8+var_54]
  glm::rotate<float>((int)&v55, v21, (int)&v71, (int)&v52);
  *(_DWORD *)v21 = v55;
  *(_DWORD *)(v21 + 4) = v56;
  *(_DWORD *)(v21 + 8) = v57;
  *(_DWORD *)(v21 + 12) = v58;
  *(_DWORD *)(v21 + 16) = v59;
  *(_DWORD *)(v21 + 20) = v60;
  *(_DWORD *)(v21 + 24) = v61;
  *(_DWORD *)(v21 + 28) = v62;
  *(_DWORD *)(v21 + 32) = v63;
  *(_DWORD *)(v21 + 36) = v64;
  *(_DWORD *)(v21 + 40) = v65;
  *(_DWORD *)(v21 + 44) = v66;
  *(_DWORD *)(v21 + 48) = v67;
  *(_DWORD *)(v21 + 52) = v68;
  *(_DWORD *)(v21 + 56) = v69;
  *(_DWORD *)(v21 + 60) = v70;
  v23 = MatrixStack::MatrixStackRef::operator->((int)&v51);
  v53 = 0;
  v71 = 80.0;
  v54 = 1065353216;
  glm::rotate<float>((int)&v55, v23, (int)&v71, (int)&v52);
  __asm { VMOV.F32        S4, #0.25 }
  *(_DWORD *)v23 = v55;
  *(_DWORD *)(v23 + 4) = v56;
  *(_DWORD *)(v23 + 8) = v57;
  *(_DWORD *)(v23 + 12) = v58;
  *(_DWORD *)(v23 + 16) = v59;
  *(_DWORD *)(v23 + 20) = v60;
  *(_DWORD *)(v23 + 24) = v61;
  *(_DWORD *)(v23 + 28) = v62;
  *(_DWORD *)(v23 + 32) = v63;
  *(_DWORD *)(v23 + 36) = v64;
  *(_DWORD *)(v23 + 40) = v65;
  *(_DWORD *)(v23 + 44) = v66;
  *(_DWORD *)(v23 + 48) = v67;
  *(_DWORD *)(v23 + 52) = v68;
  *(_DWORD *)(v23 + 56) = v69;
  *(_DWORD *)(v23 + 60) = v70;
    VLDR            S2, [R7,#0x80]
    VLDR            S0, [R7,#0x7C]
    VLDR            S6, [R6,#4]
    VADD.F32        S4, S2, S4
    VSUB.F32        S0, S0, S2
    VADD.F32        S2, S2, S18
    VADD.F32        S20, S4, S0
    VADD.F32        S18, S2, S0
    VMOV            R0, S20
    VSTR            S20, [SP,#0xD8+var_AC]
    VSTR            S18, [SP,#0xD8+var_B0]
  _R0 = mce::Math::floor(_R0, v25);
    VLDR            S22, =1.6
    VMOV            R0, S18
    VLDR            S24, =-0.3
    VCVT.F32.S32    S0, S0
    VSUB.F32        S0, S20, S0
    VMUL.F32        S0, S0, S22
    VADD.F32        S20, S0, S24
  _R0 = mce::Math::floor(_R0, v28);
    VCMPE.F32       S20, #0.0
  v30 = &v48;
  v48 = 0;
  __asm { VMOV.F32        S2, #1.0 }
  v31 = (float *)&v47;
    VSUB.F32        S0, S18, S0
    VADD.F32        S0, S0, S24
    VCMPE.F32       S0, #0.0
    VSTR            S0, [SP,#0xD8+var_B0]
    v30 = (int *)&v50;
  __asm { VMRS            APSR_nzcv, FPSCR }
  _R2 = *(float *)v30;
  v47 = 0;
  v50 = _R2;
  __asm { VMOV            S0, R2 }
  v33 = &v46;
  __asm { VCMPE.F32       S0, S2 }
    v31 = &v49;
  v49 = *v31;
  v46 = 1065353216;
    VMOV            S0, R3
    VCMPE.F32       S0, S2
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v33 = (int *)&v50;
  v34 = *(float *)v33;
  v35 = &v45;
  v50 = *(float *)v33;
  v45 = 1065353216;
    v35 = (int *)&v49;
  _R4 = *(float *)v35;
  v49 = *(float *)v35;
  v37 = (Dimension *)BlockSource::getDimension((BlockSource *)_KR00_8);
  v38 = Dimension::hasCeiling(v37);
  EntityShaderManager::_setupShaderParameters((int)v4, v6, 1065353216, (int)&Color::NIL, v38);
    VLDR            S2, [R7,#0x68]
    VMOV            S0, R4
    VLDR            S4, [R7,#0x6C]
    VSUB.F32        S2, S2, S4
  v39 = *((_DWORD *)v4 + 32);
  if ( *(_DWORD *)(v44 + 4) )
    *((_DWORD *)v4 + 32) = v44;
    VMOV            R2, S16
    VMUL.F32        S2, S2, S6
    VADD.F32        S2, S2, S4
    VSTR            S2, [SP,#0xD8+var_D4]
    VSTR            S0, [SP,#0xD8+var_D8]
  EnchantingBookModel::render((int)v4 + 100, *(float *)&v6, _R2, v34, v42, v43, 0, 1031798784);
  *((_DWORD *)v4 + 32) = v39;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v51);
}


BaseEntityRenderer *__fastcall EnchantingTableRenderer::EnchantingTableRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r7@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+8h] [bp-40h]@1
  char *v12; // [sp+Ch] [bp-3Ch]@1
  int v13; // [sp+10h] [bp-38h]@1
  char v14; // [sp+14h] [bp-34h]@1

  v2 = a2;
  v3 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v3 = &off_26DAFCC;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 76));
  EnchantingBookModel::EnchantingBookModel((BaseEntityRenderer *)((char *)v3 + 100));
  sub_119C884((void **)&v11, "textures/entity/enchanting_table_book");
  v12 = v11;
  v11 = (char *)&unk_28898CC;
  v13 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v14, v2, (int)&v12, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v3 + 76), (mce::TexturePtr *)&v14);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v14);
  v4 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  *((_DWORD *)v3 + 33) = (char *)v3 + 76;
  return v3;
}


int __fastcall EnchantingTableRenderer::~EnchantingTableRenderer(EnchantingTableRenderer *this)
{
  EnchantingTableRenderer *v1; // r4@1
  ModelPart *v2; // r6@1
  Model *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAFCC;
  v2 = (EnchantingTableRenderer *)((char *)this + 160);
  *((_DWORD *)this + 25) = &off_26E5458;
  v3 = (EnchantingTableRenderer *)((char *)this + 100);
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)this + 1480));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 1260));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 1040));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 820));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 600));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 380));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((EnchantingTableRenderer *)((char *)v1 + 148));
  Model::~Model(v3);
  mce::TexturePtr::~TexturePtr((EnchantingTableRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


void __fastcall EnchantingTableRenderer::~EnchantingTableRenderer(EnchantingTableRenderer *this)
{
  EnchantingTableRenderer *v1; // r4@1
  ModelPart *v2; // r6@1
  Model *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAFCC;
  v2 = (EnchantingTableRenderer *)((char *)this + 160);
  *((_DWORD *)this + 25) = &off_26E5458;
  v3 = (EnchantingTableRenderer *)((char *)this + 100);
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)this + 1480));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 1260));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 1040));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 820));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 600));
  ModelPart::~ModelPart((EnchantingTableRenderer *)((char *)v1 + 380));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((EnchantingTableRenderer *)((char *)v1 + 148));
  Model::~Model(v3);
  mce::TexturePtr::~TexturePtr((EnchantingTableRenderer *)((char *)v1 + 76));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
