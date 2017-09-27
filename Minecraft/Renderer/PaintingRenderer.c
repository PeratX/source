

BaseEntityRenderContext *__fastcall PaintingRenderer::_getMesh(PaintingRenderer *this, BaseEntityRenderContext *a2, const Motive *a3)
{
  Motive *v3; // r8@1
  int v4; // r5@1
  char *v5; // r10@1
  BaseEntityRenderContext *v6; // r9@1
  unsigned int v7; // r4@1
  unsigned int v8; // r1@1
  int v9; // r11@1
  BaseEntityRenderContext **v10; // r6@1
  BaseEntityRenderContext *v11; // r7@2
  BaseEntityRenderContext *v12; // r0@2
  BaseEntityRenderContext *v13; // r5@4
  bool v14; // zf@8
  BaseEntityRenderContext *v15; // r5@13
  BaseEntityRenderContext *v16; // r7@15
  bool v17; // zf@18
  void *v18; // r4@22
  int v19; // r10@23
  int v20; // r7@23
  int v21; // r4@23
  int v22; // r5@23
  PaintingRenderer *v23; // r6@23
  int v25; // r4@11
  BaseEntityRenderContext *v26; // [sp+Ch] [bp-8Ch]@7
  char v27; // [sp+10h] [bp-88h]@23

  v3 = a3;
  v5 = (char *)this + 144;
  v4 = *((_DWORD *)this + 36);
  v6 = a2;
  v7 = *((_DWORD *)this + 37);
  v8 = (unsigned int)a3 % *((_DWORD *)this + 37);
  v9 = v8;
  v10 = *(BaseEntityRenderContext ***)(v4 + 4 * v8);
  if ( !v10 )
  {
    v26 = v6;
LABEL_22:
    v18 = operator new(0x6Cu);
    *(_DWORD *)v18 = 0;
    *((_DWORD *)v18 + 1) = v3;
    mce::Mesh::Mesh((mce::Mesh *)((char *)v18 + 8));
    v6 = (BaseEntityRenderContext *)std::_Hashtable<Motive const*,std::pair<Motive const* const,mce::Mesh>,std::allocator<std::pair<Motive const* const,mce::Mesh>>,std::__detail::_Select1st,std::equal_to<Motive const*>,std::hash<Motive const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                                      (int)v5,
                                      v9,
                                      (unsigned int)v3,
                                      (int)v18);
    goto LABEL_23;
  }
  v11 = *v10;
  v12 = *(BaseEntityRenderContext **)(v4 + 4 * v8);
  while ( *((const Motive **)v11 + 1) != a3 )
    v13 = *(BaseEntityRenderContext **)v11;
    if ( *(_DWORD *)v11 )
    {
      v12 = v11;
      v11 = *(BaseEntityRenderContext **)v11;
      if ( *((_DWORD *)v13 + 1) % v7 == v8 )
        continue;
    }
    goto LABEL_12;
  v14 = v12 == 0;
  if ( v12 )
    v12 = *(BaseEntityRenderContext **)v12;
    v14 = v12 == 0;
  if ( !v14 )
    return (BaseEntityRenderContext *)((char *)v12 + 8);
LABEL_12:
  v26 = v6;
    goto LABEL_22;
  v15 = *v10;
  while ( *((const Motive **)v15 + 1) != a3 )
    v16 = *(BaseEntityRenderContext **)v15;
    if ( *(_DWORD *)v15 )
      v10 = (BaseEntityRenderContext **)v15;
      v15 = *(BaseEntityRenderContext **)v15;
      if ( *((_DWORD *)v16 + 1) % v7 == v8 )
  v17 = v10 == 0;
  if ( v10 )
    v6 = *v10;
    v17 = *v10 == 0;
  if ( v17 )
