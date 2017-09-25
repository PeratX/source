

int __fastcall ScreenRenderer::fill(float a1, float a2, int a3, int a4, int a5, int a6, const Color *a7)
{
  int v7; // r9@1
  Tessellator *v10; // r5@1

  v7 = LODWORD(a2);
  _R8 = a4;
  _R7 = a3;
  ShaderColor::setColor(*(ShaderColor **)(LODWORD(a2) + 48), a7);
  v10 = *(Tessellator **)(v7 + 40);
  Tessellator::begin(*(Tessellator **)(v7 + 40), 4, 0);
  __asm
  {
    VLDR            S0, [SP,#0x20+arg_4]
    VMOV            S2, R7
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
    VMOV            R7, S2
    VMOV            R6, S0
  }
  Tessellator::vertex(v10, _R7, _R6, 0.0);
    VLDR            S0, [SP,#0x20+arg_0]
    VMOV            R4, S0
  Tessellator::vertex(v10, _R4, _R6, 0.0);
    VMOV            S0, R8
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v10, v7, (int)&unk_27C86D0);
}


void __fastcall ScreenRenderer::loadMaterials(ScreenRenderer *this, mce::TextureGroup *a2)
{
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  int v23; // [sp+4h] [bp-9Ch]@7
  char v24; // [sp+8h] [bp-98h]@7
  int v25; // [sp+18h] [bp-88h]@6
  char v26; // [sp+1Ch] [bp-84h]@6
  int v27; // [sp+2Ch] [bp-74h]@5
  char v28; // [sp+30h] [bp-70h]@5
  int v29; // [sp+40h] [bp-60h]@4
  char v30; // [sp+44h] [bp-5Ch]@4
  int v31; // [sp+54h] [bp-4Ch]@3
  char v32; // [sp+58h] [bp-48h]@3
  int v33; // [sp+68h] [bp-38h]@2
  char v34; // [sp+6Ch] [bp-34h]@2
  int v35; // [sp+7Ch] [bp-24h]@1
  char v36; // [sp+80h] [bp-20h]@1

  sub_DA7364((void **)&v35, "ui_textured");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v36,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v35);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&ScreenRenderer::mScreenMaterials, (mce::MaterialPtr *)&v36);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v36);
  v2 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v35 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
  sub_DA7364((void **)&v33, "ui_fill_color");
    (mce::MaterialPtr *)&v34,
    &v33);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27C86D0, (mce::MaterialPtr *)&v34);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v34);
  v3 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v33 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  sub_DA7364((void **)&v31, "ui_fill_gradient");
    (mce::MaterialPtr *)&v32,
    &v31);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27C86DC, (mce::MaterialPtr *)&v32);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v32);
  v4 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v31 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
  sub_DA7364((void **)&v29, "ui_texture_and_color");
    (mce::MaterialPtr *)&v30,
    &v29);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27C86E8, (mce::MaterialPtr *)&v30);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v30);
  v5 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v29 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  sub_DA7364((void **)&v27, "ui_texture_and_color_blur");
    (mce::MaterialPtr *)&v28,
    &v27);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27C86F4, (mce::MaterialPtr *)&v28);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v28);
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  sub_DA7364((void **)&v25, "ui_textured_and_glcolor");
    (mce::MaterialPtr *)&v26,
    &v25);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27C8700, (mce::MaterialPtr *)&v26);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v26);
  v7 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  sub_DA7364((void **)&v23, "ui_fill_stencil");
    (mce::MaterialPtr *)&v24,
    &v23);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27C870C, (mce::MaterialPtr *)&v24);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v24);
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
}


