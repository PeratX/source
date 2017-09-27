

int __fastcall NinePatchLayer::setSize(int result, float _R1, float _R2)
{
  _R4 = (NinePatchLayer *)result;
  __asm
  {
    VMOV            S2, R1
    VLDR            S4, [R4,#4]
    VMOV            S0, R2
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDREQ          S4, [R4,#8]
      VCMPEEQ.F32     S4, S0
      VMRSEQ          APSR_nzcv, FPSCR
    }
  else
      VSTR            S2, [R4,#4]
      VSTR            S0, [R4,#8]
    NinePatchLayer::buildQuad((NinePatchLayer *)result, 0);
    NinePatchLayer::buildQuad(_R4, 1);
    NinePatchLayer::buildQuad(_R4, 2);
    NinePatchLayer::buildQuad(_R4, 3);
    NinePatchLayer::buildQuad(_R4, 4);
    NinePatchLayer::buildQuad(_R4, 5);
    NinePatchLayer::buildQuad(_R4, 6);
    NinePatchLayer::buildQuad(_R4, 7);
    result = j_j_j__ZN14NinePatchLayer9buildQuadEi(_R4, 8);
  return result;
}


void __fastcall NinePatchLayer::~NinePatchLayer(NinePatchLayer *this)
{
  NinePatchLayer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E7A74;
  mce::TexturePtr::~TexturePtr((NinePatchLayer *)((char *)this + 68));
  j_j_j__ZdlPv_5((void *)v1);
}


NinePatchLayer *__fastcall NinePatchLayer::~NinePatchLayer(NinePatchLayer *this)
{
  NinePatchLayer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E7A74;
  mce::TexturePtr::~TexturePtr((NinePatchLayer *)((char *)this + 68));
  return v1;
}


void __fastcall NinePatchLayer::~NinePatchLayer(NinePatchLayer *this)
{
  NinePatchLayer::~NinePatchLayer(this);
}


int __fastcall NinePatchLayer::NinePatchLayer(float a1, int a2, int a3, float a4, float a5)
{
  float v5; // r8@1
  int v6; // r9@1
  int v7; // r7@1
  float v8; // r4@1
  __int64 v9; // r0@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r5@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r5@1
  int v16; // r6@1
  int v17; // r2@1
  int v18; // r3@1
  int v19; // r5@1
  int v20; // r6@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  ScreenRenderer::ScreenRenderer();
  HIDWORD(v9) = -1082130432;
  LODWORD(v9) = &off_26E7A74;
  *(_QWORD *)LODWORD(v8) = v9;
  *(_DWORD *)(LODWORD(v8) + 8) = -1082130432;
  LODWORD(v9) = LODWORD(v8) + 12;
  HIDWORD(v9) = *(_DWORD *)v7;
  v10 = *(_DWORD *)(v7 + 4);
  v11 = *(_DWORD *)(v7 + 8);
  v12 = *(_DWORD *)(v7 + 12);
  v7 += 16;
  *(_DWORD *)v9 = HIDWORD(v9);
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  LODWORD(v9) = LODWORD(v8) + 28;
  v13 = *(_DWORD *)(v7 + 4);
  v14 = *(_DWORD *)(v7 + 8);
  v15 = *(_DWORD *)(v7 + 12);
  v16 = *(_DWORD *)(v7 + 16);
  v7 += 20;
  *(_DWORD *)(v9 + 4) = v13;
  *(_DWORD *)(v9 + 8) = v14;
  *(_DWORD *)(v9 + 12) = v15;
  *(_DWORD *)(v9 + 16) = v16;
  LODWORD(v9) = LODWORD(v8) + 48;
  v17 = *(_DWORD *)(v7 + 4);
  v18 = *(_DWORD *)(v7 + 8);
  v19 = *(_DWORD *)(v7 + 12);
  v20 = *(_DWORD *)(v7 + 16);
  *(_DWORD *)v9 = *(_DWORD *)v7;
  *(_DWORD *)(v9 + 4) = v17;
  *(_DWORD *)(v9 + 8) = v18;
  *(_DWORD *)(v9 + 12) = v19;
  *(_DWORD *)(v9 + 16) = v20;
  mce::TexturePtr::TexturePtr(LODWORD(v8) + 68, v6);
  *(_DWORD *)(LODWORD(v8) + 92) = 0;
  NinePatchLayer::setSize((NinePatchLayer *)LODWORD(v8), v5, a5);
  return LODWORD(v8);
}


int __fastcall NinePatchLayer::buildQuad(int result, int _R1)
{
  int v8; // r5@1
  int v9; // r3@1
  int v10; // r6@1
  _DWORD *v11; // lr@1
  int v12; // r1@1
  _DWORD *v13; // r4@1
  int v14; // r2@4

  _R2 = 1431655766;
  __asm { SMMUL.W         R2, R1, R2 }
  v8 = _R2 + (_R2 >> 31);
  v9 = -3 * v8 + _R1;
  v10 = result + 36 * _R1;
  *(_DWORD *)(v10 + 116) = *(_DWORD *)(result + 12 + 4 * v9);
  v11 = (_DWORD *)(v10 + 104);
  *(_DWORD *)(v10 + 120) = *(_DWORD *)(result + 12 + 4 * v9 + 4);
  v12 = result + 12 + 4 * v8;
  v13 = (_DWORD *)(v10 + 96);
  *(_DWORD *)(v10 + 124) = *(_DWORD *)(v12 + 16);
  *(_DWORD *)(v10 + 128) = *(_DWORD *)(v12 + 20);
  *(_DWORD *)(v10 + 112) = 0;
  if ( v9 == 2 )
  {
    __asm
    {
      VLDR            S0, [R0,#4]
      VLDR            S2, [R0,#0x30]
      VSUB.F32        S0, S0, S2
      VSTR            S0, [R4]
    }
    v14 = *(_DWORD *)(result + 4);
LABEL_6:
    *(_DWORD *)(v10 + 100) = v14;
    goto LABEL_8;
  }
  if ( v9 != 1 )
    if ( v9 )
      goto LABEL_8;
    *v13 = 0;
    v14 = *(_DWORD *)(result + 44);
    goto LABEL_6;
  *v13 = *(_DWORD *)(result + 44);
  __asm
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0,#0x30]
    VSUB.F32        S0, S0, S2
    VSTR            S0, [R1]
LABEL_8:
  if ( v8 == 2 )
      VLDR            S0, [R0,#8]
      VLDR            S2, [R0,#0x38]
      VSTR            S0, [LR]
    result = *(_DWORD *)(result + 8);
LABEL_13:
    *(_DWORD *)(v10 + 108) = result;
    return result;
  if ( v8 != 1 )
    if ( v8 )
      return result;
    *v11 = 0;
    result = *(_DWORD *)(result + 52);
    goto LABEL_13;
  *v11 = *(_DWORD *)(result + 52);
    VLDR            S0, [R0,#8]
    VLDR            S2, [R0,#0x38]
    VSTR            S0, [R12]
  return result;
}


int __fastcall NinePatchLayer::exclude(int result, int a2)
{
  *(_DWORD *)(result + 92) |= 1 << a2;
  return result;
}


int __fastcall NinePatchLayer::draw(int a1, int a2, Tessellator *this, int a4, float a5)
{
  Tessellator *v5; // r5@1
  int v6; // r8@1
  int v7; // r11@1
  int v8; // r9@1
  int v9; // r7@1
  signed int v15; // r4@1
  float v17; // ST00_4@3
  float v18; // ST04_4@3
  float v19; // ST00_4@3
  float v20; // ST04_4@3
  float v21; // ST00_4@3
  float v22; // ST04_4@3
  float v24; // [sp+0h] [bp-30h]@0
  float v25; // [sp+4h] [bp-2Ch]@0

  v5 = this;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = 0;
  Tessellator::begin(this, 36, 0);
  __asm
  {
    VLDR            S0, [SP,#0x30+arg_0]
    VMOV            R10, S0
  }
  Tessellator::addOffset(v5, *(float *)&v8, _R10, 0.0);
  v15 = 1;
  do
    if ( !(*(_DWORD *)(v7 + 92) & v15) )
    {
      _R6 = v7 + v9;
      __asm
      {
        VLDR            S0, [R6,#0x74]
        VLDR            S2, [R6,#0x80]
        VSTR            S0, [SP,#0x30+var_30]
        VSTR            S2, [SP,#0x30+var_2C]
      }
      Tessellator::vertexUV(
        v5,
        *(float *)(v7 + v9 + 96),
        COERCE_FLOAT(*(_QWORD *)(v7 + v9 + 108)),
        COERCE_FLOAT(*(_QWORD *)(v7 + v9 + 108) >> 32),
        v24,
        v25);
        VLDR            S0, [R6,#0x78]
        *(float *)(_R6 + 100),
        COERCE_FLOAT(*(_QWORD *)(_R6 + 108)),
        COERCE_FLOAT(*(_QWORD *)(_R6 + 108) >> 32),
        v17,
        v18);
        VLDR            S2, [R6,#0x7C]
        COERCE_FLOAT(*(_QWORD *)(_R6 + 100)),
        COERCE_FLOAT(*(_QWORD *)(_R6 + 100) >> 32),
        *(float *)(_R6 + 112),
        v19,
        v20);
      Tessellator::vertexUV(v5, *(float *)(_R6 + 96), *(float *)(_R6 + 104), *(float *)(_R6 + 112), v21, v22);
    }
    v9 += 36;
    v15 *= 2;
  while ( v9 != 324 );
  Tessellator::addOffset(v5, COERCE_FLOAT(v8 ^ 0x80000000), COERCE_FLOAT(LODWORD(_R10) ^ 0x80000000), 0.0);
  return j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrERKNS2_10TexturePtrE_1(
           (char *)v5,
           v6,
           (int)&ScreenRenderer::mScreenMaterials,
           v7 + 68);
}


signed int __fastcall NinePatchLayer::d(int a1, Tessellator *a2, int a3)
{
  Tessellator *v4; // r4@1
  float v9; // ST00_4@1
  float v10; // ST04_4@1
  float v11; // ST00_4@1
  float v12; // ST04_4@1
  float v13; // ST00_4@1
  float v14; // ST04_4@1
  float v16; // [sp+0h] [bp-18h]@0
  float v17; // [sp+4h] [bp-14h]@0

  _R5 = a3;
  v4 = a2;
  __asm
  {
    VLDR            S0, [R5,#0x14]
    VLDR            S2, [R5,#0x20]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
  }
  Tessellator::vertexUV(
    a2,
    *(float *)a3,
    COERCE_FLOAT(*(_QWORD *)(a3 + 12)),
    COERCE_FLOAT(*(_QWORD *)(a3 + 12) >> 32),
    v16,
    v17);
    VLDR            S0, [R5,#0x18]
    v4,
    *(float *)(_R5 + 4),
    COERCE_FLOAT(*(_QWORD *)(_R5 + 12)),
    COERCE_FLOAT(*(_QWORD *)(_R5 + 12) >> 32),
    v9,
    v10);
    VLDR            S2, [R5,#0x1C]
    COERCE_FLOAT(*(_QWORD *)(_R5 + 4)),
    COERCE_FLOAT(*(_QWORD *)(_R5 + 4) >> 32),
    *(float *)(_R5 + 16),
    v11,
    v12);
  return Tessellator::vertexUV(v4, *(float *)_R5, *(float *)(_R5 + 8), *(float *)(_R5 + 16), v13, v14);
}


int __fastcall NinePatchLayer::getPatchInfo(int result, int a2, int a3, float *a4, float *a5, float *a6, float *a7)
{
  int v7; // r1@4

  if ( a2 == 2 )
  {
    __asm
    {
      VLDR            S0, [R0,#4]
      VLDR            S2, [R0,#0x30]
      VSUB.F32        S0, S0, S2
      VSTR            S0, [R3]
    }
    v7 = *(_DWORD *)(result + 4);
LABEL_6:
    *(_DWORD *)a5 = v7;
    goto LABEL_8;
  }
  if ( a2 != 1 )
    if ( a2 )
      goto LABEL_8;
    *(_DWORD *)a4 = 0;
    v7 = *(_DWORD *)(result + 44);
    goto LABEL_6;
  *a4 = *(float *)(result + 44);
  __asm
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0,#0x30]
    VSUB.F32        S0, S0, S2
    VSTR            S0, [R12]
LABEL_8:
  if ( a3 == 2 )
      VLDR            S0, [R0,#8]
      VLDR            S2, [R0,#0x38]
    result = *(_DWORD *)(result + 8);
LABEL_13:
    *(_DWORD *)a7 = result;
    return result;
  if ( a3 != 1 )
    if ( a3 )
      return result;
    *(_DWORD *)a6 = 0;
    result = *(_DWORD *)(result + 52);
    goto LABEL_13;
  *a6 = *(float *)(result + 52);
    VLDR            S0, [R0,#8]
    VLDR            S2, [R0,#0x38]
    VSTR            S0, [R1]
  return result;
}


int __fastcall NinePatchLayer::setExcluded(int result, int a2)
{
  *(_DWORD *)(result + 92) = a2;
  return result;
}