LABEL_23:
  v19 = Motive::getWidth(v3);
  v20 = Motive::getHeight(v3);
  v21 = Motive::getUo(v3);
  v22 = Motive::getVo(v3);
  v23 = (PaintingRenderer *)BaseEntityRenderContext::getTessellator(v26);
  PaintingRenderer::_tessellatePainting(v23, v23, v19, v20, v21, v22);
  Tessellator::end((Tessellator *)&v27, (const char *)v23, 0, 0);
  v25 = mce::Mesh::operator=((int)v6 + 8, (int)&v27);
  mce::Mesh::~Mesh((mce::Mesh *)&v27);
  return (BaseEntityRenderContext *)v25;
}


void __fastcall PaintingRenderer::~PaintingRenderer(PaintingRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = PaintingRenderer::~PaintingRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall PaintingRenderer::~PaintingRenderer(PaintingRenderer *this)
{
  PaintingRenderer::~PaintingRenderer(this);
}


int __fastcall PaintingRenderer::onAppSuspended(PaintingRenderer *this)
{
  PaintingRenderer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 38);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 18), 4 * (*((_QWORD *)v1 + 18) >> 32));
  result = 0;
  *((_DWORD *)v1 + 38) = 0;
  *((_DWORD *)v1 + 39) = 0;
  return result;
}


BaseEntityRenderer *__fastcall PaintingRenderer::~PaintingRenderer(PaintingRenderer *this)
{
  PaintingRenderer *v1; // r4@1
  char *v2; // r5@1
  int v3; // r6@1
  int v4; // r7@2
  char *v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26DBD10;
  *((_DWORD *)this + 34) = &off_26DBD44;
  v2 = (char *)this + 136;
  mce::TexturePtr::~TexturePtr((PaintingRenderer *)((char *)this + 172));
  v3 = *((_DWORD *)v2 + 4);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)v3;
      mce::Mesh::~Mesh((mce::Mesh *)(v3 + 8));
      operator delete((void *)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 18), 4 * (*((_QWORD *)v1 + 18) >> 32));
  *((_DWORD *)v1 + 38) = 0;
  *((_DWORD *)v1 + 39) = 0;
  v5 = (char *)*((_DWORD *)v1 + 36);
  if ( v5 && (char *)v1 + 168 != v5 )
    operator delete(v5);
  AppPlatformListener::~AppPlatformListener((AppPlatformListener *)v2);
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


void __fastcall PaintingRenderer::_tessellate(PaintingRenderer *this, Tessellator *a2, const Motive *a3)
{
  Motive *v3; // r5@1
  Tessellator *v4; // r4@1
  int v5; // r8@2
  int v6; // r7@2
  int v7; // r6@2
  PaintingRenderer *v8; // r0@2

  v3 = a3;
  v4 = a2;
  if ( a3 )
  {
    v5 = Motive::getWidth(a3);
    v6 = Motive::getHeight(v3);
    v7 = Motive::getUo(v3);
    v8 = (PaintingRenderer *)Motive::getVo(v3);
    PaintingRenderer::_tessellatePainting(v8, v4, v5, v6, v7, (int)v8);
  }
}