int __fastcall ScreenRenderer::drawRect(int a1, int a2, int a3, int a4, int a5, int a6, const Color *a7, const Color *a8, const Color *a9, const Color *a10, int a11)
{
  int v12; // r9@1
  int v13; // ST10_4@1
  Tessellator *v15; // r5@1
  int v20; // ST14_4@1
  float v23; // ST08_4@1
  float v24; // r4@1
  float v25; // ST0C_4@1
  float v26; // r7@1
  Tessellator *v30; // r6@1
  Tessellator *v35; // r6@1
  Tessellator *v38; // r6@1

  _R10 = a4;
  v12 = a2;
  v13 = a4;
  _R6 = a3;
  ShaderColor::setColor(*(ShaderColor **)(a2 + 48), a9);
  v15 = *(Tessellator **)(v12 + 40);
  Tessellator::begin(*(Tessellator **)(v12 + 40), 4, 0);
  __asm { VMOV            S0, R6 }
  v20 = a6;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMOV            R1, S0
    VMOV            R2, S2
  }
  v23 = _R1;
  v24 = _R1;
  v25 = _R2;
  v26 = _R2;
  Tessellator::vertex(v15, _R1, _R2, 0.0);
  _R0 = a11 + _R6;
    VMOV            S0, R0
    VMOV            R6, S0
  Tessellator::vertex(v15, _R6, v26, 0.0);
    VMOV            S0, R10
    VMOV            R11, S0
  Tessellator::vertex(v15, _R6, _R11, 0.0);
  Tessellator::vertex(v15, v24, _R11, 0.0);
  Tessellator::draw((char *)v15, v12, (int)&unk_27C86D0);
  ShaderColor::setColor(*(ShaderColor **)(v12 + 48), a10);
  v30 = *(Tessellator **)(v12 + 40);
  _R5 = a5;
  _R0 = a5 - a11;
    VMOV            R8, S0
  Tessellator::vertex(v30, _R8, v26, 0.0);
    VMOV            S0, R5
    VMOV            R10, S0
  Tessellator::vertex(v30, _R10, v26, 0.0);
  Tessellator::vertex(v30, _R10, _R11, 0.0);
  Tessellator::vertex(v30, _R8, _R11, 0.0);
  Tessellator::draw((char *)v30, v12, (int)&unk_27C86D0);
  ShaderColor::setColor(*(ShaderColor **)(v12 + 48), a7);
  v35 = *(Tessellator **)(v12 + 40);
  _R0 = a11 + v13;
    VMOV            R7, S0
  Tessellator::vertex(v35, v23, _R7, 0.0);
  Tessellator::vertex(v35, _R10, _R7, 0.0);
  Tessellator::vertex(v35, _R10, _R11, 0.0);
  Tessellator::vertex(v35, v23, _R11, 0.0);
  Tessellator::draw((char *)v35, v12, (int)&unk_27C86D0);
  ShaderColor::setColor(*(ShaderColor **)(v12 + 48), a8);
  v38 = *(Tessellator **)(v12 + 40);
  Tessellator::vertex(v38, v23, v25, 0.0);
  Tessellator::vertex(v38, _R10, v25, 0.0);
  _R0 = a6 - a11;
  Tessellator::vertex(v38, _R10, _R7, 0.0);
  Tessellator::vertex(v38, v23, _R7, 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v38, v12, (int)&unk_27C86D0);
}


int __fastcall ScreenRenderer::fillHorizontalGradient(float a1, float a2, int a3, int a4, float a5, float a6, const Color *a7, const Color *a8)
{
  int v8; // r8@1
  int v9; // r9@1
  Tessellator *v10; // r5@1
  int v11; // r6@1

  v8 = LODWORD(a2);
  v9 = a3;
  v10 = *(Tessellator **)(LODWORD(a2) + 40);
  v11 = a4;
  Tessellator::begin(v10, 4, 0);
  Tessellator::color(v10, a8);
  Tessellator::vertex(v10, a5, *(float *)&v11, 0.0);
  Tessellator::color(v10, a7);
  Tessellator::vertex(v10, *(float *)&v9, *(float *)&v11, 0.0);
  Tessellator::vertex(v10, *(float *)&v9, a6, 0.0);
  Tessellator::vertex(v10, a5, a6, 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v10, v8, (int)&unk_27C86DC);
}


void __fastcall ScreenRenderer::loadMaterials(ScreenRenderer *this, mce::TextureGroup *a2)
{
  ScreenRenderer::loadMaterials(this, a2);
}


