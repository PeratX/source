

int __fastcall ShulkerBoxRenderer::render(ShulkerBoxRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  ShulkerBoxRenderer *v4; // r11@1
  BlockEntityRenderData *v5; // r5@1
  int v6; // r10@1
  int v8; // r0@1
  int v15; // r4@4
  int v18; // r4@6
  int v21; // r4@8
  signed int v22; // r0@9
  int v24; // r4@10
  int v26; // r4@11
  char *v31; // r0@15
  char *v32; // r0@16
  char *v33; // r0@21
  int v34; // r0@22
  const mce::TexturePtr *v35; // r1@22
  int v36; // r0@24
  int v38; // [sp+0h] [bp-D8h]@0
  int v39; // [sp+10h] [bp-C8h]@1
  int v40; // [sp+14h] [bp-C4h]@1
  BlockSource *v41; // [sp+18h] [bp-C0h]@1
  unsigned int v42; // [sp+1Ch] [bp-BCh]@1
  char v43; // [sp+20h] [bp-B8h]@24
  __int64 v44; // [sp+38h] [bp-A0h]@18
  int v45; // [sp+44h] [bp-94h]@15
  int v46; // [sp+48h] [bp-90h]@15
  int v47; // [sp+4Ch] [bp-8Ch]@15
  char v48; // [sp+50h] [bp-88h]@1
  int v49; // [sp+58h] [bp-80h]@4
  int v50; // [sp+5Ch] [bp-7Ch]@4
  int v51; // [sp+60h] [bp-78h]@4
  int v52; // [sp+64h] [bp-74h]@4
  int v53; // [sp+68h] [bp-70h]@4
  int v54; // [sp+6Ch] [bp-6Ch]@4
  int v55; // [sp+70h] [bp-68h]@4
  int v56; // [sp+74h] [bp-64h]@4
  int v57; // [sp+78h] [bp-60h]@4
  int v58; // [sp+7Ch] [bp-5Ch]@4
  int v59; // [sp+80h] [bp-58h]@4
  int v60; // [sp+84h] [bp-54h]@4
  int v61; // [sp+88h] [bp-50h]@4
  int v62; // [sp+8Ch] [bp-4Ch]@4
  int v63; // [sp+90h] [bp-48h]@4
  int v64; // [sp+94h] [bp-44h]@4
  int v65; // [sp+98h] [bp-40h]@4
  int v66; // [sp+9Ch] [bp-3Ch]@4
  int v67; // [sp+A0h] [bp-38h]@4
  int v68; // [sp+A4h] [bp-34h]@4

  _R9 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v41 = *(BlockSource **)v5;
  _R6 = *(_QWORD *)((char *)v5 + 4);
  v40 = *((_DWORD *)v5 + 3);
  v39 = *((_DWORD *)v5 + 4);
  v42 = *((_DWORD *)_R9 + 2);
  v8 = BaseEntityRenderContext::getWorldMatrix(_R9);
  MatrixStack::push((MatrixStack *)&v48, v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v48);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R7]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R7,#4]
    VMUL.F32        S0, S0, S8
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R7,#8]
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  }
  if ( BlockEntity::isInWorld((BlockEntity *)_R6) == 1 )
    switch ( ShulkerBoxBlockEntity::getFacingDir((ShulkerBoxBlockEntity *)_R6) )
    {
      case 0:
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v48);
        __asm
        {
          VLDR            S0, [R0,#4]
          VMOV.F32        S9, #0.5
          VLDR            S8, [R0,#0x14]
          VLDR            S2, [R0,#8]
          VLDR            S10, [R0,#0x18]
          VSUB.F32        S0, S0, S8
          VLDR            S4, [R0,#0xC]
          VLDR            S12, [R0,#0x1C]
          VSUB.F32        S2, S2, S10
          VLDR            S6, [R0,#0x10]
          VLDR            S14, [R0]
          VSUB.F32        S4, S4, S12
          VLDR            S10, [R0,#0x24]
          VSUB.F32        S6, S14, S6
          VLDR            S8, [R0,#0x20]
          VLDR            S12, [R0,#0x28]
          VADD.F32        S0, S0, S10
          VLDR            S14, [R0,#0x2C]
          VADD.F32        S2, S2, S12
          VLDR            S1, [R0,#0x30]
          VLDR            S3, [R0,#0x34]
          VADD.F32        S4, S4, S14
          VLDR            S5, [R0,#0x38]
          VLDR            S7, [R0,#0x3C]
          VADD.F32        S6, S6, S8
          VMUL.F32        S0, S0, S9
          VMUL.F32        S2, S2, S9
          VMUL.F32        S4, S4, S9
          VMUL.F32        S6, S6, S9
          VADD.F32        S0, S0, S3
          VADD.F32        S2, S2, S5
          VADD.F32        S4, S4, S7
          VADD.F32        S6, S6, S1
        }
        goto LABEL_5;
      case 1:
          VLDR            S0, [R0]
          VMOV.F32        S8, #1.5
          VLDR            S12, [R0,#0x20]
          VMOV.F32        S14, #0.5
          VLDR            S2, [R0,#4]
          VADD.F32        S0, S12, S0
          VLDR            S4, [R0,#8]
          VADD.F32        S2, S10, S2
          VLDR            S10, [R0,#0x28]
          VLDR            S6, [R0,#0xC]
          VLDR            S12, [R0,#0x2C]
          VADD.F32        S4, S10, S4
          VLDR            S10, [R0,#0x10]
          VADD.F32        S6, S12, S6
          VLDR            S1, [R0,#0x14]
          VMUL.F32        S10, S10, S8
          VLDR            S3, [R0,#0x1C]
          VMUL.F32        S0, S0, S14
          VMUL.F32        S12, S1, S8
          VLDR            S1, [R0,#0x18]
          VMUL.F32        S2, S2, S14
          VMUL.F32        S1, S1, S8
          VMUL.F32        S4, S4, S14
          VMUL.F32        S8, S3, S8
          VMUL.F32        S6, S6, S14
          VLDR            S10, [R0,#0x34]
          VLDR            S12, [R0,#0x38]
          VADD.F32        S4, S4, S1
          VLDR            S8, [R0,#0x30]
          VADD.F32        S0, S0, S8
          VLDR            S8, [R0,#0x3C]
          VADD.F32        S2, S2, S10
          VADD.F32        S4, S4, S12
          VSTR            S0, [R0,#0x30]
          VSTR            S2, [R0,#0x34]
          VSTR            S4, [R0,#0x38]
          VSTR            S6, [R0,#0x3C]
        v18 = MatrixStack::MatrixStackRef::operator->((int)&v48);
        v49 = 1065353216;
        v50 = 0;
        v51 = 0;
        goto LABEL_9;
      case 2:
          VADD.F32        S0, S8, S0
          VADD.F32        S4, S12, S4
          VADD.F32        S6, S6, S14
          VSUB.F32        S0, S0, S10
          VSUB.F32        S2, S2, S12
          VSUB.F32        S4, S4, S14
          VSUB.F32        S6, S6, S8
          VSTR            S6, [R0,#0x30]
          VSTR            S0, [R0,#0x34]
          VSTR            S2, [R0,#0x38]
          VSTR            S4, [R0,#0x3C]
        goto LABEL_12;
      case 3:
          VMOV.F32        S1, #1.5
          VMOV.F32        S3, #0.5
          VLDR            S10, [R0,#0x20]
          VLDR            S8, [R0,#0x24]
          VMUL.F32        S10, S10, S1
          VMUL.F32        S6, S6, S3
          VMUL.F32        S8, S8, S1
          VMUL.F32        S0, S0, S3
          VMUL.F32        S12, S12, S1
          VMUL.F32        S2, S2, S3
          VMUL.F32        S14, S14, S1
          VMUL.F32        S4, S4, S3
          VADD.F32        S6, S10, S6
          VADD.F32        S2, S12, S2
          VADD.F32        S4, S14, S4
          VADD.F32        S4, S4, S8
        v21 = MatrixStack::MatrixStackRef::operator->((int)&v48);
        v68 = 1119092736;
        glm::rotate<float>((int)&v52, v21, (int)&v68, (int)&v49);
        *(_DWORD *)v21 = v52;
        *(_DWORD *)(v21 + 4) = v53;
        *(_DWORD *)(v21 + 8) = v54;
        *(_DWORD *)(v21 + 12) = v55;
        *(_DWORD *)(v21 + 16) = v56;
        *(_DWORD *)(v21 + 20) = v57;
        *(_DWORD *)(v21 + 24) = v58;
        *(_DWORD *)(v21 + 28) = v59;
        *(_DWORD *)(v21 + 32) = v60;
        *(_DWORD *)(v21 + 36) = v61;
        *(_DWORD *)(v21 + 40) = v62;
        *(_DWORD *)(v21 + 44) = v63;
        *(_DWORD *)(v21 + 48) = v64;
        *(_DWORD *)(v21 + 52) = v65;
        *(_DWORD *)(v21 + 56) = v66;
        *(_DWORD *)(v21 + 60) = v67;
        v49 = 0;
        v51 = 1065353216;
LABEL_9:
        v22 = 1127481344;
        goto LABEL_13;
      case 4:
          VSUB.F32        S0, S8, S0
          VSUB.F32        S2, S10, S2
          VSUB.F32        S4, S12, S4
          VSUB.F32        S6, S6, S14
        v24 = MatrixStack::MatrixStackRef::operator->((int)&v48);
        glm::rotate<float>((int)&v52, v24, (int)&v68, (int)&v49);
        *(_DWORD *)v24 = v52;
        *(_DWORD *)(v24 + 4) = v53;
        *(_DWORD *)(v24 + 8) = v54;
        *(_DWORD *)(v24 + 12) = v55;
        *(_DWORD *)(v24 + 16) = v56;
        *(_DWORD *)(v24 + 20) = v57;
        *(_DWORD *)(v24 + 24) = v58;
        *(_DWORD *)(v24 + 28) = v59;
        *(_DWORD *)(v24 + 32) = v60;
        *(_DWORD *)(v24 + 36) = v61;
        *(_DWORD *)(v24 + 40) = v62;
        *(_DWORD *)(v24 + 44) = v63;
        *(_DWORD *)(v24 + 48) = v64;
        *(_DWORD *)(v24 + 52) = v65;
        *(_DWORD *)(v24 + 56) = v66;
        *(_DWORD *)(v24 + 60) = v67;
        v22 = -1028390912;
      case 5:
          VLDR            S8, [R0,#0x10]
          VMOV.F32        S1, #0.5
          VLDR            S3, [R0,#0x20]
          VMOV.F32        S5, #1.5
          VLDR            S14, [R0,#0x14]
          VLDR            S7, [R0,#0x24]
          VADD.F32        S8, S3, S8
          VADD.F32        S14, S7, S14
          VLDR            S3, [R0,#0x28]
          VLDR            S7, [R0,#0x2C]
          VADD.F32        S10, S3, S10
          VADD.F32        S12, S7, S12
          VMUL.F32        S0, S0, S5
          VMUL.F32        S2, S2, S5
          VMUL.F32        S4, S4, S5
          VMUL.F32        S6, S6, S5
          VADD.F32        S2, S14, S2
        v26 = MatrixStack::MatrixStackRef::operator->((int)&v48);
        glm::rotate<float>((int)&v52, v26, (int)&v68, (int)&v49);
        *(_DWORD *)v26 = v52;
        *(_DWORD *)(v26 + 4) = v53;
        *(_DWORD *)(v26 + 8) = v54;
        *(_DWORD *)(v26 + 12) = v55;
        *(_DWORD *)(v26 + 16) = v56;
        *(_DWORD *)(v26 + 20) = v57;
        *(_DWORD *)(v26 + 24) = v58;
        *(_DWORD *)(v26 + 28) = v59;
        *(_DWORD *)(v26 + 32) = v60;
        *(_DWORD *)(v26 + 36) = v61;
        *(_DWORD *)(v26 + 40) = v62;
        *(_DWORD *)(v26 + 44) = v63;
        *(_DWORD *)(v26 + 48) = v64;
        *(_DWORD *)(v26 + 52) = v65;
        *(_DWORD *)(v26 + 56) = v66;
        *(_DWORD *)(v26 + 60) = v67;
LABEL_12:
        v22 = 1119092736;
LABEL_13:
        v68 = v22;
        glm::rotate<float>((int)&v52, v18, (int)&v68, (int)&v49);
        *(_DWORD *)v18 = v52;
        *(_DWORD *)(v18 + 4) = v53;
        *(_DWORD *)(v18 + 8) = v54;
        *(_DWORD *)(v18 + 12) = v55;
        *(_DWORD *)(v18 + 16) = v56;
        *(_DWORD *)(v18 + 20) = v57;
        *(_DWORD *)(v18 + 24) = v58;
        *(_DWORD *)(v18 + 28) = v59;
        *(_DWORD *)(v18 + 32) = v60;
        *(_DWORD *)(v18 + 36) = v61;
        *(_DWORD *)(v18 + 40) = v62;
        *(_DWORD *)(v18 + 44) = v63;
        *(_DWORD *)(v18 + 48) = v64;
        *(_DWORD *)(v18 + 52) = v65;
        *(_DWORD *)(v18 + 56) = v66;
        *(_DWORD *)(v18 + 60) = v67;
        break;
      default:
    }
  else
    v15 = MatrixStack::MatrixStackRef::operator->((int)&v48);
    v49 = 1065353216;
    v50 = 0;
    v51 = 0;
    v68 = 1127481344;
    glm::rotate<float>((int)&v52, v15, (int)&v68, (int)&v49);
    *(_DWORD *)v15 = v52;
    *(_DWORD *)(v15 + 4) = v53;
    *(_DWORD *)(v15 + 8) = v54;
    *(_DWORD *)(v15 + 12) = v55;
    *(_DWORD *)(v15 + 16) = v56;
    *(_DWORD *)(v15 + 20) = v57;
    *(_DWORD *)(v15 + 24) = v58;
    *(_DWORD *)(v15 + 28) = v59;
    *(_DWORD *)(v15 + 32) = v60;
    *(_DWORD *)(v15 + 36) = v61;
    *(_DWORD *)(v15 + 40) = v62;
    *(_DWORD *)(v15 + 44) = v63;
    *(_DWORD *)(v15 + 48) = v64;
    *(_DWORD *)(v15 + 52) = v65;
    *(_DWORD *)(v15 + 56) = v66;
    *(_DWORD *)(v15 + 60) = v67;
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v48);
    __asm
      VLDR            S0, [R0,#0x14]
      VLDR            S10, [R0,#0x34]
      VLDR            S2, [R0,#0x18]
      VLDR            S12, [R0,#0x38]
      VSUB.F32        S0, S10, S0
      VLDR            S4, [R0,#0x1C]
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S2, S12, S2
      VLDR            S6, [R0,#0x10]
      VLDR            S8, [R0,#0x30]
      VSUB.F32        S4, S14, S4
      VSUB.F32        S6, S8, S6
LABEL_5:
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
    VLDR            S0, =0.0624
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
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
  _R4 = ChestBlockEntity::getOldOpenness((ChestBlockEntity *)_R6);
  _R8 = ChestBlockEntity::getOpenness((ChestBlockEntity *)_R6);
  _R0 = ChestBlockEntity::getOldOpenness((ChestBlockEntity *)_R6);
    VMOV            S2, R8
    VMOV            S4, R0
    VMOV.F32        S6, #1.0
    VSUB.F32        S2, S4, S2
    VLDR            S4, [R9,#4]
    VMOV            S0, R4
    VSUB.F32        S0, S6, S0
    VMUL.F32        S2, S4, S2
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S0, S0
    VSUB.F32        S0, S0, S6
    VSTR            S0, [R11,#0x3D8]
    v31 = BlockEntity::getPosition((BlockEntity *)_R6);
    v45 = *(_DWORD *)v31;
    v46 = *((_DWORD *)v31 + 1);
    v47 = *((_DWORD *)v31 + 2);
    v32 = BaseEntityRenderContext::getCameraTargetPosition(_R9);
    BlockPos::BlockPos((int)&v45, (int)v32);
  if ( *((_DWORD *)v5 + 5) )
    v44 = 4647714816528482304LL;
    v44 = *(_QWORD *)&Vec2::ONE;
    v33 = BlockEntity::getPosition((BlockEntity *)_R6);
    v42 = BlockSource::getData(v41, (const BlockPos *)v33);
  v34 = ShulkerBoxBlockEntity::getUndyed((ShulkerBoxBlockEntity *)_R6);
  v35 = (ShulkerBoxRenderer *)((char *)v4 + 24 * v42 + 76);
  if ( v34 )
    v35 = (ShulkerBoxRenderer *)((char *)v4 + 460);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v43, v35);
  __asm { VLDR            S16, [R9,#4] }
  v36 = BaseEntityRenderContext::isIgnoringLightning(_R9);
  __asm { VSTR            S16, [SP,#0xD8+var_D8] }
  EntityShaderManager::_setupShaderParameters((int)v4, v6, (int)v41, (int)&v45, v38, v36, &v44);
  BlockEntityRenderer::_renderModel((int)v4, v6, (int)v4 + 484, (int)&v43, v40, v39);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v43);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v48);
}


void __fastcall ShulkerBoxRenderer::~ShulkerBoxRenderer(ShulkerBoxRenderer *this)
{
  ShulkerBoxRenderer::~ShulkerBoxRenderer(this);
}


void __fastcall ShulkerBoxRenderer::~ShulkerBoxRenderer(ShulkerBoxRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)ShulkerBoxRenderer::~ShulkerBoxRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall ShulkerBoxRenderer::renderByItem(ShulkerBoxRenderer *this, BaseEntityRenderContext *a2, const ItemInstance *a3)
{
  BaseEntityRenderContext *v3; // r7@1
  ShulkerBoxRenderer *v4; // r4@1
  const ItemInstance *v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r7@1
  const mce::TexturePtr *v15; // r1@2
  char v17; // [sp+4h] [bp-84h]@4
  char v18; // [sp+1Ch] [bp-6Ch]@1
  int v19; // [sp+24h] [bp-64h]@1
  int v20; // [sp+28h] [bp-60h]@1
  int v21; // [sp+2Ch] [bp-5Ch]@1
  int v22; // [sp+30h] [bp-58h]@1
  int v23; // [sp+34h] [bp-54h]@1
  int v24; // [sp+38h] [bp-50h]@1
  int v25; // [sp+3Ch] [bp-4Ch]@1
  int v26; // [sp+40h] [bp-48h]@1
  int v27; // [sp+44h] [bp-44h]@1
  int v28; // [sp+48h] [bp-40h]@1
  int v29; // [sp+4Ch] [bp-3Ch]@1
  int v30; // [sp+50h] [bp-38h]@1
  int v31; // [sp+54h] [bp-34h]@1
  int v32; // [sp+58h] [bp-30h]@1
  int v33; // [sp+5Ch] [bp-2Ch]@1
  int v34; // [sp+60h] [bp-28h]@1
  int v35; // [sp+64h] [bp-24h]@1
  int v36; // [sp+68h] [bp-20h]@1
  int v37; // [sp+6Ch] [bp-1Ch]@1
  int v38; // [sp+70h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = BaseEntityRenderContext::getWorldMatrix(v3);
  MatrixStack::push((MatrixStack *)&v18, v7);
  v8 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  v19 = 1065353216;
  v20 = 0;
  v21 = 0;
  v38 = 1127481344;
  glm::rotate<float>((int)&v22, v8, (int)&v38, (int)&v19);
  *(_DWORD *)v8 = v22;
  *(_DWORD *)(v8 + 4) = v23;
  *(_DWORD *)(v8 + 8) = v24;
  *(_DWORD *)(v8 + 12) = v25;
  *(_DWORD *)(v8 + 16) = v26;
  *(_DWORD *)(v8 + 20) = v27;
  *(_DWORD *)(v8 + 24) = v28;
  *(_DWORD *)(v8 + 28) = v29;
  *(_DWORD *)(v8 + 32) = v30;
  *(_DWORD *)(v8 + 36) = v31;
  *(_DWORD *)(v8 + 40) = v32;
  *(_DWORD *)(v8 + 44) = v33;
  *(_DWORD *)(v8 + 48) = v34;
  *(_DWORD *)(v8 + 52) = v35;
  *(_DWORD *)(v8 + 56) = v36;
  *(_DWORD *)(v8 + 60) = v37;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v18);
  __asm
  {
    VLDR            S0, [R0,#0x14]
    VLDR            S10, [R0,#0x34]
    VLDR            S2, [R0,#0x18]
    VLDR            S12, [R0,#0x38]
    VSUB.F32        S0, S10, S0
    VLDR            S4, [R0,#0x1C]
    VLDR            S14, [R0,#0x3C]
    VSUB.F32        S2, S12, S2
    VLDR            S6, [R0,#0x10]
    VLDR            S8, [R0,#0x30]
    VSUB.F32        S4, S14, S4
    VSUB.F32        S6, S8, S6
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
  }
    VLDR            S0, =0.0624
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
  *((_DWORD *)v4 + 246) = 0;
  if ( Block::isType(*((Block **)v5 + 1), (const Block *)Block::mUndyedShulkerBox) == 1 )
    v15 = (ShulkerBoxRenderer *)((char *)v4 + 460);
  else
    v15 = (ShulkerBoxRenderer *)((char *)v4 + 24 * ItemInstance::getAuxValue(v5) + 76);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v17, v15);
  BlockEntityRenderer::_renderModel((int)v4, v6, (int)v4 + 484, (int)&v17);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v17);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v18);
}


BaseEntityRenderer *__fastcall ShulkerBoxRenderer::ShulkerBoxRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r7@1
  mce::TextureGroup *v4; // r11@1
  BaseEntityRenderer *v5; // r4@1
  void *v6; // r0@1
  char *v7; // r0@2
  char *v8; // r0@3
  char *v9; // r0@4
  char *v10; // r0@5
  char *v11; // r0@6
  char *v12; // r0@7
  char *v13; // r0@8
  char *v14; // r0@9
  char *v15; // r0@10
  char *v16; // r0@11
  char *v17; // r0@12
  char *v18; // r0@13
  char *v19; // r0@14
  char *v20; // r0@15
  char *v21; // r0@16
  char *v22; // r0@17
  char *v23; // r0@18
  char *v24; // r0@19
  char *v25; // r0@20
  char *v26; // r0@21
  char *v27; // r0@22
  char *v28; // r0@23
  char *v29; // r0@24
  char *v30; // r0@25
  char *v31; // r0@26
  char *v32; // r0@27
  char *v33; // r0@28
  char *v34; // r0@29
  char *v35; // r0@30
  char *v36; // r0@31
  char *v37; // r0@32
  char *v38; // r0@33
  char *v39; // r0@34
  char *v40; // r0@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  unsigned int *v56; // r2@65
  signed int v57; // r1@67
  unsigned int *v58; // r2@69
  signed int v59; // r1@71
  unsigned int *v60; // r2@73
  signed int v61; // r1@75
  unsigned int *v62; // r2@77
  signed int v63; // r1@79
  unsigned int *v64; // r2@81
  signed int v65; // r1@83
  unsigned int *v66; // r2@85
  signed int v67; // r1@87
  unsigned int *v68; // r2@89
  signed int v69; // r1@91
  unsigned int *v70; // r2@93
  signed int v71; // r1@95
  unsigned int *v72; // r2@97
  signed int v73; // r1@99
  unsigned int *v74; // r2@101
  signed int v75; // r1@103
  unsigned int *v76; // r2@105
  signed int v77; // r1@107
  unsigned int *v78; // r2@109
  signed int v79; // r1@111
  unsigned int *v80; // r2@113
  signed int v81; // r1@115
  unsigned int *v82; // r2@117
  signed int v83; // r1@119
  unsigned int *v84; // r2@121
  signed int v85; // r1@123
  unsigned int *v86; // r2@125
  signed int v87; // r1@127
  unsigned int *v88; // r2@129
  signed int v89; // r1@131
  unsigned int *v90; // r2@133
  signed int v91; // r1@135
  unsigned int *v92; // r2@137
  signed int v93; // r1@139
  unsigned int *v94; // r2@141
  signed int v95; // r1@143
  unsigned int *v96; // r2@145
  signed int v97; // r1@147
  unsigned int *v98; // r2@149
  signed int v99; // r1@151
  unsigned int *v100; // r2@153
  signed int v101; // r1@155
  unsigned int *v102; // r2@157
  signed int v103; // r1@159
  unsigned int *v104; // r2@161
  signed int v105; // r1@163
  unsigned int *v106; // r2@165
  signed int v107; // r1@167
  unsigned int *v108; // r2@169
  signed int v109; // r1@171
  unsigned int *v110; // r2@173
  signed int v111; // r1@175
  char *v112; // [sp+3Ch] [bp-2DCh]@34
  char *v113; // [sp+40h] [bp-2D8h]@34
  int v114; // [sp+44h] [bp-2D4h]@34
  char v115; // [sp+48h] [bp-2D0h]@34
  char *v116; // [sp+64h] [bp-2B4h]@32
  char *v117; // [sp+68h] [bp-2B0h]@32
  int v118; // [sp+6Ch] [bp-2ACh]@32
  char v119; // [sp+70h] [bp-2A8h]@32
  char *v120; // [sp+8Ch] [bp-28Ch]@30
  char *v121; // [sp+90h] [bp-288h]@30
  int v122; // [sp+94h] [bp-284h]@30
  char v123; // [sp+98h] [bp-280h]@30
  char *v124; // [sp+B4h] [bp-264h]@28
  char *v125; // [sp+B8h] [bp-260h]@28
  int v126; // [sp+BCh] [bp-25Ch]@28
  char v127; // [sp+C0h] [bp-258h]@28
  char *v128; // [sp+DCh] [bp-23Ch]@26
  char *v129; // [sp+E0h] [bp-238h]@26
  int v130; // [sp+E4h] [bp-234h]@26
  char v131; // [sp+E8h] [bp-230h]@26
  char *v132; // [sp+104h] [bp-214h]@24
  char *v133; // [sp+108h] [bp-210h]@24
  int v134; // [sp+10Ch] [bp-20Ch]@24
  char v135; // [sp+110h] [bp-208h]@24
  char *v136; // [sp+12Ch] [bp-1ECh]@22
  char *v137; // [sp+130h] [bp-1E8h]@22
  int v138; // [sp+134h] [bp-1E4h]@22
  char v139; // [sp+138h] [bp-1E0h]@22
  char *v140; // [sp+154h] [bp-1C4h]@20
  char *v141; // [sp+158h] [bp-1C0h]@20
  int v142; // [sp+15Ch] [bp-1BCh]@20
  char v143; // [sp+160h] [bp-1B8h]@20
  char *v144; // [sp+17Ch] [bp-19Ch]@18
  char *v145; // [sp+180h] [bp-198h]@18
  int v146; // [sp+184h] [bp-194h]@18
  char v147; // [sp+188h] [bp-190h]@18
  char *v148; // [sp+1A4h] [bp-174h]@16
  char *v149; // [sp+1A8h] [bp-170h]@16
  int v150; // [sp+1ACh] [bp-16Ch]@16
  char v151; // [sp+1B0h] [bp-168h]@16
  char *v152; // [sp+1CCh] [bp-14Ch]@14
  char *v153; // [sp+1D0h] [bp-148h]@14
  int v154; // [sp+1D4h] [bp-144h]@14
  char v155; // [sp+1D8h] [bp-140h]@14
  char *v156; // [sp+1F4h] [bp-124h]@12
  char *v157; // [sp+1F8h] [bp-120h]@12
  int v158; // [sp+1FCh] [bp-11Ch]@12
  char v159; // [sp+200h] [bp-118h]@12
  char *v160; // [sp+21Ch] [bp-FCh]@10
  char *v161; // [sp+220h] [bp-F8h]@10
  int v162; // [sp+224h] [bp-F4h]@10
  char v163; // [sp+228h] [bp-F0h]@10
  char *v164; // [sp+244h] [bp-D4h]@8
  char *v165; // [sp+248h] [bp-D0h]@8
  int v166; // [sp+24Ch] [bp-CCh]@8
  char v167; // [sp+250h] [bp-C8h]@8
  char *v168; // [sp+26Ch] [bp-ACh]@6
  char *v169; // [sp+270h] [bp-A8h]@6
  int v170; // [sp+274h] [bp-A4h]@6
  char v171; // [sp+278h] [bp-A0h]@6
  char *v172; // [sp+294h] [bp-84h]@4
  char *v173; // [sp+298h] [bp-80h]@4
  int v174; // [sp+29Ch] [bp-7Ch]@4
  char v175; // [sp+2A0h] [bp-78h]@4
  char *v176; // [sp+2BCh] [bp-5Ch]@2
  char *v177; // [sp+2C0h] [bp-58h]@2
  int v178; // [sp+2C4h] [bp-54h]@2
  char v179; // [sp+2C8h] [bp-50h]@2
  int v180; // [sp+2E4h] [bp-34h]@1
  char v181; // [sp+2E8h] [bp-30h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v5 = &off_26DB0B0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 76));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 100));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 124));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 148));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 172));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 196));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 220));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 244));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 268));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 292));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 316));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 340));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 364));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 388));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 412));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 436));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 460));
  sub_119C884((void **)&v180, "geometry.shulker");
  GeometryGroup::getGeometry((GeometryPtr *)&v181, v3, (const void **)&v180);
  ShulkerBoxModel::ShulkerBoxModel((BaseEntityRenderer *)((char *)v5 + 484), (const GeometryPtr *)&v181);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v181);
  v6 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
  {
    v42 = (unsigned int *)(v180 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v176, "textures/entity/shulker/shulker_white");
  v177 = v176;
  v176 = (char *)&unk_28898CC;
  v178 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v179, v4, (int)&v177, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 76), (mce::TexturePtr *)&v179);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v179);
  v7 = v177 - 12;
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v177 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v176 - 12;
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v176 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v172, "textures/entity/shulker/shulker_orange");
  v173 = v172;
  v172 = (char *)&unk_28898CC;
  v174 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v175, v4, (int)&v173, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 100), (mce::TexturePtr *)&v175);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v175);
  v9 = v173 - 12;
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v173 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v172 - 12;
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v172 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v168, "textures/entity/shulker/shulker_magenta");
  v169 = v168;
  v168 = (char *)&unk_28898CC;
  v170 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v171, v4, (int)&v169, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 124), (mce::TexturePtr *)&v171);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v171);
  v11 = v169 - 12;
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v169 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v168 - 12;
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v168 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v164, "textures/entity/shulker/shulker_light_blue");
  v165 = v164;
  v164 = (char *)&unk_28898CC;
  v166 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v167, v4, (int)&v165, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 148), (mce::TexturePtr *)&v167);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v167);
  v13 = v165 - 12;
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v165 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v164 - 12;
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v164 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v160, "textures/entity/shulker/shulker_yellow");
  v161 = v160;
  v160 = (char *)&unk_28898CC;
  v162 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v163, v4, (int)&v161, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 172), (mce::TexturePtr *)&v163);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v163);
  v15 = v161 - 12;
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v161 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v160 - 12;
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v160 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v156, "textures/entity/shulker/shulker_lime");
  v157 = v156;
  v156 = (char *)&unk_28898CC;
  v158 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v159, v4, (int)&v157, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 196), (mce::TexturePtr *)&v159);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v159);
  v17 = v157 - 12;
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v157 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v156 - 12;
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v156 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v152, "textures/entity/shulker/shulker_pink");
  v153 = v152;
  v152 = (char *)&unk_28898CC;
  v154 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v155, v4, (int)&v153, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 220), (mce::TexturePtr *)&v155);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v155);
  v19 = v153 - 12;
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v153 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = v152 - 12;
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v152 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v148, "textures/entity/shulker/shulker_gray");
  v149 = v148;
  v148 = (char *)&unk_28898CC;
  v150 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v151, v4, (int)&v149, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 244), (mce::TexturePtr *)&v151);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v151);
  v21 = v149 - 12;
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v149 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = v148 - 12;
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v148 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  sub_119C884((void **)&v144, "textures/entity/shulker/shulker_silver");
  v145 = v144;
  v144 = (char *)&unk_28898CC;
  v146 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v147, v4, (int)&v145, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 268), (mce::TexturePtr *)&v147);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v147);
  v23 = v145 - 12;
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v145 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = v144 - 12;
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v144 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  sub_119C884((void **)&v140, "textures/entity/shulker/shulker_cyan");
  v141 = v140;
  v140 = (char *)&unk_28898CC;
  v142 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v143, v4, (int)&v141, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 292), (mce::TexturePtr *)&v143);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v143);
  v25 = v141 - 12;
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v141 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = v140 - 12;
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v140 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  sub_119C884((void **)&v136, "textures/entity/shulker/shulker_purple");
  v137 = v136;
  v136 = (char *)&unk_28898CC;
  v138 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v139, v4, (int)&v137, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 316), (mce::TexturePtr *)&v139);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v139);
  v27 = v137 - 12;
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v137 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = v136 - 12;
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v136 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  sub_119C884((void **)&v132, "textures/entity/shulker/shulker_blue");
  v133 = v132;
  v132 = (char *)&unk_28898CC;
  v134 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v135, v4, (int)&v133, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 340), (mce::TexturePtr *)&v135);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v135);
  v29 = v133 - 12;
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v133 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = v132 - 12;
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v132 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  sub_119C884((void **)&v128, "textures/entity/shulker/shulker_brown");
  v129 = v128;
  v128 = (char *)&unk_28898CC;
  v130 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v131, v4, (int)&v129, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 364), (mce::TexturePtr *)&v131);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v131);
  v31 = v129 - 12;
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v129 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = v128 - 12;
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v128 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  sub_119C884((void **)&v124, "textures/entity/shulker/shulker_green");
  v125 = v124;
  v124 = (char *)&unk_28898CC;
  v126 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v127, v4, (int)&v125, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 388), (mce::TexturePtr *)&v127);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v127);
  v33 = v125 - 12;
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v125 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v34 = v124 - 12;
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v124 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  sub_119C884((void **)&v120, "textures/entity/shulker/shulker_red");
  v121 = v120;
  v120 = (char *)&unk_28898CC;
  v122 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v123, v4, (int)&v121, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 412), (mce::TexturePtr *)&v123);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v123);
  v35 = v121 - 12;
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v121 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v36 = v120 - 12;
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v120 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  sub_119C884((void **)&v116, "textures/entity/shulker/shulker_black");
  v117 = v116;
  v116 = (char *)&unk_28898CC;
  v118 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v119, v4, (int)&v117, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 436), (mce::TexturePtr *)&v119);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v119);
  v37 = v117 - 12;
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v117 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v38 = v116 - 12;
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v116 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  sub_119C884((void **)&v112, "textures/entity/shulker/shulker_undyed");
  v113 = v112;
  v112 = (char *)&unk_28898CC;
  v114 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v115, v4, (int)&v113, 0);
  mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v5 + 460), (mce::TexturePtr *)&v115);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v115);
  v39 = v113 - 12;
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v113 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = v112 - 12;
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v112 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  return v5;
}


int __fastcall ShulkerBoxRenderer::~ShulkerBoxRenderer(ShulkerBoxRenderer *this)
{
  ShulkerBoxRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB0B0;
  v2 = (ShulkerBoxRenderer *)((char *)this + 244);
  *((_DWORD *)this + 121) = &off_26DB0CC;
  ModelPart::~ModelPart((ShulkerBoxRenderer *)((char *)this + 764));
  ModelPart::~ModelPart((ShulkerBoxRenderer *)((char *)v1 + 544));
  mce::MaterialPtr::~MaterialPtr((ShulkerBoxRenderer *)((char *)v1 + 532));
  Model::~Model((ShulkerBoxRenderer *)((char *)v1 + 484));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 460));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 436));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 412));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 388));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 364));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 340));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 316));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 292));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 268));
  mce::TexturePtr::~TexturePtr(v2);
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 220));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 196));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 172));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 148));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 124));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr((ShulkerBoxRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}
