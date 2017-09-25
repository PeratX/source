

BaseEntityRenderer *__fastcall LlamaSpitRenderer::LlamaSpitRenderer(BaseEntityRenderer *a1, int *a2, mce::TextureGroup *a3)
{
  mce::TextureGroup *v3; // r5@1
  int *v4; // r6@1
  BaseEntityRenderer *v5; // r4@1
  int v6; // r0@1
  char *v7; // r0@1
  char *v8; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  char *v14; // [sp+4h] [bp-24h]@1
  char *v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  EntityRenderer::EntityRenderer(a1, a3, 0);
  *(_DWORD *)v5 = &off_26DBABC;
  v6 = *v4;
  *v4 = 0;
  *((_DWORD *)v5 + 34) = v6;
  sub_119C884((void **)&v14, "textures/entity/llama/spit");
  v15 = v14;
  v16 = 0;
  v14 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((BaseEntityRenderer *)((char *)v5 + 140), v3, (int)&v15, 0);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v5;
}


void __fastcall LlamaSpitRenderer::~LlamaSpitRenderer(LlamaSpitRenderer *this)
{
  LlamaSpitRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBABC;
  mce::TexturePtr::~TexturePtr((LlamaSpitRenderer *)((char *)this + 140));
  v2 = *((_DWORD *)v1 + 34);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall LlamaSpitRenderer::~LlamaSpitRenderer(LlamaSpitRenderer *this)
{
  LlamaSpitRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBABC;
  mce::TexturePtr::~TexturePtr((LlamaSpitRenderer *)((char *)this + 140));
  v2 = *((_DWORD *)v1 + 34);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


int __fastcall LlamaSpitRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  BaseEntityRenderContext *v3; // r5@1
  int v4; // r9@1
  int v6; // r0@1
  float v12; // r3@1
  int v13; // r7@1
  int v14; // r7@1
  int v15; // r6@1
  void (__fastcall *v16)(int, int, _DWORD, _DWORD); // r4@1
  int v17; // r0@1
  float v19; // [sp+14h] [bp-7Ch]@1
  char v21; // [sp+1Ch] [bp-74h]@1
  int v22; // [sp+24h] [bp-6Ch]@1
  signed int v23; // [sp+28h] [bp-68h]@1
  int v24; // [sp+2Ch] [bp-64h]@1
  int v25; // [sp+30h] [bp-60h]@1
  int v26; // [sp+34h] [bp-5Ch]@1
  int v27; // [sp+38h] [bp-58h]@1
  int v28; // [sp+3Ch] [bp-54h]@1
  int v29; // [sp+40h] [bp-50h]@1
  int v30; // [sp+44h] [bp-4Ch]@1
  int v31; // [sp+48h] [bp-48h]@1
  int v32; // [sp+4Ch] [bp-44h]@1
  int v33; // [sp+50h] [bp-40h]@1
  int v34; // [sp+54h] [bp-3Ch]@1
  int v35; // [sp+58h] [bp-38h]@1
  int v36; // [sp+5Ch] [bp-34h]@1
  int v37; // [sp+60h] [bp-30h]@1
  int v38; // [sp+64h] [bp-2Ch]@1
  int v39; // [sp+68h] [bp-28h]@1
  int v40; // [sp+6Ch] [bp-24h]@1
  float v41; // [sp+70h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  _KR00_8 = *a3;
  v6 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v21, v6);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v21);
  __asm
  {
    VLDR            S0, =0.15
    VLDR            S4, [R4,#4]
    VLDR            S2, [R4]
    VADD.F32        S0, S4, S0
    VLDR            S4, [R0,#4]
    VLDR            S12, [R0,#0x10]
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S4, S4, S2
    VLDR            S5, [R0]
    VLDR            S10, [R0,#0xC]
    VLDR            S1, [R0,#0x18]
    VMUL.F32        S5, S5, S2
    VLDR            S8, [R0,#8]
    VMUL.F32        S10, S10, S2
    VMUL.F32        S12, S12, S0
    VLDR            S3, [R0,#0x1C]
    VMUL.F32        S14, S14, S0
    VLDR            S6, [R4,#8]
    VMUL.F32        S2, S8, S2
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S1, S1, S0
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S0, S3, S0
    VMUL.F32        S3, S7, S6
    VLDR            S7, [R0,#0x28]
    VMUL.F32        S8, S8, S6
    VADD.F32        S12, S12, S5
    VADD.F32        S4, S14, S4
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S5, S7, S6
    VADD.F32        S2, S1, S2
    VADD.F32        S0, S0, S10
    VMUL.F32        S6, S14, S6
    VADD.F32        S10, S12, S3
    VLDR            S12, [R0,#0x38]
    VADD.F32        S4, S4, S8
    VLDR            S8, [R0,#0x34]
    VADD.F32        S2, S2, S5
    VADD.F32        S0, S0, S6
    VLDR            S6, [R0,#0x30]
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x3C]
    VADD.F32        S2, S2, S12
    VSTR            S6, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  }
  Entity::getInterpolatedRotation((Entity *)&v19, *(float *)&_KR00_8, *((float *)v3 + 1), v12);
  v13 = MatrixStack::MatrixStackRef::operator->((int)&v21);
    VLDR            S0, =-90.0
    VLDR            S2, [SP,#0x90+var_78]
    VADD.F32        S0, S2, S0
  v22 = 0;
  v23 = 1065353216;
  v24 = 0;
  __asm { VSTR            S0, [SP,#0x90+var_20] }
  glm::rotate<float>((int)&v25, v13, (int)&v41, (int)&v22);
  *(_DWORD *)v13 = v25;
  *(_DWORD *)(v13 + 4) = v26;
  *(_DWORD *)(v13 + 8) = v27;
  *(_DWORD *)(v13 + 12) = v28;
  *(_DWORD *)(v13 + 16) = v29;
  *(_DWORD *)(v13 + 20) = v30;
  *(_DWORD *)(v13 + 24) = v31;
  *(_DWORD *)(v13 + 28) = v32;
  *(_DWORD *)(v13 + 32) = v33;
  *(_DWORD *)(v13 + 36) = v34;
  *(_DWORD *)(v13 + 40) = v35;
  *(_DWORD *)(v13 + 44) = v36;
  *(_DWORD *)(v13 + 48) = v37;
  *(_DWORD *)(v13 + 52) = v38;
  *(_DWORD *)(v13 + 56) = v39;
  *(_DWORD *)(v13 + 60) = v40;
  v14 = MatrixStack::MatrixStackRef::operator->((int)&v21);
  v23 = 0;
  v41 = v19;
  v24 = 1065353216;
  glm::rotate<float>((int)&v25, v14, (int)&v41, (int)&v22);
  *(_DWORD *)v14 = v25;
  *(_DWORD *)(v14 + 4) = v26;
  *(_DWORD *)(v14 + 8) = v27;
  *(_DWORD *)(v14 + 12) = v28;
  *(_DWORD *)(v14 + 16) = v29;
  *(_DWORD *)(v14 + 20) = v30;
  *(_DWORD *)(v14 + 24) = v31;
  *(_DWORD *)(v14 + 28) = v32;
  *(_DWORD *)(v14 + 32) = v33;
  *(_DWORD *)(v14 + 36) = v34;
  *(_DWORD *)(v14 + 40) = v35;
  *(_DWORD *)(v14 + 44) = v36;
  *(_DWORD *)(v14 + 48) = v37;
  *(_DWORD *)(v14 + 52) = v38;
  *(_DWORD *)(v14 + 56) = v39;
  *(_DWORD *)(v14 + 60) = v40;
  *(_DWORD *)(*(_DWORD *)(v4 + 136) + 32) = v4 + 140;
  v15 = *(_DWORD *)(v4 + 136);
  v16 = *(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v15 + 60);
  v17 = BaseEntityRenderContext::getScreenContext(v3);
  v16(v15, v17, _KR00_8, *((_DWORD *)v3 + 1));
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v21);
}


void __fastcall LlamaSpitRenderer::~LlamaSpitRenderer(LlamaSpitRenderer *this)
{
  LlamaSpitRenderer::~LlamaSpitRenderer(this);
}
