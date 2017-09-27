

_DWORD *__fastcall AgentRenderer::AgentRenderer(_DWORD *a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  _DWORD *v3; // r4@1
  const GeometryPtr *v4; // r7@1
  mce::TextureGroup *v5; // r5@1
  AgentModel *v6; // r6@1
  char *v7; // r0@1
  char *v8; // r0@2
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  char *v14; // [sp+8h] [bp-40h]@1
  char *v15; // [sp+Ch] [bp-3Ch]@1
  int v16; // [sp+10h] [bp-38h]@1
  char v17; // [sp+14h] [bp-34h]@1
  AgentModel *v18; // [sp+2Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (AgentModel *)operator new(0x568u);
  AgentModel::AgentModel(v6, v4);
  v18 = v6;
  sub_21E94B4((void **)&v14, "textures/entity/agent");
  v15 = v14;
  v14 = (char *)&unk_28898CC;
  v16 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v17, v5, (int)&v15, 0);
  MobRenderer::MobRenderer((int)v3, (int *)&v18, (mce::TexturePtr *)&v17);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v17);
  v7 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *v3 = &off_26E682C;
  return v3;
}


signed int __fastcall AgentRenderer::additionalRendering(AgentRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Entity *v10; // r10@1
  BaseEntityRenderContext *v11; // r8@1
  int v13; // r0@1
  int v14; // r6@1
  signed int result; // r0@1
  int v17; // r0@7
  int v22; // r5@7
  __int64 v24; // kr00_8@7
  int v25; // r0@8
  int v27; // r5@9
  int v28; // r5@9
  int v32; // r5@15
  int v33; // r5@15
  int v36; // r5@16
  int v37; // r5@16
  int v40; // r5@17
  int v41; // r5@17
  int v44; // r5@18
  ItemInHandRenderer *v45; // r5@20
  char v46; // [sp+10h] [bp-78h]@7
  int v47; // [sp+18h] [bp-70h]@7
  signed int v48; // [sp+1Ch] [bp-6Ch]@7
  int v49; // [sp+20h] [bp-68h]@7
  int v50; // [sp+24h] [bp-64h]@7
  int v51; // [sp+28h] [bp-60h]@7
  int v52; // [sp+2Ch] [bp-5Ch]@7
  int v53; // [sp+30h] [bp-58h]@7
  int v54; // [sp+34h] [bp-54h]@7
  int v55; // [sp+38h] [bp-50h]@7
  int v56; // [sp+3Ch] [bp-4Ch]@7
  int v57; // [sp+40h] [bp-48h]@7
  int v58; // [sp+44h] [bp-44h]@7
  int v59; // [sp+48h] [bp-40h]@7
  int v60; // [sp+4Ch] [bp-3Ch]@7
  int v61; // [sp+50h] [bp-38h]@7
  int v62; // [sp+54h] [bp-34h]@7
  int v63; // [sp+58h] [bp-30h]@7
  int v64; // [sp+5Ch] [bp-2Ch]@7
  int v65; // [sp+60h] [bp-28h]@7
  float v66; // [sp+64h] [bp-24h]@7

  v10 = a4;
  v11 = a2;
  _R7 = a3;
  v13 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a4 + 908))(a4);
  v14 = v13;
  result = *(_BYTE *)(v13 + 15);
  _ZF = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v14;
    _ZF = *(_DWORD *)v14 == 0;
  }
  if ( !_ZF )
    result = ItemInstance::isNull((ItemInstance *)v14);
    if ( !result )
    {
      result = *(_BYTE *)(v14 + 14);
      if ( *(_BYTE *)(v14 + 14) )
      {
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v10 + 172))(v10);
        if ( !result )
        {
          v17 = BaseEntityRenderContext::getWorldMatrix(v11);
          MatrixStack::push((MatrixStack *)&v46, v17);
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v46);
          __asm
          {
            VLDR            S0, =0.0625
            VLDR            S2, [R7,#0x2D0]
            VLDR            S4, [R7,#0x2D4]
            VMUL.F32        S2, S2, S0
            VLDR            S6, [R7,#0x2D8]
            VMUL.F32        S4, S4, S0
            VLDR            S8, [R0]
            VLDR            S10, [R0,#4]
            VMUL.F32        S0, S6, S0
            VLDR            S1, [R0,#0x10]
            VLDR            S14, [R0,#0xC]
            VLDR            S3, [R0,#0x18]
            VLDR            S12, [R0,#8]
            VMUL.F32        S6, S8, S2
            VLDR            S8, [R0,#0x14]
            VMUL.F32        S1, S1, S4
            VLDR            S5, [R0,#0x1C]
            VMUL.F32        S10, S10, S2
            VLDR            S7, [R0,#0x20]
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
          }
          v22 = MatrixStack::MatrixStackRef::operator->((int)&v46);
            VMOV.F32        S4, #5.0
            VLDR            S0, [R7,#0x2F4]
          _R0 = &mce::Math::RADDEG;
          __asm { VLDR            S2, [R0] }
          v47 = 1065353216;
          __asm { VMUL.F32        S0, S2, S0 }
          v48 = 0;
          v49 = 0;
            VADD.F32        S0, S0, S4
            VSTR            S0, [SP,#0x88+var_24]
          glm::rotate<float>((int)&v50, v22, (int)&v66, (int)&v47);
          *(_DWORD *)v22 = v50;
          *(_DWORD *)(v22 + 4) = v51;
          *(_DWORD *)(v22 + 8) = v52;
          *(_DWORD *)(v22 + 12) = v53;
          *(_DWORD *)(v22 + 16) = v54;
          *(_DWORD *)(v22 + 20) = v55;
          *(_DWORD *)(v22 + 24) = v56;
          *(_DWORD *)(v22 + 28) = v57;
          *(_DWORD *)(v22 + 32) = v58;
          *(_DWORD *)(v22 + 36) = v59;
          *(_DWORD *)(v22 + 40) = v60;
          *(_DWORD *)(v22 + 44) = v61;
          *(_DWORD *)(v22 + 48) = v62;
          *(_DWORD *)(v22 + 52) = v63;
          *(_DWORD *)(v22 + 56) = v64;
          *(_DWORD *)(v22 + 60) = v65;
          v24 = *(_QWORD *)v14;
          if ( *(_QWORD *)v14 >> 32
            && (v25 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(HIDWORD(v24) + 4)]),
                BlockTessellator::canRender(v25) == 1) )
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v46);
            __asm
            {
              VMOV.F32        S0, #-0.25
              VLDR            S10, [R0,#0x20]
              VLDR            S12, [R0,#0x24]
              VLDR            S14, [R0,#0x28]
              VLDR            S2, =0.37
              VLDR            S4, [R0,#0x14]
              VLDR            S6, [R0,#0x18]
              VLDR            S3, [R0,#0x10]
              VMUL.F32        S4, S4, S2
              VLDR            S8, [R0,#0x1C]
              VMUL.F32        S12, S12, S0
              VLDR            S1, [R0,#0x2C]
              VMUL.F32        S3, S3, S2
              VMUL.F32        S6, S6, S2
              VMUL.F32        S14, S14, S0
              VMUL.F32        S10, S10, S0
              VMUL.F32        S2, S8, S2
              VMUL.F32        S0, S1, S0
              VADD.F32        S4, S12, S4
              VLDR            S12, [R0,#0x38]
              VADD.F32        S6, S14, S6
              VLDR            S14, [R0,#0x3C]
              VADD.F32        S8, S10, S3
              VLDR            S10, [R0,#0x34]
              VADD.F32        S0, S0, S2
              VLDR            S2, [R0,#0x30]
              VADD.F32        S4, S4, S10
              VADD.F32        S6, S6, S12
              VADD.F32        S2, S8, S2
              VADD.F32        S0, S0, S14
              VSTR            S2, [R0,#0x30]
              VSTR            S4, [R0,#0x34]
              VSTR            S6, [R0,#0x38]
              VSTR            S0, [R0,#0x3C]
            }
            v27 = MatrixStack::MatrixStackRef::operator->((int)&v46);
            v47 = 1065353216;
            v48 = 0;
            v49 = 0;
            v66 = 190.0;
            glm::rotate<float>((int)&v50, v27, (int)&v66, (int)&v47);
            *(_DWORD *)v27 = v50;
            *(_DWORD *)(v27 + 4) = v51;
            *(_DWORD *)(v27 + 8) = v52;
            *(_DWORD *)(v27 + 12) = v53;
            *(_DWORD *)(v27 + 16) = v54;
            *(_DWORD *)(v27 + 20) = v55;
            *(_DWORD *)(v27 + 24) = v56;
            *(_DWORD *)(v27 + 28) = v57;
            *(_DWORD *)(v27 + 32) = v58;
            *(_DWORD *)(v27 + 36) = v59;
            *(_DWORD *)(v27 + 40) = v60;
            *(_DWORD *)(v27 + 44) = v61;
            *(_DWORD *)(v27 + 48) = v62;
            *(_DWORD *)(v27 + 52) = v63;
            *(_DWORD *)(v27 + 56) = v64;
            *(_DWORD *)(v27 + 60) = v65;
            v28 = MatrixStack::MatrixStackRef::operator->((int)&v46);
            v47 = 0;
            v48 = 1065353216;
            v66 = 40.0;
            glm::rotate<float>((int)&v50, v28, (int)&v66, (int)&v47);
            *(_DWORD *)v28 = v50;
            *(_DWORD *)(v28 + 4) = v51;
            *(_DWORD *)(v28 + 8) = v52;
            *(_DWORD *)(v28 + 12) = v53;
            *(_DWORD *)(v28 + 16) = v54;
            *(_DWORD *)(v28 + 20) = v55;
            *(_DWORD *)(v28 + 24) = v56;
            *(_DWORD *)(v28 + 28) = v57;
            *(_DWORD *)(v28 + 32) = v58;
            *(_DWORD *)(v28 + 36) = v59;
            *(_DWORD *)(v28 + 40) = v60;
            *(_DWORD *)(v28 + 44) = v61;
            *(_DWORD *)(v28 + 48) = v62;
            *(_DWORD *)(v28 + 52) = v63;
            *(_DWORD *)(v28 + 56) = v64;
            *(_DWORD *)(v28 + 60) = v65;
            __asm { VLDR            S0, =0.27 }
          else
            if ( (_DWORD)v24 == Item::mBow )
              _R0 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              __asm
              {
                VLDR            S0, =0.15
                VLDR            S6, [R0,#0xC]
                VLDR            S4, [R0,#8]
                VLDR            S8, [R0,#0x10]
                VMUL.F32        S6, S6, S0
                VLDR            S3, =0.45
                VLDR            S10, [R0,#0x14]
                VLDR            S12, [R0,#0x18]
                VMUL.F32        S8, S8, S3
                VLDR            S14, [R0,#0x1C]
                VMUL.F32        S10, S10, S3
                VLDMIA          R0, {S1-S2}
                VMUL.F32        S12, S12, S3
                VMUL.F32        S14, S14, S3
                VMUL.F32        S2, S2, S0
                VLDR            S5, =-0.3
                VMUL.F32        S1, S1, S0
                VLDR            S7, [R0,#0x20]
                VMUL.F32        S0, S4, S0
                VLDR            S4, [R0,#0x24]
                VMUL.F32        S3, S7, S5
                VLDR            S7, [R0,#0x28]
                VMUL.F32        S4, S4, S5
                VADD.F32        S6, S14, S6
                VADD.F32        S2, S10, S2
                VLDR            S10, [R0,#0x2C]
                VADD.F32        S8, S8, S1
                VADD.F32        S0, S12, S0
                VLDR            S12, [R0,#0x38]
                VMUL.F32        S1, S7, S5
                VMUL.F32        S10, S10, S5
                VADD.F32        S2, S2, S4
                VADD.F32        S8, S8, S3
                VADD.F32        S0, S0, S1
                VADD.F32        S4, S6, S10
                VLDR            S6, [R0,#0x30]
                VLDR            S10, [R0,#0x34]
                VADD.F32        S2, S2, S10
                VADD.F32        S6, S8, S6
                VLDR            S8, [R0,#0x3C]
                VADD.F32        S0, S0, S12
                VADD.F32        S4, S4, S8
                VSTR            S6, [R0,#0x30]
                VSTR            S2, [R0,#0x34]
                VSTR            S0, [R0,#0x38]
                VSTR            S4, [R0,#0x3C]
              }
              v36 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              v47 = 1065353216;
              v48 = 0;
              v49 = 0;
              v66 = 60.0;
              glm::rotate<float>((int)&v50, v36, (int)&v66, (int)&v47);
              *(_DWORD *)v36 = v50;
              *(_DWORD *)(v36 + 4) = v51;
              *(_DWORD *)(v36 + 8) = v52;
              *(_DWORD *)(v36 + 12) = v53;
              *(_DWORD *)(v36 + 16) = v54;
              *(_DWORD *)(v36 + 20) = v55;
              *(_DWORD *)(v36 + 24) = v56;
              *(_DWORD *)(v36 + 28) = v57;
              *(_DWORD *)(v36 + 32) = v58;
              *(_DWORD *)(v36 + 36) = v59;
              *(_DWORD *)(v36 + 40) = v60;
              *(_DWORD *)(v36 + 44) = v61;
              *(_DWORD *)(v36 + 48) = v62;
              *(_DWORD *)(v36 + 52) = v63;
              *(_DWORD *)(v36 + 56) = v64;
              *(_DWORD *)(v36 + 60) = v65;
              v37 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              v47 = 0;
              v48 = 1065353216;
              v66 = 40.0;
              glm::rotate<float>((int)&v50, v37, (int)&v66, (int)&v47);
              *(_DWORD *)v37 = v50;
              *(_DWORD *)(v37 + 4) = v51;
              *(_DWORD *)(v37 + 8) = v52;
              *(_DWORD *)(v37 + 12) = v53;
              *(_DWORD *)(v37 + 16) = v54;
              *(_DWORD *)(v37 + 20) = v55;
              *(_DWORD *)(v37 + 24) = v56;
              *(_DWORD *)(v37 + 28) = v57;
              *(_DWORD *)(v37 + 32) = v58;
              *(_DWORD *)(v37 + 36) = v59;
              *(_DWORD *)(v37 + 40) = v60;
              *(_DWORD *)(v37 + 44) = v61;
              *(_DWORD *)(v37 + 48) = v62;
              *(_DWORD *)(v37 + 52) = v63;
              *(_DWORD *)(v37 + 56) = v64;
              *(_DWORD *)(v37 + 60) = v65;
            else if ( (_DWORD)v24 == Item::mFishingRod || (_DWORD)v24 == Item::mCarrotOnAStick )
                VLDR            S0, =0.05
                VMUL.F32        S4, S4, S0
                VMUL.F32        S0, S6, S0
                VMUL.F32        S6, S14, S3
                VLDR            S14, [R0,#0x3C]
                VADD.F32        S4, S12, S4
                VADD.F32        S0, S6, S0
                VADD.F32        S4, S4, S12
                VADD.F32        S0, S0, S14
                VSTR            S4, [R0,#0x38]
                VSTR            S0, [R0,#0x3C]
              v40 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              v66 = -155.0;
              glm::rotate<float>((int)&v50, v40, (int)&v66, (int)&v47);
              *(_DWORD *)v40 = v50;
              *(_DWORD *)(v40 + 4) = v51;
              *(_DWORD *)(v40 + 8) = v52;
              *(_DWORD *)(v40 + 12) = v53;
              *(_DWORD *)(v40 + 16) = v54;
              *(_DWORD *)(v40 + 20) = v55;
              *(_DWORD *)(v40 + 24) = v56;
              *(_DWORD *)(v40 + 28) = v57;
              *(_DWORD *)(v40 + 32) = v58;
              *(_DWORD *)(v40 + 36) = v59;
              *(_DWORD *)(v40 + 40) = v60;
              *(_DWORD *)(v40 + 44) = v61;
              *(_DWORD *)(v40 + 48) = v62;
              *(_DWORD *)(v40 + 52) = v63;
              *(_DWORD *)(v40 + 56) = v64;
              *(_DWORD *)(v40 + 60) = v65;
              v41 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              glm::rotate<float>((int)&v50, v41, (int)&v66, (int)&v47);
              *(_DWORD *)v41 = v50;
              *(_DWORD *)(v41 + 4) = v51;
              *(_DWORD *)(v41 + 8) = v52;
              *(_DWORD *)(v41 + 12) = v53;
              *(_DWORD *)(v41 + 16) = v54;
              *(_DWORD *)(v41 + 20) = v55;
              *(_DWORD *)(v41 + 24) = v56;
              *(_DWORD *)(v41 + 28) = v57;
              *(_DWORD *)(v41 + 32) = v58;
              *(_DWORD *)(v41 + 36) = v59;
              *(_DWORD *)(v41 + 40) = v60;
              *(_DWORD *)(v41 + 44) = v61;
              *(_DWORD *)(v41 + 48) = v62;
              *(_DWORD *)(v41 + 52) = v63;
              *(_DWORD *)(v41 + 56) = v64;
              *(_DWORD *)(v41 + 60) = v65;
            else if ( (_DWORD)v24 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v24 + 88))(v24) == 1 )
                VMOV.F32        S0, #0.5
                VLDR            S10, [R0,#0x10]
                VLDR            S12, [R0,#0x14]
                VLDR            S14, [R0,#0x18]
                VLDR            S2, =-0.1
                VLDR            S8, [R0,#0xC]
                VLDR            S6, [R0,#8]
                VLDR            S1, [R0,#0x1C]
                VMUL.F32        S8, S8, S2
                VLDMIA          R0, {S3-S4}
                VMUL.F32        S12, S12, S0
                VMUL.F32        S10, S10, S0
                VMUL.F32        S4, S4, S2
                VLDR            S5, =-0.15
                VMUL.F32        S3, S3, S2
                VMUL.F32        S2, S6, S2
                VLDR            S6, [R0,#0x24]
                VMUL.F32        S14, S14, S0
                VMUL.F32        S0, S1, S0
                VMUL.F32        S6, S6, S5
                VLDR            S12, [R0,#0x2C]
                VADD.F32        S10, S10, S3
                VADD.F32        S2, S14, S2
                VADD.F32        S0, S0, S8
                VMUL.F32        S12, S12, S5
                VADD.F32        S4, S4, S6
                VADD.F32        S8, S10, S1
                VADD.F32        S2, S2, S3
                VADD.F32        S4, S4, S10
                VADD.F32        S2, S2, S12
                VSTR            S4, [R0,#0x34]
                VSTR            S2, [R0,#0x38]
              v32 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              v66 = -110.0;
              glm::rotate<float>((int)&v50, v32, (int)&v66, (int)&v47);
              *(_DWORD *)v32 = v50;
              *(_DWORD *)(v32 + 4) = v51;
              *(_DWORD *)(v32 + 8) = v52;
              *(_DWORD *)(v32 + 12) = v53;
              *(_DWORD *)(v32 + 16) = v54;
              *(_DWORD *)(v32 + 20) = v55;
              *(_DWORD *)(v32 + 24) = v56;
              *(_DWORD *)(v32 + 28) = v57;
              *(_DWORD *)(v32 + 32) = v58;
              *(_DWORD *)(v32 + 36) = v59;
              *(_DWORD *)(v32 + 40) = v60;
              *(_DWORD *)(v32 + 44) = v61;
              *(_DWORD *)(v32 + 48) = v62;
              *(_DWORD *)(v32 + 52) = v63;
              *(_DWORD *)(v32 + 56) = v64;
              *(_DWORD *)(v32 + 60) = v65;
              v33 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              v66 = 220.0;
              glm::rotate<float>((int)&v50, v33, (int)&v66, (int)&v47);
              *(_DWORD *)v33 = v50;
              *(_DWORD *)(v33 + 4) = v51;
              *(_DWORD *)(v33 + 8) = v52;
              *(_DWORD *)(v33 + 12) = v53;
              *(_DWORD *)(v33 + 16) = v54;
              *(_DWORD *)(v33 + 20) = v55;
              *(_DWORD *)(v33 + 24) = v56;
              *(_DWORD *)(v33 + 28) = v57;
              *(_DWORD *)(v33 + 32) = v58;
              *(_DWORD *)(v33 + 36) = v59;
              *(_DWORD *)(v33 + 40) = v60;
              *(_DWORD *)(v33 + 44) = v61;
              *(_DWORD *)(v33 + 48) = v62;
              *(_DWORD *)(v33 + 52) = v63;
              *(_DWORD *)(v33 + 56) = v64;
              *(_DWORD *)(v33 + 60) = v65;
            else
                VLDR            S0, =0.23
                VLDR            S3, =0.35
                VLDR            S5, =-0.1
              v44 = MatrixStack::MatrixStackRef::operator->((int)&v46);
              v66 = -70.0;
              glm::rotate<float>((int)&v50, v44, (int)&v66, (int)&v47);
              *(_DWORD *)v44 = v50;
              *(_DWORD *)(v44 + 4) = v51;
              *(_DWORD *)(v44 + 8) = v52;
              *(_DWORD *)(v44 + 12) = v53;
              *(_DWORD *)(v44 + 16) = v54;
              *(_DWORD *)(v44 + 20) = v55;
              *(_DWORD *)(v44 + 24) = v56;
              *(_DWORD *)(v44 + 28) = v57;
              *(_DWORD *)(v44 + 32) = v58;
              *(_DWORD *)(v44 + 36) = v59;
              *(_DWORD *)(v44 + 40) = v60;
              *(_DWORD *)(v44 + 44) = v61;
              *(_DWORD *)(v44 + 48) = v62;
              *(_DWORD *)(v44 + 52) = v63;
              *(_DWORD *)(v44 + 56) = v64;
              *(_DWORD *)(v44 + 60) = v65;
            __asm { VMOV.F32        S0, #0.375 }
            VLDR            S2, [R0]
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
          v45 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer(v11);
          ItemInHandRenderer::renderItem(v45, v11, v10, (const ItemInstance *)v14, 0, 0, 1, 0);
          ItemInHandRenderer::renderItem(v45, v11, v10, (const ItemInstance *)v14, 1, 0, 1, 0);
          result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v46);
        }
      }
    }
  return result;
}


void __fastcall AgentRenderer::~AgentRenderer(AgentRenderer *this)
{
  AgentRenderer::~AgentRenderer(this);
}


void __fastcall AgentRenderer::~AgentRenderer(AgentRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall AgentRenderer::render(int a1, int a2, Agent **a3)
{
  Agent **v3; // r8@1
  int v4; // r6@1
  Agent *v5; // r7@1
  int v6; // r10@1
  int v8; // r5@1
  int v9; // r4@1
  int v11; // r0@1
  float v20; // r1@1
  int *v23; // r1@4
  int v24; // r4@9
  int v25; // r0@9
  int v27; // [sp+8h] [bp-58h]@7
  float v28; // [sp+Ch] [bp-54h]@8
  int v29; // [sp+10h] [bp-50h]@4
  float v30; // [sp+14h] [bp-4Ch]@5
  char v31; // [sp+18h] [bp-48h]@1

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  _R11 = Agent::getRenderData(*a3);
  v8 = getTimeMs();
  v9 = *((_DWORD *)_R11 + 1);
  *((_DWORD *)_R11 + 1) = v8;
  _R9 = Agent::getMoveSpeedScalar(v5);
  v11 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)v6);
  MatrixStack::push((MatrixStack *)&v31, v11);
  _R0 = v8 - v9;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  }
  _R5 = (*(int (__fastcall **)(int, Agent *, _DWORD))(*(_DWORD *)v4 + 60))(v4, v5, *(_DWORD *)(v6 + 4));
  _R0 = Agent::getMoveSpeedScalar(v5);
    VMOV            S0, R5
    VLDR            S4, =0.1
    VMOV            S2, R0
    VMUL.F32        S0, S0, S4
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  _R5 = mce::Math::sin(_R0, v20);
  __asm { VLDR            S20, [R11] }
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v31);
    VMOV.F32        S18, #1.0
    VLDR            S2, =0.07
    VLDR            S4, [R0,#0x18]
    VLDR            S6, [R0,#0x1C]
    VLDR            S8, [R0,#0x10]
    VLDR            S10, [R0,#0x34]
    VLDR            S12, [R0,#0x38]
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S0, S0, S18
    VLDR            S2, [R0,#0x14]
    VMUL.F32        S0, S0, S20
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
  Agent::isIdling(v5);
    VLDR            S0, =0.004
    VMOV            S2, R9
    VMUL.F32        S0, S16, S0
    VMUL.F32        S16, S0, S2
  if ( _ZF && Agent::isHovering(v5) == 1 )
    __asm { VLDR            S0, [R11] }
    v29 = 1065353216;
    __asm { VADD.F32        S0, S0, S16 }
    v23 = &v29;
    __asm
    {
      VCMPE.F32       S0, S18
      VSTR            S0, [SP,#0x60+var_4C]
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v23 = (int *)&v30;
  else
    v27 = 0;
    __asm { VSUB.F32        S0, S0, S16 }
    v23 = &v27;
      VCMPE.F32       S0, #0.0
      VSTR            S0, [SP,#0x60+var_54]
    if ( !(_NF ^ _VF) )
      v23 = (int *)&v28;
  *(_DWORD *)_R11 = *v23;
  v24 = *(_DWORD *)(v4 + 140);
  v25 = (*(int (__fastcall **)(int, Agent *))(*(_DWORD *)v4 + 84))(v4, v5);
  MobRenderer::renderModel(v4, (BaseEntityRenderContext *)v6, (int)v3, v24, v25);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v31);
}
