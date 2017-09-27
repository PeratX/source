

BaseEntityRenderer *__fastcall ChestRenderer::ChestRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r6@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  char *v7; // r0@4
  char *v8; // r0@5
  char *v9; // r0@6
  char *v10; // r0@7
  char *v11; // r0@8
  char *v12; // r0@9
  char *v13; // r0@10
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
  char *v35; // [sp+4h] [bp-74h]@9
  char *v36; // [sp+8h] [bp-70h]@9
  int v37; // [sp+Ch] [bp-6Ch]@9
  char *v38; // [sp+14h] [bp-64h]@7
  char *v39; // [sp+18h] [bp-60h]@7
  int v40; // [sp+1Ch] [bp-5Ch]@7
  char *v41; // [sp+24h] [bp-54h]@5
  char *v42; // [sp+28h] [bp-50h]@5
  int v43; // [sp+2Ch] [bp-4Ch]@5
  char *v44; // [sp+34h] [bp-44h]@3
  char *v45; // [sp+38h] [bp-40h]@3
  int v46; // [sp+3Ch] [bp-3Ch]@3
  char *v47; // [sp+44h] [bp-34h]@1
  char *v48; // [sp+48h] [bp-30h]@1
  int v49; // [sp+4Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v3 = &off_26DAF3C;
  sub_119C884((void **)&v47, "textures/entity/chest/double_normal");
  v48 = v47;
  v47 = (char *)&unk_28898CC;
  v49 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 76), v2, (int)&v48, 0);
  v4 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v48 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v47 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v44, "textures/entity/chest/normal");
  v45 = v44;
  v44 = (char *)&unk_28898CC;
  v46 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 100), v2, (int)&v45, 0);
  v6 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v45 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v44 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v41, "textures/entity/chest/trapped_double");
  v42 = v41;
  v41 = (char *)&unk_28898CC;
  v43 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 124), v2, (int)&v42, 0);
  v8 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v42 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v41 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v38, "textures/entity/chest/trapped");
  v39 = v38;
  v38 = (char *)&unk_28898CC;
  v40 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 148), v2, (int)&v39, 0);
  v10 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v39 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v38 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v35, "textures/entity/chest/ender");
  v36 = v35;
  v35 = (char *)&unk_28898CC;
  v37 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 172), v2, (int)&v36, 0);
  v12 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v35 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  ChestModel::ChestModel((BaseEntityRenderer *)((char *)v3 + 196), 0);
  ChestModel::ChestModel((BaseEntityRenderer *)((char *)v3 + 920), 1);
  return v3;
}


void __fastcall ChestRenderer::~ChestRenderer(ChestRenderer *this)
{
  ChestRenderer::~ChestRenderer(this);
}


