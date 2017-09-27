

void __fastcall EvocationFangRenderer::~EvocationFangRenderer(EvocationFangRenderer *this)
{
  EvocationFangRenderer *v1; // r4@1
  ModelPart *v2; // r5@1
  Model *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB478;
  v2 = (EvocationFangRenderer *)((char *)this + 220);
  *((_DWORD *)this + 40) = &off_26E54B0;
  v3 = (EvocationFangRenderer *)((char *)this + 160);
  ModelPart::~ModelPart((EvocationFangRenderer *)((char *)this + 660));
  ModelPart::~ModelPart((EvocationFangRenderer *)((char *)v1 + 440));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((EvocationFangRenderer *)((char *)v1 + 208));
  Model::~Model(v3);
  mce::TexturePtr::~TexturePtr((EvocationFangRenderer *)((char *)v1 + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall EvocationFangRenderer::EvocationFangRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r6@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+4h] [bp-24h]@1
  char *v12; // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v3 = &off_26DB478;
  sub_119C884((void **)&v11, "textures/entity/illager/fangs");
  v12 = v11;
  v13 = 0;
  v11 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 136), v2, (int)&v12, 0);
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
  EvocationFangModel::EvocationFangModel((BaseEntityRenderer *)((char *)v3 + 160));
  *((_DWORD *)v3 + 48) = (char *)v3 + 136;
  return v3;
}


BaseEntityRenderer *__fastcall EvocationFangRenderer::~EvocationFangRenderer(EvocationFangRenderer *this)
{
  EvocationFangRenderer *v1; // r4@1
  ModelPart *v2; // r5@1
  Model *v3; // r6@1

  v1 = this;
  *(_DWORD *)this = &off_26DB478;
  v2 = (EvocationFangRenderer *)((char *)this + 220);
  *((_DWORD *)this + 40) = &off_26E54B0;
  v3 = (EvocationFangRenderer *)((char *)this + 160);
  ModelPart::~ModelPart((EvocationFangRenderer *)((char *)this + 660));
  ModelPart::~ModelPart((EvocationFangRenderer *)((char *)v1 + 440));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((EvocationFangRenderer *)((char *)v1 + 208));
  Model::~Model(v3);
  mce::TexturePtr::~TexturePtr((EvocationFangRenderer *)((char *)v1 + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


void __fastcall EvocationFangRenderer::~EvocationFangRenderer(EvocationFangRenderer *this)
{
  EvocationFangRenderer::~EvocationFangRenderer(this);
}


int __fastcall EvocationFangRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  BaseEntityRenderContext *v3; // r4@1
  int v4; // r8@1
  __int64 *v5; // r5@1
  int v6; // r0@1
  int v8; // r9@1
  int result; // r0@1
  int v15; // r0@5
  int v17; // r5@5
  int v20; // r3@5
  int v21; // [sp+8h] [bp-90h]@0
  int v22; // [sp+Ch] [bp-8Ch]@0
  char v23; // [sp+18h] [bp-80h]@5
  int v24; // [sp+20h] [bp-78h]@5
  signed int v25; // [sp+24h] [bp-74h]@5
  int v26; // [sp+28h] [bp-70h]@5
  int v27; // [sp+2Ch] [bp-6Ch]@5
  int v28; // [sp+30h] [bp-68h]@5
  int v29; // [sp+34h] [bp-64h]@5
  int v30; // [sp+38h] [bp-60h]@5
  int v31; // [sp+3Ch] [bp-5Ch]@5
  int v32; // [sp+40h] [bp-58h]@5
  int v33; // [sp+44h] [bp-54h]@5
  int v34; // [sp+48h] [bp-50h]@5
  int v35; // [sp+4Ch] [bp-4Ch]@5
  int v36; // [sp+50h] [bp-48h]@5
  int v37; // [sp+54h] [bp-44h]@5
  int v38; // [sp+58h] [bp-40h]@5
  int v39; // [sp+5Ch] [bp-3Ch]@5
  int v40; // [sp+60h] [bp-38h]@5
  int v41; // [sp+64h] [bp-34h]@5
  int v42; // [sp+68h] [bp-30h]@5
  float v43; // [sp+6Ch] [bp-2Ch]@5

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _R6 = *v5;
  v8 = v6;
  result = EvocationFang::getAnimationProgress((EvocationFang *)*v5, *((float *)v3 + 1));
  _R10 = result;
  __asm
  {
    VMOV            S0, R10
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm
    {
      VLDR            S2, =0.9
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VMOV.F32        S16, #2.0 }
    else
      __asm
      {
        VCVT.F64.F32    D0, S0
        VMOV.F64        D1, #1.0
        VSUB.F64        D0, D1, D0
        VLDR            D1, =19.9999997
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S16, D0
      }
    v15 = BaseEntityRenderContext::getWorldMatrix(v3);
    MatrixStack::push((MatrixStack *)&v23, v15);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v23);
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
    v17 = MatrixStack::MatrixStackRef::operator->((int)&v23);
      VLDR            S0, =90.0
      VLDR            S2, [R6,#0x7C]
    v24 = 0;
    __asm { VSUB.F32        S0, S0, S2 }
    v25 = 1065353216;
    v26 = 0;
    __asm { VSTR            S0, [SP,#0x98+var_2C] }
    glm::rotate<float>((int)&v27, v17, (int)&v43, (int)&v24);
    *(_DWORD *)v17 = v27;
    *(_DWORD *)(v17 + 4) = v28;
    *(_DWORD *)(v17 + 8) = v29;
    *(_DWORD *)(v17 + 12) = v30;
    *(_DWORD *)(v17 + 16) = v31;
    *(_DWORD *)(v17 + 20) = v32;
    *(_DWORD *)(v17 + 24) = v33;
    *(_DWORD *)(v17 + 28) = v34;
    *(_DWORD *)(v17 + 32) = v35;
    *(_DWORD *)(v17 + 36) = v36;
    *(_DWORD *)(v17 + 40) = v37;
    *(_DWORD *)(v17 + 44) = v38;
    *(_DWORD *)(v17 + 48) = v39;
    *(_DWORD *)(v17 + 52) = v40;
    *(_DWORD *)(v17 + 56) = v41;
    *(_DWORD *)(v17 + 60) = v42;
      VNMUL.F32       S0, S16, S0
      VSTR            S0, [R0]
      VLDR            S0, [R0,#4]
      VSTR            S0, [R0,#4]
      VLDR            S0, [R0,#8]
      VSTR            S0, [R0,#8]
      VLDR            S0, [R0,#0xC]
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
      VLDR            S0, =0.626
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S8, [R0,#0x10]
      VMUL.F32        S2, S2, S0
      VLDR            S6, [R0,#0x1C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S6, S8
      VSUB.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x3C]
    v20 = *((_DWORD *)v3 + 1);
    EntityShaderManager::_setupShaderParameters(v4, v8, *(float *)&_R6);
      VLDR            S0, [R6,#0x78]
      VSTR            S0, [SP,#0x98+var_8C]
      VSTR            S2, [SP,#0x98+var_90]
    EvocationFangModel::render(v4 + 160, *(float *)&v8, _R6, _R10, 0, 0, v21, v22, 1023410176);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v23);
  return result;
}
