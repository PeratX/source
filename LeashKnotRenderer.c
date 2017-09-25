

void __fastcall LeashKnotRenderer::~LeashKnotRenderer(LeashKnotRenderer *this)
{
  LeashKnotRenderer::~LeashKnotRenderer(this);
}


int __fastcall LeashKnotRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  BaseEntityRenderContext *v3; // r6@1
  int v4; // r7@1
  __int64 *v5; // r4@1
  int v6; // r8@1
  int v8; // r0@1
  int v14; // r3@1
  int v15; // r0@1
  char v17; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *v5;
  v8 = BaseEntityRenderContext::getWorldMatrix(v3);
  MatrixStack::push((MatrixStack *)&v17, v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v17);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S4, [R5,#4]
    VLDR            S2, [R5]
    VLDR            S5, [R0]
    VLDR            S12, [R0,#0x10]
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S5, S5, S2
    VLDR            S10, [R0,#0xC]
    VLDR            S8, [R0,#8]
    VADD.F32        S0, S4, S0
    VLDR            S4, [R0,#4]
    VLDR            S1, [R0,#0x18]
    VMUL.F32        S10, S10, S2
    VMUL.F32        S4, S4, S2
    VLDR            S3, [R0,#0x1C]
    VMUL.F32        S2, S8, S2
    VLDR            S6, [R5,#8]
    VLDR            S7, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S12, S12, S0
    VMUL.F32        S14, S14, S0
    VMUL.F32        S1, S1, S0
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
  v14 = *((_DWORD *)v3 + 1);
  EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&_KR00_8);
  v15 = *(_DWORD *)(v4 + 136);
  *(_DWORD *)(v15 + 32) = v4 + 140;
  (*(void (__cdecl **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v15 + 60))(
    v15,
    v6,
    _KR00_8,
    *((_DWORD *)v3 + 1),
    0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v17);
}


void __fastcall LeashKnotRenderer::~LeashKnotRenderer(LeashKnotRenderer *this)
{
  LeashKnotRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DB9FC;
  mce::TexturePtr::~TexturePtr((LeashKnotRenderer *)((char *)this + 140));
  v2 = *((_DWORD *)v1 + 34);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall LeashKnotRenderer::LeashKnotRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int *a3)
{
  int *v3; // r6@1
  mce::TextureGroup *v4; // r5@1
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
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v5 = &off_26DB9FC;
  v6 = *v3;
  *v3 = 0;
  *((_DWORD *)v5 + 34) = v6;
  sub_119C884((void **)&v14, "textures/entity/lead_knot");
  v15 = v14;
  v16 = 0;
  v14 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((BaseEntityRenderer *)((char *)v5 + 140), v4, (int)&v15, 0);
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


BaseEntityRenderer *__fastcall LeashKnotRenderer::~LeashKnotRenderer(LeashKnotRenderer *this)
{
  LeashKnotRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DB9FC;
  mce::TexturePtr::~TexturePtr((LeashKnotRenderer *)((char *)this + 140));
  v2 = *((_DWORD *)v1 + 34);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}
