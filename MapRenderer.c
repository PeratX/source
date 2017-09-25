

signed int __fastcall MapRenderer::_tessellateDecoration(MapRenderer *this, Tessellator *a2, unsigned int a3)
{
  Tessellator *v3; // r4@1
  unsigned int v4; // r5@1
  float v12; // ST00_4@1
  float v13; // ST04_4@1
  float v15; // ST00_4@1
  float v16; // ST04_4@1
  float v17; // ST00_4@1
  float v18; // ST04_4@1
  float v20; // [sp+0h] [bp-48h]@0
  float v21; // [sp+4h] [bp-44h]@0

  v3 = a2;
  v4 = a3;
  Tessellator::begin(a2, 0, 0);
  Tessellator::voidBeginAndEndCalls(v3, 1);
  Tessellator::normal(v3, (const Vec3 *)&MapConstants::MAP_NORMAL);
  Tessellator::color(v3, 0, 0);
  _R6 = v4 & 3;
  _R0 = v4 >> 2;
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R6
    VCVT.F32.U32    S0, S0
    VMOV.F32        S16, #0.25
    VCVT.F32.U32    S2, S2
    VMUL.F32        S18, S0, S16
    VMUL.F32        S20, S2, S16
    VSTR            S20, [SP,#0x48+var_48]
    VSTR            S18, [SP,#0x48+var_44]
  }
  Tessellator::vertexUV(v3, -1.0, 1.0, -0.005, v20, v21);
  _R0 = _R6 + 1;
    VMUL.F32        S22, S0, S16
    VSTR            S22, [SP,#0x48+var_48]
  Tessellator::vertexUV(v3, 1.0, 1.0, -0.005, v12, v13);
  _R0 = (v4 >> 2) + 1;
    VMUL.F32        S16, S0, S16
    VSTR            S16, [SP,#0x48+var_44]
  Tessellator::vertexUV(v3, 1.0, -1.0, -0.005, v15, v16);
  return Tessellator::vertexUV(v3, -1.0, -1.0, -0.005, v17, v18);
}


int __fastcall MapRenderer::MapInstance::draw(MapRenderer::MapInstance *this, BaseEntityRenderContext *a2, Player *a3, const Color *a4, int a5, int a6, int a7)
{
  MapRenderer::MapInstance *v7; // r6@1
  Entity *v8; // r4@1
  int v9; // r0@1
  Dimension *v10; // r0@2
  int v11; // r8@2
  Tessellator *v16; // r4@4
  int v17; // r4@6
  int v18; // r0@6
  int v19; // r1@8
  __int64 v20; // r0@8
  signed int v21; // r1@9
  signed int v22; // r6@11
  signed int v23; // r1@11
  unsigned int v24; // r5@13
  int v25; // r7@14
  int v26; // r4@14
  MapDecoration *v27; // r11@14
  int v28; // r8@14
  int v29; // r9@14
  signed int v30; // r10@15
  BlockSource *v31; // r0@17
  int v32; // r0@17
  __int64 v33; // r2@17
  int v34; // r0@17
  unsigned int v35; // r0@22
  int v39; // ST30_4@32
  int v40; // r0@32
  int v41; // r0@32
  bool v45; // zf@33
  int v46; // r0@40
  int v48; // r7@44
  int v52; // r4@44
  int v53; // r0@44
  int v54; // r0@44
  int v55; // r0@44
  int v56; // r7@44
  int v60; // r7@45
  int v63; // r0@46
  int v65; // [sp+10h] [bp-128h]@0
  signed int v66; // [sp+24h] [bp-114h]@11
  signed int v67; // [sp+28h] [bp-110h]@13
  const Color *v68; // [sp+2Ch] [bp-10Ch]@1
  signed int v69; // [sp+34h] [bp-104h]@13
  int v70; // [sp+38h] [bp-100h]@18
  int v71; // [sp+3Ch] [bp-FCh]@8
  int v72; // [sp+40h] [bp-F8h]@5
  Entity *v73; // [sp+44h] [bp-F4h]@2
  BaseEntityRenderContext *v74; // [sp+48h] [bp-F0h]@1
  float v75; // [sp+4Ch] [bp-ECh]@45
  char v76; // [sp+5Ch] [bp-DCh]@32
  char v77; // [sp+64h] [bp-D4h]@32
  float v78; // [sp+6Ch] [bp-CCh]@45
  char v79; // [sp+78h] [bp-C0h]@1
  int v80; // [sp+80h] [bp-B8h]@44
  int v81; // [sp+84h] [bp-B4h]@44
  int v82; // [sp+88h] [bp-B0h]@44
  int v83; // [sp+8Ch] [bp-ACh]@44
  int v84; // [sp+90h] [bp-A8h]@44
  int v85; // [sp+94h] [bp-A4h]@44
  int v86; // [sp+98h] [bp-A0h]@44
  int v87; // [sp+9Ch] [bp-9Ch]@44
  int v88; // [sp+A0h] [bp-98h]@44
  int v89; // [sp+A4h] [bp-94h]@44
  int v90; // [sp+A8h] [bp-90h]@44
  int v91; // [sp+ACh] [bp-8Ch]@44
  int v92; // [sp+B0h] [bp-88h]@44
  int v93; // [sp+B4h] [bp-84h]@44
  int v94; // [sp+B8h] [bp-80h]@44
  int v95; // [sp+BCh] [bp-7Ch]@44
  int v96; // [sp+C0h] [bp-78h]@44
  int v97; // [sp+C4h] [bp-74h]@44
  int v98; // [sp+C8h] [bp-70h]@44
  float v99; // [sp+CCh] [bp-6Ch]@44

  v7 = this;
  v68 = a4;
  v8 = a3;
  v74 = a2;
  v9 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v79, v9);
  if ( v8 )
  {
    v73 = v8;
    v10 = (Dimension *)Entity::getDimensionConst(v8);
    v11 = Dimension::hasCeiling(v10);
  }
  else
    v73 = 0;
    v11 = 0;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v79);
  __asm
    VLDR            S0, =0.005
    VLDR            S2, [R0,#0x20]
    VLDR            S4, [R0,#0x24]
    VLDR            S6, [R0,#0x28]
    VMUL.F32        S2, S2, S0
    VLDR            S8, [R0,#0x2C]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S6, S6, S0
    VLDR            S10, [R0,#0x30]
    VMUL.F32        S0, S8, S0
    VLDR            S12, [R0,#0x34]
    VLDR            S14, [R0,#0x38]
    VLDR            S1, [R0,#0x3C]
    VSUB.F32        S2, S10, S2
    VSUB.F32        S4, S12, S4
    VSUB.F32        S6, S14, S6
    VSUB.F32        S0, S1, S0
    VSTR            S2, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  v16 = (Tessellator *)BaseEntityRenderContext::getTessellator(v74);
  if ( Tessellator::forceTessellateIntercept(v16) == 1 )
    Tessellator::begin(v16, 0, 0);
    Tessellator::voidBeginAndEndCalls(v16, 1);
    Tessellator::normal(v16, (const Vec3 *)&MapConstants::MAP_NORMAL);
    Tessellator::vertexUV(v16, 0.0, 128.0, -0.01, 0.0, 1.0);
    Tessellator::vertexUV(v16, 128.0, 128.0, -0.005, 1.0, 1.0);
    Tessellator::vertexUV(v16, 128.0, 0.0, -0.01, 1.0, 0.0);
    Tessellator::vertexUV(v16, 0.0, 0.0, -0.01, 0.0, 0.0);
    v72 = (int)v7;
    Tessellator::triggerIntercept(
      v16,
      (const mce::MaterialPtr *)(*((_DWORD *)v7 + 3) + 252),
      (MapRenderer::MapInstance *)((char *)v7 + 24));
    v17 = *((_DWORD *)v7 + 3);
    v18 = BaseEntityRenderContext::getScreenContext(v74);
    mce::Mesh::render((mce::Buffer *)(v17 + 364), v18, *((_DWORD *)v7 + 3) + 252, (int)v7 + 24, 0, 0);
  if ( !a7 )
    v19 = *(_DWORD *)(v72 + 4);
    v71 = v19;
    v20 = *(_QWORD *)(v19 + 68);
    if ( HIDWORD(v20) != (_DWORD)v20 )
    {
      v21 = 1065353216;
      if ( v11 )
        v21 = -1082130432;
      __asm
      {
        VMOV.F32        S16, #0.5
        VMOV.F32        S22, #0.125
        VLDR            S18, =64.0
      }
      v66 = v21;
        VMOV.F32        S24, #4.0
        VMOV.F32        S26, #0.25
        VLDR            S20, =-0.02
      v22 = 32;
      v23 = 0;
      if ( !v73 )
        v23 = 1;
      v24 = 0;
      v67 = v23;
      v69 = 1;
      do
        v25 = v20 + v22;
        v26 = v20 + v22 - 24;
        v27 = *(MapDecoration **)(v20 + v22);
        v28 = MapDecoration::getImg(*(MapDecoration **)(v20 + v22));
        v29 = MapDecoration::getRot(v27);
        if ( v73 )
        {
          v30 = 0;
          if ( *(_QWORD *)Entity::getUniqueID(v73) == *(_QWORD *)(v25 - 24) )
            v30 = 1;
          v31 = (BlockSource *)Entity::getRegion(v73);
          v32 = BlockSource::getLevel(v31);
          v33 = *(_QWORD *)(*(_DWORD *)(v71 + 68) + v22 - 24);
          v34 = Level::fetchEntity(v32, 0, v33, HIDWORD(v33), 0);
          if ( v34 )
          {
            v70 = (*(int (**)(void))(*(_DWORD *)v34 + 524))();
            goto LABEL_21;
          }
        }
        else
        v70 = 0;
LABEL_21:
        if ( a5 == 1 )
          v35 = MapDecoration::isRenderedOnFrame(v27);
          if ( v28 == 16 || v35 ^ 1 )
            goto LABEL_50;
LABEL_26:
          _ZF = (unsigned __int8)v28 == 0;
          if ( !(_BYTE)v28 )
            _ZF = v70 == 2;
          if ( _ZF )
            v28 = 0;
            if ( !*(_DWORD *)(*(_DWORD *)(v72 + 4) + 32) )
            {
              v28 = 6;
              v29 = *(_DWORD *)(*(_DWORD *)(v72 + 4) + 32);
            }
          _R7 = MapDecoration::getX(v27);
          _R0 = MapDecoration::getY(v27);
          __asm
            VMOV            S0, R7
            VMOV            S2, R0
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
          v39 = v69 + 1;
            VMOV            S4, R0
            VMUL.F32        S0, S0, S16
            VMUL.F32        S2, S2, S16
            VCVT.F32.S32    S4, S4
            VADD.F32        S17, S0, S18
            VADD.F32        S30, S2, S18
            VMUL.F32        S28, S4, S20
            VSTR            S17, [SP,#0x138+var_CC]
            VSTR            S30, [SP,#0x138+var_C8]
            VSTR            S28, [SP,#0x138+var_C4]
          v40 = BaseEntityRenderContext::getWorldMatrix(v74);
          MatrixStack::push((MatrixStack *)&v77, v40);
          v41 = BaseEntityRenderContext::getWorldMatrix(v74);
          MatrixStack::push((MatrixStack *)&v76, v41);
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            VLDR            S0, [R0,#4]
            VLDR            S6, [R0,#0x10]
            VLDR            S8, [R0,#0x14]
            VMUL.F32        S0, S0, S17
            VLDR            S14, [R0]
            VMUL.F32        S6, S6, S30
            VLDR            S2, [R0,#8]
            VMUL.F32        S8, S8, S30
            VLDR            S4, [R0,#0xC]
            VMUL.F32        S14, S14, S17
            VLDR            S10, [R0,#0x18]
            VMUL.F32        S2, S2, S17
            VLDR            S12, [R0,#0x1C]
            VMUL.F32        S4, S4, S17
            VMUL.F32        S10, S10, S30
            VLDR            S3, [R0,#0x20]
            VMUL.F32        S12, S12, S30
            VLDR            S1, [R0,#0x24]
            VMUL.F32        S3, S3, S28
            VLDR            S5, [R0,#0x28]
            VADD.F32        S0, S8, S0
            VLDR            S8, [R0,#0x2C]
            VADD.F32        S6, S6, S14
            VMUL.F32        S1, S1, S28
            VMUL.F32        S14, S5, S28
            VADD.F32        S2, S10, S2
            VLDR            S10, [R0,#0x34]
            VADD.F32        S4, S12, S4
            VLDR            S12, [R0,#0x38]
            VMUL.F32        S8, S8, S28
            VADD.F32        S6, S6, S3
            VADD.F32        S0, S0, S1
            VADD.F32        S2, S2, S14
            VADD.F32        S4, S4, S8
            VLDR            S8, [R0,#0x30]
            VADD.F32        S6, S6, S8
            VLDR            S8, [R0,#0x3C]
            VADD.F32        S0, S0, S10
            VADD.F32        S2, S2, S12
            VSTR            S6, [R0,#0x30]
            VSTR            S0, [R0,#0x34]
            VSTR            S2, [R0,#0x38]
            VSTR            S4, [R0,#0x3C]
            VSUB.F32        S0, S8, S0
            VSUB.F32        S2, S10, S2
            VSUB.F32        S4, S12, S4
            VSUB.F32        S6, S6, S14
            VMUL.F32        S0, S0, S22
            VLDR            S14, [R0,#0x3C]
            VMUL.F32        S2, S2, S22
            VMUL.F32        S4, S4, S22
            VMUL.F32        S6, S6, S22
            VADD.F32        S4, S4, S14
          _R0 = MapDecoration::getColor(v27);
            VLDR            S30, [R0]
            VLDR            S17, [R0,#4]
            VLDR            S28, [R0,#8]
          if ( v67 | v30 )
            goto LABEL_44;
          v45 = v28 == 6;
          if ( v28 != 6 )
            v45 = v28 == 0;
          if ( !v45 )
          if ( (*(int (**)(void))(*(_DWORD *)v73 + 524))() != v70 )
            goto LABEL_54;
          if ( v28 == 6 )
            v46 = MapRenderer::MapInstance::_renderFaceIcon(v72, v70, v74, (int)v73, (int)v68, 0.6, v27, v26, v65, a6);
          else
            if ( v28 )
              goto LABEL_44;
            v46 = MapRenderer::MapInstance::_renderFaceIcon(v72, v70, v74, (int)v73, (int)v68, 1.0, v27, v26, v65, a6);
          if ( v46 )
LABEL_54:
            MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v76);
LABEL_44:
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            __asm
              VLDR            S0, [R0]
              VMUL.F32        S0, S0, S24
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
              VSTR            S0, [R0,#0x20]
              VLDR            S0, [R0,#0x24]
              VSTR            S0, [R0,#0x24]
              VLDR            S0, [R0,#0x28]
              VSTR            S0, [R0,#0x28]
              VLDR            S0, [R0,#0x2C]
              VSTR            S0, [R0,#0x2C]
            v48 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            _R0 = v29;
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
            _R0 = v72;
            __asm { VLDR            S2, [R0] }
            v80 = 0;
            v81 = 0;
            v82 = 1065353216;
              VMUL.F32        S0, S2, S0
              VSTR            S0, [SP,#0x138+var_6C]
            glm::rotate<float>((int)&v83, v48, (int)&v99, (int)&v80);
            *(_DWORD *)v48 = v83;
            *(_DWORD *)(v48 + 4) = v84;
            *(_DWORD *)(v48 + 8) = v85;
            *(_DWORD *)(v48 + 12) = v86;
            *(_DWORD *)(v48 + 16) = v87;
            *(_DWORD *)(v48 + 20) = v88;
            *(_DWORD *)(v48 + 24) = v89;
            *(_DWORD *)(v48 + 28) = v90;
            *(_DWORD *)(v48 + 32) = v91;
            *(_DWORD *)(v48 + 36) = v92;
            *(_DWORD *)(v48 + 40) = v93;
            *(_DWORD *)(v48 + 44) = v94;
            *(_DWORD *)(v48 + 48) = v95;
            *(_DWORD *)(v48 + 52) = v96;
            *(_DWORD *)(v48 + 56) = v97;
            *(_DWORD *)(v48 + 60) = v98;
            _R0 = v68;
              VLDR            S21, [R0]
              VLDR            S23, [R0,#4]
              VLDR            S19, [R0,#8]
            v52 = *(_DWORD *)(BaseEntityRenderContext::getScreenContext(v74) + 32);
              VMUL.F32        S0, S21, S30
              VMUL.F32        S2, S23, S17
              VMUL.F32        S4, S19, S28
            v53 = *(_DWORD *)(v52 + 560);
            *(_DWORD *)(*(_DWORD *)(v53 + 20) + 12) = v66;
              VSTR            S0, [R1]
              VSTR            S2, [R1,#4]
              VSTR            S4, [R1,#8]
            *(_BYTE *)(v53 + 17) = 1;
            v54 = BaseEntityRenderContext::getScreenContext(v74);
            mce::ConstantBufferConstantsBase::sync(
              (mce::ConstantBufferConstantsBase *)(v52 + 548),
              *(mce::RenderContext **)(v54 + 12));
            v55 = BaseEntityRenderContext::getScreenContext(v74);
            mce::Mesh::render(
              (mce::Buffer *)(*(_DWORD *)(v72 + 12) + 100 * v28 + 464),
              v55,
              v72 + 60,
              *(_DWORD *)(v72 + 12) + 180,
              0,
              0);
            v56 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            _R0 = MapDecoration::getRot(v27);
              VNMUL.F32       S0, S0, S2
            glm::rotate<float>((int)&v83, v56, (int)&v99, (int)&v80);
            *(_DWORD *)v56 = v83;
            *(_DWORD *)(v56 + 4) = v84;
            *(_DWORD *)(v56 + 8) = v85;
            *(_DWORD *)(v56 + 12) = v86;
            *(_DWORD *)(v56 + 16) = v87;
            *(_DWORD *)(v56 + 20) = v88;
            *(_DWORD *)(v56 + 24) = v89;
            *(_DWORD *)(v56 + 28) = v90;
            *(_DWORD *)(v56 + 32) = v91;
            *(_DWORD *)(v56 + 36) = v92;
            *(_DWORD *)(v56 + 40) = v93;
            *(_DWORD *)(v56 + 44) = v94;
            *(_DWORD *)(v56 + 48) = v95;
            *(_DWORD *)(v56 + 52) = v96;
            *(_DWORD *)(v56 + 56) = v97;
            *(_DWORD *)(v56 + 60) = v98;
              VMUL.F32        S0, S0, S26
            if ( a6 == 1 )
              v60 = MapDecoration::getLabel(v27);
              _R0 = MapDecoration::getColor(v27);
              __asm
              {
                VLDR            S0, [R0]
                VLDR            S2, [R0,#4]
                VLDR            S4, [R0,#8]
                VLDR            S6, [R0,#0xC]
              }
              _R0 = v68;
                VLDR            S8, [R0]
                VLDR            S10, [R0,#4]
                VLDR            S12, [R0,#8]
                VMUL.F32        S0, S8, S0
                VLDR            S14, [R0,#0xC]
                VMUL.F32        S2, S10, S2
                VMUL.F32        S4, S12, S4
                VMUL.F32        S6, S14, S6
                VSTR            S0, [SP,#0x138+var_EC]
                VSTR            S2, [SP,#0x138+var_E8]
                VSTR            S4, [SP,#0x138+var_E4]
                VSTR            S6, [SP,#0x138+var_E0]
              MapRenderer::MapInstance::_renderLabel(v72, v74, (int)&v78, v60, (int)&v75);
            v63 = v69 + 1;
            if ( v69 > 199 )
              v63 = 1;
            v69 = v63;
          MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v77);
          goto LABEL_50;
        if ( v28 != 16 )
          goto LABEL_26;
LABEL_50:
        v22 += 40;
        v20 = *(_QWORD *)(v71 + 68);
        ++v24;
      while ( v24 < -858993459 * ((HIDWORD(v20) - (signed int)v20) >> 3) );
    }
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v79);
}


int __fastcall MapRenderer::resetData(MapRenderer *this)
{
  MapRenderer *v1; // r4@1
  int v2; // r5@1
  MapRenderer::MapInstance *v3; // r0@2
  int v4; // r6@2
  MapRenderer::MapInstance *v5; // r0@3
  int result; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 39);
  if ( v2 )
  {
    do
    {
      v3 = *(MapRenderer::MapInstance **)(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
      {
        v5 = MapRenderer::MapInstance::~MapInstance(v3);
        operator delete((void *)v5);
      }
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 148), 4 * (*(_QWORD *)((char *)v1 + 148) >> 32));
  result = 0;
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  return result;
}


signed int __fastcall MapRenderer::_tessellateBackground(MapRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  float v11; // r5@1

  v2 = a2;
  Tessellator::begin(a2, 0, 0);
  Tessellator::voidBeginAndEndCalls(v2, 1);
  Tessellator::color(v2, (const Color *)&Color::WHITE);
  Tessellator::normal(v2, (const Vec3 *)&MapConstants::MAP_NORMAL);
  _R0 = &MapConstants::MAP_BORDER;
  _R1 = &MapConstants::MAP_HEIGHT;
  __asm
  {
    VLDR            S16, [R0]
    VLDR            S0, [R1]
    VMOV            R0, S16
    VADD.F32        S0, S0, S16
    VMOV            R6, S0
  }
  LODWORD(v11) = _R0 ^ 0x80000000;
  Tessellator::vertexUV(v2, COERCE_FLOAT(_R0 ^ 0x80000000), _R6, 0.0, 0.0, 1.0);
  _R0 = &MapConstants::MAP_WIDTH;
    VLDR            S0, [R0]
    VMOV            R7, S0
  Tessellator::vertexUV(v2, _R7, _R6, 0.0, 1.0, 1.0);
  Tessellator::vertexUV(v2, _R7, v11, 0.0, 1.0, 0.0);
  return Tessellator::vertexUV(v2, v11, v11, 0.0, 0.0, 0.0);
}


signed int __fastcall MapRenderer::_tessellateForeground(MapRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1

  v2 = a2;
  Tessellator::begin(a2, 0, 0);
  Tessellator::voidBeginAndEndCalls(v2, 1);
  Tessellator::color(v2, 0, 0);
  Tessellator::normal(v2, (const Vec3 *)&MapConstants::MAP_NORMAL);
  Tessellator::vertexUV(v2, 0.0, 128.0, -0.01, 0.0, 1.0);
  Tessellator::vertexUV(v2, 128.0, 128.0, -0.01, 1.0, 1.0);
  Tessellator::vertexUV(v2, 128.0, 0.0, -0.01, 1.0, 0.0);
  return Tessellator::vertexUV(v2, 0.0, 0.0, -0.01, 0.0, 0.0);
}


int __fastcall MapRenderer::MapInstance::_drawDecoration(int a1, int a2, int a3)
{
  return mce::Mesh::render(
           (mce::Buffer *)(*(_DWORD *)(a1 + 12) + 100 * a3 + 464),
           a2,
           a1 + 60,
           *(_DWORD *)(a1 + 12) + 180,
           0,
           0);
}


MapRenderer::MapInstance *__fastcall MapRenderer::MapInstance::MapInstance(MapRenderer::MapInstance *this, int a2, const MapItemSavedData *a3, MapRenderer *a4)
{
  MapRenderer::MapInstance *v4; // r4@1
  MapRenderer *v5; // r11@1
  char v6; // r7@1
  const void **v7; // r0@1
  const void **v8; // r0@1
  void **v9; // r0@1
  void *v10; // r0@1
  __int64 v11; // kr00_8@2
  unsigned int v12; // r1@2
  const void **v13; // r0@4
  const void *v14; // r1@6
  void *v15; // r0@6
  void *v16; // r0@7
  char *v17; // r0@8
  void *v18; // r0@9
  void *v19; // r0@10
  void *v20; // r0@11
  void *v21; // r0@12
  mce::TextureGroup *v22; // r5@13
  void *v23; // r0@13
  mce::TextureGroup *v24; // r5@14
  void *v25; // r0@14
  unsigned int *v27; // r2@16
  signed int v28; // r1@18
  unsigned int *v29; // r2@20
  signed int v30; // r1@22
  unsigned int *v31; // r2@24
  signed int v32; // r1@26
  unsigned int *v33; // r2@28
  signed int v34; // r1@30
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  unsigned int *v37; // r2@36
  signed int v38; // r1@38
  unsigned int *v39; // r2@40
  signed int v40; // r1@42
  unsigned int *v41; // r2@44
  signed int v42; // r1@46
  unsigned int *v43; // r2@48
  signed int v44; // r1@50
  unsigned int *v45; // r2@52
  signed int v46; // r1@54
  int v47; // [sp+0h] [bp-138h]@14
  int v48; // [sp+4h] [bp-134h]@14
  char v49; // [sp+8h] [bp-130h]@14
  int v50; // [sp+20h] [bp-118h]@13
  int v51; // [sp+24h] [bp-114h]@13
  int v52; // [sp+2Ch] [bp-10Ch]@12
  int v53; // [sp+34h] [bp-104h]@11
  int v54; // [sp+3Ch] [bp-FCh]@10
  int v55; // [sp+40h] [bp-F8h]@1
  int v56; // [sp+44h] [bp-F4h]@1
  char *v57; // [sp+48h] [bp-F0h]@1
  unsigned int v58; // [sp+4Ch] [bp-ECh]@1
  void **v59; // [sp+50h] [bp-E8h]@1
  int v60; // [sp+54h] [bp-E4h]@2
  void **v61; // [sp+58h] [bp-E0h]@1
  void **v62; // [sp+5Ch] [bp-DCh]@1
  int v63; // [sp+78h] [bp-C0h]@2
  int v64; // [sp+80h] [bp-B8h]@1
  int v65; // [sp+84h] [bp-B4h]@2
  char v66; // [sp+10Fh] [bp-29h]@1

  v4 = this;
  v5 = a4;
  *(_DWORD *)this = 1102315520;
  *((_DWORD *)this + 1) = a3;
  *((_BYTE *)this + 8) = 1;
  *((_DWORD *)this + 3) = a4;
  v6 = a2;
  Util::toString<long long,(void *)0,(void *)0>((void **)&v56, a2, *(_QWORD *)a3);
  v7 = sub_119C984((const void **)&v56, 0, (unsigned int)"map/", (_BYTE *)4);
  v57 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = sub_119C894((const void **)&v57, "_", 1u);
  v58 = (unsigned int)*v8;
  *v8 = &unk_28898CC;
  sub_119CB58((int)&v59, 24);
  v66 = v6;
  sub_119C904((char *)&v61, (int)&v66, 1);
  sub_119D48C(&v55, (int)&v62);
  v9 = off_26D3F84;
  v59 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v59) = off_26D3F80[0];
  v61 = v9;
  v62 = &off_27734E8;
  v10 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v64 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v62 = &off_26D40A8;
  sub_119C954((unsigned int **)&v63);
  v59 = (void **)off_26D3F68;
  *(void ***)((char *)&v59 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v60 = 0;
  sub_119C964(&v65);
  v11 = *(_QWORD *)(v58 - 12);
  v12 = *(_DWORD *)(v55 - 12) + v11;
  if ( v12 > HIDWORD(v11) && v12 <= *(_DWORD *)(v55 - 8) )
    v13 = sub_119C984((const void **)&v55, 0, v58, (_BYTE *)v11);
  else
    v13 = sub_119C8A4((const void **)&v58, (const void **)&v55);
  v14 = *v13;
  *v13 = &unk_28898CC;
  *((_DWORD *)v4 + 4) = v14;
  *((_DWORD *)v4 + 5) = 1;
  v15 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v55 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v58 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v57 - 12;
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v57 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v56 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  mce::TexturePtr::TexturePtr((MapRenderer::MapInstance *)((char *)v4 + 24));
  sub_119C884((void **)&v54, "map_marker");
  mce::MaterialPtr::MaterialPtr(
    (MapRenderer::MapInstance *)((char *)v4 + 48),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v54);
  v19 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v54 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v53, "map_decoration");
    (MapRenderer::MapInstance *)((char *)v4 + 60),
    &v53);
  v20 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v53 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v52, "name_tag_depth_tested");
    (MapRenderer::MapInstance *)((char *)v4 + 72),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v52);
  v21 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v52 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (mce::TextureGroup *)*((_DWORD *)v5 + 36);
  sub_119C854(&v50, (int *)v4 + 4);
  v51 = *((_DWORD *)v4 + 5);
  mce::TextureGroup::addEmptyTexture(v22, (const ResourceLocation *)&v50, 128, 128);
  v23 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v50 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = (mce::TextureGroup *)*((_DWORD *)v5 + 36);
  sub_119C854(&v47, (int *)v4 + 4);
  v48 = *((_DWORD *)v4 + 5);
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v49, v24, (int)&v47, 0);
  mce::TexturePtr::operator=((MapRenderer::MapInstance *)((char *)v4 + 24), (mce::TexturePtr *)&v49);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v49);
  v25 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v47 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  return v4;
}


unsigned int __fastcall MapRenderer::_calculateMapLightColor(MapRenderer *this, const BlockPos *a2, BlockSource *a3, int a4)
{
  BlockSource *v4; // r7@1
  int v5; // r5@1
  unsigned int v6; // r9@1
  unsigned int v7; // r6@1
  int v8; // r1@1
  int v9; // r2@1
  char *v10; // r8@1
  char *v11; // r1@1
  char *v12; // r0@3
  unsigned int v13; // r4@5
  unsigned int v14; // r6@5
  int v15; // r1@5
  int v16; // r2@5
  char *v17; // r1@5
  char *v18; // r0@7
  unsigned int v19; // r4@9
  unsigned int v20; // r6@9
  int v21; // r2@9
  char *v22; // r1@9
  char *v23; // r0@11
  unsigned int v24; // r4@13
  unsigned int v25; // r11@13
  int v26; // r2@13
  char *v27; // r1@13
  char *v28; // r0@15
  unsigned int v29; // r4@17
  unsigned int v30; // r11@17
  int v31; // r1@17
  int v32; // r2@17
  char *v33; // r1@17
  char *v34; // r0@19
  unsigned int v35; // r6@21
  unsigned int v36; // r4@21
  int v37; // r1@21
  int v38; // r2@21
  char *v39; // r1@23
  MapRenderer *v41; // [sp+8h] [bp-78h]@1
  char v42; // [sp+10h] [bp-70h]@25
  char v43; // [sp+11h] [bp-6Fh]@25
  char v44; // [sp+14h] [bp-6Ch]@21
  unsigned __int8 v45; // [sp+18h] [bp-68h]@21
  unsigned __int8 v46; // [sp+19h] [bp-67h]@21
  char v47; // [sp+1Ch] [bp-64h]@17
  unsigned __int8 v48; // [sp+20h] [bp-60h]@17
  unsigned __int8 v49; // [sp+21h] [bp-5Fh]@17
  char v50; // [sp+24h] [bp-5Ch]@13
  unsigned __int8 v51; // [sp+28h] [bp-58h]@13
  unsigned __int8 v52; // [sp+29h] [bp-57h]@13
  char v53; // [sp+2Ch] [bp-54h]@9
  unsigned __int8 v54; // [sp+30h] [bp-50h]@9
  unsigned __int8 v55; // [sp+31h] [bp-4Fh]@9
  char v56; // [sp+34h] [bp-4Ch]@5
  unsigned __int8 v57; // [sp+38h] [bp-48h]@5
  unsigned __int8 v58; // [sp+39h] [bp-47h]@5
  char v59; // [sp+3Ch] [bp-44h]@1
  unsigned __int8 v60; // [sp+40h] [bp-40h]@1
  unsigned __int8 v61; // [sp+41h] [bp-3Fh]@1
  int v62; // [sp+44h] [bp-3Ch]@1
  int v63; // [sp+48h] [bp-38h]@1
  int v64; // [sp+4Ch] [bp-34h]@1
  unsigned __int8 v65; // [sp+52h] [bp-2Eh]@1
  unsigned __int8 v66; // [sp+53h] [bp-2Dh]@1
  char v67; // [sp+54h] [bp-2Ch]@1
  unsigned __int8 v68; // [sp+58h] [bp-28h]@1
  unsigned __int8 v69; // [sp+59h] [bp-27h]@1

  v41 = this;
  v4 = a3;
  v5 = a4;
  v67 = Brightness::MIN;
  BlockSource::getLightColor((int)&v68, a4, (int)a3, &v67);
  v6 = v68;
  v7 = v69;
  v66 = v68;
  v65 = v69;
  v8 = *((_DWORD *)v4 + 1);
  v9 = *((_DWORD *)v4 + 2);
  v62 = *(_DWORD *)v4;
  v63 = v8 + 1;
  v64 = v9;
  v59 = Brightness::MIN;
  BlockSource::getLightColor((int)&v60, v5, (int)&v62, &v59);
  v10 = (char *)&v66;
  v68 = v60;
  v69 = v61;
  v11 = (char *)&v65;
  if ( v7 < v61 )
    v11 = (char *)((unsigned int)&v68 | 1);
  v12 = (char *)&v66;
  if ( v6 < v60 )
    v12 = (char *)&v68;
  v13 = (unsigned __int8)*v11;
  v14 = (unsigned __int8)*v12;
  v66 = *v12;
  v65 = v13;
  v15 = *((_DWORD *)v4 + 1);
  v16 = *((_DWORD *)v4 + 2);
  v63 = v15 - 1;
  v64 = v16;
  v56 = Brightness::MIN;
  BlockSource::getLightColor((int)&v57, v5, (int)&v62, &v56);
  v68 = v57;
  v69 = v58;
  v17 = (char *)&v65;
  if ( v13 < v58 )
    v17 = (char *)((unsigned int)&v68 | 1);
  v18 = (char *)&v66;
  if ( v14 < v57 )
    v18 = (char *)&v68;
  v19 = (unsigned __int8)*v17;
  v20 = (unsigned __int8)*v18;
  v66 = *v18;
  v65 = v19;
  v21 = *((_DWORD *)v4 + 2);
  *(_QWORD *)&v62 = *(_QWORD *)v4;
  v64 = v21 - 1;
  v53 = Brightness::MIN;
  BlockSource::getLightColor((int)&v54, v5, (int)&v62, &v53);
  v68 = v54;
  v69 = v55;
  v22 = (char *)&v65;
  if ( v19 < v55 )
    v22 = (char *)((unsigned int)&v68 | 1);
  v23 = (char *)&v66;
  if ( v20 < v54 )
    v23 = (char *)&v68;
  v24 = (unsigned __int8)*v22;
  v25 = (unsigned __int8)*v23;
  v66 = *v23;
  v65 = v24;
  v26 = *((_DWORD *)v4 + 2);
  v64 = v26 + 1;
  v50 = Brightness::MIN;
  BlockSource::getLightColor((int)&v51, v5, (int)&v62, &v50);
  v68 = v51;
  v69 = v52;
  v27 = (char *)&v65;
  if ( v24 < v52 )
    v27 = (char *)((unsigned int)&v68 | 1);
  v28 = (char *)&v66;
  if ( v25 < v51 )
    v28 = (char *)&v68;
  v29 = (unsigned __int8)*v27;
  v30 = (unsigned __int8)*v28;
  v66 = *v28;
  v65 = v29;
  v31 = *((_DWORD *)v4 + 1);
  v32 = *((_DWORD *)v4 + 2);
  v62 = *(_DWORD *)v4 + 1;
  v63 = v31;
  v64 = v32;
  v47 = Brightness::MIN;
  BlockSource::getLightColor((int)&v48, v5, (int)&v62, &v47);
  v68 = v48;
  v69 = v49;
  v33 = (char *)&v65;
  if ( v29 < v49 )
    v33 = (char *)((unsigned int)&v68 | 1);
  v34 = (char *)&v66;
  if ( v30 < v48 )
    v34 = (char *)&v68;
  v35 = (unsigned __int8)*v33;
  v66 = *v34;
  v36 = v66;
  v65 = v35;
  v37 = *((_DWORD *)v4 + 1);
  v38 = *((_DWORD *)v4 + 2);
  v62 = *(_DWORD *)v4 - 1;
  v63 = v37;
  v64 = v38;
  v44 = Brightness::MIN;
  BlockSource::getLightColor((int)&v45, v5, (int)&v62, &v44);
  v68 = v45;
  v69 = v46;
  if ( v36 < v45 )
    v10 = (char *)&v68;
  v39 = (char *)&v65;
  if ( v35 < v46 )
    v39 = (char *)((unsigned int)&v68 | 1);
  v42 = *v10;
  v43 = *v39;
  return LightTexture::getColorForUV((int)v41, (int)&v42);
}


void __fastcall MapRenderer::~MapRenderer(MapRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MapRenderer::~MapRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall MapRenderer::MapInstance::_drawIconBackground(int a1, int a2, const Color *a3, float a4)
{
  int v4; // r9@1
  const Color *v5; // r6@1
  Tessellator *v6; // r5@1
  int v7; // r8@1
  float v8; // r7@1
  int v9; // r0@1
  int v10; // r1@1
  const mce::TexturePtr *v11; // r3@1
  int result; // r0@2

  v4 = a2;
  v5 = a3;
  v6 = *(Tessellator **)(a2 + 40);
  v7 = a1;
  v8 = a4;
  Tessellator::begin(v6, 4, 0);
  Tessellator::color(v6, v5);
  Tessellator::normal(v6, (const Vec3 *)&MapConstants::MAP_NORMAL);
  Tessellator::vertexUV(v6, -1.0, 1.0, v8, 0.0, 0.0);
  Tessellator::vertexUV(v6, 1.0, 1.0, v8, 1.0, 0.0);
  Tessellator::vertexUV(v6, 1.0, -1.0, v8, 1.0, 1.0);
  Tessellator::vertexUV(v6, -1.0, -1.0, v8, 0.0, 1.0);
  v9 = Tessellator::forceTessellateIntercept(v6);
  v10 = *(_DWORD *)(v7 + 12);
  v11 = (const mce::TexturePtr *)(v10 + 228);
  if ( v9 == 1 )
    result = j_j_j__ZN11Tessellator16triggerInterceptERKN3mce11MaterialPtrERKNS0_10TexturePtrE(
               v6,
               (const mce::MaterialPtr *)(v10 + 252),
               v11);
  else
    result = j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrERKNS2_10TexturePtrE_0(
               (char *)v6,
               v4,
               v10 + 252,
               (int)v11);
  return result;
}


void __fastcall MapRenderer::~MapRenderer(MapRenderer *this)
{
  MapRenderer::~MapRenderer(this);
}


int __fastcall MapRenderer::onAppSuspended(MapRenderer *this)
{
  MapRenderer *v1; // r4@1
  int result; // r0@1

  v1 = this;
  mce::Mesh::reset((MapRenderer *)((char *)this + 264));
  mce::Mesh::reset((MapRenderer *)((char *)v1 + 364));
  for ( result = *((_DWORD *)v1 + 39); result; result = *(_DWORD *)result )
    *(_BYTE *)(*(_DWORD *)(result + 16) + 8) = 1;
  return result;
}


int *__fastcall MapRenderer::MapInstance::_getMapResourceLocation(MapRenderer::MapInstance *this, int a2)
{
  int v2; // r4@1
  int *result; // r0@1

  v2 = a2;
  result = sub_119C854((int *)this, (int *)(a2 + 16));
  result[1] = *(_DWORD *)(v2 + 20);
  return result;
}


int __fastcall MapRenderer::MapInstance::_renderLabel(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5)
{
  BaseEntityRenderContext *v5; // r7@1
  int v6; // r8@1
  int *v7; // r10@1
  int v9; // r0@1
  int v10; // r9@1
  int v11; // r0@1
  int v12; // r6@1
  Tessellator *v22; // r7@9
  ShaderColor *v26; // r0@9
  int v31; // [sp+18h] [bp-70h]@9
  int v32; // [sp+1Ch] [bp-6Ch]@9
  int v33; // [sp+20h] [bp-68h]@9
  int v34; // [sp+24h] [bp-64h]@9
  char v35; // [sp+28h] [bp-60h]@1

  v5 = this;
  v6 = a1;
  v7 = (int *)a4;
  _R5 = a3;
  v9 = BaseEntityRenderContext::getWorldMatrix(this);
  MatrixStack::push((MatrixStack *)&v35, v9);
  v10 = BaseEntityRenderContext::getScreenContext(v5);
  v11 = BaseEntityRenderContext::getFont(v5);
  v12 = v11;
  _R0 = Font::getLineLength(v11, v7, 1065353216, 0);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S20, S0
  }
  _R0 = Font::getTextHeight(v12, v7, 1065353216);
    VMOV.F32        S2, #-9.0
    VMOV            S4, R0
    VMOV.F32        S18, #1.0
    VCVT.F32.S32    S4, S4
    VLDR            S8, [R5,#4]
    VMOV.F32        S0, #0.25
    VLDR            S6, [R5]
    VMOV.F32        S16, #0.5
    VLDR            S28, [R5,#8]
    VADD.F32        S2, S8, S2
    VMOV.F32        S26, S18
    VMUL.F32        S0, S20, S0
    VMUL.F32        S22, S4, S16
    VLDR            S4, =127.0
    VCMPE.F32       S2, S18
    VMRS            APSR_nzcv, FPSCR
    VADD.F32        S24, S0, S18
    VADD.F32        S8, S22, S4
    VSUB.F32        S0, S4, S0
    VCMPE.F32       S6, S24
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S26, S2 }
    VCMPE.F32       S2, S8
    __asm { VMOVGT.F32      S24, S6 }
    VCMPE.F32       S6, S0
    __asm { VMOVGT.F32      S26, S8 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S24, S0 }
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v35);
    VLDR            S0, =-0.002
    VLDR            S4, [R0,#8]
    VLDR            S6, [R0,#0xC]
    VADD.F32        S0, S28, S0
    VLDR            S8, [R0,#0x10]
    VMUL.F32        S4, S4, S24
    VLDR            S10, [R0,#0x14]
    VMUL.F32        S6, S6, S24
    VLDR            S12, [R0,#0x18]
    VMUL.F32        S8, S8, S26
    VLDR            S14, [R0,#0x1C]
    VMUL.F32        S10, S10, S26
    VLDMIA          R0, {S1-S2}
    VMUL.F32        S12, S12, S26
    VMUL.F32        S14, S14, S26
    VMUL.F32        S2, S2, S24
    VLDR            S5, [R0,#0x20]
    VMUL.F32        S1, S1, S24
    VLDR            S3, [R0,#0x24]
    VMUL.F32        S5, S5, S0
    VLDR            S7, [R0,#0x28]
    VMUL.F32        S3, S3, S0
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VADD.F32        S6, S14, S6
    VADD.F32        S2, S10, S2
    VLDR            S10, [R0,#0x2C]
    VADD.F32        S8, S8, S1
    VMUL.F32        S1, S7, S0
    VMUL.F32        S0, S10, S0
    VLDR            S10, [R0,#0x34]
    VADD.F32        S2, S2, S3
    VADD.F32        S8, S8, S5
    VADD.F32        S4, S4, S1
    VADD.F32        S0, S6, S0
    VLDR            S6, [R0,#0x30]
    VADD.F32        S2, S2, S10
    VADD.F32        S6, S8, S6
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S4, S4, S12
    VADD.F32        S0, S0, S8
    VSTR            S6, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S16
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
  v22 = (Tessellator *)BaseEntityRenderContext::getTessellator(v5);
  Tessellator::begin(v22, 4, 0);
    VMUL.F32        S20, S20, S16
    VMOV.F32        S0, #-1.0
    VSUB.F32        S0, S0, S20
    VMOV            R5, S0
  Tessellator::vertex(v22, _R5, -1.0, 0.0);
    VMOV.F32        S0, #4.0
    VADD.F32        S0, S22, S0
    VMOV            R4, S0
  Tessellator::vertex(v22, _R5, _R4, 0.0);
    VADD.F32        S0, S20, S18
  v26 = *(ShaderColor **)(v10 + 48);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 1065353216;
  ShaderColor::setColor(v26, (const Color *)&v31);
  if ( Tessellator::forceTessellateIntercept(v22) == 1 )
    Tessellator::triggerIntercept(
      v22,
      (const mce::MaterialPtr *)(v6 + 72),
      (const mce::TexturePtr *)&mce::TexturePtr::NONE);
  else
    Tessellator::draw((char *)v22, v10, v6 + 72);
    VLDR            S0, =0.002
    VLDR            S2, [R0,#0x20]
    VLDR            S4, [R0,#0x24]
    VLDR            S6, [R0,#0x28]
    VMUL.F32        S2, S2, S0
    VLDR            S8, [R0,#0x2C]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S6, S6, S0
    VLDR            S10, [R0,#0x30]
    VMUL.F32        S0, S8, S0
    VLDR            S12, [R0,#0x34]
    VLDR            S14, [R0,#0x38]
    VLDR            S1, [R0,#0x3C]
    VADD.F32        S0, S1, S0
    VSTR            S2, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
  _R0 = -Font::getLineLength(v12, v7, 1065353216, 0);
    VCVT.F32.S32    S0, S0
    VMOV            R3, S0
  Font::draw(*(float *)&v12, v10, (int)v7, _R3, 0, *(float *)&a5, 0.0, 0, -1, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v35);
}


MapRenderer::MapInstance *__fastcall MapRenderer::update(__int64 this)
{
  MapRenderer::MapInstance *result; // r0@1

  result = MapRenderer::_getMapInstance(this);
  *((_BYTE *)result + 8) = 1;
  return result;
}


int __fastcall MapRenderer::render(MapRenderer *this, BaseEntityRenderContext *a2, Player *a3, const BlockPos *a4, BlockSource *a5, const MapItemSavedData *a6, int a7, int a8)
{
  BaseEntityRenderContext *v8; // r5@1
  MapRenderer *v9; // r7@1
  BlockSource *v10; // r11@1
  Player *v11; // r10@1
  int v12; // r4@1
  int v13; // r0@1
  __int64 v14; // r0@3
  Tessellator *v15; // r6@4
  int v16; // r0@6
  const BlockPos *v17; // r1@8
  MapRenderer::MapInstance *v18; // r4@8
  Level *v19; // r0@10
  char *v20; // r0@10
  int v21; // r0@10
  char v23; // [sp+Ch] [bp-34h]@10

  v8 = a2;
  v9 = this;
  v10 = a4;
  v11 = a3;
  v12 = BaseEntityRenderContext::getScreenContext(a2);
  v13 = BaseEntityRenderContext::isIgnoringLightning(v8);
  EntityShaderManager::_setupShaderParameters((int)v9, v12, (int)a5, (int)v10, 0, v13, &Vec2::ONE);
  if ( !mce::Mesh::isValid((MapRenderer *)((char *)v9 + 264)) )
    MapRenderer::_generateMeshes(v9, v8);
  HIDWORD(v14) = a6;
  if ( v11 )
  {
    v15 = (Tessellator *)BaseEntityRenderContext::getTessellator(v8);
    if ( Tessellator::forceTessellateIntercept(v15) == 1 )
    {
      MapRenderer::_tessellateBackground((MapRenderer *)1, v15);
      Tessellator::triggerIntercept(v15, (MapRenderer *)((char *)v9 + 252), (MapRenderer *)((char *)v9 + 204));
    }
    else
      v16 = BaseEntityRenderContext::getScreenContext(v8);
      mce::Mesh::render((MapRenderer *)((char *)v9 + 264), v16, (int)v9 + 252, (int)v9 + 204, 0, 0);
    HIDWORD(v14) = a6;
  }
  LODWORD(v14) = v9;
  v18 = MapRenderer::_getMapInstance(v14);
  if ( *((_BYTE *)v18 + 8) )
    MapRenderer::MapInstance::updateTexture(v18, *((mce::TextureGroup **)v9 + 36));
  MapRenderer::_calculateMapLightColor((MapRenderer *)&v23, v17, v10, (int)a5);
  v19 = (Level *)BlockSource::getLevel(a5);
  v20 = Level::getLevelData(v19);
  v21 = LevelData::isEduLevel((LevelData *)v20);
  return MapRenderer::MapInstance::draw(v18, v8, v11, (const Color *)&v23, a7, v21, a8);
}


signed int __fastcall MapRenderer::MapInstance::_tessellateForeground(MapRenderer::MapInstance *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1

  v2 = a2;
  Tessellator::begin(a2, 0, 0);
  Tessellator::voidBeginAndEndCalls(v2, 1);
  Tessellator::normal(v2, (const Vec3 *)&MapConstants::MAP_NORMAL);
  Tessellator::vertexUV(v2, 0.0, 128.0, -0.01, 0.0, 1.0);
  Tessellator::vertexUV(v2, 128.0, 128.0, -0.005, 1.0, 1.0);
  Tessellator::vertexUV(v2, 128.0, 0.0, -0.01, 1.0, 0.0);
  return Tessellator::vertexUV(v2, 0.0, 0.0, -0.01, 0.0, 0.0);
}


BaseEntityRenderer *__fastcall MapRenderer::MapRenderer(BaseEntityRenderer *a1, char a2, mce::TextureGroup *a3)
{
  mce::TextureGroup *v3; // r8@1
  char v4; // r5@1
  BaseEntityRenderer *v5; // r4@1
  double v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r7@3
  char *v10; // r0@4
  char *v11; // r0@5
  char *v12; // r0@6
  char *v13; // r0@7
  char *v14; // r0@8
  char *v15; // r0@9
  void *v16; // r0@10
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  int v32; // [sp+1Ch] [bp-5Ch]@10
  char *v33; // [sp+24h] [bp-54h]@8
  char *v34; // [sp+28h] [bp-50h]@8
  int v35; // [sp+2Ch] [bp-4Ch]@8
  char *v36; // [sp+34h] [bp-44h]@6
  char *v37; // [sp+38h] [bp-40h]@6
  int v38; // [sp+3Ch] [bp-3Ch]@6
  char *v39; // [sp+44h] [bp-34h]@4
  char *v40; // [sp+48h] [bp-30h]@4
  int v41; // [sp+4Ch] [bp-2Ch]@4

  v3 = a3;
  v4 = a2;
  v5 = a1;
  EntityRenderer::EntityRenderer(a1, a3, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v5 + 17);
  *(_DWORD *)v5 = &off_26DBAEC;
  *((_DWORD *)v5 + 34) = &off_26DBB20;
  *((_DWORD *)v5 + 36) = v3;
  *((_DWORD *)v5 + 39) = 0;
  *((_DWORD *)v5 + 40) = 0;
  *((_DWORD *)v5 + 41) = 1065353216;
  LODWORD(v6) = (char *)v5 + 164;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = sub_119C844(v6);
  *((_DWORD *)v5 + 38) = v7;
  if ( v7 == 1 )
  {
    *((_DWORD *)v5 + 43) = 0;
    v9 = (char *)v5 + 172;
  }
  else
    if ( v7 >= 0x40000000 )
      sub_119C874();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *((_DWORD *)v5 + 37) = v9;
  *((_BYTE *)v5 + 176) = v4;
  sub_119C884((void **)&v39, "textures/map/map_icons");
  v40 = v39;
  v39 = (char *)&unk_28898CC;
  v41 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 180), v3, (int)&v40, 0);
  v10 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v39 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v36, "textures/map/map_background");
  v37 = v36;
  v36 = (char *)&unk_28898CC;
  v38 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 204), v3, (int)&v37, 0);
  v12 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v37 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v36 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v33, "textures/map/player_icon_background");
  v34 = v33;
  v33 = (char *)&unk_28898CC;
  v35 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 228), v3, (int)&v34, 0);
  v14 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v34 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v33 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v32, "map");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v5 + 252),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v32);
  v16 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v32 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 264));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 364));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 464));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 564));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 664));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 764));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 864));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 964));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1064));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1164));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1264));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1364));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1464));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1564));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1664));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1764));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1864));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 1964));
  mce::Mesh::Mesh((BaseEntityRenderer *)((char *)v5 + 2064));
  return v5;
}


BaseEntityRenderer *__fastcall MapRenderer::~MapRenderer(MapRenderer *this)
{
  MapRenderer *v1; // r4@1
  char *v2; // r5@1
  int v3; // r6@1
  MapRenderer::MapInstance *v4; // r0@2
  int v5; // r7@2
  MapRenderer::MapInstance *v6; // r0@3
  char *v7; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26DBAEC;
  *((_DWORD *)this + 34) = &off_26DBB20;
  v2 = (char *)this + 136;
  mce::Mesh::~Mesh((MapRenderer *)((char *)this + 2064));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1828));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1728));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1628));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1528));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1428));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1328));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1228));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1128));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 1028));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 928));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 828));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 728));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 628));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 528));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 428));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 328));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 228));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 128));
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v2 + 116));
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 92));
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 68));
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 44));
  v3 = *((_DWORD *)v2 + 5);
  if ( v3 )
  {
    do
    {
      v4 = *(MapRenderer::MapInstance **)(v3 + 16);
      v5 = *(_DWORD *)v3;
      if ( v4 )
      {
        v6 = MapRenderer::MapInstance::~MapInstance(v4);
        operator delete((void *)v6);
      }
      operator delete((void *)v3);
      v3 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 148), 4 * (*(_QWORD *)((char *)v1 + 148) >> 32));
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  v7 = (char *)*((_DWORD *)v1 + 37);
  if ( v7 && (char *)v1 + 172 != v7 )
    operator delete(v7);
  AppPlatformListener::~AppPlatformListener((AppPlatformListener *)v2);
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


