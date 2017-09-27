

signed int __fastcall BeaconRenderer::tessellateAlphaBeamSegment(BeaconRenderer *this, Tessellator *a2, const Vec3 *a3, float a4, const Color *a5, float a6)
{
  Tessellator *v8; // r4@1

  _R7 = a3;
  _R5 = a2;
  v8 = this;
  __asm
  {
    VLDR            S18, [R5]
    VLDR            S16, [R5,#8]
  }
  Tessellator::color(this, *(float *)LODWORD(a4), *(float *)(LODWORD(a4) + 4), *(float *)(LODWORD(a4) + 8), 0.125);
  Tessellator::normal(v8, -1.0, 0.0, 0.0);
    VMOV.F32        S0, #0.25
    VADD.F32        S2, S18, S0
    VADD.F32        S0, S16, S0
    VMOV            R9, S2
    VMOV            R8, S0
  Tessellator::vertexUV(v8, _R9, *((float *)_R5 + 1), _R8, 0.0, 1.0);
    VMOV.F32        S20, #0.75
    VADD.F32        S0, S16, S20
    VMOV            R6, S0
  Tessellator::vertexUV(v8, _R9, *((float *)_R5 + 1), _R6, 1.0, 1.0);
    VLDR            S0, [R5,#4]
    VMOV            S16, R7
    VADD.F32        S0, S0, S16
    VMOV            R2, S0
  Tessellator::vertexUV(v8, _R9, _R2, _R6, 1.0, 0.0);
  Tessellator::vertexUV(v8, _R9, _R2, _R8, 0.0, 0.0);
  Tessellator::normal(v8, 0.0, 0.0, 1.0);
  Tessellator::vertexUV(v8, _R9, *((float *)_R5 + 1), _R6, 0.0, 1.0);
    VADD.F32        S0, S18, S20
    VMOV            R7, S0
  Tessellator::vertexUV(v8, _R7, *((float *)_R5 + 1), _R6, 1.0, 1.0);
  Tessellator::vertexUV(v8, _R7, _R2, _R6, 1.0, 0.0);
  Tessellator::vertexUV(v8, _R9, _R2, _R6, 0.0, 0.0);
  Tessellator::vertexUV(v8, _R7, *((float *)_R5 + 1), _R6, 0.0, 1.0);
  Tessellator::vertexUV(v8, _R7, *((float *)_R5 + 1), _R8, 1.0, 1.0);
  Tessellator::vertexUV(v8, _R7, _R2, _R8, 1.0, 0.0);
  Tessellator::vertexUV(v8, _R7, _R2, _R6, 0.0, 0.0);
  Tessellator::vertexUV(v8, _R7, *((float *)_R5 + 1), _R8, 0.0, 1.0);
  Tessellator::vertexUV(v8, _R9, *((float *)_R5 + 1), _R8, 1.0, 1.0);
  Tessellator::vertexUV(v8, _R9, _R2, _R8, 1.0, 0.0);
  return Tessellator::vertexUV(v8, _R7, _R2, _R8, 0.0, 0.0);
}


signed int __fastcall BeaconRenderer::tessellateOpaqueBeamSegment(BeaconRenderer *this, Tessellator *a2, const Vec3 *a3, float a4, const Color *a5, float a6)
{
  Tessellator *v10; // r4@1
  const Color *v12; // r9@1
  const Vec3 *v13; // ST14_4@1
  int v18; // r0@1
  float v19; // ST1C_4@1
  float v21; // r1@1
  int v22; // r0@1
  float v25; // r1@1
  int v26; // r0@1
  int v27; // ST10_4@1
  float v29; // r1@1
  int v30; // ST24_4@1
  float v31; // r1@1
  float v33; // r1@1
  float v35; // r1@1
  int v36; // ST0C_4@1
  float v37; // r1@1
  int v38; // ST20_4@1
  float v45; // ST1C_4@1
  float v46; // r6@1
  float v47; // ST18_4@1
  float v48; // r7@1
  __int64 v52; // ST00_8@1

  __asm { VLDR            S0, =-0.0375 }
  v10 = this;
  __asm { VLDR            S2, [SP,#0x90+arg_0] }
  _R5 = a2;
  v12 = (const Color *)LODWORD(a4);
  __asm { VMUL.F32        S0, S2, S0 }
  v13 = a3;
  __asm { VMOV            R0, S0 }
  _R0 = mce::Math::wrap(_R0, 6.2832, *(float *)&a3);
  __asm
  {
    VMOV.F32        S0, #0.75
    VMOV            S20, R0
    VLDR            S18, [R5]
  }
  _R1 = &mce::Math::PI;
    VLDR            S16, [R1]
    VMUL.F32        S0, S16, S0
    VADD.F32        S0, S0, S20
    VMOV            R11, S0
  *(float *)&v18 = COERCE_FLOAT(mce::Math::cos(_R11, COERCE_FLOAT(&mce::Math::PI)));
  __asm { VMOV.F32        S0, #1.25 }
  v19 = *(float *)&v18;
    VLDR            S30, [R5]
    VMOV            R6, S0
  v22 = mce::Math::cos(_R6, v21);
  __asm { VMOV.F32        S0, #1.75 }
  _R10 = v22;
    VLDR            S26, [R5]
    VMOV            R7, S0
  v26 = mce::Math::cos(_R7, v25);
  __asm { VMOV.F32        S0, #0.25 }
  v27 = v26;
    VLDR            S16, [R5]
    VMOV            R8, S0
  v30 = mce::Math::cos(_R8, v29);
  __asm { VLDR            S17, [R5,#8] }
  _R11 = mce::Math::sin(_R11, v31);
  __asm { VLDR            S19, [R5,#8] }
  _R6 = mce::Math::sin(_R6, v33);
  __asm { VLDR            S28, [R5,#8] }
  v36 = mce::Math::sin(_R7, v35);
  __asm { VLDR            S20, [R5,#8] }
  v38 = mce::Math::sin(_R8, v37);
  Tessellator::color(v10, v12);
  Tessellator::normal(v10, -1.0, 0.0, 0.0);
    VMOV.F32        S22, #0.5
    VLDR            S24, =0.2
    VMOV            S0, R6
    VMOV            S2, R10
  HIDWORD(_R7) = 1065353216;
    VMUL.F32        S0, S0, S24
    VMUL.F32        S2, S2, S24
    VADD.F32        S4, S30, S22
    VADD.F32        S6, S19, S22
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S6, S0
    VMOV            R10, S2
    VMOV            R9, S0
  Tessellator::vertexUV(v10, _R10, *((float *)_R5 + 1), _R9, 0.0, 1.0);
    VMOV            S0, R11
    VADD.F32        S4, S18, S22
  _R0 = v19;
    VADD.F32        S6, S17, S22
    VMOV            S2, R0
    VMOV            R3, S0
    VMOV            R1, S2
  v45 = _R3;
  v46 = _R3;
  v47 = _R1;
  v48 = _R1;
  Tessellator::vertexUV(v10, _R1, *((float *)_R5 + 1), _R3, 1.0, 1.0);
  __asm { VLDR            S0, [R5,#4] }
  _R0 = v13;
    VMOV            S18, R0
    VADD.F32        S0, S0, S18
    VMOV            R2, S0
  Tessellator::vertexUV(v10, v48, _R2, v46, 1.0, 0.0);
    VLDR            S0, [R5,#4]
  LODWORD(_R7) = 0;
  __asm { VMOV            R2, S0 }
  Tessellator::vertexUV(v10, _R10, _R2, _R9, 0.0, 0.0);
  Tessellator::normal(v10, 0.0, 0.0, 1.0);
  __asm { VADD.F32        S4, S26, S22 }
  v52 = _R7;
  __asm { VADD.F32        S6, S28, S22 }
  _R0 = v36;
  __asm { VMOV            S0, R0 }
  _R0 = v27;
    VMOV            R8, S2
  Tessellator::vertexUV(v10, *((float *)&_R7 + 1), *((float *)_R5 + 1), _R11, *(float *)&v52, *((float *)&v52 + 1));
  Tessellator::vertexUV(v10, _R10, *((float *)_R5 + 1), _R9, 1.0, 1.0);
  Tessellator::vertexUV(v10, _R10, _R2, _R9, 1.0, 0.0);
  Tessellator::vertexUV(v10, *((float *)&_R7 + 1), _R2, _R11, 0.0, 0.0);
    VADD.F32        S4, S16, S22
    VADD.F32        S6, S20, S22
  _R0 = v38;
  _R0 = v30;
    VMOV            R10, S0
    VMOV            R9, S2
  Tessellator::vertexUV(v10, _R9, *((float *)_R5 + 1), _R10, 0.0, 1.0);
  Tessellator::vertexUV(v10, *((float *)&_R7 + 1), *((float *)_R5 + 1), _R11, 1.0, 1.0);
  Tessellator::vertexUV(v10, *((float *)&_R7 + 1), _R2, _R11, 1.0, 0.0);
  Tessellator::vertexUV(v10, _R9, _R2, _R10, 0.0, 0.0);
  Tessellator::vertexUV(v10, v47, *((float *)_R5 + 1), v45, 0.0, 1.0);
  Tessellator::vertexUV(v10, _R9, *((float *)_R5 + 1), _R10, 1.0, 1.0);
  Tessellator::vertexUV(v10, _R9, _R2, _R10, 1.0, 0.0);
  return Tessellator::vertexUV(v10, v47, _R2, v45, 0.0, 0.0);
}


int __fastcall BeaconRenderer::renderAlpha(BeaconRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BaseEntityRenderContext *v3; // r6@1
  BeaconRenderer *v4; // r9@1
  BlockEntityRenderData *v5; // r4@1
  int result; // r0@1
  int v7; // r7@1
  int v8; // r8@1
  int v10; // r4@2
  Tessellator *v18; // r6@4
  int v20; // r7@4
  __int64 v21; // kr00_8@4
  int v23; // r1@9
  const Color *v24; // [sp+0h] [bp-80h]@0
  float v25; // [sp+4h] [bp-7Ch]@0
  int v26; // [sp+24h] [bp-5Ch]@11
  int v27; // [sp+28h] [bp-58h]@11
  signed int v28; // [sp+2Ch] [bp-54h]@11
  signed int v29; // [sp+30h] [bp-50h]@11
  int v30; // [sp+34h] [bp-4Ch]@9
  int v31; // [sp+3Ch] [bp-44h]@9

  v3 = a2;
  v4 = this;
  v5 = a3;
  result = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *((_DWORD *)v5 + 1);
  v8 = result;
  if ( v7 )
  {
    _R5 = *((_DWORD *)v5 + 2);
    v10 = *(_WORD *)(*(_DWORD *)v5 + 24);
    __asm { VLDR            S16, [R5,#4] }
    _R0 = v10 - *((_DWORD *)BlockEntity::getPosition((BlockEntity *)v7) + 1);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
    }
    _R4 = BaseEntityRenderContext::getWorldClipRegion(v3);
    if ( !AABB::isEmpty((AABB *)_R4) )
      __asm { VLDR            S18, [R4,#0x10] }
      _R0 = BlockEntity::getPosition((BlockEntity *)v7);
      __asm
      {
        VLDR            S0, [R0,#4]
        VCVT.F32.S32    S0, S0
        VSUB.F32        S18, S18, S0
      }
    v18 = (Tessellator *)BaseEntityRenderContext::getTessellator(v3);
    Tessellator::begin(
      v18,
      -858993456 * ((unsigned int)((*(_QWORD *)(v7 + 216) >> 32) - *(_QWORD *)(v7 + 216)) >> 2),
      0);
    v21 = *(_QWORD *)(v7 + 216);
    v20 = *(_QWORD *)(v7 + 216) >> 32;
    _R4 = v21;
    if ( (_DWORD)v21 != v20 )
      __asm { VLDR            S20, =0.0 }
      do
        __asm
        {
          VLDR            S0, [R4]
          VCVT.F32.S32    S0, S0
          VCMPE.F32       S0, S18
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S0, S18 }
          VCMPE.F32       S0, #0.0
          __asm
          {
            VMOV            R2, S0
            VADD.F32        S0, S20, S16
          }
          v23 = *(_DWORD *)(_R5 + 8);
          v30 = *(_DWORD *)_R5;
          __asm { VSTR            S0, [SP,#0x80+var_48] }
          v31 = v23;
          BeaconRenderer::tessellateAlphaBeamSegment(v18, (Tessellator *)&v30, _R2, COERCE_FLOAT(_R4 + 4), v24, v25);
            VLDR            S0, [R4]
            VCVT.F32.S32    S0, S0
            VADD.F32        S20, S0, S20
        _R4 += 20;
      while ( v20 != _R4 );
    v26 = 0;
    v27 = 0;
    v28 = 1065353216;
    v29 = 1065353216;
    EntityShaderManager::_setupShaderParameters(
      (int)v4,
      *(float *)&v8,
      COERCE_FLOAT(&Color::NIL),
      COERCE_FLOAT(&Color::WHITE),
      0,
      &Vec2::ONE,
      (int)&v26);
    if ( Tessellator::forceTessellateIntercept(v18) )
      result = Tessellator::triggerIntercept(
                 v18,
                 (BeaconRenderer *)((char *)v4 + 112),
                 (BeaconRenderer *)((char *)v4 + 76));
    else
      result = Tessellator::draw((char *)v18, v8, (int)v4 + 112, (int)v4 + 76);
  }
  return result;
}


int __fastcall BeaconRenderer::~BeaconRenderer(BeaconRenderer *this)
{
  BeaconRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E67B0;
  v2 = (BeaconRenderer *)((char *)this + 76);
  mce::MaterialPtr::~MaterialPtr((BeaconRenderer *)((char *)this + 112));
  mce::MaterialPtr::~MaterialPtr((BeaconRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr(v2);
  return j_j_j__ZN19BlockEntityRendererD2Ev_0(v1);
}


int __fastcall BeaconRenderer::BeaconRenderer(int a1, mce::TextureGroup *a2)
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
  *(_DWORD *)v3 = &off_26E67B0;
  sub_21E94B4((void **)&v19, "textures/entity/beacon_beam");
  v20 = v19;
  v19 = (char *)&unk_28898CC;
  v21 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 76), v2, (int)&v20, 0);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v18, "beacon_beam");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 100),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v17, "beacon_beam_transparent");
    (mce::MaterialPtr *)(v3 + 112),
    &v17);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v3;
}


int __fastcall BeaconRenderer::render(BeaconRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BeaconRenderer *v4; // r9@1
  BlockEntityRenderData *v5; // r4@1
  int result; // r0@1
  int v8; // r8@1
  int v14; // r4@2
  Tessellator *v18; // r6@4
  int v20; // r7@4
  __int64 v21; // kr00_8@4
  int v23; // r1@8
  const Color *v24; // [sp+0h] [bp-88h]@0
  float v25; // [sp+4h] [bp-84h]@0
  int v26; // [sp+24h] [bp-64h]@10
  int v27; // [sp+2Ch] [bp-5Ch]@10
  int v28; // [sp+34h] [bp-54h]@8
  int v29; // [sp+3Ch] [bp-4Ch]@8

  _R6 = a2;
  v4 = this;
  v5 = a3;
  result = BaseEntityRenderContext::getScreenContext(a2);
  _R7 = *((_DWORD *)v5 + 1);
  v8 = result;
  if ( _R7 )
  {
    _R5 = *((_DWORD *)v5 + 2);
    __asm
    {
      VLDR            S0, [R7,#4]
      VLDR            S16, [R5,#4]
      VCVT.F32.S32    S20, S0
    }
    v14 = *(_WORD *)(*(_DWORD *)v5 + 24);
    __asm { VLDR            S22, [R6,#4] }
    _R0 = v14 - *((_DWORD *)BlockEntity::getPosition((BlockEntity *)_R7) + 1);
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
    _R4 = BaseEntityRenderContext::getWorldClipRegion(_R6);
    if ( !AABB::isEmpty((AABB *)_R4) )
      __asm { VLDR            S18, [R4,#0x10] }
      _R0 = BlockEntity::getPosition((BlockEntity *)_R7);
      __asm
      {
        VLDR            S0, [R0,#4]
        VCVT.F32.S32    S0, S0
        VSUB.F32        S18, S18, S0
      }
    __asm { VADD.F32        S20, S20, S22 }
    v18 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
    Tessellator::begin(
      v18,
      -858993456 * ((unsigned int)((*(_QWORD *)(_R7 + 216) >> 32) - *(_QWORD *)(_R7 + 216)) >> 2),
      0);
    v21 = *(_QWORD *)(_R7 + 216);
    v20 = *(_QWORD *)(_R7 + 216) >> 32;
    _R4 = v21;
    __asm { VLDR            S22, =0.0 }
    if ( (_DWORD)v21 != v20 )
      do
        __asm
        {
          VLDR            S0, [R4]
          VCVT.F32.S32    S0, S0
          VCMPE.F32       S0, S18
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S0, S18 }
          VCMPE.F32       S0, #0.0
          __asm
          {
            VMOV            R2, S0
            VADD.F32        S0, S22, S16
          }
          v23 = *(_DWORD *)(_R5 + 8);
          v28 = *(_DWORD *)_R5;
            VSTR            S20, [SP,#0x88+var_88]
            VSTR            S0, [SP,#0x88+var_50]
          v29 = v23;
          BeaconRenderer::tessellateOpaqueBeamSegment(
            *(float *)&v18,
            (Tessellator *)&v28,
            _R2,
            COERCE_FLOAT(_R4 + 4),
            v24,
            v25);
            VLDR            S0, [R4]
            VCVT.F32.S32    S0, S0
            VADD.F32        S22, S0, S22
        _R4 += 20;
      while ( v20 != _R4 );
      VLDR            S0, =0.05
      VADD.F32        S2, S22, S22
      VMUL.F32        S0, S20, S0
    v26 = 0;
    __asm { VSTR            S0, [SP,#0x88+var_60] }
    v27 = 1065353216;
    __asm { VSTR            S2, [SP,#0x88+var_58] }
    EntityShaderManager::_setupShaderParameters(
      (int)v4,
      *(float *)&v8,
      COERCE_FLOAT(&Color::NIL),
      COERCE_FLOAT(&Color::WHITE),
      0,
      &Vec2::ONE,
      (int)&v26);
    if ( Tessellator::forceTessellateIntercept(v18) )
      result = Tessellator::triggerIntercept(
                 v18,
                 (BeaconRenderer *)((char *)v4 + 100),
                 (BeaconRenderer *)((char *)v4 + 76));
    else
      result = Tessellator::draw((char *)v18, v8, (int)v4 + 100, (int)v4 + 76);
  }
  return result;
}


void __fastcall BeaconRenderer::~BeaconRenderer(BeaconRenderer *this)
{
  BeaconRenderer::~BeaconRenderer(this);
}


void __fastcall BeaconRenderer::~BeaconRenderer(BeaconRenderer *this)
{
  BeaconRenderer *v1; // r4@1
  mce::TexturePtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E67B0;
  v2 = (BeaconRenderer *)((char *)this + 76);
  mce::MaterialPtr::~MaterialPtr((BeaconRenderer *)((char *)this + 112));
  mce::MaterialPtr::~MaterialPtr((BeaconRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr(v2);
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