int __fastcall PaintingRenderer::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  int v4; // r10@1
  int v5; // r4@1
  int v6; // r0@1
  int v8; // r9@1
  int v9; // r7@1
  const Motive *v10; // r0@1
  BaseEntityRenderContext *v11; // r8@1
  int v12; // r0@1
  int v18; // r5@1
  int v19; // r0@1
  Tessellator *v21; // r6@1
  Motive *v22; // r7@2
  int v23; // r8@2
  int v24; // r4@2
  int v25; // r5@2
  PaintingRenderer *v26; // r0@2
  char *v27; // r0@2
  char *v28; // r0@3
  char v30; // [sp+Ch] [bp-7Ch]@1
  int v31; // [sp+14h] [bp-74h]@1
  signed int v32; // [sp+18h] [bp-70h]@1
  int v33; // [sp+1Ch] [bp-6Ch]@1
  int v34; // [sp+20h] [bp-68h]@1
  int v35; // [sp+24h] [bp-64h]@1
  int v36; // [sp+28h] [bp-60h]@1
  int v37; // [sp+2Ch] [bp-5Ch]@1
  int v38; // [sp+30h] [bp-58h]@1
  int v39; // [sp+34h] [bp-54h]@1
  int v40; // [sp+38h] [bp-50h]@1
  int v41; // [sp+3Ch] [bp-4Ch]@1
  int v42; // [sp+40h] [bp-48h]@1
  int v43; // [sp+44h] [bp-44h]@1
  int v44; // [sp+48h] [bp-40h]@1
  int v45; // [sp+4Ch] [bp-3Ch]@1
  int v46; // [sp+50h] [bp-38h]@1
  int v47; // [sp+54h] [bp-34h]@1
  int v48; // [sp+58h] [bp-30h]@1
  int v49; // [sp+5Ch] [bp-2Ch]@1
  int v50; // [sp+60h] [bp-28h]@1

  _R6 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *(_QWORD *)v5;
  v8 = v6;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = (const Motive *)Painting::getCurrentMotive((Painting *)*(_QWORD *)v5);
  v11 = PaintingRenderer::_getMesh((PaintingRenderer *)v4, _R6, v10);
  v12 = BaseEntityRenderContext::getWorldMatrix(_R6);
  MatrixStack::push((MatrixStack *)&v30, v12);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v30);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R5]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R5,#4]
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
    VLDR            S12, [R5,#8]
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
  v18 = MatrixStack::MatrixStackRef::operator->((int)&v30);
  v19 = *(_DWORD *)(v9 + 4);
  v31 = 0;
  v32 = 1065353216;
  v33 = 0;
  v50 = v19;
  glm::rotate<float>((int)&v34, v18, (int)&v50, (int)&v31);
  *(_DWORD *)v18 = v34;
  *(_DWORD *)(v18 + 4) = v35;
  *(_DWORD *)(v18 + 8) = v36;
  *(_DWORD *)(v18 + 12) = v37;
  *(_DWORD *)(v18 + 16) = v38;
  *(_DWORD *)(v18 + 20) = v39;
  *(_DWORD *)(v18 + 24) = v40;
  *(_DWORD *)(v18 + 28) = v41;
  *(_DWORD *)(v18 + 32) = v42;
  *(_DWORD *)(v18 + 36) = v43;
  *(_DWORD *)(v18 + 40) = v44;
  *(_DWORD *)(v18 + 44) = v45;
  *(_DWORD *)(v18 + 48) = v46;
  *(_DWORD *)(v18 + 52) = v47;
  *(_DWORD *)(v18 + 56) = v48;
  *(_DWORD *)(v18 + 60) = v49;
    VLDR            S0, [R6,#4]
    VSTR            S0, [SP,#0x88+var_88]
  EntityShaderManager::_setupShaderParameters(v4, v8, *(float *)&_KR00_8, COERCE_FLOAT(&Color::NIL));
    VLDR            S0, =0.0625
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
  v21 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
  if ( Tessellator::forceTessellateIntercept(v21) == 1 )
    v22 = (Motive *)Painting::getCurrentMotive((Painting *)_KR00_8);
    v23 = Motive::getWidth(v22);
    v24 = Motive::getHeight(v22);
    v25 = Motive::getUo(v22);
    v26 = (PaintingRenderer *)Motive::getVo(v22);
    PaintingRenderer::_tessellatePainting(v26, v21, v23, v24, v25, (int)v26);
    v27 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
    Tessellator::triggerIntercept(v21, (const mce::MaterialPtr *)v27, (const mce::TexturePtr *)(v4 + 172));
  else
    v28 = EntityShaderManager::getTransparentEntityMaterial((EntityShaderManager *)v4);
    mce::Mesh::render(v11, v8, (int)v28, v4 + 172, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v30);
}


mce::Mesh *__fastcall PaintingRenderer::_buildPainting(PaintingRenderer *this, BaseEntityRenderContext *a2, BaseEntityRenderContext *a3, int a4, int a5, int a6, int a7)
{
  Tessellator *v7; // r5@1
  int v8; // r4@1
  Tessellator *v9; // r6@1

  v7 = this;
  v8 = a4;
  v9 = (Tessellator *)BaseEntityRenderContext::getTessellator(a3);
  PaintingRenderer::_tessellatePainting((PaintingRenderer *)a6, v9, v8, a5, a6, a7);
  return Tessellator::end(v7, (const char *)v9, 0, 0);
}


BaseEntityRenderer *__fastcall PaintingRenderer::PaintingRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r6@1
  BaseEntityRenderer *v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r5@3
  void *v7; // r7@3
  char *v8; // r0@4
  char *v9; // r0@5
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  char *v15; // [sp+8h] [bp-28h]@4
  char *v16; // [sp+Ch] [bp-24h]@4
  int v17; // [sp+10h] [bp-20h]@4

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v3 + 17);
  *(_DWORD *)v3 = &off_26DBD10;
  *((_DWORD *)v3 + 34) = &off_26DBD44;
  *((_DWORD *)v3 + 38) = 0;
  *((_DWORD *)v3 + 39) = 0;
  *((_DWORD *)v3 + 40) = 1065353216;
  LODWORD(v4) = (char *)v3 + 160;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v5 = sub_119C844(v4);
  *((_DWORD *)v3 + 37) = v5;
  if ( v5 == 1 )
  {
    *((_DWORD *)v3 + 42) = 0;
    v7 = (char *)v3 + 168;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *((_DWORD *)v3 + 36) = v7;
  sub_119C884((void **)&v15, "textures/painting/kz");
  v16 = v15;
  v15 = (char *)&unk_28898CC;
  v17 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 172), v2, (int)&v16, 0);
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  return v3;
}


