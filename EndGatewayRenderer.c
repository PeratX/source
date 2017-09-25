

void __fastcall EndGatewayRenderer::~EndGatewayRenderer(EndGatewayRenderer *this)
{
  EndGatewayRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAFE8;
  v2 = (EndGatewayRenderer *)((char *)this + 80);
  mce::MaterialPtr::~MaterialPtr((EndGatewayRenderer *)((char *)this + 116));
  mce::MaterialPtr::~MaterialPtr((EndGatewayRenderer *)((char *)v1 + 104));
  mce::TexturePtr::~TexturePtr(v2);
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall EndGatewayRenderer::~EndGatewayRenderer(EndGatewayRenderer *this)
{
  EndGatewayRenderer::~EndGatewayRenderer(this);
}


signed int __fastcall EndGatewayRenderer::renderAlpha(EndGatewayRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  EndGatewayRenderer *v4; // r9@1
  BlockEntityRenderData *v5; // r6@1
  int v6; // r0@1
  float v8; // r5@1
  int v9; // r0@1
  signed int result; // r0@1
  signed int v15; // r5@2
  Tessellator *v16; // r6@2
  int v18; // r1@2
  int v20; // r0@2
  int v21; // r1@2
  const Color *v23; // ST00_4@2
  float v24; // ST04_4@2
  const Color *v25; // [sp+0h] [bp-C0h]@0
  float v26; // [sp+4h] [bp-BCh]@0
  mce::TexturePtr *v27; // [sp+24h] [bp-9Ch]@2
  float v28; // [sp+28h] [bp-98h]@2
  int v29; // [sp+2Ch] [bp-94h]@2
  int v30; // [sp+30h] [bp-90h]@2
  signed int v31; // [sp+34h] [bp-8Ch]@2
  signed int v32; // [sp+38h] [bp-88h]@2
  int v33; // [sp+3Ch] [bp-84h]@2
  int v34; // [sp+44h] [bp-7Ch]@2
  int v35; // [sp+48h] [bp-78h]@2
  int v36; // [sp+4Ch] [bp-74h]@2
  signed int v37; // [sp+50h] [bp-70h]@2
  signed int v38; // [sp+54h] [bp-6Ch]@2
  int v39; // [sp+58h] [bp-68h]@2
  int v40; // [sp+60h] [bp-60h]@2
  float v41; // [sp+64h] [bp-5Ch]@1
  int v42; // [sp+68h] [bp-58h]@1
  int v43; // [sp+6Ch] [bp-54h]@1
  int v44; // [sp+70h] [bp-50h]@1
  int v45; // [sp+74h] [bp-4Ch]@1

  _R7 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *(_QWORD *)((char *)v5 + 4);
  v8 = *(float *)&v6;
  v9 = *(_QWORD *)((char *)v5 + 4);
  v44 = 0;
  v45 = 0;
  v42 = 0;
  v43 = 0;
  result = sub_EBEC50(v9, (int)&v42, (int *)&v41);
  if ( result == 1 )
  {
    __asm { VLDR            S0, [R4,#4] }
    v28 = v8;
    __asm
    {
      VLDR            S18, [SP,#0xC0+var_5C]
      VLDR            S20, [R7,#4]
    }
    v15 = *((_WORD *)v4 + 38);
    __asm { VCVT.F32.S32    S22, S0 }
    BlockEntity::getPosition((BlockEntity *)_KR00_8);
    __asm { VLDR            S16, [R8,#4] }
    v16 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R7);
    Tessellator::begin(v16, 16, 0);
    __asm { VADD.F32        S20, S22, S20 }
    _R0 = v15 / 2;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
    v18 = *(_DWORD *)(HIDWORD(_KR00_8) + 8);
    v39 = *(_DWORD *)HIDWORD(_KR00_8);
      VSTR            S20, [SP,#0xC0+var_C0]
      VMUL.F32        S18, S0, S18
      VMOV            R2, S18
      VSUB.F32        S0, S16, S18
      VSTR            S0, [SP,#0xC0+var_64]
    v40 = v18;
    BeaconRenderer::tessellateAlphaBeamSegment(v16, (Tessellator *)&v39, _R2, COERCE_FLOAT(&v42), v25, v26);
    v35 = 0;
    v36 = 0;
    v37 = 1065353216;
    v38 = 1065353216;
    EntityShaderManager::_setupShaderParameters(
      (int)v4,
      v28,
      COERCE_FLOAT(&Color::NIL),
      COERCE_FLOAT(&Color::WHITE),
      0,
      &Vec2::ONE,
      (int)&v35);
    v20 = BaseEntityRenderContext::getScreenContext(_R7);
    v27 = (EndGatewayRenderer *)((char *)v4 + 80);
    Tessellator::draw((char *)v16, v20, (int)v4 + 116, (int)v4 + 80);
    __asm { VMOV.F32        S0, #1.0 }
    v21 = *(_DWORD *)(HIDWORD(_KR00_8) + 8);
    v33 = *(_DWORD *)HIDWORD(_KR00_8);
      VADD.F32        S0, S16, S0
      VSTR            S0, [SP,#0xC0+var_80]
      VMOV.F32        S0, #-1.0
    v34 = v21;
      VADD.F32        S0, S18, S0
      VMOV            R2, S0
    BeaconRenderer::tessellateAlphaBeamSegment(v16, (Tessellator *)&v33, _R2, COERCE_FLOAT(&v42), v23, v24);
    v29 = 0;
    v30 = 0;
    v31 = 1065353216;
    v32 = 1065353216;
      (int)&v29);
    if ( Tessellator::forceTessellateIntercept(v16) == 1 )
      result = Tessellator::triggerIntercept(v16, (EndGatewayRenderer *)((char *)v4 + 116), v27);
    else
      result = Tessellator::draw((char *)v16, SLODWORD(v28), (int)v4 + 116, (int)v27);
  }
  return result;
}


int __fastcall EndGatewayRenderer::~EndGatewayRenderer(EndGatewayRenderer *this)
{
  EndGatewayRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAFE8;
  v2 = (EndGatewayRenderer *)((char *)this + 80);
  mce::MaterialPtr::~MaterialPtr((EndGatewayRenderer *)((char *)this + 116));
  mce::MaterialPtr::~MaterialPtr((EndGatewayRenderer *)((char *)v1 + 104));
  mce::TexturePtr::~TexturePtr(v2);
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


signed int __fastcall EndGatewayRenderer::render(EndGatewayRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  EndGatewayRenderer *v4; // r5@1
  BlockEntityRenderData *v5; // r6@1
  int v6; // r0@1
  int v8; // r11@1
  int v9; // r0@1
  signed int result; // r0@1
  signed int v15; // r9@2
  float v18; // r2@2
  int v19; // ST24_4@2
  Tessellator *v20; // r6@2
  int v21; // r1@2
  int v24; // r0@2
  int v25; // r1@2
  const Color *v27; // ST00_4@2
  float v28; // ST04_4@2
  const Color *v29; // [sp+0h] [bp-C8h]@0
  float v30; // [sp+4h] [bp-C4h]@0
  const mce::MaterialPtr *v31; // [sp+28h] [bp-A0h]@2
  const mce::TexturePtr *v32; // [sp+2Ch] [bp-9Ch]@2
  int v33; // [sp+34h] [bp-94h]@2
  int v34; // [sp+38h] [bp-90h]@2
  __int64 v35; // [sp+3Ch] [bp-8Ch]@2
  int v36; // [sp+44h] [bp-84h]@2
  int v37; // [sp+4Ch] [bp-7Ch]@2
  int v38; // [sp+50h] [bp-78h]@2
  int v39; // [sp+58h] [bp-70h]@2
  int v40; // [sp+5Ch] [bp-6Ch]@2
  int v41; // [sp+60h] [bp-68h]@2
  int v42; // [sp+68h] [bp-60h]@2
  float v43; // [sp+6Ch] [bp-5Ch]@1
  int v44; // [sp+70h] [bp-58h]@1
  int v45; // [sp+74h] [bp-54h]@1
  int v46; // [sp+78h] [bp-50h]@1
  int v47; // [sp+7Ch] [bp-4Ch]@1

  _R7 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *(_QWORD *)((char *)v5 + 4);
  v8 = v6;
  v9 = *(_QWORD *)((char *)v5 + 4);
  v46 = 0;
  v47 = 0;
  v44 = 0;
  v45 = 0;
  result = sub_EBEC50(v9, (int)&v44, (int *)&v43);
  if ( result == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#4]
      VCVT.F32.S32    S16, S0
      VLDR            S20, [SP,#0xC8+var_5C]
    }
    v15 = *((_WORD *)v4 + 38);
    __asm { VLDR            S18, [R7,#4] }
    BlockEntity::getPosition((BlockEntity *)_KR00_8);
      VADD.F32        S16, S16, S18
      VLDR            S18, [R10,#4]
    _R0 = &"??L=";
      VLDR            S0, [R0]
      VMUL.F32        S0, S0, S16
      VMOV            R0, S0
    v19 = mce::Math::wrap(_R0, 1.0, v18);
    v20 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R7);
    Tessellator::begin(v20, 16, 0);
    v21 = *(_DWORD *)(HIDWORD(_KR00_8) + 8);
    v41 = *(_DWORD *)HIDWORD(_KR00_8);
    _R0 = v15 / 2;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S16, [SP,#0xC8+var_C8]
      VMUL.F32        S20, S0, S20
      VMOV            R2, S20
      VSUB.F32        S0, S18, S20
      VSTR            S0, [SP,#0xC8+var_64]
    v42 = v21;
    BeaconRenderer::tessellateOpaqueBeamSegment(*(float *)&v20, (Tessellator *)&v41, _R2, COERCE_FLOAT(&v44), v29, v30);
      VMOV.F32        S22, #1.0
      VMOV            S0, R4
    v38 = 0;
      VSUB.F32        S0, S22, S0
      VSTR            S0, [SP,#0xC8+var_74]
    v39 = 1065353216;
    v40 = 1124073472;
    EntityShaderManager::_setupShaderParameters(
      (int)v4,
      *(float *)&v8,
      COERCE_FLOAT(&Color::NIL),
      COERCE_FLOAT(&Color::WHITE),
      0,
      &Vec2::ONE,
      (int)&v38);
    v24 = BaseEntityRenderContext::getScreenContext(_R7);
    v31 = (EndGatewayRenderer *)((char *)v4 + 104);
    v32 = (EndGatewayRenderer *)((char *)v4 + 80);
    Tessellator::draw((char *)v20, v24, (int)v4 + 104, (int)v4 + 80);
    __asm { VADD.F32        S0, S18, S22 }
    v25 = *(_DWORD *)(HIDWORD(_KR00_8) + 8);
    v36 = *(_DWORD *)HIDWORD(_KR00_8);
      VSTR            S0, [SP,#0xC8+var_80]
      VMOV.F32        S0, #-1.0
    v37 = v25;
      VADD.F32        S0, S20, S0
      VMOV            R2, S0
    BeaconRenderer::tessellateOpaqueBeamSegment(*(float *)&v20, (Tessellator *)&v36, _R2, COERCE_FLOAT(&v44), v27, v28);
    v33 = 0;
    v34 = v19;
    v35 = 4827858801606524928LL;
      (int)&v33);
    if ( Tessellator::forceTessellateIntercept(v20) == 1 )
      result = Tessellator::triggerIntercept(v20, v31, v32);
    else
      result = Tessellator::draw((char *)v20, v8, (int)v31, (int)v32);
  }
  return result;
}


int __fastcall EndGatewayRenderer::EndGatewayRenderer(int a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r6@1
  int v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
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
  int v17; // [sp+8h] [bp-38h]@4
  int v18; // [sp+10h] [bp-30h]@3
  char *v19; // [sp+18h] [bp-28h]@1
  char *v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  _aeabi_memclr4(a1, 76);
  BaseEntityRenderer::BaseEntityRenderer((BaseEntityRenderer *)v3);
  *(_DWORD *)v3 = &off_26DAFE8;
  *(_WORD *)(v3 + 76) = 256;
  sub_119C884((void **)&v19, "textures/entity/beacon_beam");
  v20 = v19;
  v19 = (char *)&unk_28898CC;
  v21 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 80), v2, (int)&v20, 0);
  v4 = v20 - 12;
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v18, "beacon_beam");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 104),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v17, "beacon_beam_transparent");
    (mce::MaterialPtr *)(v3 + 116),
    &v17);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return v3;
}