int __fastcall MapRenderer::render(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return MapRenderer::render(
           (MapRenderer *)a1,
           this,
           (Player *)a3,
           (const BlockPos *)a4,
           (BlockSource *)a5,
           (const MapItemSavedData *)a6,
           a7,
           a8);
}


int __fastcall MapRenderer::MapInstance::_renderFaceIcon(int a1, int a2, BaseEntityRenderContext *this, int a4, int a5, float a6, MapDecoration *a7, int a8, int a9, int a10)
{
  BaseEntityRenderContext *v10; // r4@1
  int v11; // r9@1
  Entity *v12; // r5@1
  EntityRenderDispatcher *v13; // r0@1
  PlayerRenderer *v14; // r7@1
  int v15; // r0@1
  Player *v16; // r6@1
  int v17; // r0@2
  int v18; // r0@2
  int v25; // r5@2
  char *v26; // r0@2
  int v34; // r6@3
  int result; // r0@4
  float v38; // [sp+8h] [bp-50h]@3
  char v39; // [sp+18h] [bp-40h]@2
  char v40; // [sp+20h] [bp-38h]@2

  v10 = this;
  v11 = a1;
  v12 = (Entity *)a4;
  v13 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(this);
  v14 = (PlayerRenderer *)EntityRenderDispatcher::getRenderer(v13, v12);
  v15 = Entity::getLevel(v12);
  v16 = (Player *)Level::getPlayer(v15, a8, *(_QWORD *)a8, *(_QWORD *)a8 >> 32);
  if ( v16 )
  {
    v17 = BaseEntityRenderContext::getWorldMatrix(v10);
    MatrixStack::push((MatrixStack *)&v40, v17);
    v18 = BaseEntityRenderContext::getWorldMatrix(v10);
    MatrixStack::push((MatrixStack *)&v39, v18);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v39);
    __asm
    {
      VMOV.F32        S0, #4.0
      VLDR            S16, [SP,#0x58+arg_4]
      VLDR            S2, [R0]
      VMUL.F32        S0, S16, S0
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
    }
      VLDR            S0, =0.005
      VLDR            S4, [R0,#0x24]
      VLDR            S6, [R0,#0x28]
      VLDR            S8, [R0,#0x2C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
      VLDR            S10, [R0,#0x30]
      VMUL.F32        S0, S8, S0
      VLDR            S12, [R0,#0x34]
      VLDR            S14, [R0,#0x38]
      VLDR            S1, [R0,#0x3C]
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S14, S6
      VSUB.F32        S0, S1, S0
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    v25 = BaseEntityRenderContext::getScreenContext(v10);
    v26 = MapDecoration::getColor(a7);
    MapRenderer::MapInstance::_drawIconBackground(v11, v25, (const Color *)v26, 0.0);
      VMOV.F32        S0, #0.25
      VDIV.F32        S0, S0, S16
      VLDR            S0, =0.02
      VLDR            S0, =0.8
      VLDR            S18, =0.01
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VMUL.F32        S0, S0, S18
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
    PlayerRenderer::renderHead(v14, v10, v16, (const Vec3 *)&Vec3::ZERO);
      VLDR            S0, [R0]
      VLDR            S2, =100.0
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
      VMUL.F32        S0, S0, S2
    MatrixStack::MatrixStackRef::operator->((int)&v39);
    if ( a10 == 1 )
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v39);
      __asm
      {
        VMOV.F32        S0, #-10.0
        VLDR            S4, [R0,#8]
        VLDR            S12, [R0,#0x18]
        VLDR            S6, [R0,#0xC]
        VLDR            S14, [R0,#0x1C]
        VADD.F32        S4, S12, S4
        VLDR            S8, [R0,#0x10]
        VLDR            S10, [R0,#0x14]
        VADD.F32        S6, S14, S6
        VLDMIA          R0, {S1-S2}
        VMUL.F32        S0, S16, S0
        VADD.F32        S8, S8, S1
        VLDR            S1, [R0,#0x24]
        VADD.F32        S2, S10, S2
        VLDR            S10, =-0.005
        VLDR            S12, [R0,#0x20]
        VMUL.F32        S14, S1, S10
        VLDR            S1, [R0,#0x28]
        VMUL.F32        S12, S12, S10
        VLDR            S3, [R0,#0x2C]
        VMUL.F32        S1, S1, S10
        VMUL.F32        S4, S4, S0
        VMUL.F32        S8, S8, S0
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S6, S0
        VMUL.F32        S10, S3, S10
        VADD.F32        S4, S1, S4
        VADD.F32        S6, S12, S8
        VLDR            S8, [R0,#0x30]
        VADD.F32        S2, S14, S2
        VLDR            S12, [R0,#0x38]
        VADD.F32        S0, S10, S0
        VLDR            S10, [R0,#0x34]
        VADD.F32        S4, S4, S12
        VADD.F32        S6, S6, S8
        VLDR            S8, [R0,#0x3C]
        VADD.F32        S2, S2, S10
        VADD.F32        S0, S0, S8
        VSTR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S4, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      }
        VLDR            S0, [R0]
        VMUL.F32        S0, S0, S16
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
        VSTR            S0, [R0,#0x20]
        VLDR            S0, [R0,#0x24]
        VSTR            S0, [R0,#0x24]
        VLDR            S0, [R0,#0x28]
        VSTR            S0, [R0,#0x28]
        VLDR            S0, [R0,#0x2C]
        VSTR            S0, [R0,#0x2C]
      v34 = MapDecoration::getLabel(a7);
      _R0 = MapDecoration::getColor(a7);
      _R1 = a5;
        VLDR            S2, [R0,#4]
        VLDR            S8, [R1]
        VLDR            S10, [R1,#4]
        VMUL.F32        S0, S8, S0
        VMUL.F32        S2, S10, S2
        VLDR            S12, [R1,#8]
        VLDR            S14, [R1,#0xC]
        VMUL.F32        S4, S12, S4
        VMUL.F32        S6, S14, S6
        VSTR            S0, [SP,#0x58+var_50]
        VSTR            S2, [SP,#0x58+var_4C]
        VSTR            S4, [SP,#0x58+var_48]
        VSTR            S6, [SP,#0x58+var_44]
      MapRenderer::MapInstance::_renderLabel(v11, v10, (int)&Vec3::ZERO, v34, (int)&v38);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v39);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v40);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall MapRenderer::_renderMapBackground(MapRenderer *this, BaseEntityRenderContext *a2)
{
  BaseEntityRenderContext *v2; // r6@1
  MapRenderer *v3; // r4@1
  Tessellator *v4; // r5@1
  int result; // r0@2
  int v6; // r0@3

  v2 = a2;
  v3 = this;
  v4 = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
  if ( Tessellator::forceTessellateIntercept(v4) == 1 )
  {
    MapRenderer::_tessellateBackground((MapRenderer *)1, v4);
    result = j_j_j__ZN11Tessellator16triggerInterceptERKN3mce11MaterialPtrERKNS0_10TexturePtrE(
               v4,
               (MapRenderer *)((char *)v3 + 252),
               (MapRenderer *)((char *)v3 + 204));
  }
  else
    v6 = BaseEntityRenderContext::getScreenContext(v2);
    result = mce::Mesh::render((MapRenderer *)((char *)v3 + 264), v6, (int)v3 + 252, (int)v3 + 204, 0, 0);
  return result;
}


int __fastcall MapRenderer::_generateMeshes(MapRenderer *this, BaseEntityRenderContext *a2)
{
  MapRenderer *v2; // r5@1
  MapRenderer *v3; // r4@1
  int v8; // r5@1
  signed int v9; // r7@1
  float v13; // ST00_4@2
  float v14; // ST04_4@2
  float v16; // ST00_4@2
  float v17; // ST04_4@2
  float v18; // ST00_4@2
  float v19; // ST04_4@2
  int result; // r0@2
  float v21; // [sp+0h] [bp-180h]@1
  float v22; // [sp+4h] [bp-17Ch]@1
  char v23; // [sp+Ch] [bp-174h]@2
  char v24; // [sp+70h] [bp-110h]@1
  char v25; // [sp+D4h] [bp-ACh]@1

  v2 = this;
  v3 = (MapRenderer *)BaseEntityRenderContext::getTessellator(a2);
  MapRenderer::_tessellateBackground(v3, v3);
  Tessellator::voidBeginAndEndCalls(v3, 0);
  Tessellator::end((Tessellator *)&v25, (const char *)v3, 0, 0);
  mce::Mesh::operator=((int)v2 + 264, (int)&v25);
  mce::Mesh::~Mesh((mce::Mesh *)&v25);
  Tessellator::begin(v3, 0, 0);
  Tessellator::voidBeginAndEndCalls(v3, 1);
  Tessellator::color(v3, 0, 0);
  Tessellator::normal(v3, (const Vec3 *)&MapConstants::MAP_NORMAL);
  Tessellator::vertexUV(v3, 0.0, 128.0, -0.01, 0.0, 1.0);
  Tessellator::vertexUV(v3, 128.0, 128.0, -0.01, 1.0, 1.0);
  Tessellator::vertexUV(v3, 128.0, 0.0, -0.01, 1.0, 0.0);
  Tessellator::vertexUV(v3, 0.0, 0.0, -0.01, 0.0, 0.0);
  Tessellator::end((Tessellator *)&v24, (const char *)v3, 0, 0);
  mce::Mesh::operator=((int)v2 + 364, (int)&v24);
  mce::Mesh::~Mesh((mce::Mesh *)&v24);
  __asm { VMOV.F32        S16, #0.25 }
  v8 = (int)v2 + 464;
  v9 = 0;
  do
  {
    Tessellator::begin(v3, 0, 0);
    Tessellator::voidBeginAndEndCalls(v3, 1);
    Tessellator::normal(v3, (const Vec3 *)&MapConstants::MAP_NORMAL);
    _R8 = v9 % 4;
    _R1 = v9 / 4;
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R8
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VMUL.F32        S18, S0, S16
      VMUL.F32        S20, S2, S16
      VSTR            S20, [SP,#0x180+var_180]
      VSTR            S18, [SP,#0x180+var_17C]
    }
    Tessellator::vertexUV(v3, -1.0, 1.0, -0.005, v21, v22);
    _R0 = v9 % 4 + 1;
      VMOV            S0, R0
      VMUL.F32        S22, S0, S16
      VSTR            S22, [SP,#0x180+var_180]
    Tessellator::vertexUV(v3, 1.0, 1.0, -0.005, v13, v14);
    _R0 = v9 / 4 + 1;
    Tessellator::vertexUV(v3, 1.0, -1.0, -0.005, v16, v17);
    Tessellator::vertexUV(v3, -1.0, -1.0, -0.005, v18, v19);
    Tessellator::voidBeginAndEndCalls(v3, 0);
    Tessellator::end((Tessellator *)&v23, (const char *)v3, 0, 0);
    mce::Mesh::operator=(v8, (int)&v23);
    result = mce::Mesh::~Mesh((mce::Mesh *)&v23);
    ++v9;
    v8 += 100;
  }
  while ( v9 < 17 );
  return result;
}


int __fastcall MapRenderer::MapInstance::updateTexture(MapRenderer::MapInstance *this, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r8@1
  MapRenderer::MapInstance *v3; // r9@1
  unsigned int v4; // r6@1
  signed int v5; // r5@1
  int v6; // r4@2
  void *v7; // r0@5
  void *v8; // r0@6
  __int64 v9; // r4@7
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  int v15; // [sp+Ch] [bp-E4h]@5
  int v16; // [sp+10h] [bp-E0h]@5
  int v17; // [sp+14h] [bp-DCh]@1
  char v18; // [sp+1Ch] [bp-D4h]@1
  char v19; // [sp+44h] [bp-ACh]@1
  char v20; // [sp+58h] [bp-98h]@1
  int v21; // [sp+98h] [bp-58h]@1
  int v22; // [sp+9Ch] [bp-54h]@7
  int v23; // [sp+A4h] [bp-4Ch]@6

  v2 = a2;
  v3 = this;
  TexturePair::TexturePair((TexturePair *)&v20, 128, 128);
  mce::ImageDescription::ImageDescription((int)&v19, 128, 128, 28, 1, 0);
  mce::TextureDescription::TextureDescription((int)&v18, (int)&v19, 8);
  mce::TextureContainer::allocateStorage((mce::TextureContainer *)&v21, (const mce::TextureDescription *)&v18);
  v4 = mce::TextureContainer::getImageData((mce::TextureContainer *)&v21, 0, 0);
  MapItemSavedData::getPixels((MapItemSavedData *)&v17, *((_DWORD *)v3 + 1));
  v5 = 0;
  do
  {
    v6 = *(_DWORD *)(v17 + 4 * v5);
    if ( v6 == Color::toABGR((Color *)&Color::NIL) )
      v6 = (((v5 + v5 / 128) & 1) << 27) | 0x10000000;
    *(_DWORD *)(v4 + 4 * v5++) = v6;
  }
  while ( v5 < 0x4000 );
  sub_119C854(&v15, (int *)v3 + 4);
  v16 = *((_DWORD *)v3 + 5);
  mce::TextureGroup::uploadTexture((int)v2, (const ResourceLocation *)&v15, (int)&v20, 1);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  *((_BYTE *)v3 + 8) = 0;
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v23 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *(_QWORD *)&v21;
  if ( v21 != v22 )
    do
      if ( *(_DWORD *)v9 )
        operator delete(*(void **)v9);
      LODWORD(v9) = v9 + 40;
    while ( HIDWORD(v9) != (_DWORD)v9 );
    LODWORD(v9) = v21;
  if ( (_DWORD)v9 )
    operator delete((void *)v9);
  return mce::Texture::~Texture((mce::Texture *)&v20);
}


MapRenderer::MapInstance *__fastcall MapRenderer::MapInstance::~MapInstance(MapRenderer::MapInstance *this)
{
  MapRenderer::MapInstance *v1; // r4@1
  mce::TextureGroup *v2; // r5@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1

  v1 = this;
  v2 = *(mce::TextureGroup **)(*((_DWORD *)this + 3) + 144);
  sub_119C854(&v11, (int *)this + 4);
  v12 = *((_DWORD *)v1 + 5);
  mce::TextureGroup::unloadTexture(v2, (const ResourceLocation *)&v11);
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  mce::MaterialPtr::~MaterialPtr((MapRenderer::MapInstance *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((MapRenderer::MapInstance *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr((MapRenderer::MapInstance *)((char *)v1 + 48));
  mce::TexturePtr::~TexturePtr((MapRenderer::MapInstance *)((char *)v1 + 24));
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  return v1;
}


MapRenderer::MapInstance *__fastcall MapRenderer::_getMapInstance(__int64 this)
{
  unsigned int v1; // r7@1
  unsigned int v2; // r5@1
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r10@2
  int v6; // r4@2
  bool v7; // zf@3
  int v8; // r9@6
  bool v9; // zf@9
  MapRenderer::MapInstance *v10; // r0@14
  MapRenderer::MapInstance *v12; // r7@12
  _QWORD *v13; // [sp+4h] [bp-44h]@1
  __int64 v14; // [sp+8h] [bp-40h]@1
  char v15; // [sp+10h] [bp-38h]@13
  __int64 v16; // [sp+18h] [bp-30h]@13
  MapRenderer::MapInstance *v17; // [sp+20h] [bp-28h]@13

  v14 = this;
  v13 = (_QWORD *)(this + 148);
  v1 = *(_DWORD *)(this + 152);
  v2 = (*(_QWORD *)HIDWORD(this)
      + (((*(_QWORD *)HIDWORD(this) >> 32) - 1640531527) << 6)
      + ((unsigned int)((*(_QWORD *)HIDWORD(this) >> 32) - 1640531527) >> 2)
      - 1640531527) ^ ((*(_QWORD *)HIDWORD(this) >> 32) - 1640531527);
  v3 = v2 % *(_DWORD *)(this + 152);
  v4 = *(_DWORD *)(*(_DWORD *)(this + 148) + 4 * v3);
  if ( !v4 )
    goto LABEL_13;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 24);
  while ( 1 )
  {
    v7 = v6 == v2;
    if ( v6 == v2 )
      v7 = *(_QWORD *)(v5 + 8) == *(_QWORD *)HIDWORD(this);
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 24);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 24) % v1 == v3 )
        continue;
    }
  }
  v9 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v9 = v4 == 0;
  if ( v9 )
LABEL_13:
    v12 = (MapRenderer::MapInstance *)operator new(0x54u);
    MapRenderer::MapInstance::MapInstance(
      v12,
      *(_BYTE *)(v14 + 176),
      (const MapItemSavedData *)HIDWORD(v14),
      (MapRenderer *)v14);
    v17 = v12;
    v16 = *(_QWORD *)HIDWORD(v14);
    std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapRenderer::MapInstance,std::default_delete<MapRenderer::MapInstance>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapRenderer::MapInstance,std::default_delete<MapRenderer::MapInstance>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<EntityUniqueID,std::unique_ptr<MapRenderer::MapInstance,std::default_delete<MapRenderer::MapInstance>>>(
      (int *)&v15,
      v13,
      &v16,
      &v17);
    if ( v17 )
      v10 = MapRenderer::MapInstance::~MapInstance(v17);
      operator delete((void *)v10);
  else
    v12 = *(MapRenderer::MapInstance **)(v4 + 16);
  return v12;
}
