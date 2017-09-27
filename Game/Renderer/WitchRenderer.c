

void __fastcall WitchRenderer::~WitchRenderer(WitchRenderer *this)
{
  WitchRenderer::~WitchRenderer(this);
}


void __fastcall WitchRenderer::setupScale(int a1, int a2, int _R2)
{
  WitchRenderer::setupScale(a1, a2, _R2);
}


void __fastcall WitchRenderer::setupScale(int a1, int a2, int _R2)
{
  __asm
  {
    VMOV.F32        S0, #0.9375
    VLDR            S2, [R2]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R2]
    VLDR            S2, [R2,#4]
    VSTR            S2, [R2,#4]
    VLDR            S2, [R2,#8]
    VSTR            S2, [R2,#8]
    VLDR            S2, [R2,#0xC]
    VSTR            S2, [R2,#0xC]
    VLDR            S2, [R2,#0x10]
    VSTR            S2, [R2,#0x10]
    VLDR            S2, [R2,#0x14]
    VSTR            S2, [R2,#0x14]
    VLDR            S2, [R2,#0x18]
    VSTR            S2, [R2,#0x18]
    VLDR            S2, [R2,#0x1C]
    VSTR            S2, [R2,#0x1C]
    VLDR            S2, [R2,#0x20]
    VSTR            S2, [R2,#0x20]
    VLDR            S2, [R2,#0x24]
    VSTR            S2, [R2,#0x24]
    VLDR            S2, [R2,#0x28]
    VSTR            S2, [R2,#0x28]
    VLDR            S2, [R2,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R2,#0x2C]
  }
}


int __fastcall WitchRenderer::render(int a1, BaseEntityRenderContext *a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r8@1
  int v6; // r5@1
  int v7; // r7@1
  char v8; // r0@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 140);
  v7 = (*(int (**)(void))(*(_DWORD *)*a3 + 908))();
  if ( *(_BYTE *)(v7 + 15) )
  {
    if ( *(_DWORD *)v7 )
    {
      if ( ItemInstance::isNull((ItemInstance *)v7) )
      {
        v8 = 0;
      }
      else
        v8 = *(_BYTE *)(v7 + 14);
        if ( *(_BYTE *)(v7 + 14) )
          v8 = 1;
    }
    else
      v8 = 0;
  }
  else
    v8 = 0;
  *(_BYTE *)(v6 + 1380) = v8;
  return j_j_j__ZN11MobRenderer6renderER23BaseEntityRenderContextR16EntityRenderData(v4, v5, v3);
}


signed int __fastcall WitchRenderer::additionalRendering(WitchRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Entity *v10; // r4@1
  BaseEntityRenderContext *v11; // r9@1
  Model *v12; // r7@1
  int v13; // r0@1
  int v14; // r6@1
  signed int result; // r0@1
  int v23; // r0@6
  int v25; // r7@7
  int v28; // r7@9
  int v29; // r7@9
  int v34; // r7@11
  signed int v35; // r0@11
  int v37; // r7@12
  int v39; // r7@12
  ItemInHandRenderer *v40; // r0@14
  char v41; // [sp+14h] [bp-74h]@6
  int v42; // [sp+1Ch] [bp-6Ch]@7
  signed int v43; // [sp+20h] [bp-68h]@7
  int v44; // [sp+24h] [bp-64h]@7
  int v45; // [sp+28h] [bp-60h]@7
  int v46; // [sp+2Ch] [bp-5Ch]@7
  int v47; // [sp+30h] [bp-58h]@7
  int v48; // [sp+34h] [bp-54h]@7
  int v49; // [sp+38h] [bp-50h]@7
  int v50; // [sp+3Ch] [bp-4Ch]@7
  int v51; // [sp+40h] [bp-48h]@7
  int v52; // [sp+44h] [bp-44h]@7
  int v53; // [sp+48h] [bp-40h]@7
  int v54; // [sp+4Ch] [bp-3Ch]@7
  int v55; // [sp+50h] [bp-38h]@7
  int v56; // [sp+54h] [bp-34h]@7
  int v57; // [sp+58h] [bp-30h]@7
  int v58; // [sp+5Ch] [bp-2Ch]@7
  int v59; // [sp+60h] [bp-28h]@7
  int v60; // [sp+64h] [bp-24h]@7
  int v61; // [sp+68h] [bp-20h]@7

  v10 = a4;
  v11 = a2;
  v12 = a3;
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
        __asm
        {
          VLDR            S6, [SP,#0x88+arg_8]
          VLDR            S8, [SP,#0x88+arg_4]
          VLDR            S10, [SP,#0x88+arg_0]
          VMOV            R3, S6
          VMOV            R2, S8
          VMOV            R1, S10
          VLDR            S0, [SP,#0x88+arg_14]
          VLDR            S2, [SP,#0x88+arg_10]
          VLDR            S4, [SP,#0x88+arg_C]
          VSTR            S4, [SP,#0x88+var_88]
          VSTR            S2, [SP,#0x88+var_84]
          VSTR            S0, [SP,#0x88+var_80]
        }
        (*(void (__fastcall **)(Model *, int, int, int))(*(_DWORD *)v12 + 64))(v12, _R1, _R2, _R3);
        v23 = BaseEntityRenderContext::getWorldMatrix(v11);
        MatrixStack::push((MatrixStack *)&v41, v23);
        if ( Entity::isBaby(v10) == 1 )
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v41);
          __asm
          {
            VMOV.F32        S0, #0.625
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
          v25 = MatrixStack::MatrixStackRef::operator->((int)&v41);
          v42 = -1082130432;
          v43 = 0;
          v44 = 0;
          v61 = -1046478848;
          glm::rotate<float>((int)&v45, v25, (int)&v61, (int)&v42);
          *(_DWORD *)v25 = v45;
          *(_DWORD *)(v25 + 4) = v46;
          *(_DWORD *)(v25 + 8) = v47;
          *(_DWORD *)(v25 + 12) = v48;
          *(_DWORD *)(v25 + 16) = v49;
          *(_DWORD *)(v25 + 20) = v50;
          *(_DWORD *)(v25 + 24) = v51;
          *(_DWORD *)(v25 + 28) = v52;
          *(_DWORD *)(v25 + 32) = v53;
          *(_DWORD *)(v25 + 36) = v54;
          *(_DWORD *)(v25 + 40) = v55;
          *(_DWORD *)(v25 + 44) = v56;
          *(_DWORD *)(v25 + 48) = v57;
          *(_DWORD *)(v25 + 52) = v58;
          *(_DWORD *)(v25 + 56) = v59;
          *(_DWORD *)(v25 + 60) = v60;
            VMOV.F32        S0, #0.5
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
        if ( *(_DWORD *)(v14 + 4) )
            VMOV.F32        S0, #-0.25
            VLDR            S10, [R0,#0x20]
            VLDR            S12, [R0,#0x24]
            VLDR            S14, [R0,#0x28]
            VLDR            S2, =0.0625
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
            VADD.F32        S6, S14, S6
            VADD.F32        S8, S10, S3
            VADD.F32        S0, S0, S2
            VLDR            S2, [R0,#0x30]
            VADD.F32        S4, S4, S10
            VADD.F32        S6, S6, S12
            VADD.F32        S2, S8, S2
            VADD.F32        S0, S0, S14
            VSTR            S2, [R0,#0x30]
            VSTR            S4, [R0,#0x34]
            VSTR            S6, [R0,#0x38]
          v28 = MatrixStack::MatrixStackRef::operator->((int)&v41);
          v42 = 1065353216;
          v61 = 1106247680;
          glm::rotate<float>((int)&v45, v28, (int)&v61, (int)&v42);
          *(_DWORD *)v28 = v45;
          *(_DWORD *)(v28 + 4) = v46;
          *(_DWORD *)(v28 + 8) = v47;
          *(_DWORD *)(v28 + 12) = v48;
          *(_DWORD *)(v28 + 16) = v49;
          *(_DWORD *)(v28 + 20) = v50;
          *(_DWORD *)(v28 + 24) = v51;
          *(_DWORD *)(v28 + 28) = v52;
          *(_DWORD *)(v28 + 32) = v53;
          *(_DWORD *)(v28 + 36) = v54;
          *(_DWORD *)(v28 + 40) = v55;
          *(_DWORD *)(v28 + 44) = v56;
          *(_DWORD *)(v28 + 48) = v57;
          *(_DWORD *)(v28 + 52) = v58;
          *(_DWORD *)(v28 + 56) = v59;
          *(_DWORD *)(v28 + 60) = v60;
          v29 = MatrixStack::MatrixStackRef::operator->((int)&v41);
          v42 = 0;
          v43 = 1065353216;
          v61 = -1063256064;
          glm::rotate<float>((int)&v45, v29, (int)&v61, (int)&v42);
          *(_DWORD *)v29 = v45;
          *(_DWORD *)(v29 + 4) = v46;
          *(_DWORD *)(v29 + 8) = v47;
          *(_DWORD *)(v29 + 12) = v48;
          *(_DWORD *)(v29 + 16) = v49;
          *(_DWORD *)(v29 + 20) = v50;
          *(_DWORD *)(v29 + 24) = v51;
          *(_DWORD *)(v29 + 28) = v52;
          *(_DWORD *)(v29 + 32) = v53;
          *(_DWORD *)(v29 + 36) = v54;
          *(_DWORD *)(v29 + 40) = v55;
          *(_DWORD *)(v29 + 44) = v56;
          *(_DWORD *)(v29 + 48) = v57;
          *(_DWORD *)(v29 + 52) = v58;
          *(_DWORD *)(v29 + 56) = v59;
          *(_DWORD *)(v29 + 60) = v60;
            VMOV.F32        S0, #0.375
            VMOV.F32        S4, #-0.375
            VMUL.F32        S2, S2, S4
        else
          if ( *(_DWORD *)v14 == Item::mBow )
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v41);
            __asm
            {
              VLDR            S0, [R0,#0x14]
              VMOV.F32        S1, #0.125
              VLDR            S8, [R0,#0x24]
              VLDR            S2, [R0,#0x18]
              VLDR            S10, [R0,#0x28]
              VSUB.F32        S0, S0, S8
              VLDR            S4, [R0,#0x1C]
              VLDR            S12, [R0,#0x2C]
              VSUB.F32        S2, S2, S10
              VLDR            S6, [R0,#0x20]
              VLDR            S14, [R0,#0x10]
              VSUB.F32        S4, S4, S12
              VLDR            S8, [R0,#0x30]
              VSUB.F32        S6, S14, S6
              VLDR            S10, [R0,#0x34]
              VMUL.F32        S0, S0, S1
              VLDR            S12, [R0,#0x38]
              VLDR            S14, [R0,#0x3C]
              VMUL.F32        S2, S2, S1
              VMUL.F32        S4, S4, S1
              VMUL.F32        S6, S6, S1
              VADD.F32        S0, S0, S10
              VADD.F32        S2, S2, S12
              VADD.F32        S4, S4, S14
              VADD.F32        S6, S6, S8
              VSTR            S6, [R0,#0x30]
              VSTR            S0, [R0,#0x34]
              VSTR            S2, [R0,#0x38]
              VSTR            S4, [R0,#0x3C]
            }
            v37 = MatrixStack::MatrixStackRef::operator->((int)&v41);
            v42 = 0;
            v43 = 1065353216;
            v44 = 0;
            v61 = -1036779520;
            glm::rotate<float>((int)&v45, v37, (int)&v61, (int)&v42);
            *(_DWORD *)v37 = v45;
            *(_DWORD *)(v37 + 4) = v46;
            *(_DWORD *)(v37 + 8) = v47;
            *(_DWORD *)(v37 + 12) = v48;
            *(_DWORD *)(v37 + 16) = v49;
            *(_DWORD *)(v37 + 20) = v50;
            *(_DWORD *)(v37 + 24) = v51;
            *(_DWORD *)(v37 + 28) = v52;
            *(_DWORD *)(v37 + 32) = v53;
            *(_DWORD *)(v37 + 36) = v54;
            *(_DWORD *)(v37 + 40) = v55;
            *(_DWORD *)(v37 + 44) = v56;
            *(_DWORD *)(v37 + 48) = v57;
            *(_DWORD *)(v37 + 52) = v58;
            *(_DWORD *)(v37 + 56) = v59;
            *(_DWORD *)(v37 + 60) = v60;
              VMOV.F32        S0, #0.625
              VLDR            S2, [R0]
              VMOV.F32        S4, #-0.625
              VMUL.F32        S2, S2, S0
              VSTR            S2, [R0]
              VLDR            S2, [R0,#4]
              VSTR            S2, [R0,#4]
              VLDR            S2, [R0,#8]
              VSTR            S2, [R0,#8]
              VLDR            S2, [R0,#0xC]
              VSTR            S2, [R0,#0xC]
              VLDR            S2, [R0,#0x10]
              VMUL.F32        S2, S2, S4
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
            v39 = MatrixStack::MatrixStackRef::operator->((int)&v41);
            v42 = 1065353216;
            v43 = 0;
            v61 = -1027080192;
            glm::rotate<float>((int)&v45, v39, (int)&v61, (int)&v42);
            *(_DWORD *)v39 = v45;
            *(_DWORD *)(v39 + 4) = v46;
            *(_DWORD *)(v39 + 8) = v47;
            *(_DWORD *)(v39 + 12) = v48;
            *(_DWORD *)(v39 + 16) = v49;
            *(_DWORD *)(v39 + 20) = v50;
            *(_DWORD *)(v39 + 24) = v51;
            *(_DWORD *)(v39 + 28) = v52;
            *(_DWORD *)(v39 + 32) = v53;
            *(_DWORD *)(v39 + 36) = v54;
            *(_DWORD *)(v39 + 40) = v55;
            *(_DWORD *)(v39 + 44) = v56;
            *(_DWORD *)(v39 + 48) = v57;
            *(_DWORD *)(v39 + 52) = v58;
            *(_DWORD *)(v39 + 56) = v59;
            *(_DWORD *)(v39 + 60) = v60;
            v34 = MatrixStack::MatrixStackRef::operator->((int)&v41);
            v35 = -1046478848;
          else
              VMOV.F32        S0, #0.1875
              VLDR            S8, [R0,#0xC]
              VMOV.F32        S2, #0.3125
              VLDR            S10, [R0,#0x10]
              VLDR            S12, [R0,#0x14]
              VMOV.F32        S5, #-0.5
              VLDR            S14, [R0,#0x18]
              VLDR            S6, [R0,#8]
              VLDR            S1, [R0,#0x1C]
              VLDMIA          R0, {S3-S4}
              VMUL.F32        S8, S8, S0
              VMUL.F32        S3, S3, S0
              VLDR            S7, [R0,#0x20]
              VMUL.F32        S10, S10, S2
              VMUL.F32        S4, S4, S0
              VMUL.F32        S12, S12, S2
              VMUL.F32        S0, S6, S0
              VLDR            S6, [R0,#0x24]
              VMUL.F32        S14, S14, S2
              VMUL.F32        S2, S1, S2
              VMUL.F32        S1, S7, S5
              VLDR            S7, [R0,#0x28]
              VADD.F32        S10, S10, S3
              VMUL.F32        S6, S6, S5
              VADD.F32        S4, S12, S4
              VMUL.F32        S3, S7, S5
              VADD.F32        S0, S14, S0
              VADD.F32        S2, S2, S8
              VMUL.F32        S12, S12, S5
              VADD.F32        S8, S10, S1
              VADD.F32        S4, S4, S6
              VLDR            S6, [R0,#0x30]
              VADD.F32        S0, S0, S3
              VADD.F32        S6, S8, S6
              VLDR            S8, [R0,#0x3C]
              VADD.F32        S4, S4, S10
              VADD.F32        S0, S0, S12
              VSTR            S4, [R0,#0x34]
              VSTR            S0, [R0,#0x38]
              VSTR            S2, [R0,#0x3C]
              VMOV.F32        S0, #0.375
              VMOV.F32        S4, #-0.375
            v44 = 1065353216;
            v35 = 1101004800;
          v61 = v35;
          glm::rotate<float>((int)&v45, v34, (int)&v61, (int)&v42);
          *(_DWORD *)v34 = v45;
          *(_DWORD *)(v34 + 4) = v46;
          *(_DWORD *)(v34 + 8) = v47;
          *(_DWORD *)(v34 + 12) = v48;
          *(_DWORD *)(v34 + 16) = v49;
          *(_DWORD *)(v34 + 20) = v50;
          *(_DWORD *)(v34 + 24) = v51;
          *(_DWORD *)(v34 + 28) = v52;
          *(_DWORD *)(v34 + 32) = v53;
          *(_DWORD *)(v34 + 36) = v54;
          *(_DWORD *)(v34 + 40) = v55;
          *(_DWORD *)(v34 + 44) = v56;
          *(_DWORD *)(v34 + 48) = v57;
          *(_DWORD *)(v34 + 52) = v58;
          *(_DWORD *)(v34 + 56) = v59;
          *(_DWORD *)(v34 + 60) = v60;
        v40 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer(v11);
        ItemInHandRenderer::renderItem(v40, v11, v10, (const ItemInstance *)v14, 0, 0, 1, 0);
        result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v41);
      }
    }
  return result;
}


_DWORD *__fastcall WitchRenderer::WitchRenderer(_DWORD *a1, int *a2, int a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  char v6; // [sp+4h] [bp-2Ch]@1
  int v7; // [sp+1Ch] [bp-14h]@1

  v3 = *a2;
  v4 = a1;
  *a2 = 0;
  v7 = v3;
  mce::TexturePtr::TexturePtr((int)&v6, a3);
  MobRenderer::MobRenderer((int)v4, &v7, (mce::TexturePtr *)&v6);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v6);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *v4 = &off_26DC5D0;
  return v4;
}


void __fastcall WitchRenderer::~WitchRenderer(WitchRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}