int __fastcall PaintingRenderer::_tessellatePainting(PaintingRenderer *this, Tessellator *a2, int a3, int a4, int a5, int a6)
{
  Tessellator *v6; // r5@1
  int v7; // r4@1
  int v8; // r6@1
  int result; // r0@1
  const Vec3 *v15; // r1@2
  float *v16; // r2@2
  float *v17; // r8@3
  int v18; // r4@4
  int v23; // r2@4
  int v25; // ST3C_4@5
  int v26; // ST44_4@5
  float v32; // ST00_4@5
  float v33; // ST04_4@5
  float v36; // ST00_4@5
  float v37; // ST04_4@5
  float v38; // ST00_4@5
  float v39; // ST04_4@5
  float v40; // [sp+0h] [bp-B0h]@0
  float v41; // [sp+4h] [bp-ACh]@0
  int v42; // [sp+10h] [bp-A0h]@2
  int v43; // [sp+14h] [bp-9Ch]@2
  int v44; // [sp+1Ch] [bp-94h]@2

  v6 = a2;
  v7 = a3;
  v8 = a4;
  Tessellator::begin(a2, 0, 0);
  _R0 = -v8;
  __asm { VMOV            S0, R0 }
  result = -v7;
  __asm
  {
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  if ( !(_NF ^ _VF) )
    __asm { VMOV.F32        S4, #0.5 }
    v42 = a5 + v7;
    __asm
    {
      VLDR            S20, =0.0039062
      VMUL.F32        S16, S0, S4
      VMUL.F32        S18, S2, S4
    }
    v43 = v7 / 16;
    v15 = (const Vec3 *)&Vec3::NEG_UNIT_Z;
    v16 = Vec3::UNIT_X;
    v44 = 0;
    do
      v17 = v16;
      if ( v8 >= 16 )
      {
        v18 = 16;
        _R3 = v42 - 16 * v44;
        _R12 = 16 * v44 + 16;
        __asm { VMOV            S0, R3 }
        _R3 = 16 * v44;
        _R0 = v42 - _R12;
        __asm
        {
          VMOV            S2, R3
          VMOV            S4, R12
        }
        v23 = 0;
          VMOV            S6, R0
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VCVT.F32.S32    S4, S4
          VCVT.F32.S32    S6, S6
        _R7 = a6 + v8 - 16;
          VMUL.F32        S22, S0, S20
          VADD.F32        S24, S2, S18
          VADD.F32        S26, S4, S18
          VMUL.F32        S28, S6, S20
        do
          v25 = v23;
          v26 = v18;
          Tessellator::normal(v6, v15);
          _R0 = v18 - 16;
          __asm
          {
            VMOV            R11, S26
            VMOV            S0, R0
          }
          _R0 = _R7 + 16;
            VCVT.F32.S32    S0, S0
            VADD.F32        S0, S0, S16
            VMOV            R4, S0
            VSTR            S28, [SP,#0xB0+var_B0]
            VMUL.F32        S30, S0, S20
            VSTR            S30, [SP,#0xB0+var_AC]
          Tessellator::vertexUV(v6, _R11, _R4, -0.5, v40, v41);
            VMOV            R9, S24
            VSTR            S22, [SP,#0xB0+var_B0]
          Tessellator::vertexUV(v6, _R9, _R4, -0.5, v32, v33);
          _R0 = v26;
            VMOV            R10, S0
            VMOV            S0, R7
          Tessellator::vertexUV(v6, _R9, _R10, -0.5, v36, v37);
          Tessellator::vertexUV(v6, _R11, _R10, -0.5, v38, v39);
          Tessellator::normal(v6, (const Vec3 *)&Vec3::UNIT_Z);
          Tessellator::vertexUV(v6, _R11, _R10, 0.5, 0.75, 0.0);
          Tessellator::vertexUV(v6, _R9, _R10, 0.5, 0.8125, 0.0);
          Tessellator::vertexUV(v6, _R9, _R4, 0.5, 0.8125, 0.0625);
          Tessellator::vertexUV(v6, _R11, _R4, 0.5, 0.75, 0.0625);
          Tessellator::normal(v6, (const Vec3 *)&Vec3::UNIT_Y);
          Tessellator::vertexUV(v6, _R11, _R10, -0.5, 0.75, 0.0019531);
          Tessellator::vertexUV(v6, _R9, _R10, -0.5, 0.8125, 0.0019531);
          Tessellator::vertexUV(v6, _R9, _R10, 0.5, 0.8125, 0.0019531);
          Tessellator::vertexUV(v6, _R11, _R10, 0.5, 0.75, 0.0019531);
          Tessellator::normal(v6, (const Vec3 *)&Vec3::NEG_UNIT_Y);
          Tessellator::vertexUV(v6, _R11, _R4, 0.5, 0.75, 0.0019531);
          Tessellator::vertexUV(v6, _R9, _R4, 0.5, 0.8125, 0.0019531);
          Tessellator::vertexUV(v6, _R9, _R4, -0.5, 0.8125, 0.0019531);
          v17 = Vec3::UNIT_X;
          Tessellator::vertexUV(v6, _R11, _R4, -0.5, 0.75, 0.0019531);
          Tessellator::normal(v6, (const Vec3 *)Vec3::UNIT_X);
          Tessellator::vertexUV(v6, _R11, _R10, 0.5, 0.75195, 0.0);
          Tessellator::vertexUV(v6, _R11, _R4, 0.5, 0.75195, 0.0625);
          Tessellator::vertexUV(v6, _R11, _R4, -0.5, 0.75195, 0.0625);
          Tessellator::vertexUV(v6, _R11, _R10, -0.5, 0.75195, 0.0);
          Tessellator::normal(v6, (const Vec3 *)&Vec3::NEG_UNIT_X);
          Tessellator::vertexUV(v6, _R9, _R10, -0.5, 0.75195, 0.0);
          Tessellator::vertexUV(v6, _R9, _R4, -0.5, 0.75195, 0.0625);
          Tessellator::vertexUV(v6, _R9, _R4, 0.5, 0.75195, 0.0625);
          Tessellator::vertexUV(v6, _R9, _R10, 0.5, 0.75195, 0.0);
          _R7 -= 16;
          v15 = (const Vec3 *)&Vec3::NEG_UNIT_Z;
          v18 = v26 + 16;
          v23 = v25 + 1;
        while ( v25 + 1 < v8 / 16 );
      }
      v16 = v17;
      result = v43;
      ++v44;
    while ( v44 < v43 );
  return result;
}