int __fastcall ScreenRenderer::fillHorizontalGradient(float a1, float a2, int a3, int a4, int a5, int a6, const Color *a7, const Color *a8)
{
  int v8; // r8@1
  Tessellator *v10; // r5@1

  v8 = LODWORD(a2);
  _R9 = a3;
  v10 = *(Tessellator **)(LODWORD(a2) + 40);
  _R7 = a4;
  Tessellator::begin(v10, 4, 0);
  Tessellator::color(v10, a8);
  __asm
  {
    VLDR            S0, [SP,#0x20+arg_0]
    VMOV            S2, R7
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
    VMOV            R4, S2
    VMOV            R7, S0
  }
  Tessellator::vertex(v10, _R7, _R4, 0.0);
  Tessellator::color(v10, a7);
    VMOV            S0, R9
    VMOV            R6, S0
  Tessellator::vertex(v10, _R6, _R4, 0.0);
    VLDR            S0, [SP,#0x20+arg_4]
    VMOV            R4, S0
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v10, v8, (int)&unk_27C86DC);
}


int __fastcall ScreenRenderer::fillGradient(int a1, int a2, int _R2, int _R3, const Color *a5, const Color *a6)
{
  int v6; // r8@1
  Tessellator *v11; // r5@1

  v6 = a2;
  __asm { VLDR            S20, [R2] }
  v11 = *(Tessellator **)(a2 + 40);
  __asm
  {
    VLDR            S22, [R2,#4]
    VLDR            S16, [R3]
    VLDR            S18, [R3,#4]
  }
  Tessellator::begin(v11, 4, 0);
  Tessellator::color(v11, a5);
    VADD.F32        S0, S16, S20
    VMOV            R7, S22
    VMOV            R6, S0
  Tessellator::vertex(v11, _R6, _R7, 0.0);
  __asm { VMOV            R4, S20 }
  Tessellator::vertex(v11, _R4, _R7, 0.0);
  Tessellator::color(v11, a6);
    VADD.F32        S0, S18, S22
    VMOV            R7, S0
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v11, v6, (int)&unk_27C86DC);
}


_DWORD *__fastcall ScreenRenderer::getMaterial(int a1, int a2)
{
  return &ScreenRenderer::singletonPtr[3 * a2 + 1];
}


int __fastcall ScreenRenderer::blit(int a1, int a2, mce::TexturePtr *this, int a4, int a5)
{
  __int64 v5; // kr00_8@1
  mce::TexturePtr *v6; // r4@1
  int v13; // r9@1
  int v14; // r0@1
  int v15; // r2@1
  BackwardsCompatTextureInfo *v18; // r0@3
  BackwardsCompatTextureInfo *v19; // r7@3
  void *v25; // [sp+20h] [bp-50h]@0
  int v26; // [sp+24h] [bp-4Ch]@0
  int v27; // [sp+28h] [bp-48h]@0
  int v28; // [sp+2Ch] [bp-44h]@0
  int v29; // [sp+30h] [bp-40h]@0

  v5 = *(_QWORD *)a4;
  v6 = this;
  _R5 = *(_QWORD *)(a4 + 8) >> 32;
  _R6 = *(_QWORD *)(a4 + 8);
  __asm { VMOV            S0, R5 }
  v13 = a2;
  __asm
  {
    VCVT.F32.S32    S18, S0
    VMOV            S0, R6
    VCVT.F32.S32    S16, S0
  }
  v14 = mce::TexturePtr::hasBackwardsCompatInfo(this);
  v15 = a5;
  _ZF = v14 == 1;
  _R0 = 0;
  _R1 = 0;
  if ( _ZF )
    v18 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo(v6);
    v19 = v18;
    _R0 = BackwardsCompatTextureInfo::getUV(v18);
    __asm { VLDR            S16, [R0] }
    _R0 = BackwardsCompatTextureInfo::getUV(v19);
    __asm
    {
      VLDR            S18, [R0,#4]
      VCVTR.S32.F32   S20, S16
    }
    _R0 = BackwardsCompatTextureInfo::getBaseUVSize(v19);
      VLDR            S16, [R0]
      VCVTR.S32.F32   S22, S18
      VMOV            R1, S20
      VMOV            R0, S22
    v15 = a5;
    VMOV.F32        S0, #1.0
    VDIV.F32        S2, S0, S18
    VDIV.F32        S0, S0, S16
    VSTR            S0, [SP,#0x70+var_50]
    VSTR            S2, [SP,#0x70+var_4C]
  return ScreenRenderer::blit(
           _R0,
           v13,
           (int)v6,
           v5,
           SHIDWORD(v5),
           _R1,
           __PAIR__(_R6, _R0),
           _R5,
           0.0,
           *(float *)&v15,
           v25,
           v26,
           v27,
           v28,
           v29);
}


int __fastcall ScreenRenderer::blitQuadBuffer(int a1, unsigned __int64 *a2, int _R2, int _R3, int a5, mce::TexturePtr *a6, void *a7)
{
  unsigned __int64 *v7; // r6@1
  unsigned __int64 v8; // r0@1
  void *v13; // r5@2
  signed int v14; // r4@2
  BackwardsCompatTextureInfo *v15; // r0@7
  BackwardsCompatTextureInfo *v16; // r7@7
  Tessellator *v21; // r7@9
  unsigned __int64 *v23; // r6@9
  unsigned __int64 v24; // kr00_8@9
  float v28; // ST00_4@26
  float v29; // ST04_4@26
  float v31; // ST00_4@26
  float v32; // ST04_4@26
  float v33; // ST00_4@26
  float v34; // ST04_4@26
  float v36; // [sp+0h] [bp-60h]@0
  float v37; // [sp+4h] [bp-5Ch]@0

  v7 = a2;
  v8 = *a2;
  if ( HIDWORD(v8) != (_DWORD)v8 )
  {
    __asm { VMOV.F32        S20, #1.0 }
    v13 = a7;
    __asm
    {
      VMOV            S16, R3
      VMOV            S18, R2
    }
    v14 = HIDWORD(v8) - v8;
      VCMPE.F32       S16, S20
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S24, S20
      VCMPE.F32       S18, S20
      VMOV.F32        S22, S20
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S24, S16 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S22, S18 }
    if ( mce::TexturePtr::hasBackwardsCompatInfo(a6) == 1 )
      v15 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo(a6);
      v16 = v15;
      _R0 = BackwardsCompatTextureInfo::getUV(v15);
      __asm { VLDR            S22, [R0] }
      _R0 = BackwardsCompatTextureInfo::getUV(v16);
      __asm
      {
        VLDR            S24, [R0,#4]
        VCVTR.S32.F32   S26, S22
      }
      _R0 = BackwardsCompatTextureInfo::getBaseUVSize(v16);
        VLDR            S22, [R0]
        VCVTR.S32.F32   S24, S24
        VCVT.F32.S32    S28, S26
        VCVT.F32.S32    S26, S24
    else
        VLDR            S26, =0.0
        VMOV.F32        S28, S26
    v21 = *(Tessellator **)(a5 + 40);
    Tessellator::begin(*(Tessellator **)(a5 + 40), v14 >> 1, 0);
    v24 = *v7;
    v23 = (unsigned __int64 *)(*v7 >> 32);
    _R4 = (unsigned __int64 *)v24;
    if ( (unsigned __int64 *)v24 != v23 )
        VDIV.F32        S0, S20, S24
        VDIV.F32        S2, S20, S22
        VADD.F32        S4, S28, S18
        VLDR            S22, =0.0
        VMUL.F32        S8, S26, S0
        VMUL.F32        S10, S28, S2
        VMOV.F32        S24, S22
        VADD.F32        S6, S26, S16
        VMOV.F32        S26, S22
        VMOV.F32        S28, S22
        VMUL.F32        S2, S4, S2
        VLDR            S4, =1.1921e-7
        VADD.F32        S8, S8, S4
        VADD.F32        S4, S10, S4
        VMUL.F32        S0, S6, S0
        VLDR            S6, =-1.1921e-7
        VADD.F32        S2, S2, S6
        VCMPE.F32       S8, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S4, #0.0
        VADD.F32        S0, S0, S6
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S24, S8 }
        VCMPE.F32       S2, #0.0
        __asm { VMOVGT.F32      S26, S4 }
        VCMPE.F32       S0, #0.0
        __asm { VMOVGT.F32      S28, S2 }
        VCMPE.F32       S8, S20
        __asm { VMOVGT.F32      S22, S0 }
        VCMPE.F32       S4, S20
        __asm { VMOVGT.F32      S24, S20 }
        VCMPE.F32       S2, S20
        __asm { VMOVGT.F32      S26, S20 }
        VCMPE.F32       S0, S20
        __asm { VMOVGT.F32      S28, S20 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S22, S20 }
      do
        __asm
        {
          VLDR            S0, [R4,#4]
          VADD.F32        S0, S0, S16
          VSTR            S26, [SP,#0x60+var_60]
          VSTR            S22, [SP,#0x60+var_5C]
          VMOV            R2, S0
        }
        Tessellator::vertexUV(v21, *(float *)_R4, _R2, 0.0, v36, v37);
          VLDR            S0, [R4]
          VLDR            S2, [R4,#4]
          VADD.F32        S0, S0, S18
          VSTR            S28, [SP,#0x60+var_60]
          VADD.F32        S2, S2, S16
          VMOV            R1, S0
          VMOV            R2, S2
        Tessellator::vertexUV(v21, _R1, _R2, 0.0, v28, v29);
          VSTR            S24, [SP,#0x60+var_5C]
        Tessellator::vertexUV(v21, _R1, *((float *)_R4 + 1), 0.0, v31, v32);
        Tessellator::vertexUV(v21, COERCE_FLOAT(*_R4), COERCE_FLOAT(*_R4 >> 32), 0.0, v33, v34);
        ++_R4;
      while ( _R4 != v23 );
    if ( !a7 )
      v13 = &ScreenRenderer::mScreenMaterials;
    LODWORD(v8) = j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrERKNS2_10TexturePtrE(
                    (char *)v21,
                    a5,
                    (int)v13,
                    (int)a6);
  }
  return v8;
}


int __fastcall ScreenRenderer::fillGradient(float a1, float a2, int a3, int a4, float a5, float a6, const Color *a7, const Color *a8)
{
  int v8; // r8@1
  int v9; // r6@1
  Tessellator *v10; // r5@1
  int v11; // r7@1

  v8 = LODWORD(a2);
  v9 = a3;
  v10 = *(Tessellator **)(LODWORD(a2) + 40);
  v11 = a4;
  Tessellator::begin(v10, 4, 0);
  Tessellator::color(v10, a7);
  Tessellator::vertex(v10, a5, *(float *)&v11, 0.0);
  Tessellator::vertex(v10, *(float *)&v9, *(float *)&v11, 0.0);
  Tessellator::color(v10, a8);
  Tessellator::vertex(v10, *(float *)&v9, a6, 0.0);
  Tessellator::vertex(v10, a5, a6, 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v10, v8, (int)&unk_27C86DC);
}


int __fastcall ScreenRenderer::blit(int a1, int a2, int a3, int a4, int a5, int anonymous0a, __int64 anonymous0, __int64 a6, int a7, float a8, float a9, float a10, void *a11, int a12, int a13)
{
  int v15; // r9@1
  Tessellator *v16; // r6@1
  int v18; // r1@1
  int v29; // r0@11
  float v34; // ST00_4@21
  float v35; // ST04_4@21
  void *v36; // r2@21
  float v38; // [sp+0h] [bp-78h]@0
  float v39; // [sp+0h] [bp-78h]@11
  float v40; // [sp+0h] [bp-78h]@17
  float v41; // [sp+4h] [bp-74h]@0
  float v42; // [sp+4h] [bp-74h]@11
  float v43; // [sp+4h] [bp-74h]@17
  int v44; // [sp+Ch] [bp-6Ch]@1

  v44 = a3;
  v15 = a2;
  v16 = *(Tessellator **)(a2 + 40);
  _R7 = a4;
  Tessellator::begin(v16, 4, 0);
  v18 = a7;
  __asm { VMOV.F32        S20, #1.0 }
  _KR00_8 = *(__int64 *)((char *)&anonymous0 - 4);
  __asm
  {
    VMOV            S4, R7
    VLDR            S24, =1.1921e-7
    VMOV            S0, R8
    VLDR            S28, =-1.1921e-7
    VLDR            S16, =0.0
    VCVT.F32.S32    S0, S0
  }
  if ( _ZF )
    v18 = a6;
  _R1 = v18 + anonymous0;
    VMOV.F32        S18, S16
    VMOV.F32        S30, S16
    VMOV            S2, R1
    VCVT.F32.S32    S2, S2
    VLDR            S26, [SP,#0x78+arg_20]
    VLDR            S22, [SP,#0x78+arg_24]
    VMUL.F32        S0, S0, S26
    VMUL.F32        S2, S2, S22
    VADD.F32        S0, S0, S24
    VADD.F32        S2, S2, S28
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S0 }
    VCMPE.F32       S0, S20
    __asm { VMOVGT.F32      S30, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  _R4 = a5;
    VCVT.F32.S32    S4, S4
    VCMPE.F32       S2, S20
  _R0 = a6 + a5;
    VMOV            S0, R0
    VMOV            R11, S4
    __asm { VMOVGT.F32      S18, S20 }
    VMOV            R5, S0
    __asm { VMOVGT.F32      S30, S20 }
    VSTR            S18, [SP,#0x78+var_78]
    VSTR            S30, [SP,#0x78+var_74]
  Tessellator::vertexUV(v16, _R11, _R5, 0.0, v38, v41);
  v29 = HIDWORD(a6);
  if ( !HIDWORD(a6) )
    v29 = HIDWORD(anonymous0);
  _R0 = v29 + anonymous0a;
  __asm { VMOV            S0, R0 }
  _R0 = HIDWORD(anonymous0) + _R7;
    VMOV            S2, R0
    VMOV.F32        S26, S16
    VMOV            R7, S2
    VADD.F32        S0, S0, S28
    __asm { VMOVGT.F32      S26, S0 }
    __asm { VMOVGT.F32      S26, S20 }
    VSTR            S26, [SP,#0x78+var_78]
  Tessellator::vertexUV(v16, _R7, _R5, 0.0, v39, v42);
    VMOV            S0, R10
    VMOV            S2, R4
    VMUL.F32        S0, S0, S22
    VMOV            R5, S2
    __asm { VMOVGT.F32      S16, S0 }
    __asm { VMOVGT.F32      S16, S20 }
    VSTR            S16, [SP,#0x78+var_74]
  Tessellator::vertexUV(v16, _R7, _R5, 0.0, v40, v43);
  Tessellator::vertexUV(v16, _R11, _R5, 0.0, v34, v35);
  v36 = (void *)LODWORD(a8);
  if ( a8 == 0.0 )
    v36 = &ScreenRenderer::mScreenMaterials;
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrERKNS2_10TexturePtrE(
           (char *)v16,
           v15,
           (int)v36,
           v44);
}


int __fastcall ScreenRenderer::fillGradient(float a1, float a2, int a3, int a4, int a5, int a6, const Color *a7, const Color *a8)
{
  int v8; // r8@1
  Tessellator *v10; // r5@1

  v8 = LODWORD(a2);
  _R7 = a3;
  v10 = *(Tessellator **)(LODWORD(a2) + 40);
  _R6 = a4;
  Tessellator::begin(v10, 4, 0);
  Tessellator::color(v10, a7);
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_0]
    VMOV            S2, R6
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
    VMOV            R4, S2
    VMOV            R6, S0
  }
  Tessellator::vertex(v10, _R6, _R4, 0.0);
    VMOV            S0, R7
    VMOV            R7, S0
  Tessellator::vertex(v10, _R7, _R4, 0.0);
  Tessellator::color(v10, a8);
    VLDR            S0, [SP,#0x18+arg_4]
    VMOV            R4, S0
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v10, v8, (int)&unk_27C86DC);
}


void *__fastcall ScreenRenderer::singleton(ScreenRenderer *this)
{
  void *result; // r0@1

  result = (void *)ScreenRenderer::singletonPtr[0];
  if ( !ScreenRenderer::singletonPtr[0] )
  {
    result = operator new(1u);
    ScreenRenderer::singletonPtr[0] = result;
  }
  return result;
}


int __fastcall ScreenRenderer::fill(float a1, float a2, int a3, float a4, float a5, float a6, const Color *a7)
{
  int v7; // r4@1
  float v8; // r8@1
  int v9; // r9@1
  Tessellator *v10; // r7@1

  v7 = LODWORD(a2);
  v8 = a4;
  v9 = a3;
  ShaderColor::setColor(*(ShaderColor **)(LODWORD(a2) + 48), a7);
  v10 = *(Tessellator **)(v7 + 40);
  Tessellator::begin(*(Tessellator **)(v7 + 40), 4, 0);
  Tessellator::vertex(v10, *(float *)&v9, a6, 0.0);
  Tessellator::vertex(v10, a5, a6, 0.0);
  Tessellator::vertex(v10, a5, v8, 0.0);
  Tessellator::vertex(v10, *(float *)&v9, v8, 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v10, v7, (int)&unk_27C86D0);
}


int __fastcall ScreenRenderer::drawRect(int a1, int a2, int a3, int a4, int a5, int a6, const Color *a7, int a8)
{
  int v9; // r4@1
  int v10; // ST14_4@1
  Tessellator *v12; // r6@1
  int v20; // ST18_4@1
  float v22; // ST0C_4@1
  float v24; // ST10_4@1
  Tessellator *v25; // r9@1
  Tessellator *v30; // r7@1
  Tessellator *v33; // r5@1

  _R5 = a3;
  v9 = a2;
  v10 = a3;
  _R8 = a4;
  ShaderColor::setColor(*(ShaderColor **)(a2 + 48), a7);
  v12 = *(Tessellator **)(v9 + 40);
  Tessellator::begin(*(Tessellator **)(v9 + 40), 4, 0);
  __asm { VMOV            S0, R5 }
  _R0 = a8 + _R8;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMOV            R10, S0
    VMOV            R5, S2
  }
  Tessellator::vertex(v12, _R10, _R5, 0.0);
  v20 = a5;
    VMOV            S0, R0
    VMOV            R7, S0
  v22 = _R7;
  Tessellator::vertex(v12, _R7, _R5, 0.0);
    VMOV            S0, R8
    VMOV            R5, S0
  v24 = _R5;
  Tessellator::draw((char *)v12, v9, (int)&unk_27C86D0);
  ShaderColor::setColor(*(ShaderColor **)(v9 + 48), a7);
  v25 = *(Tessellator **)(v9 + 40);
  _R5 = a6;
    VMOV            S0, R5
    VMOV            R8, S0
  Tessellator::vertex(v25, _R10, _R8, 0.0);
  Tessellator::vertex(v25, _R7, _R8, 0.0);
  _R0 = a6 - a8;
  Tessellator::vertex(v25, _R7, _R5, 0.0);
  Tessellator::vertex(v25, _R10, _R5, 0.0);
  Tessellator::draw((char *)v25, v9, (int)&unk_27C86D0);
  v30 = *(Tessellator **)(v9 + 40);
  Tessellator::vertex(v30, _R10, _R8, 0.0);
  _R0 = v10 + a8;
  Tessellator::vertex(v30, _R5, _R8, 0.0);
  Tessellator::vertex(v30, _R5, v24, 0.0);
  Tessellator::vertex(v30, _R10, v24, 0.0);
  Tessellator::draw((char *)v30, v9, (int)&unk_27C86D0);
  v33 = *(Tessellator **)(v9 + 40);
  _R0 = a5 - a8;
  Tessellator::vertex(v33, _R7, _R8, 0.0);
  Tessellator::vertex(v33, v22, _R8, 0.0);
  Tessellator::vertex(v33, v22, v24, 0.0);
  Tessellator::vertex(v33, _R7, v24, 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v33, v9, (int)&unk_27C86D0);
}


int __fastcall ScreenRenderer::blit(int a1, int a2, int a3, int a4, int a5, int _4, __int64 a6, __int64 a7, float a9, float a10, void *a11, int a12, int a13, int a14, int a15)
{
  return ScreenRenderer::blit(
           a1,
           a2,
           a3,
           a4,
           a5,
           _4,
           a6,
           a7,
           SLODWORD(a9),
           a10,
           *(float *)&a11,
           *(float *)&a12,
           (void *)a13,
           a14,
           a15);
}


int __fastcall ScreenRenderer::fillHorizontalGradient(int a1, int a2, int _R2, int _R3, const Color *a5, const Color *a6)
{
  int v6; // r8@1
  Tessellator *v11; // r5@1

  v6 = a2;
  __asm { VLDR            S20, [R2] }
  v11 = *(Tessellator **)(a2 + 40);
  __asm
  {
    VLDR            S22, [R2,#4]
    VLDR            S16, [R3]
    VLDR            S18, [R3,#4]
  }
  Tessellator::begin(v11, 4, 0);
  Tessellator::color(v11, a6);
    VADD.F32        S0, S16, S20
    VMOV            R4, S22
    VMOV            R7, S0
  Tessellator::vertex(v11, _R7, _R4, 0.0);
  Tessellator::color(v11, a5);
  __asm { VMOV            R6, S20 }
  Tessellator::vertex(v11, _R6, _R4, 0.0);
    VADD.F32        S0, S18, S22
    VMOV            R4, S0
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v11, v6, (int)&unk_27C86DC);
}


int __fastcall ScreenRenderer::fillStencil(float a1, float a2, float a3, float a4, float a5, float a6)
{
  int v6; // r8@1
  float v7; // r7@1
  Tessellator *v8; // r5@1
  float v9; // r9@1

  v6 = LODWORD(a2);
  v7 = a3;
  v8 = *(Tessellator **)(LODWORD(a2) + 40);
  v9 = a4;
  Tessellator::begin(v8, 4, 0);
  Tessellator::vertex(v8, v7, a6, 0.0);
  Tessellator::vertex(v8, a5, a6, 0.0);
  Tessellator::vertex(v8, a5, v9, 0.0);
  Tessellator::vertex(v8, v7, v9, 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrE((char *)v8, v6, (int)&unk_27C870C);
}