int __fastcall ChestRenderer::render(ChestRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BaseEntityRenderContext *v3; // r8@1
  ChestRenderer *v4; // r9@1
  BlockEntityRenderData *v5; // r10@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  int v8; // r7@1
  char *v10; // r0@1
  int v11; // r6@1
  int result; // r0@1
  int v13; // r0@2
  int v15; // r5@2
  int v23; // r7@3
  int v32; // r7@21
  int v33; // r4@29
  char *v35; // r0@32
  char *v36; // r0@33
  int v37; // r0@40
  int v38; // [sp+0h] [bp-C8h]@0
  int v39; // [sp+Ch] [bp-BCh]@2
  int v40; // [sp+14h] [bp-B4h]@2
  int v41; // [sp+18h] [bp-B0h]@1
  unsigned int v42; // [sp+1Ch] [bp-ACh]@1
  __int64 v43; // [sp+20h] [bp-A8h]@36
  int v44; // [sp+2Ch] [bp-9Ch]@32
  int v45; // [sp+30h] [bp-98h]@32
  int v46; // [sp+34h] [bp-94h]@32
  char v47; // [sp+38h] [bp-90h]@2
  int v48; // [sp+40h] [bp-88h]@11
  signed int v49; // [sp+44h] [bp-84h]@11
  int v50; // [sp+48h] [bp-80h]@11
  int v51; // [sp+4Ch] [bp-7Ch]@11
  int v52; // [sp+50h] [bp-78h]@11
  int v53; // [sp+54h] [bp-74h]@11
  int v54; // [sp+58h] [bp-70h]@11
  int v55; // [sp+5Ch] [bp-6Ch]@11
  int v56; // [sp+60h] [bp-68h]@11
  int v57; // [sp+64h] [bp-64h]@11
  int v58; // [sp+68h] [bp-60h]@11
  int v59; // [sp+6Ch] [bp-5Ch]@11
  int v60; // [sp+70h] [bp-58h]@11
  int v61; // [sp+74h] [bp-54h]@11
  int v62; // [sp+78h] [bp-50h]@11
  int v63; // [sp+7Ch] [bp-4Ch]@11
  int v64; // [sp+80h] [bp-48h]@11
  int v65; // [sp+84h] [bp-44h]@11
  int v66; // [sp+88h] [bp-40h]@11
  float v67; // [sp+8Ch] [bp-3Ch]@11

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *(_QWORD *)v5;
  v8 = v6;
  _R4 = *((_DWORD *)v5 + 2);
  v10 = BlockEntity::getPosition((BlockEntity *)(*(_QWORD *)v5 >> 32));
  v42 = BlockSource::getData((BlockSource *)v7, (const BlockPos *)v10);
  v11 = *(_QWORD *)((char *)v5 + 12);
  v41 = *(_QWORD *)((char *)v5 + 12) >> 32;
  result = ChestBlockEntity::isMainSubchest((ChestBlockEntity *)HIDWORD(v7));
  if ( result == 1 )
  {
    v39 = v11;
    v40 = v8;
    v13 = BaseEntityRenderContext::getWorldMatrix(v3);
    MatrixStack::push((MatrixStack *)&v47, v13);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v47);
    v15 = (int)v4;
    _R6 = v3;
    __asm
    {
      VMOV.F32        S16, #1.0
      VLDR            S2, [R4,#4]
      VLDR            S4, [R4,#8]
      VLDR            S0, [R4]
      VLDR            S6, [R0]
      VLDR            S8, [R0,#4]
      VLDR            S14, [R0,#0x14]
      VMUL.F32        S6, S6, S0
      VLDR            S1, [R0,#0x10]
      VMUL.F32        S8, S8, S0
      VADD.F32        S2, S2, S16
      VLDR            S12, [R0,#0xC]
      VLDR            S3, [R0,#0x18]
      VADD.F32        S4, S4, S16
      VLDR            S10, [R0,#8]
      VMUL.F32        S12, S12, S0
      VLDR            S5, [R0,#0x1C]
      VMUL.F32        S0, S10, S0
      VLDR            S7, [R0,#0x20]
      VLDR            S10, [R0,#0x24]
      VMUL.F32        S14, S14, S2
      VMUL.F32        S1, S1, S2
      VMUL.F32        S3, S3, S2
      VMUL.F32        S2, S5, S2
      VMUL.F32        S5, S7, S4
      VLDR            S7, [R0,#0x28]
      VMUL.F32        S10, S10, S4
      VADD.F32        S8, S14, S8
      VLDR            S14, [R0,#0x2C]
      VADD.F32        S6, S1, S6
      VMUL.F32        S1, S7, S4
      VADD.F32        S0, S3, S0
      VADD.F32        S2, S2, S12
      VLDR            S12, [R0,#0x38]
      VMUL.F32        S4, S14, S4
      VADD.F32        S8, S8, S10
      VLDR            S10, [R0,#0x34]
      VADD.F32        S6, S6, S5
      VADD.F32        S0, S0, S1
      VADD.F32        S2, S2, S4
      VLDR            S4, [R0,#0x30]
      VADD.F32        S4, S6, S4
      VLDR            S6, [R0,#0x3C]
      VADD.F32        S0, S0, S12
      VADD.F32        S2, S2, S6
      VSTR            S4, [R0,#0x30]
      VSTR            S8, [R0,#0x34]
      VSTR            S0, [R0,#0x38]
      VSTR            S2, [R0,#0x3C]
    }
      VLDR            S0, [R0,#0x10]
      VNEG.F32        S0, S0
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
      VLDR            S0, [R0,#4]
      VMOV.F32        S18, #0.5
      VLDR            S8, [R0,#0x14]
      VLDR            S2, [R0,#8]
      VLDR            S10, [R0,#0x18]
      VADD.F32        S0, S8, S0
      VLDR            S4, [R0,#0xC]
      VLDR            S12, [R0,#0x1C]
      VADD.F32        S2, S10, S2
      VLDR            S6, [R0,#0x10]
      VLDR            S14, [R0]
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S14
      VLDR            S8, [R0,#0x20]
      VLDR            S12, [R0,#0x28]
      VADD.F32        S0, S0, S10
      VLDR            S1, [R0,#0x30]
      VLDR            S3, [R0,#0x34]
      VADD.F32        S4, S4, S14
      VLDR            S5, [R0,#0x38]
      VLDR            S7, [R0,#0x3C]
      VADD.F32        S6, S6, S8
      VMUL.F32        S0, S0, S18
      VMUL.F32        S2, S2, S18
      VMUL.F32        S4, S4, S18
      VMUL.F32        S6, S6, S18
      VADD.F32        S2, S5, S2
      VADD.F32        S4, S7, S4
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
    if ( BlockEntity::isInWorld((BlockEntity *)HIDWORD(v7)) == 1 )
      v23 = MatrixStack::MatrixStackRef::operator->((int)&v47);
      _R0 = &dword_EBDDE0;
      __asm { VLDR            S2, =0.0 }
      if ( v42 == 2 )
        _R0 = &dword_EBDDE4;
      __asm { VLDR            S0, [R0] }
      if ( _ZF )
        __asm { VMOVEQ.F32      S0, S2 }
      __asm { VLDR            S2, =90.0 }
      if ( v42 == 4 )
      __asm { VLDR            S2, =-90.0 }
      if ( v42 == 5 )
      v48 = 0;
      v49 = 1065353216;
      v50 = 0;
      __asm { VSTR            S0, [SP,#0xC8+var_3C] }
      glm::rotate<float>((int)&v51, v23, (int)&v67, (int)&v48);
      *(_DWORD *)v23 = v51;
      *(_DWORD *)(v23 + 4) = v52;
      *(_DWORD *)(v23 + 8) = v53;
      *(_DWORD *)(v23 + 12) = v54;
      *(_DWORD *)(v23 + 16) = v55;
      *(_DWORD *)(v23 + 20) = v56;
      *(_DWORD *)(v23 + 24) = v57;
      *(_DWORD *)(v23 + 28) = v58;
      *(_DWORD *)(v23 + 32) = v59;
      *(_DWORD *)(v23 + 36) = v60;
      *(_DWORD *)(v23 + 40) = v61;
      *(_DWORD *)(v23 + 44) = v62;
      *(_DWORD *)(v23 + 48) = v63;
      *(_DWORD *)(v23 + 52) = v64;
      *(_DWORD *)(v23 + 56) = v65;
      *(_DWORD *)(v23 + 60) = v66;
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v47);
      __asm
      {
        VLDR            S0, [R0,#4]
        VLDR            S8, [R0,#0x14]
        VLDR            S2, [R0,#8]
        VLDR            S10, [R0,#0x18]
        VADD.F32        S0, S8, S0
        VLDR            S4, [R0,#0xC]
        VLDR            S12, [R0,#0x1C]
        VADD.F32        S2, S10, S2
        VLDR            S6, [R0,#0x10]
        VLDR            S14, [R0]
        VADD.F32        S4, S12, S4
        VLDR            S10, [R0,#0x24]
        VADD.F32        S6, S6, S14
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
        VMUL.F32        S0, S0, S18
        VMUL.F32        S2, S2, S18
        VMUL.F32        S4, S4, S18
        VMUL.F32        S6, S6, S18
        VSUB.F32        S0, S3, S0
        VSUB.F32        S2, S5, S2
        VSUB.F32        S4, S7, S4
        VSUB.F32        S6, S1, S6
      }
    else
        VLDR            S10, [R0,#0x34]
        VLDR            S12, [R0,#0x38]
        VSUB.F32        S0, S10, S0
        VLDR            S14, [R0,#0x3C]
        VSUB.F32        S2, S12, S2
        VLDR            S6, [R0]
        VLDR            S8, [R0,#0x30]
        VSUB.F32        S4, S14, S4
        VSUB.F32        S6, S8, S6
    if ( ChestBlockEntity::isLargeChest((ChestBlockEntity *)HIDWORD(v7)) == 1 )
        VMOV.F32        S0, #-1.0
        VMOV.F32        S18, S16
        __asm { VMOVEQ.F32      S18, S0 }
      _R4 = MatrixStack::MatrixStackRef::operator->((int)&v47);
      _R0 = ChestBlockEntity::getModelOffsetX((ChestBlockEntity *)HIDWORD(v7));
        VMOV            S0, R0
        VLDR            S2, [R4,#4]
        VLDR            S4, [R4,#8]
        VLDR            S8, [R4]
        VLDR            S6, [R4,#0xC]
        VLDR            S10, [R4,#0x34]
        VLDR            S12, [R4,#0x38]
        VLDR            S14, [R4,#0x3C]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S4, S4, S0
        VMUL.F32        S8, S8, S0
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R4,#0x30]
        VADD.F32        S0, S14, S0
        VSTR            S6, [R4,#0x30]
        VSTR            S2, [R4,#0x34]
        VSTR            S4, [R4,#0x38]
        VSTR            S0, [R4,#0x3C]
    _R4 = ChestBlockEntity::getOldOpenness((ChestBlockEntity *)HIDWORD(v7));
    _R8 = ChestBlockEntity::getOpenness((ChestBlockEntity *)HIDWORD(v7));
    _R9 = ChestBlockEntity::getOldOpenness((ChestBlockEntity *)HIDWORD(v7));
    __asm { VLDR            S18, [R6,#4] }
    if ( ChestBlockEntity::isTrappedChest((ChestBlockEntity *)HIDWORD(v7)) == 1 )
      if ( ChestBlockEntity::isLargeChest((ChestBlockEntity *)HIDWORD(v7)) == 1 )
        v32 = v15 + 124;
      else
        v32 = v15 + 148;
    else if ( ChestBlockEntity::getIsGlobalChest((ChestBlockEntity *)HIDWORD(v7)) == 1 )
      v32 = v15 + 172;
    else if ( ChestBlockEntity::isLargeChest((ChestBlockEntity *)HIDWORD(v7)) == 1 )
      v32 = v15 + 76;
      v32 = v15 + 100;
    ChestBlockEntity::isLargeChest((ChestBlockEntity *)HIDWORD(v7));
      VMOV            S2, R8
      VMOV            S4, R9
      VMOV            S0, R4
      VSUB.F32        S2, S4, S2
    v33 = v7 + 196;
    __asm { VSUB.F32        S0, S16, S0 }
    _R1 = &mce::Math::PI;
    if ( !_ZF )
      v33 = v15 + 920;
      VMUL.F32        S2, S18, S2
      VADD.F32        S0, S0, S2
      VMUL.F32        S2, S0, S0
      VMUL.F32        S0, S2, S0
      VMOV.F32        S2, #-0.5
      VSUB.F32        S0, S16, S0
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R1]
      VSTR            S0, [R4,#0x60]
      v35 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v7));
      v44 = *(_DWORD *)v35;
      v45 = *((_DWORD *)v35 + 1);
      v46 = *((_DWORD *)v35 + 2);
      v36 = BaseEntityRenderContext::getCameraTargetPosition(_R6);
      BlockPos::BlockPos((int)&v44, (int)v36);
    if ( *((_DWORD *)v5 + 5) )
        LODWORD(v43) = 1090519040;
        LODWORD(v43) = 1082130432;
      HIDWORD(v43) = 1082130432;
      v43 = *(_QWORD *)&Vec2::ONE;
    __asm { VLDR            S16, [R6,#4] }
    v37 = BaseEntityRenderContext::isIgnoringLightning(_R6);
    __asm { VSTR            S16, [SP,#0xC8+var_C8] }
    EntityShaderManager::_setupShaderParameters(v15, v40, v7, (int)&v44, v38, v37, &v43);
    BlockEntityRenderer::_renderModel(v15, v40, v33, v32, v39, v41);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v47);
  }
  return result;
}


int __fastcall ChestRenderer::~ChestRenderer(ChestRenderer *this)
{
  ChestRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAF3C;
  v2 = (ChestRenderer *)((char *)this + 244);
  *((_DWORD *)this + 230) = &off_26DAF58;
  ModelPart::~ModelPart((ChestRenderer *)((char *)this + 1420));
  ModelPart::~ModelPart((ChestRenderer *)((char *)v1 + 1200));
  ModelPart::~ModelPart((ChestRenderer *)((char *)v1 + 980));
  mce::MaterialPtr::~MaterialPtr((ChestRenderer *)((char *)v1 + 968));
  Model::~Model((ChestRenderer *)((char *)v1 + 920));
  *((_DWORD *)v1 + 49) = &off_26DAF58;
  ModelPart::~ModelPart((ChestRenderer *)((char *)v1 + 696));
  ModelPart::~ModelPart((ChestRenderer *)((char *)v1 + 476));
  ModelPart::~ModelPart((ChestRenderer *)((char *)v1 + 256));
  mce::MaterialPtr::~MaterialPtr(v2);
  Model::~Model((ChestRenderer *)((char *)v1 + 196));
  mce::TexturePtr::~TexturePtr((ChestRenderer *)((char *)v1 + 172));
  mce::TexturePtr::~TexturePtr((ChestRenderer *)((char *)v1 + 148));
  mce::TexturePtr::~TexturePtr((ChestRenderer *)((char *)v1 + 124));
  mce::TexturePtr::~TexturePtr((ChestRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr((ChestRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


void __fastcall ChestRenderer::~ChestRenderer(ChestRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)ChestRenderer::~ChestRenderer(this);
  j_j_j__ZdlPv_4(v1);
}
