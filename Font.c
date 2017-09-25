

int __fastcall Font::resetFormat(int result, const Color *a2)
{
  __int64 v2; // kr00_8@1

  v2 = *(_QWORD *)a2;
  *(_QWORD *)(result + 24) = *((_QWORD *)a2 + 1);
  *(_QWORD *)(result + 16) = v2;
  *(_BYTE *)(result + 52) = 0;
  *(_DWORD *)(result + 48) = 0;
  return result;
}


_DWORD *__fastcall Font::getUnicodeFontNameWithPage(const void **a1, int a2, unsigned int *a3, int a4)
{
  const void **v4; // r8@1
  int v5; // r7@1
  unsigned int *v6; // r6@1
  char *v7; // r4@1
  int v8; // r4@2
  int v9; // r5@3
  char v10; // r0@5
  const void **v11; // r0@8
  void *v12; // r0@8
  void *v13; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+0h] [bp-D8h]@8
  void **v20; // [sp+4h] [bp-D4h]@1
  void **v21; // [sp+8h] [bp-D0h]@8
  int v22; // [sp+24h] [bp-B4h]@10
  int v23; // [sp+2Ch] [bp-ACh]@9
  int v24; // [sp+30h] [bp-A8h]@10

  v4 = a1;
  v5 = a4;
  v6 = a3;
  sub_DA7A7C((int)&v20, 16);
  *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 12) |= 0x4000u;
  v7 = (char *)*(v20 - 3) + (_DWORD)&v20;
  if ( v7[117] )
  {
    v8 = (int)(v7 + 116);
  }
  else
    v9 = *((_DWORD *)v7 + 31);
    if ( !v9 )
      sub_DA7ACC();
    if ( *(_BYTE *)(v9 + 28) )
    {
      v10 = *(_BYTE *)(v9 + 61);
    }
    else
      sub_DA7A9C(*((_DWORD *)v7 + 31));
      v10 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v9 + 24))(v9, 32);
    v7[116] = v10;
    *(_BYTE *)(v8 + 1) = 1;
  *(_BYTE *)v8 = 48;
  *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 8) = 2;
  *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 12) = *(_DWORD *)((char *)*(v20 - 3) + (_DWORD)&v20 + 12) & 0xFFFFFFB5 | 8;
  sub_DA78E4((int)&v20, v5);
  sub_DA77A4(&v19, (int)&v21);
  v11 = sub_DA7948((const void **)&v19, 0, *v6, *(_BYTE **)(*v6 - 12));
  *v4 = *v11;
  *v11 = &unk_28898CC;
  v12 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v20 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v20) = off_26D3F34;
  v21 = &off_27734E8;
  v13 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v21 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v22);
  return sub_DA76E4(&v24);
}


int __fastcall Font::getTextHeight(float a1, int a2, int _R2, int a4, int a5)
{
  float v9; // r5@1
  int v11; // r4@1
  int v13; // r4@5
  float v15; // [sp+0h] [bp-50h]@0
  void *v16; // [sp+18h] [bp-38h]@5
  void (*v17)(void); // [sp+20h] [bp-30h]@5
  signed int (*v18)(); // [sp+24h] [bp-2Ch]@5

  __asm { VMOV.F32        S4, #7.5 }
  v9 = a1;
  __asm { VMOV.F32        S2, #8.0 }
  _R6 = a4;
  __asm { VMOV.F32        S0, #10.0 }
  v11 = a2;
  if ( *(_BYTE *)(LODWORD(a1) + 624) )
    __asm { VMOVNE.F32      S0, S4 }
  __asm
  {
    VMOV            S4, R6
    VMUL.F32        S2, S4, S2
    VMUL.F32        S0, S0, S4
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
    VMOV            R7, S0
    VMOV            S0, R2
    VCVT.F32.S32    S16, S0
  v16 = operator new(1u);
  v17 = (void (*)(void))sub_C8AE06;
  v18 = sub_C8AE02;
  __asm { VSTR            S16, [SP,#0x50+var_50] }
  v13 = Font::_processHeightWrap(v9, v11, -1, _R7, v15, -1, a5, 0, _R6, (int)&v16);
  if ( v17 )
    v17();
  return v13;
}


void __fastcall Font::switchFontsource(int a1, int *a2, int *a3)
{
  Font::switchFontsource(a1, a2, a3);
}


void __fastcall Font::_getFontSheetLocation(Font *this, int a2, int a3, int a4)
{
  Font::_getFontSheetLocation(this, a2, a3, a4);
}


int __fastcall Font::_getPixelAlpha(Font *this, mce::TextureContainer *a2, int a3, int a4)
{
  mce::TextureContainer *v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  mce::ImageBuffer *v7; // r0@1
  unsigned int v8; // r7@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (mce::ImageBuffer *)mce::TextureContainer::getImage(a2, 0);
  v8 = mce::ImageBuffer::get(v7, 0);
  return *(_BYTE *)(v8 + (4 * (v6 + *(_DWORD *)mce::TextureContainer::getTextureDescription(v4) * v5) | 3));
}


int __fastcall Font::processLinesInBox(float a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6@1
  int v8; // r8@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  float v10; // r5@1
  int v15; // r4@3
  float v17; // [sp+0h] [bp-48h]@0
  char v18; // [sp+1Ch] [bp-2Ch]@2
  void (*v19)(void); // [sp+24h] [bp-24h]@1
  int v20; // [sp+28h] [bp-20h]@2

  v19 = 0;
  v6 = a4;
  _R7 = a3;
  v8 = a2;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  v10 = a1;
  if ( v9 )
  {
    v9(&v18, a6, 2);
    v20 = *(_DWORD *)(a6 + 12);
    v19 = *(void (**)(void))(a6 + 8);
  }
  __asm
    VMOV            S0, R7
    VSTR            S0, [SP,#0x48+var_48]
  v15 = Font::_processHeightWrap(v10, v8, 1065353216, 0, v17, v6, a5, 0, 1065353216, (int)&v18);
  if ( v19 )
    v19();
  return v15;
}


int __fastcall Font::getWrapHeight(Font *this)
{
  int result; // r0@3

  __asm
  {
    VMOV.F32        S2, #7.5
    VMOV.F32        S0, #10.0
  }
  if ( *((_BYTE *)this + 624) )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall Font::_containsUnicodeChar(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int v4; // r0@2
  int v6; // [sp+4h] [bp-14h]@2

  v2 = *a2;
  v3 = *(_DWORD *)(*a2 - 12);
  while ( 1 )
  {
    v4 = j_utf8proc_iterate(v2, v3, &v6);
    if ( v4 < 1 )
      break;
    v3 -= v4;
    v2 += v4;
    if ( v6 >= 256 )
      return 1;
  }
  return 0;
}


signed int __fastcall Font::GlyphQuad::append(Font::GlyphQuad *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  float v12; // ST00_4@1
  float v13; // ST04_4@1
  float v15; // ST00_4@1
  float v16; // ST04_4@1
  float v18; // ST00_4@1
  float v19; // ST04_4@1
  float v21; // [sp+0h] [bp-20h]@0
  float v22; // [sp+4h] [bp-1Ch]@0

  v2 = a2;
  _R5 = this;
  Tessellator::color(a2, (Font::GlyphQuad *)((char *)this + 28));
  __asm
  {
    VLDR            S0, [R5,#0x18]
    VLDR            S16, =0.0039062
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R5]
    VLDR            S4, [R5,#4]
    VLDR            S6, [R5,#8]
    VLDR            S8, [R5,#0xC]
    VADD.F32        S4, S6, S4
    VSUB.F32        S0, S2, S0
    VLDR            S2, [R5,#0x10]
    VMUL.F32        S2, S2, S16
    VMOV            R2, S4
    VMOV            R1, S0
    VLDR            S0, [R5,#0x14]
    VADD.F32        S0, S8, S0
    VSTR            S2, [SP,#0x20+var_20]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [SP,#0x20+var_1C]
  }
  Tessellator::vertexUV(v2, _R1, _R2, 0.0, v21, v22);
    VADD.F32        S2, S6, S2
    VADD.F32        S4, S4, S6
    VLDR            S2, [R5,#0x14]
    VADD.F32        S2, S2, S8
    VLDR            S0, [R5,#0x10]
    VSTR            S0, [SP,#0x20+var_20]
    VSTR            S2, [SP,#0x20+var_1C]
  Tessellator::vertexUV(v2, _R1, _R2, 0.0, v12, v13);
    VLDR            S4, [R5,#8]
    VLDR            S6, [R5,#0xC]
    VLDR            S8, [R5,#0x10]
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S6, S8
  Tessellator::vertexUV(v2, _R1, *((float *)_R5 + 1), 0.0, v15, v16);
    VLDR            S4, [R5,#0x10]
    VLDR            S6, [R5,#0x14]
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S4, S16
    VMUL.F32        S0, S6, S16
  return Tessellator::vertexUV(v2, _R1, *((float *)_R5 + 1), 0.0, v18, v19);
}


signed int __fastcall Font::isScreenPixelAligned(Font *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 624);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall Font::TextObject::render(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v6; // r11@1
  int v7; // r8@1
  GuiData *v8; // r6@1
  int result; // r0@1
  int v15; // r7@3
  int v16; // r0@3
  int v17; // t1@3
  int v18; // r0@3
  int v20; // r0@3
  signed int v21; // r2@3
  int v22; // r10@3
  int v24; // r0@7
  int v25; // r1@7
  int v26; // r6@7
  int v27; // r4@7
  int v28; // r0@7
  _DWORD *v29; // r1@7
  int v30; // r0@8
  signed int v31; // r2@8
  int v32; // r0@8
  int v33; // r1@8
  int v34; // r4@9
  int v36; // r4@21
  int v37; // r7@21
  int v38; // r2@25

  v4 = a2;
  _R9 = a1;
  v6 = a4;
  v7 = a3;
  v8 = *(GuiData **)(a2 + 24);
  result = Tessellator::forceTessellateIntercept(*(Tessellator **)(a2 + 40));
  if ( !result )
  {
    if ( *(_BYTE *)(v7 + 624) )
    {
      _R0 = MatrixStack::getTop((MatrixStack *)(*(_DWORD *)(v4 + 16) + 16));
      __asm
      {
        VLDR            S0, [R0]
        VMOV.F32        S4, #0.5
        VLDR            S2, [R0,#0x14]
        VADD.F32        S0, S2, S0
        VMUL.F32        S16, S0, S4
      }
      _R0 = GuiData::getGuiScale(v8);
      __asm { VMOV            S0, R0 }
      v15 = *(_DWORD *)(v4 + 32);
        VMOV.F32        S2, #1.0
        VMUL.F32        S0, S16, S0
      v16 = *(_DWORD *)(v15 + 692);
      v17 = *(_DWORD *)(v16 + 20);
        VDIV.F32        S0, S2, S0
        VSTR            S0, [R1]
      *(_BYTE *)(v16 + 17) = 1;
      v18 = *(_DWORD *)(v15 + 696);
      **(_DWORD **)(v18 + 20) = 1056964608;
      *(_BYTE *)(v18 + 17) = 1;
      v20 = *(_DWORD *)(v15 + 700);
      v21 = 1055286886;
      __asm { VCVTR.S32.F32   S0, S0 }
      v22 = v7 + 80;
      __asm { VMOV            R1, S0 }
      if ( _R1 == 1 )
        v21 = 1008981760;
      if ( _R1 == 2 )
        v21 = 1048576000;
      **(_DWORD **)(v20 + 20) = v21;
      *(_BYTE *)(v20 + 17) = 1;
      v24 = *(_DWORD *)(v15 + 704);
      v25 = *(_DWORD *)(v24 + 20);
      v26 = *(_DWORD *)(_R9 + 20);
      v27 = *(_DWORD *)(_R9 + 24);
      *(_QWORD *)v25 = *(_QWORD *)(_R9 + 12);
      *(_DWORD *)(v25 + 8) = v26;
      *(_DWORD *)(v25 + 12) = v27;
      *(_BYTE *)(v24 + 17) = 1;
      v28 = *(_DWORD *)(v15 + 708);
      v29 = *(_DWORD **)(v28 + 20);
      if ( *(_BYTE *)(_R9 + 29) )
        __asm { VMOV.F32        S0, #0.25 }
        *v29 = 1040187392;
        *(_BYTE *)(v28 + 17) = 1;
        __asm
        {
          VLDR            S2, [R9,#0x10]
          VLDR            S6, [R9,#0xC]
          VLDR            S4, [R9,#0x14]
        }
        v30 = *(_DWORD *)(v15 + 712);
          VMUL.F32        S6, S6, S0
          VMUL.F32        S2, S2, S0
          VMUL.F32        S0, S4, S0
        *(_DWORD *)(*(_DWORD *)(v30 + 20) + 12) = *(_DWORD *)(_R9 + 24);
        v31 = 998244352;
          VSTR            S6, [R1]
          VSTR            S2, [R1,#4]
          VSTR            S0, [R1,#8]
        *(_BYTE *)(v30 + 17) = 1;
        v32 = *(_DWORD *)(v15 + 716);
        v33 = *(_DWORD *)(v32 + 20);
      else
        v31 = 0;
        *v29 = 0;
      *(_DWORD *)v33 = v31;
      *(_DWORD *)(v33 + 4) = v31;
      *(_BYTE *)(v32 + 17) = 1;
      result = mce::ConstantBufferConstantsBase::sync(
                 (mce::ConstantBufferConstantsBase *)(v15 + 684),
                 *(mce::RenderContext **)(v4 + 12));
    }
    else
      v34 = v7 + 56;
      if ( v6 )
        v34 = v6;
      result = GuiData::isOddGuiScale(v8);
      v22 = v6;
      if ( !v6 )
        v22 = v7 + 56;
        _ZF = *(_BYTE *)(_R9 + 28) == 0;
        if ( !*(_BYTE *)(_R9 + 28) )
          _ZF = *(_BYTE *)(v7 + 15) == 0;
        if ( !_ZF && *(_BYTE *)(v7 + 14) )
          if ( result )
            v34 = v7 + 68;
          v22 = v34;
    v36 = *(_QWORD *)_R9 >> 32;
    v37 = *(_QWORD *)_R9;
    if ( v37 != v36 )
        v6 = v7 + 56;
      do
        if ( (unsigned int)(*(_DWORD *)(v37 + 128) - 224) <= 0x18 )
          v38 = v6;
        else
          v38 = v22;
        result = mce::Mesh::render((mce::Buffer *)v37, v4, v38, v37 + 100, 0, 0);
        v37 += 132;
      while ( v36 != v37 );
  }
  return result;
}


_QWORD *__fastcall Font::Font(_QWORD *a1, int *a2, int *a3, int a4)
{
  int v4; // r10@1
  int *v5; // r11@1
  int *v6; // r8@1
  _QWORD *v7; // r4@1
  int v8; // r0@1
  float v9; // r6@1
  int v10; // r7@1
  int v11; // r1@1
  __int64 v12; // kr00_8@1
  void *v13; // r0@1
  void *v14; // r0@2
  void *v15; // r0@3
  double v16; // r0@4
  double v17; // r0@4
  int v18; // r6@6
  void *v19; // r5@6
  double v20; // r0@7
  int v21; // r6@9
  void *v22; // r5@9
  unsigned int v23; // r0@10
  int v24; // r6@12
  void *v25; // r5@12
  unsigned int *v27; // r2@14
  signed int v28; // r1@16
  unsigned int *v29; // r2@18
  signed int v30; // r1@20
  unsigned int *v31; // r2@22
  signed int v32; // r1@24
  int v33; // [sp+Ch] [bp-3Ch]@3
  int v34; // [sp+14h] [bp-34h]@2
  int v35; // [sp+1Ch] [bp-2Ch]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v7 = &off_26D7390;
  *((_DWORD *)v7 + 2) = 0;
  *((_WORD *)v7 + 6) = 257;
  *((_BYTE *)v7 + 14) = 0;
  v8 = Color::WHITE;
  v9 = unk_283E614;
  v10 = qword_283E618;
  *((_DWORD *)v7 + 7) = HIDWORD(qword_283E618);
  v11 = (int)(v7 + 2);
  *(_DWORD *)v11 = v8;
  *(float *)(v11 + 4) = v9;
  *(_DWORD *)(v11 + 8) = v10;
  v12 = *(_QWORD *)&Color::ORANGE;
  v7[5] = qword_283E688;
  v7[4] = v12;
  *((_BYTE *)v7 + 52) = 0;
  *((_DWORD *)v7 + 12) = 0;
  sub_DA7364((void **)&v35, "ui_text");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v7 + 7),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v35);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v35 - 4);
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
      j_j_j_j_j__ZdlPv_9(v13);
  }
  sub_DA7364((void **)&v34, "ui_text_smooth");
    (mce::MaterialPtr *)((char *)v7 + 68),
    &v34);
  v14 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  sub_DA7364((void **)&v33, "ui_text_msdf");
    (mce::MaterialPtr *)(v7 + 10),
    &v33);
  v15 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  *((_DWORD *)v7 + 25) = 0;
  *((_DWORD *)v7 + 26) = 0;
  *((_DWORD *)v7 + 23) = 0;
  *((_DWORD *)v7 + 24) = 0;
  *((_DWORD *)v7 + 29) = 0;
  *((_DWORD *)v7 + 30) = 0;
  *((_DWORD *)v7 + 27) = 0;
  *((_DWORD *)v7 + 28) = 0;
  *((_DWORD *)v7 + 33) = 0;
  *((_DWORD *)v7 + 34) = 0;
  *((_DWORD *)v7 + 31) = 0;
  *((_DWORD *)v7 + 32) = 0;
  *((_DWORD *)v7 + 37) = 0;
  *((_DWORD *)v7 + 38) = 0;
  *((_DWORD *)v7 + 35) = 0;
  *((_DWORD *)v7 + 36) = 0;
  *((_DWORD *)v7 + 41) = 0;
  *((_DWORD *)v7 + 42) = 0;
  *((_DWORD *)v7 + 39) = 0;
  *((_DWORD *)v7 + 40) = 0;
  *((_DWORD *)v7 + 45) = 0;
  *((_DWORD *)v7 + 46) = 0;
  *((_DWORD *)v7 + 43) = 0;
  *((_DWORD *)v7 + 44) = 0;
  *((_DWORD *)v7 + 49) = 0;
  *((_DWORD *)v7 + 50) = 0;
  *((_DWORD *)v7 + 47) = 0;
  *((_DWORD *)v7 + 48) = 0;
  *((_DWORD *)v7 + 53) = 0;
  *((_DWORD *)v7 + 54) = 0;
  *((_DWORD *)v7 + 51) = 0;
  *((_DWORD *)v7 + 52) = 0;
  *((_DWORD *)v7 + 57) = 0;
  *((_DWORD *)v7 + 58) = 0;
  *((_DWORD *)v7 + 55) = 0;
  *((_DWORD *)v7 + 56) = 0;
  *((_DWORD *)v7 + 61) = 0;
  *((_DWORD *)v7 + 62) = 0;
  *((_DWORD *)v7 + 59) = 0;
  *((_DWORD *)v7 + 60) = 0;
  *((_DWORD *)v7 + 65) = 0;
  *((_DWORD *)v7 + 66) = 0;
  *((_DWORD *)v7 + 63) = 0;
  *((_DWORD *)v7 + 64) = 0;
  *((_DWORD *)v7 + 69) = 0;
  *((_DWORD *)v7 + 70) = 0;
  *((_DWORD *)v7 + 67) = 0;
  *((_DWORD *)v7 + 68) = 0;
  *((_DWORD *)v7 + 73) = 0;
  *((_DWORD *)v7 + 74) = 0;
  *((_DWORD *)v7 + 71) = 0;
  *((_DWORD *)v7 + 72) = 0;
  *((_DWORD *)v7 + 77) = 0;
  *((_DWORD *)v7 + 78) = 0;
  *((_DWORD *)v7 + 75) = 0;
  *((_DWORD *)v7 + 76) = 0;
  *((_DWORD *)v7 + 81) = 0;
  *((_DWORD *)v7 + 82) = 0;
  *((_DWORD *)v7 + 79) = 0;
  *((_DWORD *)v7 + 80) = 0;
  *((_DWORD *)v7 + 85) = 0;
  *((_DWORD *)v7 + 86) = 0;
  *((_DWORD *)v7 + 83) = 0;
  *((_DWORD *)v7 + 84) = 0;
  *((_DWORD *)v7 + 89) = 0;
  *((_DWORD *)v7 + 90) = 0;
  *((_DWORD *)v7 + 87) = 0;
  *((_DWORD *)v7 + 88) = 0;
  *((_DWORD *)v7 + 93) = 0;
  *((_DWORD *)v7 + 94) = 0;
  *((_DWORD *)v7 + 91) = 0;
  *((_DWORD *)v7 + 92) = 0;
  *((_DWORD *)v7 + 97) = 0;
  *((_DWORD *)v7 + 98) = 0;
  *((_DWORD *)v7 + 95) = 0;
  *((_DWORD *)v7 + 96) = 0;
  *((_DWORD *)v7 + 101) = 0;
  *((_DWORD *)v7 + 102) = 0;
  *((_DWORD *)v7 + 99) = 0;
  *((_DWORD *)v7 + 100) = 0;
  *((_DWORD *)v7 + 105) = 0;
  *((_DWORD *)v7 + 106) = 0;
  *((_DWORD *)v7 + 103) = 0;
  *((_DWORD *)v7 + 104) = 0;
  *((_DWORD *)v7 + 109) = 0;
  *((_DWORD *)v7 + 110) = 0;
  *((_DWORD *)v7 + 107) = 0;
  *((_DWORD *)v7 + 108) = 0;
  *((_DWORD *)v7 + 113) = 0;
  *((_DWORD *)v7 + 114) = 0;
  *((_DWORD *)v7 + 111) = 0;
  *((_DWORD *)v7 + 112) = 0;
  *((_DWORD *)v7 + 117) = 0;
  *((_DWORD *)v7 + 118) = 0;
  *((_DWORD *)v7 + 115) = 0;
  *((_DWORD *)v7 + 116) = 0;
  *((_DWORD *)v7 + 121) = 0;
  *((_DWORD *)v7 + 122) = 0;
  *((_DWORD *)v7 + 119) = 0;
  *((_DWORD *)v7 + 120) = 0;
  *((_DWORD *)v7 + 125) = 0;
  *((_DWORD *)v7 + 126) = 0;
  *((_DWORD *)v7 + 123) = 0;
  *((_DWORD *)v7 + 124) = 0;
  *((_DWORD *)v7 + 129) = 0;
  *((_DWORD *)v7 + 130) = 0;
  *((_DWORD *)v7 + 127) = 0;
  *((_DWORD *)v7 + 128) = 0;
  *((_DWORD *)v7 + 133) = 0;
  *((_DWORD *)v7 + 134) = 0;
  *((_DWORD *)v7 + 131) = 0;
  *((_DWORD *)v7 + 132) = 0;
  *((_DWORD *)v7 + 137) = 0;
  *((_DWORD *)v7 + 138) = 0;
  *((_DWORD *)v7 + 135) = 0;
  *((_DWORD *)v7 + 136) = 0;
  *((_DWORD *)v7 + 141) = 0;
  *((_DWORD *)v7 + 142) = 0;
  *((_DWORD *)v7 + 139) = 0;
  *((_DWORD *)v7 + 140) = 0;
  *((_DWORD *)v7 + 145) = 0;
  *((_DWORD *)v7 + 146) = 0;
  *((_DWORD *)v7 + 143) = 0;
  *((_DWORD *)v7 + 144) = 0;
  *((_DWORD *)v7 + 149) = 0;
  *((_DWORD *)v7 + 150) = 0;
  *((_DWORD *)v7 + 147) = 0;
  *((_DWORD *)v7 + 148) = 0;
  *((_DWORD *)v7 + 151) = 16;
  *((_DWORD *)v7 + 152) = 16;
  sub_DA73B4((int *)v7 + 153, v6);
  sub_DA73B4((int *)v7 + 154, v5);
  *((_DWORD *)v7 + 155) = v4;
  *((_BYTE *)v7 + 624) = 0;
  *((_DWORD *)v7 + 415) = 0;
  *((_DWORD *)v7 + 416) = 0;
  *((_DWORD *)v7 + 417) = 1065353216;
  *((_DWORD *)v7 + 418) = 0;
  LODWORD(v16) = (char *)v7 + 1668;
  v17 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v16)));
  *((_DWORD *)v7 + 414) = LODWORD(v17);
  if ( LODWORD(v17) == 1 )
    v19 = (char *)v7 + 1676;
    *((_DWORD *)v7 + 419) = 0;
  else
    if ( LODWORD(v17) >= 0x40000000 )
      sub_DA7414();
    v18 = 4 * LODWORD(v17);
    v19 = operator new(4 * LODWORD(v17));
    _aeabi_memclr4(v19, v18);
  *((_DWORD *)v7 + 413) = v19;
  *((_DWORD *)v7 + 422) = 0;
  *((_DWORD *)v7 + 423) = 0;
  *((_DWORD *)v7 + 424) = 1065353216;
  *((_DWORD *)v7 + 425) = 0;
  LODWORD(v17) = v7 + 212;
  v20 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v17)));
  *((_DWORD *)v7 + 421) = LODWORD(v20);
  if ( LODWORD(v20) == 1 )
    v22 = v7 + 213;
    *((_DWORD *)v7 + 426) = 0;
    if ( LODWORD(v20) >= 0x40000000 )
    v21 = 4 * LODWORD(v20);
    v22 = operator new(4 * LODWORD(v20));
    _aeabi_memclr4(v22, v21);
  *((_DWORD *)v7 + 420) = v22;
  *((_DWORD *)v7 + 429) = 0;
  *((_DWORD *)v7 + 430) = 0;
  *((_DWORD *)v7 + 431) = 1065353216;
  *((_DWORD *)v7 + 432) = 0;
  LODWORD(v20) = (char *)v7 + 1724;
  v23 = sub_DA7744(v20);
  *((_DWORD *)v7 + 428) = v23;
  if ( v23 == 1 )
    v25 = (char *)v7 + 1732;
    *((_DWORD *)v7 + 433) = 0;
    if ( v23 >= 0x40000000 )
    v24 = 4 * v23;
    v25 = operator new(4 * v23);
    _aeabi_memclr4(v25, v24);
  *((_DWORD *)v7 + 427) = v25;
  *((_DWORD *)v7 + 435) = 0;
  *((_DWORD *)v7 + 436) = 0;
  *((_DWORD *)v7 + 437) = 0;
  *((_DWORD *)v7 + 438) = 0;
  *((_DWORD *)v7 + 439) = 0;
  *((_DWORD *)v7 + 437) = (char *)v7 + 1740;
  *((_DWORD *)v7 + 438) = (char *)v7 + 1740;
  *((_DWORD *)v7 + 440) = 0;
  *((_DWORD *)v7 + 441) = 0;
  Font::resetFontData((Font *)v7);
  return v7;
}


void __fastcall Font::resetFontData(Font *this)
{
  Font *v1; // r4@1
  char v2; // r0@1
  void *v3; // r0@3
  void *v4; // r6@4
  void *v5; // r0@5
  void *v6; // r5@6
  int v7; // r1@8
  const void **v8; // r0@8
  int v9; // r2@8
  int v10; // r6@8
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  char *v14; // r0@13
  void *v15; // r0@15
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  int v18; // r0@20
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  unsigned int *v26; // r2@40
  signed int v27; // r1@42
  I18n *v28; // r0@47
  unsigned int v29; // r1@47
  int v30; // r7@48
  int v37; // r2@52
  int v38; // r0@54
  bool v39; // r0@56
  void *v40; // r0@58
  unsigned int *v41; // r2@60
  signed int v42; // r1@62
  int v43; // [sp+0h] [bp-38h]@54
  int v44; // [sp+4h] [bp-34h]@23
  int v45; // [sp+8h] [bp-30h]@15
  int v46; // [sp+Ch] [bp-2Ch]@8
  int v47; // [sp+10h] [bp-28h]@8
  int v48; // [sp+14h] [bp-24h]@8
  int v49; // [sp+18h] [bp-20h]@8
  char *v50; // [sp+1Ch] [bp-1Ch]@8

  v1 = this;
  _ZF = *(_DWORD *)(this[153] - 12) == 0;
  v2 = 0;
  if ( _ZF )
    v2 = 1;
  *((_BYTE *)v1 + 15) = v2;
  v3 = (void *)v1[415];
  if ( v3 )
  {
    do
    {
      v4 = *(void **)v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(v1[413], 4 * v1[414]);
  v1[415] = 0;
  v1[416] = 0;
  v5 = (void *)v1[422];
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(v1[420], 4 * v1[421]);
  v1[422] = 0;
  v1[423] = 0;
  if ( *(_DWORD *)(v1[154] - 12) )
    v50 = (char *)&unk_28898CC;
    sub_DA73B4(&v46, (int *)v1 + 154);
    Font::getUnicodeFontNameWithPage((const void **)&v47, v7, (unsigned int *)&v46, 0);
    v8 = sub_DA73D4((const void **)&v47, ".fontdata", 9u);
    v9 = (int)*v8;
    *v8 = &unk_28898CC;
    v48 = v9;
    v49 = 0;
    v10 = Resource::load((int)&v48);
    v11 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v48 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v47 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v46 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    if ( v10 == 1 )
      *((_BYTE *)v1 + 624) = 1;
    v14 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v50 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
  if ( *(_DWORD *)(v1[153] - 12) )
    sub_DA73B4(&v45, (int *)v1 + 153);
    Font::_loadAsciiFontInformation((int)v1, &v45);
    v15 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) == &dword_28898C0 )
      goto LABEL_47;
    v16 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      goto LABEL_45;
    goto LABEL_44;
  v18 = *(_DWORD *)(v1[154] - 12);
  _ZF = v18 == 0;
  if ( v18 )
    _ZF = *((_BYTE *)v1 + 624) == 0;
  if ( !_ZF )
    sub_DA73B4(&v44, (int *)v1 + 154);
    Font::_loadMsdfFontInformation((int)v1, &v44, 0);
    v15 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v44 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
LABEL_45:
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
        goto LABEL_47;
LABEL_44:
      v17 = (*v16)--;
LABEL_47:
  v28 = 0;
  v29 = 0;
  do
    v30 = -((v29 >> 3) & 1) & 0x55;
    _R2 = -((v29 >> 2) & 1) & 0xAA | v30;
    _R3 = -(v29 & 1) & 0xAA | v30;
    if ( v28 == (I18n *)96 )
      _R2 += 85;
    __asm { VLDR            S6, =0.0039216 }
    _R6 = -((v29++ >> 1) & 1) & 0xAA | v30;
    if ( !(_NF ^ _VF) )
      _R3 >>= 2;
      _R6 >>= 2;
      _R2 >>= 2;
    _R2 = (unsigned __int8)_R2;
    __asm
      VMOV            S4, R3
      VMOV            S0, R2
    v37 = (int)v28 + (_DWORD)v1;
    __asm { VMOV            S2, R6 }
    v28 = (I18n *)((char *)v28 + 16);
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    *(_DWORD *)(v37 + 104) = 0;
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VSTR            S0, [R2,#0x5C]
      VSTR            S2, [R2,#0x60]
      VSTR            S4, [R2,#0x64]
  while ( !_ZF );
  v38 = I18n::getCurrentLanguage(v28);
  Localization::getFullLanguageCode((Localization *)&v43, v38);
  v39 = sub_DA7374((const void **)&v43, "zh_TW") && sub_DA7374((const void **)&v43, "ja_JP");
  *((_BYTE *)v1 + 14) = v39;
  v40 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v43 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
}


signed int __fastcall Font::hasFormattingCodes(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int v4; // r0@2
  int v6; // [sp+4h] [bp-14h]@2

  v2 = *a2;
  v3 = *(_DWORD *)(*a2 - 12);
  while ( 1 )
  {
    v4 = j_utf8proc_iterate(v2, v3, &v6);
    if ( v4 < 1 )
      break;
    v3 -= v4;
    v2 += v4;
    if ( v6 == 167 )
      return 1;
  }
  return 0;
}


int __fastcall Font::_getLineOffsetMargin(Font *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #0.5
    VMOV            S2, R1
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Font::getFormattingCodes(void **a1, int *a2)
{
  int *v2; // r10@1
  int v3; // r6@1
  int *v4; // r5@1
  int v5; // r7@1
  unsigned int i; // r4@1
  signed int result; // r0@3
  signed int v8; // r11@3
  unsigned int v9; // r3@6
  void *v10; // r0@7
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+4h] [bp-3Ch]@7
  int v14; // [sp+Ch] [bp-34h]@3

  v2 = a2;
  v3 = *a2;
  v4 = (int *)a1;
  v5 = *(_DWORD *)(*a2 - 12);
  sub_DA7364(a1, (const char *)&unk_257BC67);
  for ( i = 0; ; i += v8 )
  {
    result = j_utf8proc_iterate(v3, v5, &v14);
    v8 = result;
    if ( result < 1 )
      break;
    v5 -= result;
    if ( v5 >= 1 && v14 == 167 )
    {
      v9 = *(_DWORD *)(*v2 - 12);
      if ( v9 < i )
        sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", i, v9);
      sub_DA7574((void **)&v13, v2, i, result + 1);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v13);
      v10 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v13 - 4);
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
          j_j_j_j_j__ZdlPv_9(v10);
      }
    }
    v3 += v8;
  }
  return result;
}


signed int __fastcall Font::supportsString(int a1, int *a2)
{
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r6@1
  signed int v5; // r10@1
  int *v6; // r4@2
  void *v7; // r9@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  signed int v12; // r7@19
  __int64 v13; // r0@23
  unsigned int v14; // r2@24
  int v15; // r1@29
  void *v16; // r0@31
  int v17; // r11@32
  void *v18; // r4@32
  int v19; // r9@32
  char *v20; // r0@32
  bool v21; // zf@33
  signed int result; // r0@35
  int v23; // [sp+Ch] [bp-44h]@2
  int *v24; // [sp+10h] [bp-40h]@2
  int v25; // [sp+14h] [bp-3Ch]@3
  char *v26; // [sp+18h] [bp-38h]@31
  char *v27; // [sp+1Ch] [bp-34h]@7
  int v28; // [sp+20h] [bp-30h]@31
  int v29; // [sp+24h] [bp-2Ch]@1

  v2 = *a2;
  v3 = a1;
  v4 = *(_DWORD *)(*a2 - 12);
  v5 = j_utf8proc_iterate(*a2, *(_DWORD *)(*a2 - 12), &v29);
  if ( v5 < 1 )
  {
LABEL_35:
    result = 1;
  }
  else
    v6 = &v29;
    v23 = v3;
    v24 = (int *)(v3 + 616);
    v7 = &unk_27C8090;
    while ( 1 )
    {
      v12 = v29;
      if ( v29 > 255 )
      {
        if ( v29 >= 0x10000 )
        {
          v12 = 65533;
          if ( *(_BYTE *)(v23 + 624) )
            v12 = 63;
        }
        v13 = *((_QWORD *)v7 + 12);
        if ( HIDWORD(v13) != (_DWORD)v13 )
          v14 = (HIDWORD(v13) - (signed int)v13) >> 2;
          HIDWORD(v13) = 0;
          while ( v12 != *(_DWORD *)(v13 + 4 * HIDWORD(v13)) )
          {
            if ( ++HIDWORD(v13) >= v14 )
              goto LABEL_29;
          }
          v12 = HIDWORD(v13);
LABEL_29:
        sub_DA73B4(&v25, v24);
        v15 = 0;
        if ( v12 > 255 )
          v15 = (v12 + ((unsigned int)(v12 >> 31) >> 24)) >> 8;
        Font::getUnicodeFontNameWithPage((const void **)&v26, v15, (unsigned int *)&v25, (unsigned __int8)v15);
        v27 = v26;
        v26 = (char *)&unk_28898CC;
        v28 = 0;
        v16 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j_j__ZdlPv_9(v16);
        v17 = *(_QWORD *)((char *)v7 + 108) >> 32;
        v18 = v7;
        v19 = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocation const*,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocation const>>(
                *(_QWORD *)((char *)v7 + 108),
                v17,
                (const void **)&v27);
        v20 = v27 - 12;
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v27 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j_j__ZdlPv_9(v20);
        v21 = v19 == v17;
        v7 = v18;
        v6 = &v29;
        if ( v21 )
          break;
      }
      v4 -= v5;
      v2 += v5;
      v5 = j_utf8proc_iterate(v2, v4, v6);
      if ( v5 <= 0 )
        goto LABEL_35;
    }
    result = 0;
  return result;
}


void __fastcall Font::_loadMsdfFontInformation(int a1, int *a2, int a3)
{
  Font::_loadMsdfFontInformation(a1, a2, a3);
}


signed int __fastcall Font::onLanguageChanged(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  signed int result; // r0@3

  v2 = a2;
  v3 = a1;
  if ( sub_DA7374(a2, "zh_TW") && sub_DA7374(v2, "ja_JP") )
  {
    result = 1;
    *(_BYTE *)(v3 + 14) = 1;
  }
  else
    result = 0;
    *(_BYTE *)(v3 + 14) = 0;
  return result;
}


int __fastcall Font::_processHeightWrap(float a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9, int a10)
{
  int v14; // r5@1
  int *v15; // r4@1
  void *v18; // r0@3
  int v19; // r7@8
  void **v20; // r5@8
  unsigned int v21; // r8@8
  unsigned int v22; // r1@10
  char *v23; // r0@11
  unsigned int v24; // r6@11
  char *v25; // r0@13
  int v26; // r11@17
  unsigned int v27; // r3@18
  int *v28; // r6@19
  void *v29; // r0@19
  int v33; // r0@29
  int v34; // r6@29
  signed int v36; // r6@36
  int v37; // r5@37
  void (__fastcall *v38)(char *, int, signed int); // r3@37
  int v39; // r6@39
  int v40; // r6@42
  int v41; // r9@42
  int i; // r0@42
  void *v43; // r0@43
  int v45; // r6@45
  void (__fastcall *v46)(char *, int, signed int); // r3@45
  int v47; // r5@47
  int v48; // r7@47
  unsigned int *v49; // r2@51
  signed int v50; // r1@53
  void *v51; // r0@60
  char *v52; // r0@61
  unsigned int *v53; // r2@65
  signed int v54; // r1@67
  unsigned int *v55; // r2@69
  signed int v56; // r1@71
  unsigned int *v57; // r2@73
  signed int v58; // r1@75
  unsigned int *v59; // r2@93
  signed int v60; // r1@95
  void *v61; // r0@103
  unsigned int *v64; // r2@105
  signed int v65; // r1@107
  int v66; // [sp+0h] [bp-C8h]@0
  int v67; // [sp+Ch] [bp-BCh]@0
  int v68; // [sp+30h] [bp-98h]@4
  char v69; // [sp+34h] [bp-94h]@46
  void (*v70)(void); // [sp+3Ch] [bp-8Ch]@45
  int v71; // [sp+40h] [bp-88h]@46
  int v72; // [sp+44h] [bp-84h]@43
  char v73; // [sp+48h] [bp-80h]@38
  void (*v74)(void); // [sp+50h] [bp-78h]@37
  int v75; // [sp+54h] [bp-74h]@38
  int v76; // [sp+58h] [bp-70h]@19
  int v77; // [sp+5Ch] [bp-6Ch]@8
  _BYTE **v78; // [sp+60h] [bp-68h]@18
  int v79; // [sp+64h] [bp-64h]@7
  int v80; // [sp+6Ch] [bp-5Ch]@4
  float v81; // [sp+70h] [bp-58h]@26
  int v82; // [sp+78h] [bp-50h]@3

  __asm { VMOV.F32        S0, #7.5 }
  v14 = LODWORD(a1);
  v15 = (int *)a2;
  __asm { VMOV.F32        S20, #10.0 }
  _R7 = a4;
  if ( *(_BYTE *)(LODWORD(a1) + 624) )
    __asm { VMOVNE.F32      S20, S0 }
  sub_DA7364((void **)&v82, " ");
  _R6 = Font::getLineLength(v14, &v82, 1065353216, 0);
  __asm { VMOV            S22, R7 }
  v18 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v59 = (unsigned int *)(v82 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
    }
    else
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  }
  v68 = v14;
  __asm { VSTR            S22, [SP,#0xC8+var_58] }
  sub_DA7364((void **)&v80, (const char *)&unk_257BC67);
  __asm
    VLDR            S16, [SP,#0xC8+arg_10]
    VMOV            S4, R6
    VLDR            S0, [SP,#0xC8+arg_0]
    VCMPE.F32       S16, #0.0
    VDIV.F32        S2, S0, S16
    VMRS            APSR_nzcv, FPSCR
    VCVT.F32.S32    S4, S4
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
    VSUB.F32        S18, S0, S4
    VCMPE.F32       S18, S4
  if ( _NF ^ _VF )
    goto LABEL_103;
  v79 = a6;
  if ( !a6 )
    goto LABEL_100;
  __asm { VMUL.F32        S20, S20, S16 }
  v19 = a10;
  v20 = (void **)&v77;
  v21 = 0;
  while ( *(_DWORD *)(*v15 - 12) > v21 )
    v22 = v21;
    if ( *(_BYTE *)(*v15 + v21) != 32 )
      v23 = sub_DA8964(v15, 32, v21);
      v24 = (unsigned int)(v23 - 1);
      if ( v23 == (char *)-1 )
        v24 = *(_DWORD *)(*v15 - 12);
      v25 = sub_DA8964(v15, 10, v21);
      v22 = v24;
      if ( (unsigned int)v25 < v24 )
        v22 = (unsigned int)v25;
      if ( v25 == (char *)-1 )
        v22 = v24;
    v26 = v22 + 1;
    if ( v22 + 1 == v21 )
      break;
    v78 = (_BYTE **)&unk_28898CC;
    v27 = *(_DWORD *)(*v15 - 12);
    if ( v27 < v21 )
      sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v21, v27);
    sub_DA7574(v20, v15, v21, v26 - v21);
    v28 = &v76;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v78,
      (int *)v20);
    v29 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v77 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v28 = &v76;
      }
      else
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
    sub_DA73B4(v28, &v80);
    sub_DA7564((const void **)v28, (const void **)&v78);
    _R0 = Font::getLineLength(v68, v28, 1065353216, a7);
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      EntityInteraction::setInteractText(&v80, &v76);
      _R0 = Font::getLineLength(v68, (int *)&v78, 1065353216, a7);
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S0, S18
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        if ( !sub_DA7374((const void **)&v78, " ") )
        {
          EntityInteraction::setInteractText(&v80, &v76);
          sub_DA7894((const void **)&v78, 0, *(v78 - 3), 0);
        }
        if ( !*(_DWORD *)(v19 + 8) )
          sub_DA7654();
        __asm
          VLDR            S22, [SP,#0xC8+var_58]
          VMOV            R2, S22
        if ( (*(int (__fastcall **)(int, int *, int, int *))(v19 + 12))(v19, &v80, _R2, &v79) != 1 )
          goto LABEL_59;
          VADD.F32        S0, S22, S20
          VSTR            S0, [SP,#0xC8+var_58]
        EntityInteraction::setInteractText(&v80, (int *)&v78);
        v37 = Util::utf8len(&v76, 1);
        v74 = 0;
        v38 = *(void (__fastcall **)(char *, int, signed int))(v19 + 8);
        if ( v38 )
          v38(&v73, v19, 2);
          v75 = *(_DWORD *)(v19 + 12);
          v74 = *(void (**)(void))(v19 + 8);
          VSTR            S16, [SP,#0xC8+var_BC]
          VSTR            S18, [SP,#0xC8+var_C8]
        v39 = Font::_chopString(v68, (int)&v76, (int)&v81, COERCE_FLOAT(&v79), v66, a7, 0, v67, (int)&v73);
        if ( v74 )
          v74();
        if ( !v39 )
        v40 = Util::utf8len(&v76, 1);
        v41 = Util::utf8len((int *)&v78, 1);
        for ( i = v37 + 1 - v40; ; i = v45 + 1 - Util::utf8len(&v80, 1) )
          Util::utf8substring((const void **)&v72, (int *)&v78, v41 - i, v41);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            &v80,
            &v72);
          v43 = (void *)(v72 - 12);
          if ( (int *)(v72 - 12) != &dword_28898C0 )
          {
            v49 = (unsigned int *)(v72 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
            }
            else
              v50 = (*v49)--;
            if ( v50 <= 0 )
              j_j_j_j_j__ZdlPv_9(v43);
          }
          _R0 = Font::getLineLength(v68, &v80, 1065353216, a7);
          __asm
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
            VCMPE.F32       S0, S18
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            break;
          v45 = Util::utf8len(&v80, 1);
          v70 = 0;
          v46 = *(void (__fastcall **)(char *, int, signed int))(v19 + 8);
          if ( v46 )
            v46(&v69, v19, 2);
            v71 = *(_DWORD *)(v19 + 12);
            v70 = *(void (**)(void))(v19 + 8);
          __asm { VSTR            S16, [SP,#0xC8+var_BC] }
          v47 = v19;
          __asm { VSTR            S18, [SP,#0xC8+var_C8] }
          v48 = Font::_chopString(v68, (int)&v80, (int)&v81, COERCE_FLOAT(&v79), v66, a7, 0, v67, (int)&v69);
          if ( v70 )
            v70();
          if ( !v48 )
            v36 = 3;
            v26 = v21;
            v19 = v47;
            goto LABEL_60;
          v19 = v47;
    v33 = v80;
    v34 = *(_DWORD *)(v80 - 12);
    if ( !v34 )
      goto LABEL_36;
    if ( *(_DWORD *)(v80 - 4) >= 0 )
      sub_DA73C4((const void **)&v80);
      v33 = v80;
    if ( *(_BYTE *)(v33 + v34 - 1) != 10 )
    if ( !*(_DWORD *)(v19 + 8) )
      sub_DA7654();
      VLDR            S22, [SP,#0xC8+var_58]
      VMOV            R2, S22
    if ( (*(int (__fastcall **)(int, int *, int, int *))(v19 + 12))(v19, &v80, _R2, &v79) == 1 )
        VADD.F32        S0, S22, S20
        VSTR            S0, [SP,#0xC8+var_58]
      sub_DA78A4((void **)&v80, (char *)&unk_257BC67, 0);
LABEL_36:
      v36 = 0;
      goto LABEL_60;
LABEL_59:
    v36 = 3;
    v26 = v21;
LABEL_60:
    v20 = (void **)&v77;
    v51 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v76 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v20 = (void **)&v77;
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9(v51);
    v52 = (char *)(v78 - 3);
    if ( (int *)(v78 - 3) != &dword_28898C0 )
      v57 = (unsigned int *)(v78 - 1);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9(v52);
    if ( !v36 )
      v21 = v26;
      if ( v79 )
        continue;
  if ( *(_DWORD *)(v80 - 12) )
    (*(void (**)(void))(v19 + 12))();
LABEL_100:
    VLDR            S2, =1.3333
    VMOV.F32        S0, #1.0
  *(_WORD *)(v68 + 12) = 257;
  if ( *(_BYTE *)(v68 + 624) )
    VLDR            S2, [SP,#0xC8+var_58]
    VMUL.F32        S22, S0, S2
LABEL_103:
  __asm { VCVTR.S32.F32   S0, S22 }
  v61 = (void *)(v80 - 12);
  __asm { VMOV            R4, S0 }
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v80 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9(v61);
  return _R4;
}


int __fastcall Font::getTextHeight(int a1, int *a2, int _R2)
{
  int v7; // r0@1
  int v8; // r0@7
  unsigned int v9; // r1@9
  unsigned int v10; // r2@10
  int v11; // r3@11
  int result; // r0@14

  __asm { VMOV.F32        S6, #7.5 }
  v7 = *(_BYTE *)(a1 + 624);
  __asm
  {
    VMOV.F32        S0, #10.0
    VLDR            S10, =1.3333
    VMOV            S8, R2
    VMOV.F32        S2, #8.0
    VMOV.F32        S4, #1.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S6 }
    VLDR            S6, =9.3333
    VMUL.F32        S0, S0, S8
    __asm { VMOVNE.F32      S2, S6 }
  if ( v7 )
    __asm { VMOVNE.F32      S4, S10 }
  __asm { VMUL.F32        S6, S2, S8 }
  v8 = *a2;
    VMUL.F32        S2, S0, S4
    VCMPE.F32       S6, S2
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S6 }
  v9 = *(_DWORD *)(v8 - 12);
  if ( v9 )
    v10 = 0;
    do
    {
      __asm { VADD.F32        S4, S0, S2 }
      v11 = *(_BYTE *)(v8 + v10++);
      if ( v11 == 10 )
        __asm { VMOVEQ.F32      S0, S4 }
    }
    while ( v10 < v9 );
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  return result;
}


int __fastcall Font::_drawTextSegment(float a1, int a2, int a3, int _R3, float a5, int a6, int a7, int a8, __int64 a9)
{
  float v9; // r6@1
  int v14; // r4@1
  int v15; // r5@1
  int result; // r0@4
  int v19; // [sp+0h] [bp-40h]@0
  __int64 v20; // [sp+10h] [bp-30h]@0
  int v21; // [sp+18h] [bp-28h]@0
  float v22; // [sp+1Ch] [bp-24h]@0

  v9 = a1;
  __asm { VMOV            S16, R3 }
  v14 = a3;
  v15 = a2;
  if ( a7 == 1 )
  {
    _R0 = Font::getLineLength(SLODWORD(a1), (int *)a3, 1065353216, 0);
    __asm
    {
      VMOV            S2, R0
      VMOV.F32        S0, #-0.5
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S2, S0
      VADD.F32        S16, S16, S0
    }
  }
  __asm
    VMOV            R3, S16
    VLDR            S0, [SP,#0x40+arg_0]
  if ( a8 == 1 )
    LODWORD(v20) = 0;
    __asm { VSTR            S0, [SP,#0x40+var_40] }
    result = Font::drawShadow(v9, v15, v14, _R3, *(float *)&v19, LODWORD(v9) + 16, a9, v20, v21, v22);
  else
    result = Font::drawCached(v9, v15, v14, _R3, v19, LODWORD(v9) + 16, 0, *(float *)&a9, SHIDWORD(a9), -1, 0, 0);
  return result;
}


int *__fastcall Font::getGlyphLocations(Font *this)
{
  return &dword_27C80FC;
}


void __fastcall Font::_scanUnicodeCharacterSize(Font *this, int a2, int a3, int a4, int a5)
{
  int v5; // r9@0
  unsigned int v6; // r1@2
  unsigned int v7; // r6@5
  int v8; // r7@5
  int *v9; // r8@5
  int v11; // r4@8
  int v12; // r10@8
  int v13; // r11@8
  int v14; // r5@8
  int v15; // r0@9
  unsigned int v16; // r0@14
  int v17; // r1@14
  int v18; // r5@17
  unsigned int v19; // r0@18
  int v20; // r1@18
  bool v21; // zf@20
  _DWORD *v22; // r0@24
  Font *v23; // r10@26
  void *v24; // r0@27
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  mce::TextureGroup *v27; // r4@32
  ImageUtils *v28; // r11@32
  void *v29; // r0@32
  unsigned int *v30; // r2@32
  int v31; // r0@33
  int v33; // r0@33
  unsigned int v37; // r4@33
  int v38; // r9@33
  _DWORD *v39; // r0@33
  _DWORD *v40; // r6@34
  int v41; // r7@34
  _DWORD *v42; // r5@36
  bool v43; // zf@39
  _DWORD *v44; // r0@43
  unsigned int v45; // r9@44
  bool v46; // zf@45
  int v47; // r8@49
  int v48; // r0@49
  _DWORD *v49; // r4@50
  int v50; // r6@50
  _DWORD *v51; // r7@52
  int v52; // r8@48
  int v53; // r5@48
  __int64 v54; // kr00_8@48
  int v55; // r4@48
  int v56; // r5@57
  int v57; // r1@57
  int v58; // r0@57
  int v59; // r6@58
  signed int v60; // r8@58
  mce::ImageBuffer *v61; // r0@59
  unsigned int v62; // r4@59
  int v63; // r0@65
  int v64; // r1@66
  int v65; // r8@67
  signed int v66; // r6@67
  mce::ImageBuffer *v67; // r0@68
  unsigned int v68; // r4@68
  bool v70; // zf@73
  _DWORD *v71; // r0@77
  signed int v72; // r1@82
  int v74; // r8@93
  _DWORD *v75; // r0@93
  _DWORD *v76; // r7@94
  int v77; // r6@94
  _DWORD *v78; // r4@96
  bool v79; // zf@99
  _DWORD *v80; // r0@103
  int v81; // r8@106
  _DWORD *v82; // r0@106
  _DWORD *v83; // r4@107
  int v84; // r6@107
  _DWORD *v85; // r7@109
  bool v86; // zf@112
  _DWORD *v87; // r0@116
  signed int v88; // [sp+4h] [bp-74h]@33
  Font v89; // [sp+8h] [bp-70h]@33
  int v90; // [sp+8h] [bp-70h]@66
  Font v91; // [sp+Ch] [bp-6Ch]@33
  int v92; // [sp+Ch] [bp-6Ch]@57
  int v93; // [sp+10h] [bp-68h]@33
  Font *v94; // [sp+14h] [bp-64h]@5
  Font *v95; // [sp+18h] [bp-60h]@5
  unsigned int v96; // [sp+1Ch] [bp-5Ch]@1
  int v97; // [sp+20h] [bp-58h]@5
  int v98; // [sp+20h] [bp-58h]@58
  int v99; // [sp+20h] [bp-58h]@67
  Font v100; // [sp+24h] [bp-54h]@32
  int v101; // [sp+2Ch] [bp-4Ch]@27
  unsigned int v102; // [sp+30h] [bp-48h]@1

  v96 = a4;
  v102 = a2;
  if ( a3 >= 0x10000 )
  {
    v6 = 65533;
    if ( *((_BYTE *)this + 624) )
      v6 = 63;
    Font::_scanUnicodeCharacterSize(this, v6, v6, v6 >> 8, a5);
    return;
  }
  v7 = this[414];
  v97 = a3;
  v8 = a3 % v7;
  v9 = *(int **)(this[413] + 4 * (a3 % v7));
  v94 = this + 413;
  v95 = this;
  _ZF = v9 == 0;
  if ( v9 )
    v5 = *v9;
    _ZF = *v9 == 0;
  if ( !_ZF )
    v11 = *(_DWORD *)(v5 + 4);
    v12 = 0;
    v13 = v5;
    v14 = *(_DWORD *)(v5 + 4);
    do
    {
      v15 = a3;
      if ( v14 == a3 )
      {
        ++v12;
      }
      else
        if ( v12 )
          goto LABEL_16;
        v12 = 0;
      v13 = *(_DWORD *)v13;
      if ( !v13 )
        break;
      v14 = *(_DWORD *)(v13 + 4);
      v16 = *(_DWORD *)(v13 + 4);
      v17 = v16 % v7;
      v15 = v16 / v7;
    }
    while ( v17 == v8 );
    if ( v12 )
LABEL_16:
      while ( v11 != a3 )
        v18 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 )
        {
          v11 = *(_DWORD *)(v18 + 4);
          v19 = *(_DWORD *)(v18 + 4);
          v20 = v19 % v7;
          v15 = v19 / v7;
          v9 = (int *)v5;
          v5 = *(_DWORD *)v5;
          if ( v20 == v8 )
            continue;
        }
        goto LABEL_24;
      v21 = v9 == 0;
      if ( v9 )
        v15 = *v9;
        v21 = *v9 == 0;
      if ( v21 )
LABEL_24:
        v22 = operator new(0xCu);
        *v22 = 0;
        v22[1] = v97;
        v22[2] = 0;
        v15 = std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                (int)v94,
                v8,
                v97,
                (int)v22);
      if ( *(_DWORD *)(v15 + 8) & 0x7FFFFFFF )
        return;
  v23 = v95;
  if ( *((_BYTE *)v95 + 624) )
    sub_DA73B4(&v101, (int *)v95 + 154);
    Font::_loadMsdfFontInformation((int)v95, &v101, (unsigned __int8)v96);
    v24 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v101 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
  v27 = (mce::TextureGroup *)v95[155];
  Font::_getFontSheetLocation(&v100, (int)v95, v96, a5);
  v28 = (ImageUtils *)(mce::TextureGroup::getTexturePair(v27, (const ResourceLocation *)&v100) + 64);
  v29 = (void *)(v100 - 12);
  v30 = (unsigned int *)&dword_28898C0;
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v100 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v72 = __ldrex(v30);
      while ( __strex(v72 - 1, v30) );
    else
      v72 = (*v30)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  ImageUtils::uncompress(v28, 0, (bool)v30);
  v91 = v95[151];
  v89 = v95[152];
  v31 = *(_DWORD *)mce::TextureContainer::getTextureDescription(v28) / v95[151];
  _R4 = v31;
  v93 = v31;
  v33 = *((_DWORD *)mce::TextureContainer::getTextureDescription(v28) + 1) / v95[152];
  __asm { VMOV            S0, R4 }
  v37 = v95[428];
  v88 = v33;
  __asm { VCVT.F32.S32    S16, S0 }
  v38 = v96 % v37;
  v39 = *(_DWORD **)(v95[427] + 4 * (v96 % v37));
  if ( !v39 )
    goto LABEL_43;
  v40 = (_DWORD *)*v39;
  v41 = *(_DWORD *)(*v39 + 4);
  while ( v41 != v96 )
    v42 = (_DWORD *)*v40;
    if ( *v40 )
      v41 = v42[1];
      v39 = v40;
      v40 = (_DWORD *)*v40;
      if ( v42[1] % v37 == v38 )
        continue;
  v43 = v39 == 0;
  if ( v39 )
    v43 = *v39 == 0;
  if ( v43 )
LABEL_43:
    v44 = operator new(0xCu);
    *v44 = 0;
    v44[1] = v96;
    v44[2] = 0;
    std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
      (int)(v95 + 427),
      v38,
      v96,
      (int)v44);
  __asm { VSTR            S16, [R0,#8] }
  v45 = v102;
  if ( !v102 )
    goto LABEL_125;
  v46 = v102 == 32;
  if ( v102 != 32 )
    v46 = v102 == 160;
  if ( v46 )
LABEL_125:
    v47 = v102 % v95[414];
    v48 = *(_DWORD *)(v95[413] + 4 * v47);
    if ( !v48 )
      goto LABEL_77;
    v49 = *(_DWORD **)v48;
    v50 = *(_DWORD *)(*(_DWORD *)v48 + 4);
    while ( v102 != v50 )
      v51 = (_DWORD *)*v49;
      if ( *v49 )
        v50 = v51[1];
        v48 = (int)v49;
        v49 = (_DWORD *)*v49;
        if ( v51[1] % v95[414] == v47 )
          continue;
    v70 = v48 == 0;
    if ( v48 )
      v48 = *(_DWORD *)v48;
      v70 = v48 == 0;
    if ( v70 )
LABEL_77:
      v71 = operator new(0xCu);
      *v71 = 0;
      v71[1] = v45;
      v71[2] = 0;
      v48 = std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              (int)v94,
              v47,
              v45,
              (int)v71);
    *(_DWORD *)(v48 + 8) = 1082130432;
    goto LABEL_105;
  v52 = v93 - 1;
  v53 = v97 % (signed int)(v89 * v91);
  v54 = *(_QWORD *)(v95 + 151);
  v55 = v53 % (signed int)v54;
  if ( v93 < 1 )
    _R11 = 0;
  else if ( v88 < 1 )
  else
    v56 = v53 / SHIDWORD(v54) * v88;
    v57 = v93 - 1;
    v58 = v93 * v55;
    v92 = v93 * v55;
    while ( 2 )
      v59 = v57 + v58;
      v60 = 0;
      v98 = v57;
        v61 = (mce::ImageBuffer *)mce::TextureContainer::getImage(v28, 0);
        v62 = mce::ImageBuffer::get(v61, 0);
        if ( *(_BYTE *)(v62
                      + (4 * (v59 + *(_DWORD *)mce::TextureContainer::getTextureDescription(v28) * (v60 + v56)) | 3)) )
          v52 = v98;
          v23 = v95;
          goto LABEL_64;
        ++v60;
      while ( v60 < v88 );
      v57 = v98 - 1;
      v58 = v92;
      if ( v98 > 0 )
      break;
    v23 = v95;
    v52 = v93 - 1;
LABEL_64:
    if ( v93 < 1 )
      _R11 = 0;
      v63 = v92;
      if ( v88 < 1 )
        _R11 = 0;
        v64 = 0;
        v90 = v52;
        while ( 2 )
          v65 = v64 + v63;
          v66 = 0;
          v99 = v64;
          do
          {
            v67 = (mce::ImageBuffer *)mce::TextureContainer::getImage(v28, 0);
            v68 = mce::ImageBuffer::get(v67, 0);
            if ( *(_BYTE *)(v68
                          + (4 * (v65 + *(_DWORD *)mce::TextureContainer::getTextureDescription(v28) * (v66 + v56)) | 3)) )
            {
              v23 = v95;
              _R11 = v99;
              goto LABEL_85;
            }
            ++v66;
          }
          while ( v66 < v88 );
          v64 = v99 + 1;
          v63 = v92;
          if ( v99 + 1 < v93 )
          break;
        v23 = v95;
LABEL_85:
        v52 = v90;
  __asm { VMOV.F32        S0, #8.0 }
  _R0 = v52 + 1 - _R11;
  __asm
    VMOV.F32        S18, #1.0
    VDIV.F32        S16, S0, S16
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
  if ( v96 - 224 < 0x19 )
    __asm { VMOVCC.F32      S16, S18 }
    VMUL.F32        S0, S0, S16
    VADD.F32        S20, S0, S18
  v74 = v45 % v23[414];
  v75 = *(_DWORD **)(v23[413] + 4 * v74);
  if ( !v75 )
    goto LABEL_103;
  v76 = (_DWORD *)*v75;
  v77 = *(_DWORD *)(*v75 + 4);
  while ( v45 != v77 )
    v78 = (_DWORD *)*v76;
    if ( *v76 )
      v77 = v78[1];
      v75 = v76;
      v76 = (_DWORD *)*v76;
      if ( v78[1] % v23[414] == v74 )
  v79 = v75 == 0;
  if ( v75 )
    v79 = *v75 == 0;
  if ( v79 )
LABEL_103:
    v80 = operator new(0xCu);
    *v80 = 0;
    v80[1] = v45;
    v80[2] = 0;
      (int)v94,
      v74,
      v45,
      (int)v80);
  __asm { VSTR            S20, [R0,#8] }
  if ( _R11 == 1 )
LABEL_105:
    std::unordered_map<int,float,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,float>>>::erase(
      (unsigned __int64 *)v23 + 210,
      &v102);
    VMOV            S0, R11
    VSUB.F32        S0, S18, S0
    VMUL.F32        S16, S0, S16
  v81 = v45 % v23[421];
  v82 = *(_DWORD **)(v23[420] + 4 * v81);
  if ( !v82 )
    goto LABEL_116;
  v83 = (_DWORD *)*v82;
  v84 = *(_DWORD *)(*v82 + 4);
  while ( v45 != v84 )
    v85 = (_DWORD *)*v83;
    if ( *v83 )
      v84 = v85[1];
      v82 = v83;
      v83 = (_DWORD *)*v83;
      if ( v85[1] % v23[421] == v81 )
  v86 = v82 == 0;
  if ( v82 )
    v86 = *v82 == 0;
  if ( v86 )
LABEL_116:
    v87 = operator new(0xCu);
    *v87 = 0;
    v87[1] = v45;
    v87[2] = 0;
      (int)(v23 + 420),
      v81,
      (int)v87);
}


int __fastcall Font::_loadAsciiFontInformation(int a1, int *a2)
{
  int v2; // r8@1
  __int64 v3; // kr00_8@1
  mce::TextureGroup *v4; // r4@1
  ImageUtils *v5; // r5@1
  char *v6; // r0@1
  unsigned int *v7; // r2@2
  char *v8; // r0@2
  mce::ImageBuffer *v9; // r0@3
  _DWORD *v10; // r4@3
  int result; // r0@3
  int v12; // r6@3
  signed int v18; // r1@6
  int v19; // t0@6
  int v20; // r8@6
  int v22; // r11@8
  signed int v23; // r10@8
  int v24; // r9@8
  int v25; // r0@9
  int v26; // r1@17
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  signed int v30; // r1@30
  int v31; // [sp+8h] [bp-68h]@1
  int v32; // [sp+Ch] [bp-64h]@3
  int v33; // [sp+10h] [bp-60h]@6
  int v34; // [sp+14h] [bp-5Ch]@6
  __int64 v35; // [sp+18h] [bp-58h]@8
  char *v36; // [sp+20h] [bp-50h]@1
  char *v37; // [sp+24h] [bp-4Ch]@1
  int v38; // [sp+28h] [bp-48h]@1

  v2 = a1;
  v31 = a1;
  v3 = *(_QWORD *)(a1 + 604);
  v4 = *(mce::TextureGroup **)(a1 + 620);
  sub_DA73B4((int *)&v36, a2);
  v37 = v36;
  v36 = (char *)&unk_28898CC;
  v38 = 0;
  v5 = (ImageUtils *)(mce::TextureGroup::getTexturePair(v4, (const ResourceLocation *)&v37) + 64);
  v6 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (unsigned int *)&dword_28898C0;
  v8 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v7);
      while ( __strex(v30 - 1, v7) );
      v30 = (*v7)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  ImageUtils::uncompress(v5, 0, (bool)v7);
  v9 = (mce::ImageBuffer *)mce::TextureContainer::getImage(v5, 0);
  v10 = (_DWORD *)mce::ImageBuffer::getStorageDEPRECATED(v9);
  v32 = *(_DWORD *)mce::TextureContainer::getTextureDescription(v5) / *(_DWORD *)(v2 + 604);
  result = *((_DWORD *)mce::TextureContainer::getTextureDescription(v5) + 1) / *(_DWORD *)(v2 + 608);
  v12 = result;
  if ( (signed int)v3 * HIDWORD(v3) >= 1 )
    _R0 = v32;
    __asm
      VMOV.F32        S0, #0.125
      VMOV            S2, R0
    result = 0;
      VCVT.F32.S32    S2, S2
      VMUL.F32        S16, S2, S0
    if ( _NF ^ _VF )
      __asm
      {
        VMOV.F32        S0, #4.0
        VMOV.F32        S2, #1.0
      }
        v26 = v32;
        do
          _R2 = v26--;
        while ( _R2 > 0 );
        __asm { VMOV.F32        S4, S0 }
        if ( result != 32 )
        {
          __asm
          {
            VMOV            S4, R2
            VCVT.F32.S32    S4, S4
            VDIV.F32        S4, S4, S16
            VADD.F32        S4, S4, S2
          }
        }
        ++result;
        __asm { VSTR            S4, [R1,#0x274] }
      while ( !_ZF );
        VMOV.F32        S18, #4.0
        VMOV.F32        S20, #1.0
        v18 = *(_DWORD *)(v2 + 604);
        v33 = result;
        v19 = result / v18;
        HIDWORD(_R0) = result % v18;
        v20 = v19 * v12;
        LODWORD(_R0) = v32;
        v34 = HIDWORD(_R0) * v32;
          HIDWORD(_R0) = _R0;
          if ( (signed int)_R0 < 1 )
            break;
          LODWORD(v35) = _R0 - 1;
          HIDWORD(v35) = _R0;
          v22 = 0;
          v23 = 1;
          v24 = _R0 - 1 + v34;
          do
            v25 = *(_BYTE *)(*v10
                           + (4 * (v24 + *(_DWORD *)mce::TextureContainer::getTextureDescription(v5) * (v22 + v20)) | 3));
            if ( v25 )
              break;
            ++v22;
            _VF = __OFSUB__(v23, v12);
            _NF = v23++ - v12 < 0;
          while ( _NF ^ _VF );
          _ZF = v25 == 0;
          _R0 = v35;
        while ( _ZF );
        __asm { VMOV.F32        S0, S18 }
        if ( v33 != 32 )
            VMOV            S0, R1
            VCVT.F32.S32    S0, S0
            VDIV.F32        S0, S0, S16
            VADD.F32        S0, S0, S20
        v2 = v31;
        result = v33 + 1;
        __asm { VSTR            S0, [R1,#0x274] }
      while ( v33 + 1 != (_DWORD)v3 * HIDWORD(v3) );
  return result;
}


int __fastcall Font::getLineLength(int a1, int *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int *v7; // r11@1
  int v8; // r7@2
  int v9; // r6@2
  signed int v10; // r0@2
  _DWORD *v11; // r3@6
  int v12; // r9@12
  _BYTE *v13; // r7@14
  int v18; // r4@14
  signed int v19; // r6@14
  int v20; // r11@15
  int v22; // r0@23
  signed int v23; // r1@23
  signed int v24; // r0@25
  int v25; // r1@33
  int v27; // r6@40
  signed int v28; // r0@40
  signed int v29; // r0@40
  signed int v30; // r1@42
  signed int v31; // r0@53
  float v33; // r0@58
  int result; // r0@58
  int v39; // [sp+0h] [bp-60h]@14
  int v40; // [sp+4h] [bp-5Ch]@2

  v4 = a1;
  v5 = a4;
  _R10 = a3;
  v7 = a2;
  if ( *(_BYTE *)(a1 + 15) )
  {
LABEL_13:
    v12 = 1;
    goto LABEL_14;
  }
  v8 = *a2;
  v9 = *(_DWORD *)(*a2 - 12);
  v10 = j_utf8proc_iterate(*a2, *(_DWORD *)(*a2 - 12), &v40);
  if ( v10 >= 1 )
    while ( 1 )
    {
      if ( v40 != 160 && v40 >= 128 && (unsigned int)(v40 - 57344) >> 8 > 0x18 )
      {
        v11 = (_DWORD *)dword_27C80F0;
        if ( dword_27C80F0 != *(_DWORD *)algn_27C80F4 )
        {
          while ( *v11 != v40 )
          {
            ++v11;
            if ( *(_DWORD **)algn_27C80F4 == v11 )
              goto LABEL_13;
          }
        }
        if ( v11 == *(_DWORD **)algn_27C80F4 )
          goto LABEL_13;
      }
      v9 -= v10;
      v8 += v10;
      v10 = j_utf8proc_iterate(v8, v9, &v40);
      if ( v10 <= 0 )
        v12 = 0;
        goto LABEL_14;
    }
  v12 = 0;
LABEL_14:
  v13 = (_BYTE *)*v7;
  __asm { VMOV            S16, R10 }
  v18 = *(_DWORD *)(*v7 - 12);
  v19 = j_utf8proc_iterate(*v7, *(_DWORD *)(*v7 - 12), &v39);
  if ( v19 < 1 )
    __asm
      VLDR            S18, =0.0
      VMOV.F32        S26, S18
    goto LABEL_58;
  __asm
    VLDR            S20, =0.0
    VMOV.F32        S22, #1.0
    VLDR            S24, =1.3333
  v20 = 0;
  __asm { VMOV.F32        S18, S20 }
LABEL_16:
  __asm { VMOV.F32        S26, S20 }
  do
    if ( v5 )
      while ( 1 )
        _R0 = Font::_getCharWidth((Font *)v4, v39, v12);
        __asm { VMOV.F32        S0, S22 }
        v18 -= v19;
        v13 += v19;
        if ( *(_BYTE *)(v4 + 624) )
          __asm { VMOVNE.F32      S0, S24 }
        if ( v39 == 10 )
          break;
        __asm
          VMOV            S2, R0
          VMUL.F32        S0, S0, S2
        if ( !(_NF ^ _VF) && v39 == 167 )
          v22 = *v13;
          v23 = 0;
          if ( v22 == 108 )
            v23 = 1;
          _ZF = v22 == 114;
          v24 = 0;
          if ( !_ZF )
            v24 = 1;
          v20 = v23 | v24 & v20;
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          goto LABEL_49;
        v19 = j_utf8proc_iterate((int)v13, v18, &v39);
        if ( v19 <= 0 )
          goto LABEL_58;
LABEL_53:
      v31 = j_utf8proc_iterate((int)v13, v18, &v39);
      __asm { VCMPE.F32       S26, S18 }
      v19 = v31;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S18, S26 }
      if ( v31 <= 0 )
        __asm { VMOV.F32        S26, S20 }
        break;
      goto LABEL_16;
      v18 -= v19;
      v13 += v19;
      if ( v39 == 167 )
        v25 = 167;
        __asm { VMOV.F32        S0, S20 }
      else
        v25 = v39;
          goto LABEL_53;
      if ( v18 >= 1 && v25 == 167 )
        v27 = *v13;
        v28 = j_utf8proc_iterate((int)v13, v18, &v39);
        v18 -= v28;
        v13 += v28;
        v29 = 0;
        if ( v27 == 108 )
          v29 = 1;
        v30 = 0;
        if ( v27 != 114 )
          v30 = 1;
        v20 = v29 | v30 & v20;
        goto LABEL_47;
      __asm
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
LABEL_47:
      v19 = j_utf8proc_iterate((int)v13, v18, &v39);
      if ( v19 <= 0 )
        goto LABEL_58;
LABEL_49:
      VADD.F32        S26, S0, S26
      VADD.F32        S0, S26, S22
    if ( !_ZF )
      __asm { VMOVNE.F32      S26, S0 }
    v19 = j_utf8proc_iterate((int)v13, v18, &v39);
  while ( v19 > 0 );
LABEL_58:
    VMUL.F32        S0, S26, S16
    VMOV            R0, S0
  v33 = ceilf(_R0);
  __asm { VMUL.F32        S0, S18, S16 }
  _R4 = v33;
  __asm { VMOV            R0, S0 }
  _R0 = ceilf(_R0);
    VMOV            S0, R0
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R1, S0
    VMOV            R0, S2
  if ( result < _R1 )
    result = _R1;
  return result;
}


void __fastcall Font::_scanUnicodeCharacterSize(Font *this, int a2, int a3, int a4, int a5)
{
  Font::_scanUnicodeCharacterSize(this, a2, a3, a4, a5);
}


signed int __fastcall Font::_willTextFitOnNextLine(int a1, int *a2, int a3, int a4)
{
  signed int result; // r0@1

  _R4 = a4;
  _R0 = Font::getLineLength(a1, a2, 1065353216, a3);
  __asm { VMOV            S0, R0 }
  result = 0;
  __asm
  {
    VMOV            S2, R4
    VCVT.F32.S32    S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int __fastcall Font::_getStringChopAmount(int a1, int *a2, int a3, int a4)
{
  int *v4; // r10@1
  int v6; // r5@1
  int v7; // r11@1
  int v8; // r9@1
  void *v9; // r0@1
  int v14; // r7@2
  int v15; // r6@2
  void *v17; // r0@5
  unsigned int *v18; // r2@6
  signed int v19; // r1@8
  void *v20; // r0@13
  unsigned int *v22; // r2@15
  signed int v23; // r1@17
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  int v26; // [sp+Ch] [bp-44h]@5
  int v27; // [sp+10h] [bp-40h]@2
  int v28; // [sp+18h] [bp-38h]@1

  v4 = a2;
  _R4 = a4;
  v6 = a3;
  v7 = a1;
  sub_DA7364((void **)&v28, "-");
  v8 = Font::getLineLength(v7, &v28, 1065353216, 0);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  }
  __asm { VMOV            S16, R4 }
  v14 = 0;
  v15 = Util::utf8len(v4, 0);
  sub_DA73B4(&v27, v4);
  while ( 1 )
    _R0 = Font::getLineLength(v7, &v27, 1065353216, v6) + v8;
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF || Util::utf8len(&v27, 0) < 2 )
      break;
    Util::utf8substring((const void **)&v26, &v27, 0, v15 + 1 + ~v14);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v27, &v26);
    ++v14;
    v17 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v26 - 4);
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
        j_j_j_j_j__ZdlPv_9(v17);
  v20 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  return v14;
}


int __fastcall Font::~Font(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  void *v4; // r0@3
  void *v5; // r0@6
  void *v6; // r5@7
  void *v7; // r0@8
  void *v8; // r0@11
  void *v9; // r5@12
  void *v10; // r0@13
  int v11; // r1@16
  void *v12; // r0@16
  int v13; // r1@17
  void *v14; // r0@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25

  v1 = a1;
  *(_DWORD *)a1 = &off_26D7390;
  std::_Rb_tree<std::tuple<std::string,Color>,std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>,std::_Select1st<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>,std::less<std::tuple<std::string,Color>>,std::allocator<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>>::_M_erase(
    a1 + 1736,
    *(_DWORD *)(a1 + 1744));
  v2 = *(void **)(v1 + 1716);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_DWORD *)(v1 + 1708), 4 * *(_DWORD *)(v1 + 1712));
  *(_DWORD *)(v1 + 1716) = 0;
  *(_DWORD *)(v1 + 1720) = 0;
  v4 = *(void **)(v1 + 1708);
  if ( v4 && (void *)(v1 + 1732) != v4 )
    operator delete(v4);
  v5 = *(void **)(v1 + 1688);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_DWORD *)(v1 + 1680), 4 * *(_DWORD *)(v1 + 1684));
  *(_DWORD *)(v1 + 1688) = 0;
  *(_DWORD *)(v1 + 1692) = 0;
  v7 = *(void **)(v1 + 1680);
  if ( v7 && (void *)(v1 + 1704) != v7 )
    operator delete(v7);
  v8 = *(void **)(v1 + 1660);
  if ( v8 )
      v9 = *(void **)v8;
      operator delete(v8);
      v8 = v9;
    while ( v9 );
  _aeabi_memclr4(*(_DWORD *)(v1 + 1652), 4 * *(_DWORD *)(v1 + 1656));
  *(_DWORD *)(v1 + 1660) = 0;
  *(_DWORD *)(v1 + 1664) = 0;
  v10 = *(void **)(v1 + 1652);
  if ( v10 && (void *)(v1 + 1676) != v10 )
    operator delete(v10);
  v11 = *(_DWORD *)(v1 + 616);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = *(_DWORD *)(v1 + 612);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v13 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v1 + 80));
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v1 + 68));
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v1 + 56));
  AppPlatformListener::~AppPlatformListener((AppPlatformListener *)v1);
  return v1;
}


int __fastcall Font::drawCached(int result, float a2, int a3, int a4, int a5, int a6, int a7, float a8, int a9, int a10, char a11, int a12)
{
  int *v12; // r10@1
  int v13; // r8@1
  int v14; // r6@1
  int v16; // r5@1
  int v17; // r11@4
  GuiData *v18; // r4@4
  ShaderColor *v27; // r0@4
  int v28; // r7@7
  __int64 v29; // kr00_8@10
  int v30; // r5@11
  int v31; // r1@16
  int v32; // r2@16
  int v33; // r3@16
  int v34; // r4@16
  int v35; // r11@16
  __int64 v36; // kr08_8@17
  unsigned int v37; // r1@17
  char *v38; // r5@19
  signed int v39; // r11@20
  __int64 v40; // r0@21
  int v41; // r12@22
  int v42; // r10@22
  int v43; // r2@22
  int v44; // r3@22
  int v45; // r4@22
  __int64 v46; // kr10_8@23
  int v47; // r4@23
  int v48; // r9@28
  _DWORD *v49; // r6@28
  int v50; // r0@30
  int v51; // r12@31
  int v52; // r2@31
  int v53; // r3@31
  int v54; // r7@31
  char v55; // r1^1@31
  __int64 v56; // kr18_8@32
  int v57; // r4@33
  unsigned int v58; // r1@38
  void *v59; // r0@43
  unsigned int *v60; // r2@46
  signed int v61; // r1@48
  int v62; // [sp+10h] [bp-F0h]@0
  int v63; // [sp+1Ch] [bp-E4h]@20
  int v64; // [sp+20h] [bp-E0h]@19
  int *v65; // [sp+30h] [bp-D0h]@22
  int v66; // [sp+34h] [bp-CCh]@4
  int v67; // [sp+38h] [bp-C8h]@10
  int v68; // [sp+3Ch] [bp-C4h]@10
  int v69; // [sp+58h] [bp-A8h]@30
  int v70; // [sp+5Ch] [bp-A4h]@31
  int v71; // [sp+60h] [bp-A0h]@31
  int v72; // [sp+64h] [bp-9Ch]@31
  int v73; // [sp+68h] [bp-98h]@31
  int v74; // [sp+6Ch] [bp-94h]@31
  int v75; // [sp+70h] [bp-90h]@31
  __int16 v76; // [sp+74h] [bp-8Ch]@31
  int v77; // [sp+78h] [bp-88h]@21
  int v78; // [sp+7Ch] [bp-84h]@22
  int v79; // [sp+80h] [bp-80h]@22
  int v80; // [sp+84h] [bp-7Ch]@22
  int v81; // [sp+88h] [bp-78h]@22
  int v82; // [sp+8Ch] [bp-74h]@22
  int v83; // [sp+90h] [bp-70h]@22
  __int16 v84; // [sp+94h] [bp-6Ch]@22
  int v85; // [sp+98h] [bp-68h]@16
  int v86; // [sp+9Ch] [bp-64h]@16
  int v87; // [sp+A0h] [bp-60h]@16
  int v88; // [sp+A4h] [bp-5Ch]@16
  int v89; // [sp+A8h] [bp-58h]@16
  int v90; // [sp+B0h] [bp-50h]@5
  signed int v91; // [sp+B4h] [bp-4Ch]@5
  __int64 v92; // [sp+B8h] [bp-48h]@5
  char v93; // [sp+C4h] [bp-3Ch]@4

  v12 = (int *)a3;
  v13 = result;
  v14 = a4;
  _ZF = a10 == -1;
  v16 = LODWORD(a2);
  if ( a10 == -1 )
  {
    result = *(_DWORD *)(*(_DWORD *)a3 - 12);
    _ZF = result == 0;
  }
  if ( !_ZF )
    v17 = *(_BYTE *)(v13 + 13);
    MatrixStack::push((MatrixStack *)&v93, *(_DWORD *)(LODWORD(a2) + 16) + 16);
    v18 = *(GuiData **)(v16 + 24);
    v66 = GuiData::isOddGuiScale(*(GuiData **)(v16 + 24));
    _R6 = GuiData::floorAlignToScreenPixel(v18, *(float *)&v14);
    __asm
    {
      VLDR            S0, [SP,#0x100+arg_0]
      VMOV            R1, S0
    }
    _R4 = GuiData::floorAlignToScreenPixel(v18, _R1);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v93);
      VMOV            S0, R6
      VLDR            S6, [R0,#8]
      VMOV            S2, R4
      VLDR            S10, [R0,#0x10]
      VLDR            S12, [R0,#0x14]
      VMUL.F32        S6, S6, S0
      VLDR            S14, [R0,#0x18]
      VMUL.F32        S10, S10, S2
      VLDR            S8, [R0,#0xC]
      VMUL.F32        S12, S12, S2
      VLDR            S1, [R0,#0x1C]
      VMUL.F32        S14, S14, S2
      VLDMIA          R0, {S3-S4}
      VMUL.F32        S2, S1, S2
      VMUL.F32        S4, S4, S0
      VMUL.F32        S3, S3, S0
      VMUL.F32        S0, S8, S0
      VADD.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VADD.F32        S8, S10, S3
      VLDR            S10, [R0,#0x34]
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0,#0x30]
      VADD.F32        S6, S6, S12
      VADD.F32        S4, S4, S10
      VADD.F32        S2, S8, S2
      VADD.F32        S0, S0, S14
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    v27 = *(ShaderColor **)(v16 + 52);
    if ( _ZF )
      v90 = 1048576000;
      v91 = 1048576000;
      v92 = 4575657222456999936LL;
    else
      v90 = Color::WHITE;
      v91 = LODWORD(unk_283E614);
      v92 = qword_283E618;
    ShaderColor::setColor(v27, (const Color *)&v90);
    v28 = *(_DWORD *)(v16 + 40);
    __asm { VLDR            S16, [SP,#0x100+arg_1C] }
    if ( _ZF || (LODWORD(a8) ^ 1) != 1 || Tessellator::forceTessellateIntercept(*(Tessellator **)(v16 + 40)) )
      __asm { VSTR            S16, [SP,#0x100+var_F0] }
      Font::_makeTextObject((int)&v67, v13, v28, (int)v12, __PAIR__(LODWORD(a8), a6), a10, a11, v62, v66);
      Font::TextObject::render((int)&v67, v16, v13, a9);
      v29 = *(_QWORD *)&v67;
      if ( v67 != v68 )
      {
        v30 = v67;
        do
        {
          mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v30 + 100));
          mce::Mesh::~Mesh((mce::Mesh *)v30);
          v30 += 132;
        }
        while ( HIDWORD(v29) != v30 );
      }
      if ( (_DWORD)v29 )
        operator delete((void *)v29);
      v31 = *(_DWORD *)(a6 + 4);
      v32 = *(_DWORD *)(a6 + 8);
      v33 = *(_DWORD *)(a6 + 12);
      v85 = *(_DWORD *)a6;
      v86 = v31;
      v87 = v32;
      v88 = v33;
      sub_DA73B4(&v89, v12);
      v34 = v13 + 1736;
      v35 = std::_Rb_tree<std::tuple<std::string,Color>,std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>,std::_Select1st<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>,std::less<std::tuple<std::string,Color>>,std::allocator<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>>::find(
              v13 + 1736,
              (int)&v85);
      if ( v35 == v13 + 1740 )
        v64 = v16;
        v38 = std::map<std::tuple<std::string,Color>,std::vector<Font::TextObject,std::allocator<Font::TextObject>>,std::less<std::tuple<std::string,Color>>,std::allocator<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>>::operator[](
                v13 + 1736,
                (int)&v85);
        if ( sub_DA7BFC(v12, (_BYTE *)dword_27C80D8, 0, *(_DWORD *)(dword_27C80D8 - 12)) == -1 )
          __asm { VSTR            S16, [SP,#0x100+var_F0] }
          Font::_makeTextObject((int)&v69, v13, v28, (int)v12, __PAIR__(LODWORD(a8), a6), -1, a11, v62, v66);
          v48 = a9;
          v49 = v38 + 4;
          v50 = *((_DWORD *)v38 + 1);
          if ( v50 == *((_DWORD *)v38 + 2) )
          {
            std::vector<Font::TextObject,std::allocator<Font::TextObject>>::_M_emplace_back_aux<Font::TextObject>(
              (unsigned __int64 *)v38,
              (int)&v69);
            v56 = *(_QWORD *)&v69;
            if ( v69 != v70 )
            {
              v57 = v69;
              do
              {
                mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v57 + 100));
                mce::Mesh::~Mesh((mce::Mesh *)v57);
                v57 += 132;
              }
              while ( HIDWORD(v56) != v57 );
            }
            if ( (_DWORD)v56 )
              operator delete((void *)v56);
            v34 = v13 + 1736;
            v49 = v38 + 4;
          }
          else
            *(_DWORD *)v50 = v69;
            v69 = 0;
            v51 = v50 + 12;
            *(_DWORD *)(v50 + 4) = v70;
            v70 = 0;
            *(_DWORD *)(v50 + 8) = v71;
            v71 = 0;
            v52 = v73;
            v53 = v74;
            v54 = v75;
            *(_DWORD *)v51 = v72;
            *(_DWORD *)(v51 + 4) = v52;
            *(_DWORD *)(v51 + 8) = v53;
            *(_DWORD *)(v51 + 12) = v54;
            v55 = HIBYTE(v76);
            *(_BYTE *)(v50 + 28) = v76;
            *(_BYTE *)(v50 + 29) = v55;
            *v49 += 32;
        else
          v63 = v35;
          v39 = 0;
          do
            __asm { VSTR            S16, [SP,#0x100+var_F0] }
            Font::_makeTextObject((int)&v77, v13, v28, (int)v12, __PAIR__(LODWORD(a8), a6), -1, a11, v62, v66);
            v40 = *(_QWORD *)(v38 + 4);
            if ( (_DWORD)v40 == HIDWORD(v40) )
              std::vector<Font::TextObject,std::allocator<Font::TextObject>>::_M_emplace_back_aux<Font::TextObject>(
                (unsigned __int64 *)v38,
                (int)&v77);
              v65 = v12;
              v42 = v34;
              v46 = *(_QWORD *)&v77;
              v47 = v77;
              if ( v77 != v78 )
                do
                {
                  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v47 + 100));
                  mce::Mesh::~Mesh((mce::Mesh *)v47);
                  v47 += 132;
                }
                while ( HIDWORD(v46) != v47 );
              if ( (_DWORD)v46 )
                operator delete((void *)v46);
            else
              *(_DWORD *)v40 = v77;
              v41 = v40 + 12;
              v77 = 0;
              *(_DWORD *)(v40 + 4) = v78;
              v78 = 0;
              *(_DWORD *)(v40 + 8) = v79;
              v79 = 0;
              v43 = v81;
              v44 = v82;
              v45 = v83;
              *(_DWORD *)v41 = v80;
              *(_DWORD *)(v41 + 4) = v43;
              *(_DWORD *)(v41 + 8) = v44;
              *(_DWORD *)(v41 + 12) = v45;
              BYTE5(v40) = HIBYTE(v84);
              *(_BYTE *)(v40 + 28) = v84;
              *(_BYTE *)(v40 + 29) = BYTE5(v40);
              *((_DWORD *)v38 + 1) += 32;
            v34 = v42;
            v12 = v65;
            ++v39;
          while ( v39 < 10 );
          v35 = v63;
        v58 = (*v49 - *(_DWORD *)v38) >> 5;
        if ( v58 < 2 )
          Font::TextObject::render(*v49 - 32, v64, v13, v48);
          Font::TextObject::render(*(_DWORD *)v38 + 32 * (*(_DWORD *)(v13 + 1760) % v58), v64, v13, v48);
        if ( *(_DWORD *)(v13 + 1756) >= 0x1F4u )
          std::_Rb_tree<std::tuple<std::string,Color>,std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>,std::_Select1st<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>,std::less<std::tuple<std::string,Color>>,std::allocator<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>>::_M_erase(
            v34,
            *(_DWORD *)(v13 + 1744));
          *(_DWORD *)(v13 + 1744) = 0;
          *(_DWORD *)(v13 + 1748) = v35;
          *(_DWORD *)(v13 + 1752) = v35;
          *(_DWORD *)(v13 + 1756) = 0;
      else
        v36 = *(_QWORD *)(v35 + 36);
        v37 = (HIDWORD(v36) - (signed int)v36) >> 5;
        if ( v37 < 2 )
          Font::TextObject::render(HIDWORD(v36) - 32, v16, v13, a9);
          Font::TextObject::render(v36 + 32 * (*(_DWORD *)(v13 + 1760) % v37), v16, v13, a9);
      v59 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v89 - 4);
        if ( &pthread_create )
          __dmb();
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j_j__ZdlPv_9(v59);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v93);
  return result;
}


void __fastcall Font::_buildChar(Font *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Font::_buildChar(a1, a2, a3, a4, a5, a6, a7, a8);
}


void __fastcall Font::~Font(int a1)
{
  void *v1; // r0@1

  v1 = (void *)Font::~Font(a1);
  j_j_j__ZdlPv_3(v1);
}


int __fastcall Font::setCaretColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 32) = v2;
  *(_DWORD *)(result + 36) = v3;
  *(_DWORD *)(result + 40) = v4;
  *(_DWORD *)(result + 44) = v5;
  return result;
}


void __fastcall Font::_getFontSheetLocation(Font *this, int a2, int a3, int a4)
{
  unsigned __int8 v4; // r6@1
  bool v5; // zf@1
  int v6; // r5@1
  Font *v7; // r4@1
  int v8; // r1@8
  void *v9; // r0@8
  char *v10; // r1@10
  char *v11; // r0@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  void *v16; // [sp+4h] [bp-34h]@12
  int v17; // [sp+8h] [bp-30h]@8
  char *v18; // [sp+Ch] [bp-2Ch]@8
  char *v19; // [sp+10h] [bp-28h]@8
  Font v20; // [sp+14h] [bp-24h]@8
  void *v21; // [sp+18h] [bp-20h]@11
  void *v22; // [sp+1Ch] [bp-1Ch]@5

  v4 = a3;
  v5 = a3 == 0;
  v6 = a2;
  v7 = this;
  if ( !a3 )
    v5 = a4 == 0;
  if ( v5 )
  {
    sub_DA73B4((int *)&v22, (int *)(a2 + 612));
    *v7 = (Font)v22;
    v22 = &unk_28898CC;
LABEL_6:
    v7[1] = 0;
    return;
  }
  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 616) - 12) )
    sub_DA73B4((int *)&v21, (int *)&unk_27C80E8);
    *v7 = (Font)v21;
    v21 = &unk_28898CC;
    goto LABEL_6;
  sub_DA73B4(&v17, (int *)(a2 + 616));
  Font::getUnicodeFontNameWithPage((const void **)&v18, v8, (unsigned int *)&v17, v4);
  v19 = v18;
  v18 = (char *)&unk_28898CC;
  v20 = 0;
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  if ( mce::TextureGroup::getTexturePair(*(mce::TextureGroup **)(v6 + 620), (const ResourceLocation *)&v19) )
    *v7 = (Font)v19;
    v10 = (char *)&unk_28898CC;
    v19 = (char *)&unk_28898CC;
    v7[1] = v20;
  else
    sub_DA73B4((int *)&v16, (int *)&unk_27C80E8);
    *v7 = (Font)v16;
    v10 = v19;
    v16 = &unk_28898CC;
  v11 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v10 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
}


int __fastcall Font::_draw(float a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8, int a9, int a10, char a11, int a12)
{
  int v17; // [sp+0h] [bp-38h]@0
  int v18; // [sp+1Ch] [bp-1Ch]@0

  __asm
  {
    VLDR            S2, [SP,#0x38+arg_1C]
    VLDR            S0, [SP,#0x38+arg_0]
    VSTR            S2, [SP,#0x38+var_1C]
    VSTR            S0, [SP,#0x38+var_38]
  }
  return Font::drawCached(a1, a2, a3, a4, v17, a6, a7, a8, a9, a10, a11, v18);
}


signed int __fastcall Font::_getReplacementCharacter(Font *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 624);
  result = 65533;
  if ( v1 )
    result = 63;
  return result;
}


void __fastcall Font::resetFontData(Font *this)
{
  Font::resetFontData(this);
}


int __fastcall Font::drawShadow(float a1, int a2, int a3, int a4, float a5, int anonymous0a, __int64 anonymous0, __int64 a6, int a7, float a8)
{
  float v11; // r7@1
  int v12; // r4@1
  float v13; // r6@1
  int v18; // r5@1
  int v19; // r9@1
  int v20; // r8@1
  unsigned int v21; // r1@2
  int v22; // r6@2
  int v23; // r5@2
  signed int v24; // r0@3
  int v27; // [sp+0h] [bp-A0h]@0
  int v28; // [sp+1Ch] [bp-84h]@0
  unsigned int v29; // [sp+24h] [bp-7Ch]@2
  unsigned int v30; // [sp+28h] [bp-78h]@2
  unsigned int v31; // [sp+2Ch] [bp-74h]@2
  int v32; // [sp+30h] [bp-70h]@2
  char v33; // [sp+34h] [bp-6Ch]@2
  int v34; // [sp+38h] [bp-68h]@2
  int v35; // [sp+3Ch] [bp-64h]@2
  int v36; // [sp+40h] [bp-60h]@2
  int v37; // [sp+44h] [bp-5Ch]@2
  int v38; // [sp+4Ch] [bp-54h]@3

  _R10 = a4;
  v11 = a1;
  v13 = *(float *)&anonymous0;
  v12 = anonymous0a;
  __asm { VMOV            S20, R10 }
  v18 = HIDWORD(anonymous0);
  v19 = a3;
  v20 = a2;
  __asm
  {
    VLDR            S18, [SP,#0xA0+arg_10]
    VLDR            S16, [SP,#0xA0+arg_0]
  }
  if ( !*(_BYTE *)(LODWORD(a1) + 624) )
    __asm
    {
      VMOV.F32        S22, #1.0
      VMOV.F32        S24, #0.5
    }
    v34 = *(_DWORD *)(LODWORD(a1) + 16);
    v35 = *(_DWORD *)(LODWORD(a1) + 20);
    v36 = *(_DWORD *)(LODWORD(a1) + 24);
    v37 = *(_DWORD *)(LODWORD(a1) + 28);
    v21 = *(_DWORD *)(LODWORD(a1) + 48);
    v22 = *(_DWORD *)a3;
    v33 = *(_BYTE *)(LODWORD(a1) + 52);
    v31 = v21 >> 24;
    v23 = *(_DWORD *)(*(_DWORD *)a3 - 12);
    v30 = v21 >> 16;
    v32 = *(_DWORD *)(LODWORD(a1) + 48);
    v29 = (*(_DWORD *)(LODWORD(a1) + 48) & 0xFF00u) >> 8;
    while ( 1 )
      v24 = j_utf8proc_iterate(v22, v23, &v38);
      if ( v24 < 1 )
        break;
      v23 -= v24;
      v22 += v24;
      if ( v38 >= 256 )
      {
        __asm { VMOV.F32        S22, S24 }
      }
    __asm { VADD.F32        S0, S22, S20 }
    v18 = HIDWORD(anonymous0);
    v13 = *(float *)&anonymous0;
    v12 = anonymous0a;
      VSTR            S18, [SP,#0xA0+var_84]
      VMOV            R3, S0
      VADD.F32        S0, S22, S16
      VSTR            S0, [SP,#0xA0+var_A0]
    Font::drawCached(v11, v20, v19, _R3, v27, anonymous0a, 1, *(float *)&anonymous0, SHIDWORD(anonymous0), -1, 0, v28);
    if ( !*(_BYTE *)(LODWORD(v11) + 12) )
      *(_DWORD *)(LODWORD(v11) + 16) = v34;
      *(_DWORD *)(LODWORD(v11) + 20) = v35;
      *(_DWORD *)(LODWORD(v11) + 24) = v36;
      *(_DWORD *)(LODWORD(v11) + 28) = v37;
      *(_BYTE *)(LODWORD(v11) + 48) = v32;
      *(_BYTE *)(LODWORD(v11) + 49) = v29;
      *(_BYTE *)(LODWORD(v11) + 50) = v30;
      *(_BYTE *)(LODWORD(v11) + 51) = v31;
      *(_BYTE *)(LODWORD(v11) + 52) = v33;
    VSTR            S18, [SP,#0xA0+var_84]
    VSTR            S16, [SP,#0xA0+var_A0]
  return Font::drawCached(v11, v20, v19, _R10, v27, v12, 0, v13, v18, -1, 1, v28);
}


char *__fastcall Font::_findNextWordPosition(int a1, int *a2, char *a3, int a4, unsigned int *a5, char **a6)
{
  int *v6; // r4@1
  char *result; // r0@2
  char *v8; // r0@4
  char *v9; // r0@6

  v6 = a2;
  *a5 = (unsigned int)a3;
  *a6 = a3;
  if ( *(_DWORD *)(*a2 - 12) > (unsigned int)a3 )
  {
    if ( (unsigned __int8)a3[*a2] != a4 )
    {
      v8 = sub_DA8964(a2, a4, *a5) - 1;
      *a6 = v8;
      if ( v8 == (char *)-2 )
        *a6 = *(char **)(*v6 - 12);
      v9 = sub_DA8964(v6, 10, *a5);
      a3 = *a6;
      if ( v9 != (char *)-1 && v9 < a3 )
      {
        *a6 = v9;
        a3 = v9;
      }
    }
    result = &a3[-*a5 + 1];
  }
  else
    result = 0;
  return result;
}


signed int __fastcall Font::_scanEmptyCol(Font *this, mce::TextureContainer *a2, int a3, int a4, int a5)
{
  int v5; // r10@1
  int v6; // r8@1
  mce::TextureContainer *v7; // r6@1
  int v8; // r5@2
  signed int v9; // r7@2
  int v10; // r9@2
  mce::ImageBuffer *v11; // r0@3
  unsigned int v12; // r4@3

  v5 = a3;
  v6 = a4;
  v7 = a2;
  if ( a3 < 1 )
  {
    v9 = 1;
  }
  else
    v8 = 0;
    v9 = 0;
    v10 = a5 * a3;
    while ( 1 )
    {
      v11 = (mce::ImageBuffer *)mce::TextureContainer::getImage(v7, 0);
      v12 = mce::ImageBuffer::get(v11, 0);
      if ( *(_BYTE *)(v12 + (4 * (v6 + *(_DWORD *)mce::TextureContainer::getTextureDescription(v7) * (v10 + v8)) | 3)) )
        break;
      if ( ++v8 >= v5 )
        return 1;
    }
  return v9;
}


int __fastcall Font::getBaseFontHeight(Font *this)
{
  int result; // r0@3

  __asm
  {
    VMOV.F32        S0, #8.0
    VLDR            S2, =9.3333
  }
  if ( *((_BYTE *)this + 624) )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Font::drawWordWrap(float a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  float v17; // [sp+0h] [bp-38h]@0
  int v18; // [sp+4h] [bp-34h]@0
  int v19; // [sp+10h] [bp-28h]@0
  __int64 v20; // [sp+20h] [bp-18h]@0

  __asm
  {
    VLDR            S0, [SP,#0x38+arg_C]
    VLDR            S2, [SP,#0x38+arg_4]
    VLDR            S4, [SP,#0x38+arg_0]
  }
  LODWORD(v20) = a12;
    VSTR            S0, [SP,#0x38+var_28]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S4, [SP,#0x38+var_38]
  return Font::_drawWordWrap(a1, a2, a3, SLODWORD(a4), v17, v18, a7, -1, v19, a9, a10, a11, v20);
}


signed int __fastcall Font::_containsWideChar(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int v4; // r0@1
  _DWORD *v5; // r3@5
  signed int result; // r0@11
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = *a2;
  v3 = *(_DWORD *)(*a2 - 12);
  v4 = j_utf8proc_iterate(*a2, *(_DWORD *)(*a2 - 12), &v7);
  if ( v4 < 1 )
  {
LABEL_11:
    result = 0;
  }
  else
    while ( 1 )
    {
      if ( v7 != 160 && v7 >= 128 && (unsigned int)(v7 - 57344) >> 8 > 0x18 )
      {
        v5 = (_DWORD *)dword_27C80F0;
        if ( dword_27C80F0 != *(_DWORD *)algn_27C80F4 )
        {
          while ( *v5 != v7 )
          {
            ++v5;
            if ( *(_DWORD **)algn_27C80F4 == v5 )
              goto LABEL_12;
          }
        }
        if ( v5 == *(_DWORD **)algn_27C80F4 )
          break;
      }
      v3 -= v4;
      v2 += v4;
      v4 = j_utf8proc_iterate(v2, v3, &v7);
      if ( v4 <= 0 )
        goto LABEL_11;
    }
LABEL_12:
    result = 1;
  return result;
}


int __fastcall Font::_getCharWidth(Font *this, int a2, int a3)
{
  unsigned int v3; // r10@1
  Font *v4; // r8@1
  int v5; // r3@8
  int v6; // r3@14
  Font v12; // r9@31
  _DWORD *v13; // r0@31
  _DWORD *v14; // r4@32
  int v15; // r5@32
  _DWORD *v16; // r6@34
  int *v18; // r11@43
  bool v19; // zf@43
  int v20; // r5@46
  int v22; // r8@46
  Font v23; // r6@46
  int v24; // r7@46
  unsigned int v25; // r0@52
  int v26; // r1@52
  int v27; // r6@54
  Font v28; // r4@56
  unsigned int v29; // r0@57
  int v30; // r1@57
  bool v31; // zf@59
  _DWORD *v32; // r0@63
  int result; // r0@65
  int v34; // [sp+8h] [bp-38h]@46
  unsigned int v35; // [sp+Ch] [bp-34h]@31

  v3 = a2;
  v4 = this;
  if ( a2 == 160 )
  {
    a2 = 32;
  }
  else if ( !a2 )
  if ( a2 > 255 || a3 == 1 )
    if ( a2 >= 0x10000 )
    {
      a2 = 65533;
      if ( *((_BYTE *)this + 624) )
        a2 = 63;
    }
    if ( a3 )
      goto LABEL_68;
    if ( *(_DWORD *)algn_27C80F4 != dword_27C80F0 )
      v6 = 0;
      while ( a2 != *(_DWORD *)(dword_27C80F0 + 4 * v6) )
      {
        if ( ++v6 >= (unsigned int)((*(_DWORD *)algn_27C80F4 - dword_27C80F0) >> 2) )
          goto LABEL_19;
      }
      a2 = v6;
LABEL_19:
    if ( a2 >= 256 )
LABEL_68:
      v5 = a2 / 256;
    else
      v5 = 0;
  else
    v5 = 0;
  if ( (signed int)v3 <= 255 && !a3 )
    _R0 = &this[v3];
    __asm { VLDR            S16, [R0,#0x274] }
    goto LABEL_65;
  if ( a2 > 255 )
    if ( v3 == 160 )
LABEL_30:
      _R0 = &this[a2];
      __asm { VLDR            S16, [R0,#0x274] }
      goto LABEL_65;
  else if ( v3 == 160 || a3 != 1 )
    goto LABEL_30;
  Font::_scanUnicodeCharacterSize(this, a2, v3, v5, a3);
  v12 = v4[413];
  v35 = v4[414];
  v13 = *(_DWORD **)(v12 + 4 * (v3 % v35));
  if ( !v13 )
    goto LABEL_41;
  v14 = (_DWORD *)*v13;
  v15 = *(_DWORD *)(*v13 + 4);
  while ( v15 != v3 )
    v16 = (_DWORD *)*v14;
    if ( *v14 )
      v15 = v16[1];
      v13 = v14;
      v14 = (_DWORD *)*v14;
      if ( v16[1] % v35 == v3 % v35 )
        continue;
  _ZF = v13 == 0;
  if ( v13 )
    _ZF = *v13 == 0;
  if ( _ZF )
LABEL_41:
    v3 = 65533;
    if ( *((_BYTE *)v4 + 624) )
      v3 = 63;
  __asm { VLDR            S16, =0.0 }
  v18 = *(int **)(v12 + 4 * (v3 % v35));
  v19 = v18 == 0;
  if ( v18 )
    v12 = *v18;
    v19 = *v18 == 0;
  if ( !v19 )
    v20 = *(_DWORD *)(v12 + 4);
    _R0 = (int)(v4 + 413);
    v22 = 0;
    v23 = v12;
    v34 = _R0;
    v24 = *(_DWORD *)(v12 + 4);
    do
      if ( v3 == v24 )
        ++v22;
      else
        if ( v22 )
          goto LABEL_54;
        v22 = 0;
      v23 = *(_DWORD *)v23;
      if ( !v23 )
        break;
      v24 = *(_DWORD *)(v23 + 4);
      v25 = *(_DWORD *)(v23 + 4);
      v26 = v25 % v35;
      _R0 = v25 / v35;
    while ( v26 == v3 % v35 );
    if ( !v22 )
LABEL_54:
    v27 = v3 % v35;
    while ( v3 != v20 )
      v28 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
        v20 = *(_DWORD *)(v28 + 4);
        v29 = *(_DWORD *)(v28 + 4);
        v30 = v29 % v35;
        _R0 = v29 / v35;
        v18 = (int *)v12;
        v12 = *(_DWORD *)v12;
        if ( v30 == v27 )
          continue;
      goto LABEL_63;
    v31 = v18 == 0;
    if ( v18 )
      _R0 = *v18;
      v31 = *v18 == 0;
    if ( v31 )
LABEL_63:
      v32 = operator new(0xCu);
      *v32 = 0;
      v32[1] = v3;
      v32[2] = 0;
      _R0 = std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v34,
              v27,
              v3,
              (int)v32);
    __asm { VLDR            S16, [R0,#8] }
LABEL_65:
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall Font::draw(float a1, int a2, int a3, int a4, int a5, float a6, float a7, int a8, int a9, int a10)
{
  int v15; // [sp+0h] [bp-30h]@0
  int v16; // [sp+1Ch] [bp-14h]@0

  __asm
  {
    VLDR            S2, [SP,#0x30+arg_14]
    VLDR            S0, [SP,#0x30+arg_0]
    VSTR            S2, [SP,#0x30+var_14]
    VSTR            S0, [SP,#0x30+var_30]
  }
  return Font::drawCached(a1, a2, a3, a4, v15, SLODWORD(a6), 0, a7, a8, a9, 0, v16);
}


Font *__fastcall Font::onAppSuspended(Font *this)
{
  Font *v1; // r4@1
  Font *result; // r0@1

  v1 = this;
  std::_Rb_tree<std::tuple<std::string,Color>,std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>,std::_Select1st<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>,std::less<std::tuple<std::string,Color>>,std::allocator<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>>::_M_erase(
    (int)(this + 434),
    this[436]);
  result = v1 + 435;
  v1[436] = 0;
  v1[437] = (Font)(v1 + 435);
  v1[438] = (Font)(v1 + 435);
  v1[439] = 0;
  return result;
}


int __fastcall Font::drawWordWrapMaxLine(float a1, float a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
  float v18; // [sp+0h] [bp-38h]@0
  int v19; // [sp+4h] [bp-34h]@0
  int v20; // [sp+10h] [bp-28h]@0
  __int64 v21; // [sp+20h] [bp-18h]@0

  __asm
  {
    VLDR            S0, [SP,#0x38+arg_10]
    VLDR            S2, [SP,#0x38+arg_4]
    VLDR            S4, [SP,#0x38+arg_0]
  }
  LODWORD(v21) = a13;
    VSTR            S0, [SP,#0x38+var_28]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S4, [SP,#0x38+var_38]
  return Font::_drawWordWrap(a1, a2, a3, a4, v18, v19, a7, a8, v20, a10, a11, a12, v21);
}


int __fastcall Font::_drawWordWrap(float a1, float a2, int a3, int _R3, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int anonymous0, __int64 a12)
{
  int v13; // r5@1
  int v14; // r9@1
  __int64 v15; // kr00_8@1
  int v20; // r4@1
  int v21; // r6@1
  signed int v22; // r0@2
  _DWORD *v23; // r0@5
  int v25; // r6@5
  char *v28; // r0@12
  unsigned int *v30; // r2@14
  signed int v31; // r1@16
  float v32; // [sp+0h] [bp-38h]@0
  int v33; // [sp+0h] [bp-38h]@5
  int v34; // [sp+10h] [bp-28h]@0
  __int64 v35; // [sp+10h] [bp-28h]@5
  int v36; // [sp+18h] [bp-20h]@0
  float v37; // [sp+1Ch] [bp-1Ch]@0
  int v38; // [sp+24h] [bp-14h]@1
  _DWORD *v39; // [sp+28h] [bp-10h]@5
  void (*v40)(void); // [sp+30h] [bp-8h]@5
  signed int (__fastcall *v41)(const void ****, const void **, int, _DWORD *); // [sp+34h] [bp-4h]@5
  char *v42; // [sp+38h] [bp+0h]@1

  v13 = LODWORD(a1);
  v38 = LODWORD(a2);
  *(_BYTE *)(LODWORD(a1) + 12) = 0;
  v14 = a3;
  v15 = *(_QWORD *)a7;
  __asm { VMOV            S18, R3 }
  *(_QWORD *)(LODWORD(a1) + 24) = *(_QWORD *)(a7 + 8);
  *(_DWORD *)(LODWORD(a1) + 16) = v15;
  *(_DWORD *)(LODWORD(a1) + 20) = &v42;
  *(_BYTE *)(LODWORD(a1) + 52) = 0;
  *(_DWORD *)(LODWORD(a1) + 48) = 0;
  v20 = *(_DWORD *)a3;
  __asm { VLDR            S22, [SP,#0x64+arg_10] }
  v21 = *(_DWORD *)(*(_DWORD *)a3 - 12);
  __asm
  {
    VLDR            S20, [SP,#0x64+arg_4]
    VLDR            S16, [SP,#0x64+arg_0]
  }
  while ( 1 )
    v22 = j_utf8proc_iterate(v20, v21, (int *)&v42);
    if ( v22 < 1 )
      break;
    v21 -= v22;
    v20 += v22;
    if ( v42 == (char *)167 )
    {
      *(_BYTE *)(v13 + 13) = 0;
    }
  v42 = (char *)&unk_28898CC;
  v23 = operator new(4u);
  __asm { VMOV            R3, S16 }
  *v23 = &v42;
  v39 = v23;
  v40 = (void (*)(void))sub_C8AC88;
  v41 = sub_C8ABEC;
    VSTR            S22, [SP,#0x64+var_54]
    VSTR            S20, [SP,#0x64+var_64]
  v25 = Font::_processHeightWrap(*(float *)&v13, v14, (int)sub_C8AC88, _R3, v32, a8, anonymous0, a11, v34, (int)&v39);
  if ( v40 )
    v40();
  if ( a11 == 1 )
    _R0 = Font::getLineLength(v13, (int *)&v42, 1065353216, 0);
    __asm
      VMOV            S2, R0
      VMOV.F32        S0, #-0.5
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S2, S0
      VADD.F32        S18, S18, S0
  __asm { VMOV            R3, S18 }
  if ( a10 == 1 )
    LODWORD(v35) = 0;
    __asm { VSTR            S16, [SP,#0x64+var_64] }
    Font::drawShadow(
      *(float *)&v13,
      v38,
      (int)&v42,
      _R3,
      *(float *)&v33,
      v13 + 16,
      __PAIR__(a12, anonymous0),
      v35,
      v36,
      v37);
  else
    Font::drawCached(*(float *)&v13, v38, (int)&v42, _R3, v33, v13 + 16, 0, *(float *)&anonymous0, a12, -1, 0, 0);
  v28 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v42 - 4);
    if ( &pthread_create )
      __dmb();
      do
      {
        v31 = __ldrex(v30);
        __strex(v31 - 1, v30);
      }
      while ( &v42 );
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  return v25;
}


void __fastcall Font::_loadMsdfFontInformation(int a1, int *a2, int a3)
{
  int v3; // r11@1
  __int64 v4; // kr00_8@1
  int v5; // r6@1
  int v6; // r1@1
  const void **v7; // r0@1
  int v8; // r2@1
  int v9; // r5@1
  void *v10; // r0@1
  void *v11; // r0@2
  void *v12; // r0@3
  int v16; // r10@7
  unsigned int v18; // r5@8
  int v19; // r7@8
  _DWORD *v20; // r0@8
  _DWORD *v21; // r8@9
  int v22; // r4@9
  _DWORD *v23; // r9@11
  _DWORD *v25; // r0@18
  void **v26; // r0@20
  void *v27; // r0@20
  char *v28; // r0@22
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@56
  signed int v38; // r1@58
  int v39; // [sp+Ch] [bp-514h]@7
  int v40; // [sp+10h] [bp-510h]@5
  void **v41; // [sp+14h] [bp-50Ch]@5
  int v42; // [sp+18h] [bp-508h]@21
  void **v43; // [sp+1Ch] [bp-504h]@20
  void **v44; // [sp+20h] [bp-500h]@20
  int v45; // [sp+3Ch] [bp-4E4h]@21
  int v46; // [sp+44h] [bp-4DCh]@20
  int v47; // [sp+48h] [bp-4D8h]@21
  int v48; // [sp+D0h] [bp-450h]@1
  int v49; // [sp+D4h] [bp-44Ch]@1
  int v50; // [sp+D8h] [bp-448h]@1
  int v51; // [sp+DCh] [bp-444h]@1
  char *v52; // [sp+E0h] [bp-440h]@1
  char v53[1024]; // [sp+E4h] [bp-43Ch]@6

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 604);
  v5 = a3;
  v52 = (char *)&unk_28898CC;
  sub_DA73B4(&v48, a2);
  Font::getUnicodeFontNameWithPage((const void **)&v49, v6, (unsigned int *)&v48, v5);
  v7 = sub_DA73D4((const void **)&v49, ".fontdata", 9u);
  v8 = (int)*v7;
  *v7 = &unk_28898CC;
  v50 = v8;
  v51 = 0;
  v9 = Resource::load((int)&v50);
  v10 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v29 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v49 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v48 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  if ( v9 == 1 )
    sub_DA8944((int)&v41, (unsigned int *)&v52, 24);
    sub_DA8954((int)&v41, (int)&v40, 4);
    if ( !v40 )
      sub_DA8954((int)&v41, (int)v53, 1024);
      if ( (signed int)v4 * HIDWORD(v4) >= 1 )
      {
        __asm { VMOV.F32        S16, #8.0 }
        v16 = 0;
        v39 = v5 << 8;
        do
        {
          _R0 = &v53[4 * v16];
          v18 = v16 + v39;
          __asm { VLDR            S18, [R0] }
          v19 = (unsigned int)(v16 + v39) % *(_DWORD *)(v3 + 1656);
          v20 = *(_DWORD **)(*(_DWORD *)(v3 + 1652) + 4 * v19);
          if ( !v20 )
            goto LABEL_18;
          v21 = (_DWORD *)*v20;
          v22 = *(_DWORD *)(*v20 + 4);
          while ( v18 != v22 )
          {
            v23 = (_DWORD *)*v21;
            if ( *v21 )
            {
              v22 = v23[1];
              v20 = v21;
              v21 = (_DWORD *)*v21;
              if ( v23[1] % *(_DWORD *)(v3 + 1656) == v19 )
                continue;
            }
          }
          _ZF = v20 == 0;
          if ( v20 )
            _ZF = *v20 == 0;
          if ( _ZF )
LABEL_18:
            v25 = operator new(0xCu);
            *v25 = 0;
            v25[1] = v18;
            v25[2] = 0;
            std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v3 + 1652,
              v19,
              v18,
              (int)v25);
          __asm { VMUL.F32        S0, S18, S16 }
          ++v16;
          __asm { VSTR            S0, [R0,#8] }
        }
        while ( v16 < (signed int)v4 * HIDWORD(v4) );
      }
    v26 = off_26D3F84;
    v41 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v41) = off_26D3F80[0];
    v43 = v26;
    v44 = &off_27734E8;
    v27 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
        __dmb();
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9(v27);
    v44 = &off_26D40A8;
    sub_DA76D4((unsigned int **)&v45);
    v41 = (void **)off_26D3F68;
    *(void ***)((char *)&v41 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v42 = 0;
    sub_DA76E4(&v47);
  v28 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v52 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
}


int __fastcall Font::_chopString(int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8, int a9)
{
  int *v9; // r7@1
  int v10; // r9@1
  float v11; // r8@1
  int v13; // r6@1
  int v14; // r0@1
  void *v15; // r0@1
  int v16; // r0@2
  int v17; // r5@2
  int result; // r0@8
  unsigned int *v23; // r2@12
  signed int v24; // r1@14
  int v25; // [sp+0h] [bp-28h]@1

  v9 = (int *)a2;
  v10 = a1;
  v11 = a4;
  _R4 = (_DWORD *)a3;
  v13 = Util::utf8len((int *)a2, 0);
  v14 = Font::_getStringChopAmount(v10, v9, a6, a5);
  Util::utf8substring((const void **)&v25, v9, 0, v13 + 1 - v14);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v9, &v25);
  v15 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  }
  v16 = *v9;
  v17 = *(_DWORD *)(*v9 - 12) - 1;
  if ( *(_DWORD *)(*v9 - 4) >= 0 )
    sub_DA73C4((const void **)v9);
    v16 = *v9;
  if ( *(_BYTE *)(v16 + v17) != 32 )
    sub_DA73D4((const void **)v9, "-", 1u);
  if ( !*(_DWORD *)(a9 + 8) )
    sub_DA7654();
  if ( (*(int (__fastcall **)(int, int *, _DWORD, _DWORD))(a9 + 12))(a9, v9, *_R4, LODWORD(v11)) == 1 )
    __asm
      VMOV.F32        S4, #7.5
      VLDR            S0, [SP,#0x28+arg_C]
      VMOV.F32        S2, #10.0
    result = 1;
    if ( *(_BYTE *)(v10 + 624) )
      __asm { VMOVNE.F32      S2, S4 }
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R4]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4]
  else
    result = 0;
  return result;
}


signed int __fastcall Font::_containsObfuscatedFormatting(int a1, int *a2)
{
  signed int v2; // r4@1

  v2 = 0;
  if ( sub_DA7BFC(a2, (_BYTE *)dword_27C80D8, 0, *(_DWORD *)(dword_27C80D8 - 12)) != -1 )
    v2 = 1;
  return v2;
}


int __fastcall Font::tickObfuscatedTextIndex(int result, float _R1)
{
  int v7; // r2@2

  __asm { VMOV            S0, R1 }
  _R1 = result + 1764;
  __asm
  {
    VLDR            S2, [R1]
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
    VCMPE.F32       S0, S2
    VSTR            S0, [R1]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    v7 = *(_DWORD *)(result + 1760);
    __asm { VLDR            S4, =-0.01 }
    do
    {
      __asm { VADD.F32        S0, S0, S4 }
      ++v7;
      __asm
      {
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
    }
    while ( !(_NF ^ _VF) );
    __asm { VSTR            S0, [R1] }
    *(_DWORD *)(result + 1760) = v7;
  return result;
}


void __fastcall Font::switchFontsource(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r4@1

  v3 = a1;
  v4 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 612), a2);
  EntityInteraction::setInteractText((int *)(v3 + 616), v4);
  *(_BYTE *)(v3 + 624) = 0;
  j_j_j__ZN4Font13resetFontDataEv((Font *)v3);
}


int __fastcall Font::_buildChar(Font *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v8; // r7@1
  int result; // r0@2
  unsigned int v13; // r6@6
  Font v14; // r4@6
  int *v15; // r11@6
  int v18; // r10@9
  int v19; // r5@9
  Font v20; // r9@9
  int v21; // r8@9
  Font v22; // r5@18
  bool v23; // zf@21
  _DWORD *v24; // r0@25
  int v27; // r9@28
  int v28; // r8@28
  int v29; // r11@28
  _DWORD *v31; // r4@29
  int v32; // r7@29
  _DWORD *v33; // r5@31
  bool v34; // zf@35
  _DWORD *v35; // r0@39
  __int64 v36; // r0@43
  int v37; // r0@44
  int v38; // r4@44
  signed int v39; // r0@45
  signed int v40; // r0@45
  unsigned int v41; // r2@45
  unsigned int v42; // r0@47
  unsigned int v43; // r9@47
  char *v44; // r8@52
  int v45; // r0@52
  int v46; // r12@52
  char *v47; // lr@52
  int v48; // r3@52
  char *v49; // r2@53
  int v50; // r1@53
  int v51; // r10@53
  int v52; // r4@53
  int v53; // r5@53
  int v54; // r6@53
  int v55; // r7@53
  int v56; // r3@53
  int v57; // r4@53
  int v58; // r5@53
  int v59; // r6@53
  int v60; // r7@53
  int v61; // [sp+Ch] [bp-7Ch]@3
  int v62; // [sp+10h] [bp-78h]@3
  int v63; // [sp+14h] [bp-74h]@3
  Font *v64; // [sp+18h] [bp-70h]@3
  int v65; // [sp+1Ch] [bp-6Ch]@6
  int v66; // [sp+20h] [bp-68h]@27
  float v67; // [sp+24h] [bp-64h]@27
  __int64 v68; // [sp+28h] [bp-60h]@27

  v8 = a3;
  if ( a3 == 32 )
  {
    result = j_j_j__ZNK4Font13_getCharWidthEib(a1, 32, a8);
  }
  else
    v62 = a4;
    v63 = a2;
    __asm
    {
      VLDR            S16, [SP,#0x88+arg_8]
      VLDR            S18, [SP,#0x88+arg_4]
    }
    v64 = a1;
    v61 = Font::_getCharWidth(a1, a3, a8);
    if ( a8 )
      goto LABEL_62;
    __asm { VLDR            S20, =0.0 }
    if ( (signed int)v8 >= 256 && !(v8 >> 16) )
LABEL_62:
      v13 = v64[421];
      v14 = v64[420];
      v65 = v8 % v64[421];
      v15 = *(int **)(v14 + 4 * v65);
      __asm { VLDR            S20, =0.0 }
      _ZF = v15 == 0;
      if ( v15 )
      {
        v14 = *v15;
        _ZF = *v15 == 0;
      }
      if ( !_ZF )
        _R0 = (int)(v64 + 420);
        v18 = *(_DWORD *)(v14 + 4);
        v19 = 0;
        v20 = v14;
        v21 = *(_DWORD *)(v14 + 4);
        do
        {
          if ( v21 == v8 )
          {
            ++v19;
          }
          else
            if ( v19 )
              goto LABEL_17;
            v19 = 0;
          v20 = *(_DWORD *)v20;
          if ( !v20 )
            break;
          v21 = *(_DWORD *)(v20 + 4);
          _R0 = v8 % v64[421];
        }
        while ( *(_DWORD *)(v20 + 4) % v13 == v65 );
        if ( v19 )
LABEL_17:
          while ( v18 != v8 )
            v22 = *(_DWORD *)v14;
            if ( *(_DWORD *)v14 )
            {
              v18 = *(_DWORD *)(v22 + 4);
              _R0 = v8 % v64[421];
              v15 = (int *)v14;
              v14 = *(_DWORD *)v14;
              if ( *(_DWORD *)(v22 + 4) % v13 == v65 )
                continue;
            }
            goto LABEL_25;
          v23 = v15 == 0;
          if ( v15 )
            _R0 = *v15;
            v23 = *v15 == 0;
          if ( v23 )
LABEL_25:
            v24 = operator new(0xCu);
            *v24 = 0;
            v24[1] = v8;
            v24[2] = 0;
            _R0 = std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                    (int)(v64 + 420),
                    v65,
                    v8,
                    (int)v24);
          __asm { VLDR            S20, [R0,#8] }
    v67 = *(float *)(v62 + 4);
    v68 = *(_QWORD *)(v62 + 8);
    _R2 = v8 & 0xF0;
    __asm { VMOV            S0, R2 }
    _R1 = (unsigned __int8)(16 * v8);
      VCVT.F32.S32    S22, S0
      VMOV            S0, R1
      VCVT.F32.S32    S24, S0
    v66 = *(_DWORD *)v62;
    if ( (v8 - 57344) >> 8 > 0x18 )
      __asm { VMOV.F32        S26, #8.0 }
      v29 = v63;
    else
      v27 = (signed int)v8 / 256;
      v28 = (signed int)v8 / 256 % v64[428];
      _R0 = *(_DWORD *)(v64[427] + 4 * v28);
      if ( !_R0 )
        goto LABEL_39;
      v31 = *(_DWORD **)_R0;
      v32 = *(_DWORD *)(*(_DWORD *)_R0 + 4);
      while ( v27 != v32 )
        v33 = (_DWORD *)*v31;
        if ( *v31 )
          v32 = v33[1];
          _R0 = (int)v31;
          v31 = (_DWORD *)*v31;
          if ( v33[1] % v64[428] == v28 )
            continue;
      v34 = _R0 == 0;
      if ( _R0 )
        _R0 = *(_DWORD *)_R0;
        v34 = _R0 == 0;
      if ( v34 )
LABEL_39:
        v35 = operator new(0xCu);
        *v35 = 0;
        v35[1] = v27;
        v35[2] = 0;
        _R0 = std::_Hashtable<int,std::pair<int const,float>,std::allocator<std::pair<int const,float>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                (int)(v64 + 427),
                v28,
                v27,
                (int)v35);
      __asm
        VMOV.F32        S0, #8.0
        VLDR            S2, =9.3333
      if ( *((_BYTE *)v64 + 624) )
        __asm { VMOVNE.F32      S0, S2 }
        VLDR            S26, [R0,#8]
        VMOV.F32        S2, #0.5
        VSUB.F32        S0, S0, S26
        VMUL.F32        S0, S0, S2
      v66 = Color::WHITE;
      v67 = unk_283E614;
      v68 = qword_283E618;
      __asm { VADD.F32        S16, S16, S0 }
    __asm { VADD.F32        S18, S20, S18 }
    v36 = *(_QWORD *)(v29 + 4);
    if ( (_DWORD)v36 == HIDWORD(v36) )
      v39 = v36 - *(_DWORD *)v29;
      _ZF = v39 == 0;
      v40 = v39 >> 2;
      v41 = -1171354717 * v40;
      if ( _ZF )
        v41 = 1;
      v42 = v41 + -1171354717 * v40;
      v43 = v42;
      if ( v42 > 0x5D1745D )
        v43 = 97612893;
      _CF = v42 >= v41;
      LOWORD(v42) = 29790;
      if ( !_CF )
      HIWORD(v42) = 1489;
      if ( v43 >= v42 )
        sub_DA7414();
      v44 = (char *)operator new(44 * v43);
      v46 = *(_QWORD *)v29 >> 32;
      v45 = *(_QWORD *)v29;
      v47 = v44;
      v48 = (int)&v44[v46 - v45];
        VSTR            S18, [R3]
        VSTR            S16, [R3,#4]
        VSTR            S26, [R3,#8]
      *(_DWORD *)(v48 + 12) = 1098897162;
        VSTR            S24, [R3,#0x10]
        VSTR            S22, [R3,#0x14]
      *(_DWORD *)(v48 + 24) = a5;
      *(_QWORD *)(v48 + 36) = v68;
      *(_DWORD *)(v48 + 28) = v66;
      *(float *)(v48 + 32) = v67;
          v49 = v47;
          v50 = *(_DWORD *)v45;
          v52 = *(_DWORD *)(v45 + 4);
          v53 = *(_DWORD *)(v45 + 8);
          v54 = *(_DWORD *)(v45 + 12);
          v55 = *(_DWORD *)(v45 + 16);
          v51 = v45 + 20;
          v45 += 44;
          v47 += 44;
          *(_DWORD *)v49 = v50;
          *((_DWORD *)v49 + 1) = v52;
          *((_DWORD *)v49 + 2) = v53;
          *((_DWORD *)v49 + 3) = v54;
          *((_DWORD *)v49 + 4) = v55;
          v49 += 20;
          v56 = *(_DWORD *)(v51 + 4);
          v57 = *(_DWORD *)(v51 + 8);
          v58 = *(_DWORD *)(v51 + 12);
          v59 = *(_DWORD *)(v51 + 16);
          v60 = *(_DWORD *)(v51 + 20);
          *(_DWORD *)v49 = *(_DWORD *)v51;
          *((_DWORD *)v49 + 1) = v56;
          *((_DWORD *)v49 + 2) = v57;
          *((_DWORD *)v49 + 3) = v58;
          *((_DWORD *)v49 + 4) = v59;
          *((_DWORD *)v49 + 5) = v60;
        while ( v46 != v45 );
        v45 = *(_DWORD *)v29;
      v38 = v61;
      if ( v45 )
        operator delete((void *)v45);
      *(_DWORD *)v29 = v44;
      *(_DWORD *)(v29 + 4) = v47 + 44;
      *(_DWORD *)(v29 + 8) = &v44[44 * v43];
        VSTR            S18, [R0]
        VSTR            S16, [R0,#4]
        VSTR            S26, [R0,#8]
      *(_DWORD *)(v36 + 12) = 1098897162;
        VSTR            S24, [R0,#0x10]
        VSTR            S22, [R0,#0x14]
      *(_DWORD *)(v36 + 24) = a5;
      v37 = v36 + 28;
      *(_DWORD *)v37 = v66;
      *(float *)(v37 + 4) = v67;
      *(_QWORD *)(v37 + 8) = v68;
      *(_DWORD *)(v29 + 4) += 44;
    result = v38;
  return result;
}


int __fastcall Font::_makeTextObject(int a1, int a2, int a3, int a4, __int64 a5, int a6, char a7, int a8, int a9)
{
  int v9; // r5@1
  int v10; // r10@1
  int *v11; // r4@1
  char v12; // r0@1
  void *v13; // r0@3
  int v14; // r9@6
  unsigned int v15; // r0@6
  int v16; // r11@6
  int v17; // r2@7
  int v18; // r3@7
  int v19; // r7@7
  int v20; // r12@7
  char v24; // r8@8
  signed int v25; // r6@8
  int v26; // r4@9
  int v27; // r6@9
  signed int v28; // r0@9
  _DWORD *v29; // r3@13
  int v30; // r4@23
  int v31; // r7@23
  int v32; // r1@23
  int v33; // r2@23
  int v34; // r3@23
  int v35; // r1@23
  int v36; // r2@23
  int v37; // r3@23
  int v38; // r0@23
  int v39; // r3@23
  int v40; // r6@23
  int *v41; // r5@23
  int v42; // r7@23
  int v43; // r9@28
  signed int v44; // r0@28
  signed int v45; // r8@29
  char v46; // r1@29
  int v47; // r6@33
  _BYTE *v48; // r7@33
  int v49; // r0@33
  signed int v50; // r0@38
  char v51; // r1@39
  ColorFormat *v52; // r4@50
  char v53; // r1@50
  int *v54; // r0@51
  int v55; // r1@53
  int v56; // r2@53
  int v57; // r3@53
  int v58; // r0@53
  signed int v59; // r0@55
  int v60; // r1@61
  int v61; // r2@61
  int v62; // r3@61
  ColorFormat *v63; // r4@65
  int v64; // r5@65
  char v65; // r1@65
  int *v66; // r0@66
  int v67; // r1@68
  int v68; // r2@68
  int v69; // r3@68
  int v70; // r0@68
  int v72; // r9@74
  int v73; // r3@75
  signed int v74; // r0@76
  int v75; // r11@78
  unsigned int v76; // r6@82
  _DWORD *v77; // r0@82
  _DWORD *v78; // r5@83
  int v79; // r4@83
  _DWORD *v80; // r7@85
  Random *v82; // r0@92
  signed int v83; // r4@93
  bool v85; // zf@98
  int v86; // r0@105
  int v87; // r9@110
  char *v88; // r8@111
  int v89; // r0@111
  int v90; // r4@111
  int v91; // r2@112
  int v93; // r2@115
  int v94; // r0@119
  int v95; // r1@137
  int v96; // r2@137
  int v97; // r3@137
  int v98; // r5@139
  int result; // r0@148
  signed int v100; // r2@149
  int *v101; // r11@149
  int v102; // r9@150
  char *v103; // r7@150
  int v104; // r0@150
  int v105; // r1@150
  Font::GlyphQuad **v106; // r4@150
  int v107; // r8@151
  Font::GlyphQuad *v108; // r6@151
  Font::GlyphQuad *v109; // r5@151
  mce::TextureGroup *v110; // r6@155
  void *v111; // r0@155
  void *v112; // r0@157
  unsigned int *v113; // r2@158
  signed int v114; // r1@160
  __int64 v115; // kr10_8@162
  int v116; // r8@163
  mce::TextureGroup *v117; // r6@165
  void *v118; // r0@165
  signed int v119; // r0@167
  unsigned int *v120; // r2@180
  signed int v121; // r1@182
  unsigned int *v122; // r2@184
  signed int v123; // r1@186
  int v124; // [sp+4h] [bp-1B4h]@0
  int v125; // [sp+8h] [bp-1B0h]@0
  _BYTE *v126; // [sp+2Ch] [bp-18Ch]@74
  int v127; // [sp+30h] [bp-188h]@1
  int v128; // [sp+34h] [bp-184h]@23
  int v129; // [sp+38h] [bp-180h]@23
  int v130; // [sp+3Ch] [bp-17Ch]@23
  Font *v131; // [sp+40h] [bp-178h]@1
  int v132; // [sp+44h] [bp-174h]@23
  int v133; // [sp+4Ch] [bp-16Ch]@6
  int v134; // [sp+4Ch] [bp-16Ch]@74
  Tessellator *v135; // [sp+50h] [bp-168h]@1
  int v136; // [sp+54h] [bp-164h]@23
  signed int v137; // [sp+58h] [bp-160h]@23
  char v138; // [sp+5Ch] [bp-15Ch]@166
  Font v139; // [sp+C0h] [bp-F8h]@165
  char v140; // [sp+C8h] [bp-F0h]@165
  int v141; // [sp+E4h] [bp-D4h]@170
  char v142; // [sp+E8h] [bp-D0h]@170
  int v143; // [sp+F8h] [bp-C0h]@175
  char v144; // [sp+FCh] [bp-BCh]@175
  int v145; // [sp+10Ch] [bp-ACh]@157
  char v146; // [sp+110h] [bp-A8h]@157
  char v147; // [sp+11Ch] [bp-9Ch]@156
  Font v148; // [sp+128h] [bp-90h]@155
  char v149; // [sp+130h] [bp-88h]@155
  int v150; // [sp+148h] [bp-70h]@9

  v9 = a1;
  v10 = a2;
  v135 = (Tessellator *)a3;
  v131 = (Font *)a2;
  v127 = a1;
  v11 = (int *)a4;
  v12 = byte_27C80EC;
  __dmb();
  if ( !(v12 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C80EC) )
  {
    v13 = &unk_27C7484;
    do
    {
      *(_DWORD *)v13 = 0;
      *((_DWORD *)v13 + 1) = 0;
      *((_DWORD *)v13 + 2) = 0;
      v13 = (char *)v13 + 12;
    }
    while ( v13 != &unk_27C8084 );
    _cxa_atexit(sub_9E1554);
    j___cxa_guard_release((unsigned int *)&byte_27C80EC);
  }
  v14 = *v11;
  v15 = *(_DWORD *)(v10 + 12);
  v16 = a5;
  v133 = *(_DWORD *)(*v11 - 12);
  if ( (_BYTE)v15 )
    v17 = *(_DWORD *)(a5 + 4);
    v18 = *(_DWORD *)(a5 + 8);
    v19 = *(_DWORD *)(a5 + 12);
    v20 = v10 + 16;
    *(_DWORD *)v20 = *(_DWORD *)a5;
    *(_DWORD *)(v20 + 4) = v17;
    *(_DWORD *)(v20 + 8) = v18;
    *(_DWORD *)(v20 + 12) = v19;
    *(_BYTE *)(v10 + 52) = 0;
    *(_DWORD *)(v10 + 48) = 0;
  __asm { VMOV.F32        S18, #0.5 }
  v24 = a7;
  __asm { VLDR            S16, [SP,#0x1B8+arg_10] }
  v25 = 1;
  if ( !(v15 >> 24) )
    v26 = *v11;
    v27 = *(_DWORD *)(v26 - 12);
    v28 = j_utf8proc_iterate(v26, *(_DWORD *)(v26 - 12), &v150);
    if ( v28 < 1 )
      v25 = 0;
    else
      while ( 1 )
      {
        if ( v150 != 160 && v150 >= 128 && (unsigned int)(v150 - 57344) >> 8 > 0x18 )
        {
          v29 = (_DWORD *)dword_27C80F0;
          if ( dword_27C80F0 != *(_DWORD *)algn_27C80F4 )
          {
            while ( *v29 != v150 )
            {
              ++v29;
              if ( *(_DWORD **)algn_27C80F4 == v29 )
                goto LABEL_20;
            }
          }
          if ( v29 == *(_DWORD **)algn_27C80F4 )
            break;
        }
        v27 -= v28;
        v26 += v28;
        v28 = j_utf8proc_iterate(v26, v27, &v150);
        if ( v28 <= 0 )
          v25 = 0;
          goto LABEL_21;
      }
LABEL_20:
      v25 = 1;
LABEL_21:
      v16 = a5;
      v24 = a7;
  v132 = v25;
  v30 = HIDWORD(a5);
  v31 = v9 + 12;
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  __asm { VMUL.F32        S20, S16, S18 }
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = 0;
  __asm { VMOV.F32        S28, #10.0 }
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  __asm { VMOV.F32        S17, #7.5 }
  *(_DWORD *)(v9 + 24) = 0;
  __asm { VMOV.F32        S30, #-1.0 }
  v32 = *(_DWORD *)(v16 + 4);
  v33 = *(_DWORD *)(v16 + 8);
  v34 = *(_DWORD *)(v16 + 12);
  __asm { VMOV.F32        S19, #1.0 }
  *(_DWORD *)v31 = *(_DWORD *)v16;
  *(_DWORD *)(v31 + 4) = v32;
  *(_DWORD *)(v31 + 8) = v33;
  *(_DWORD *)(v31 + 12) = v34;
  LOBYTE(v31) = v25;
  v35 = *(_DWORD *)(v16 + 4);
  v36 = *(_DWORD *)(v16 + 8);
  v37 = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v10 + 16) = *(_DWORD *)v16;
  v38 = v10 + 20;
  v136 = v10 + 16;
  *(_DWORD *)v38 = v35;
  *(_DWORD *)(v38 + 4) = v36;
  *(_DWORD *)(v38 + 8) = v37;
  v39 = v9;
  v128 = v10 + 48;
  v137 = -1;
  __asm { VLDR            S22, =0.0 }
  v40 = v133;
  __asm { VMOV.F32        S21, S22 }
  *(_BYTE *)(v9 + 28) = v31;
  __asm
    VMOV.F32        S26, S22
    VMOV.F32        S24, S22
  *(_BYTE *)(v9 + 29) = v24;
  v41 = &v150;
  v129 = a6;
  v42 = v14;
  v130 = 0;
  while ( v30 == 1 )
    v43 = v39;
    v44 = j_utf8proc_iterate(v42, v40, v41);
    if ( v44 < 1 )
      goto LABEL_139;
    v45 = v150;
    v46 = -1;
    if ( v150 >= 0xFFFF )
      v46 = *(_BYTE *)(v10 + 624);
      v45 = 65533;
      if ( *(_BYTE *)(v10 + 624) )
        v45 = 63;
      v150 = v45;
    v47 = v40 - v44;
    v48 = (_BYTE *)(v42 + v44);
    v49 = v137;
    if ( v137 )
      if ( v137 > 0 )
        v49 = v137 - 1;
      *(_DWORD *)(v10 + 28) = 1056964608;
      v49 = -1;
    if ( v47 >= 1 && v45 == 167 )
      v63 = (ColorFormat *)*v48;
      v64 = v49;
      if ( ColorFormat::IsColorCode(v63, v46) )
        v66 = (int *)ColorFormat::ColorFromChar(v63, v65);
        if ( !v66 )
          v66 = &Color::WHITE;
        v67 = *v66;
        v68 = v66[1];
        v69 = v66[2];
        v70 = v66[3];
        *(_DWORD *)v136 = v67;
        *(_DWORD *)(v136 + 4) = v68;
        *(_DWORD *)(v136 + 8) = v69;
        *(_DWORD *)(v136 + 12) = v70;
      else
        switch ( v63 )
          case 0x6Bu:
            *(_BYTE *)(v10 + 52) = 1;
          case 0x6Cu:
            *(_BYTE *)(v10 + 49) = 1;
          case 0x6Du:
            *(_BYTE *)(v10 + 50) = 1;
          case 0x6Eu:
            *(_BYTE *)(v10 + 51) = 1;
          case 0x6Fu:
            *(_BYTE *)v128 = 1;
          default:
            *(_DWORD *)(v10 + 28) = *(_DWORD *)(v43 + 24);
            v49 = v64;
            v45 = v150;
            goto LABEL_70;
          case 0x72u:
            v95 = *(_DWORD *)(v16 + 4);
            v96 = *(_DWORD *)(v16 + 8);
            v97 = *(_DWORD *)(v16 + 12);
            *(_DWORD *)v136 = *(_DWORD *)v16;
            *(_DWORD *)(v136 + 4) = v95;
            *(_DWORD *)(v136 + 8) = v96;
            *(_DWORD *)(v136 + 12) = v97;
            *(_BYTE *)(v128 + 4) = 0;
            *(_DWORD *)v128 = 0;
      v49 = 0;
      v45 = v150;
LABEL_70:
    _ZF = v45 == 160;
    v137 = v49;
    if ( v45 != 160 )
      _ZF = v45 == 0;
    if ( _ZF )
      v134 = v47;
      v72 = 32;
      v126 = v48;
      goto LABEL_75;
    if ( v132 != 1 )
      if ( *(_BYTE *)(v10 + 52) )
        _R0 = Font::_getCharWidth((Font *)v10, v45, 0);
        __asm { VMOV            S23, R0 }
        do
          v82 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
          if ( *(_DWORD *)algn_27C80F4 - dword_27C80F0 < 1 )
            v72 = 0;
          else
            v83 = *(_DWORD *)algn_27C80F4 - dword_27C80F0;
            v72 = Random::_genRandInt32(v82) % (v83 >> 2);
          _R0 = Font::_getCharWidth((Font *)v10, v72, 0);
          __asm
            VMOV            S0, R0
            VCMPE.F32       S23, S0
            VMRS            APSR_nzcv, FPSCR
        while ( !_ZF );
LABEL_75:
        v150 = v72;
        v73 = v132;
        v72 = v45;
        if ( *(_DWORD *)algn_27C80F4 != dword_27C80F0 )
          v72 = 0;
          while ( v45 != *(_DWORD *)(dword_27C80F0 + 4 * v72) )
            if ( ++v72 >= (unsigned int)((*(_DWORD *)algn_27C80F4 - dword_27C80F0) >> 2) )
              v72 = v45;
              goto LABEL_76;
          v150 = v72;
LABEL_76:
      v74 = 0;
      if ( (unsigned int)(v72 + 255) > 0x1FE )
        v74 = 1;
      v75 = v72 / 256;
      if ( !(v74 | v73) )
        goto LABEL_105;
      goto LABEL_82;
    v134 = v47;
    v126 = v48;
    v72 = v45;
    v75 = v45 / 256;
LABEL_82:
    Font::_scanUnicodeCharacterSize(v131, v45, v72, v75, v132);
    v76 = v131[414];
    v72 = v150;
    v77 = *(_DWORD **)(v131[413] + 4 * (v150 % v76));
    if ( !v77 )
      goto LABEL_102;
    v78 = (_DWORD *)*v77;
    v79 = *(_DWORD *)(*v77 + 4);
    while ( v150 != v79 )
      v80 = (_DWORD *)*v78;
      if ( *v78 )
        v79 = v80[1];
        v77 = v78;
        v78 = (_DWORD *)*v78;
        if ( v80[1] % v76 == v150 % v76 )
          continue;
    v85 = v77 == 0;
    if ( v77 )
      v85 = *v77 == 0;
    if ( v85 )
LABEL_102:
      v72 = 65533;
      if ( *((_BYTE *)v131 + 624) )
        v72 = 63;
      v75 = (unsigned int)v72 >> 8;
      v150 = v72;
LABEL_105:
    v86 = v130;
    if ( v75 >= v130 )
      v86 = v75;
    v130 = v86;
    if ( v45 == 10 )
      v10 = (int)v131;
      __asm
        VADD.F32        S0, S20, S16
        VMOV.F32        S2, S28
      v41 = &v150;
        VMOV.F32        S23, S22
        VMOV.F32        S21, S22
        __asm { VMOVNE.F32      S2, S17 }
      v87 = v127;
      v42 = (int)v126;
      v40 = v134;
      __asm { VADD.F32        S20, S0, S2 }
      v30 = HIDWORD(a5);
      v88 = (char *)&unk_27C7484 + 12 * v75;
      v89 = *(_BYTE *)v128;
      v90 = v132 | (v75 != 0);
      if ( v90 )
        v91 = v72;
        __asm
          VSTR            S20, [SP,#0x1B8+var_1B0]
          VSTR            S21, [SP,#0x1B8+var_1B4]
        if ( !_ZF )
          v89 = 1;
        v87 = v127;
        Font::_buildChar(v131, (int)v88, v91, v136, v89, v124, v125, 1);
        v93 = v72;
        Font::_buildChar(v131, (int)v88, v93, v136, v89, v124, v125, 0);
      __asm { VMOV            S23, R0 }
      if ( *((_BYTE *)v131 + 49) )
        v94 = *(_BYTE *)v128;
        if ( v90 == 1 )
            VADD.F32        S0, S21, S18
            VSTR            S20, [SP,#0x1B8+var_1B0]
          if ( !_ZF )
            v94 = 1;
          __asm { VSTR            S0, [SP,#0x1B8+var_1B4] }
          Font::_buildChar(v131, (int)v88, v150, v136, v94, v124, v125, 1);
          __asm { VADD.F32        S23, S23, S18 }
        else
            VADD.F32        S0, S21, S19
          Font::_buildChar(v131, (int)v88, v150, v136, v94, v124, v125, 0);
          __asm { VADD.F32        S23, S23, S19 }
    __asm { VADD.F32        S21, S21, S23 }
    v39 = v87;
    --v129;
    __asm { VADD.F32        S0, S21, S30 }
        VMOVEQ.F32      S26, S20
        VMOVEQ.F32      S24, S0
    *(_DWORD *)(v10 + 28) = *(_DWORD *)(v87 + 24);
  v43 = v39;
  while ( 1 )
    v50 = j_utf8proc_iterate(v42, v40, v41);
    if ( v50 < 1 )
      break;
    v51 = -1;
      v51 = *(_BYTE *)(v10 + 624);
    v47 = v40 - v50;
    v48 = (_BYTE *)(v42 + v50);
    if ( v47 < 1 || v45 != 167 )
      goto LABEL_70;
    v52 = (ColorFormat *)*v48;
    if ( ColorFormat::IsColorCode(v52, v51) == 1 )
      v54 = (int *)ColorFormat::ColorFromChar(v52, v53);
      if ( !v54 )
        v54 = &Color::WHITE;
      v55 = *v54;
      v56 = v54[1];
      v57 = v54[2];
      v58 = v54[3];
      *(_DWORD *)v136 = v55;
      *(_DWORD *)(v136 + 4) = v56;
      *(_DWORD *)(v136 + 8) = v57;
      *(_DWORD *)(v136 + 12) = v58;
      switch ( v52 )
        default:
          break;
        case 0x6Bu:
          *(_BYTE *)(v10 + 52) = 1;
        case 0x6Cu:
          *(_BYTE *)(v10 + 49) = 1;
        case 0x6Du:
          *(_BYTE *)(v10 + 50) = 1;
        case 0x6Eu:
          *(_BYTE *)(v10 + 51) = 1;
        case 0x6Fu:
          *(_BYTE *)v128 = 1;
        case 0x72u:
          v60 = *(_DWORD *)(v16 + 4);
          v61 = *(_DWORD *)(v16 + 8);
          v62 = *(_DWORD *)(v16 + 12);
          *(_DWORD *)v136 = *(_DWORD *)v16;
          *(_DWORD *)(v136 + 4) = v60;
          *(_DWORD *)(v136 + 8) = v61;
          *(_DWORD *)(v136 + 12) = v62;
          *(_BYTE *)(v128 + 4) = 0;
          *(_DWORD *)v128 = 0;
    *(_DWORD *)(v10 + 28) = *(_DWORD *)(v43 + 24);
    v59 = j_utf8proc_iterate((int)v48, v47, v41);
    v40 = v47 - v59;
    v42 = (int)&v48[v59];
LABEL_139:
  __asm { VADD.F32        S0, S21, S30 }
  v98 = v43;
  if ( v129 == 1 )
    __asm { VMOVEQ.F32      S24, S0 }
  if ( a6 != -1 && v129 <= 0 )
    __asm { VCMPE.F32       S24, #0.0 }
      __asm { VMOVEQ.F32      S26, S20 }
    __asm
      VMRS            APSR_nzcv, FPSCR
      VLDR            S0, =0.0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S24, S0 }
      VSTR            S26, [SP,#0x1B8+var_1B0]
      VSTR            S24, [SP,#0x1B8+var_1B4]
    Font::_buildChar((Font *)v10, (int)&unk_27C7484, 124, (int)&Color::GREEN, 0, v124, v125, v132);
  result = v130;
  if ( v130 >= 0 )
    v100 = -390451572;
    v101 = (int *)(v43 + 4);
    result = 0;
    while ( 1 )
      v102 = result;
      v103 = (char *)&unk_27C7484 + 12 * result;
      v104 = *((_DWORD *)&unk_27C7484 + 3 * result);
      v106 = (Font::GlyphQuad **)(v103 + 4);
      v105 = *((_DWORD *)v103 + 1);
      if ( v104 != v105 )
        break;
LABEL_201:
      result = v102 + 1;
      if ( v102 >= v130 )
        return result;
    Tessellator::begin(v135, ((unsigned int)(v105 - v104) >> 2) * v100, 0);
    v107 = v98;
    v108 = *(Font::GlyphQuad **)v103;
    v109 = *v106;
    if ( *(Font::GlyphQuad **)v103 != *v106 )
      do
        Font::GlyphQuad::append(v108, v135);
        v108 = (Font::GlyphQuad *)((char *)v108 + 44);
      while ( v109 != v108 );
      v108 = *(Font::GlyphQuad **)v103;
    *v106 = v108;
    v98 = v107;
    if ( Tessellator::forceTessellateIntercept(v135) != 1 )
      v115 = *(_QWORD *)(v107 + 4);
      if ( (_DWORD)v115 == HIDWORD(v115) )
        v98 = v107;
        j__ZNSt6vectorIN4Font10TextObject4PageESaIS2_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v107);
        v116 = *v101;
        mce::Mesh::Mesh((mce::Mesh *)v115);
        mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v115 + 100));
        v116 = v115 + 132;
        *(_DWORD *)(v115 + 128) = -1;
        *v101 = v115 + 132;
      v117 = *(mce::TextureGroup **)(v10 + 620);
      Font::_getFontSheetLocation(&v139, v10, v102, v132);
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v140, v117, (int)&v139, 0);
      mce::TexturePtr::operator=((mce::TexturePtr *)(v116 - 32), (mce::TexturePtr *)&v140);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v140);
      v118 = (void *)(v139 - 12);
      if ( (int *)(v139 - 12) != &dword_28898C0 )
        v122 = (unsigned int *)(v139 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v123 = __ldrex(v122);
          while ( __strex(v123 - 1, v122) );
          v123 = (*v122)--;
        if ( v123 <= 0 )
          j_j_j_j_j__ZdlPv_9(v118);
      Tessellator::end((Tessellator *)&v138, (const char *)v135, 0, 0);
      mce::Mesh::operator=(v116 - 132, (int)&v138);
      mce::Mesh::~Mesh((mce::Mesh *)&v138);
      *(_DWORD *)(v116 - 4) = v102;
      goto LABEL_200;
    v110 = *(mce::TextureGroup **)(v10 + 620);
    Font::_getFontSheetLocation(&v148, v10, v102, v132);
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v149, v110, (int)&v148, 0);
    v111 = (void *)(v148 - 12);
    if ( (int *)(v148 - 12) != &dword_28898C0 )
      v120 = (unsigned int *)(v148 - 4);
      if ( &pthread_create )
        __dmb();
          v121 = __ldrex(v120);
        while ( __strex(v121 - 1, v120) );
        v121 = (*v120)--;
      if ( v121 <= 0 )
        j_j_j_j_j__ZdlPv_9(v111);
    mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v147);
    if ( *(_BYTE *)(v10 + 624) )
      sub_DA7364((void **)&v145, "ui_text_msdf");
      mce::MaterialPtr::MaterialPtr(
        (mce::MaterialPtr *)&v146,
        (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
        &v145);
      mce::MaterialPtr::operator=((mce::MaterialPtr *)&v147, (mce::MaterialPtr *)&v146);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v146);
      v112 = (void *)(v145 - 12);
      if ( (int *)(v145 - 12) != &dword_28898C0 )
        v113 = (unsigned int *)(v145 - 4);
            v114 = __ldrex(v113);
          while ( __strex(v114 - 1, v113) );
          goto LABEL_197;
LABEL_196:
        v114 = (*v113)--;
        goto LABEL_197;
LABEL_199:
      Tessellator::triggerIntercept(v135, (const mce::MaterialPtr *)&v147, (const mce::TexturePtr *)&v149);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v147);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v149);
LABEL_200:
      v100 = -390451572;
      goto LABEL_201;
    v119 = 0;
    if ( !*(_BYTE *)(v107 + 28) )
      v119 = 1;
    if ( v119 | a9 ^ 1 )
      sub_DA7364((void **)&v141, "ui_text");
        (mce::MaterialPtr *)&v142,
        &v141);
      mce::MaterialPtr::operator=((mce::MaterialPtr *)&v147, (mce::MaterialPtr *)&v142);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v142);
      v112 = (void *)(v141 - 12);
      if ( (int *)(v141 - 12) == &dword_28898C0 )
        goto LABEL_199;
      v113 = (unsigned int *)(v141 - 4);
      if ( !&pthread_create )
        goto LABEL_196;
      __dmb();
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      sub_DA7364((void **)&v143, "ui_text_smooth");
        (mce::MaterialPtr *)&v144,
        &v143);
      mce::MaterialPtr::operator=((mce::MaterialPtr *)&v147, (mce::MaterialPtr *)&v144);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v144);
      v112 = (void *)(v143 - 12);
      if ( (int *)(v143 - 12) == &dword_28898C0 )
      v113 = (unsigned int *)(v143 - 4);
LABEL_197:
    if ( v114 <= 0 )
      j_j_j_j_j__ZdlPv_9(v112);
    goto LABEL_199;
  return result;
}


int __fastcall Font::_getSheet(Font *this, int a2, int *a3, int a4)
{
  bool v4; // zf@1
  int v6; // r3@15

  v4 = a2 == 160;
  if ( a2 != 160 )
    v4 = a2 == 0;
  if ( v4 )
    a2 = 32;
  if ( a2 <= 255 && a4 != 1 )
    return 0;
  if ( a2 >= 0x10000 )
  {
    a2 = 65533;
    if ( *((_BYTE *)this + 624) )
      a2 = 63;
  }
  *a3 = a2;
  if ( a4 )
    *a3 = a2;
  else
    if ( *(_DWORD *)algn_27C80F4 != dword_27C80F0 )
    {
      v6 = 0;
      while ( a2 != *(_DWORD *)(dword_27C80F0 + 4 * v6) )
      {
        if ( ++v6 >= (unsigned int)((*(_DWORD *)algn_27C80F4 - dword_27C80F0) >> 2) )
          goto LABEL_20;
      }
      a2 = v6;
    }
LABEL_20:
    if ( a2 < 256 )
      return 0;
  return a2 / 256;
}


Font *__fastcall Font::clearCache(Font *this)
{
  Font *v1; // r4@1
  Font *result; // r0@1

  v1 = this;
  std::_Rb_tree<std::tuple<std::string,Color>,std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>,std::_Select1st<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>,std::less<std::tuple<std::string,Color>>,std::allocator<std::pair<std::tuple<std::string,Color> const,std::vector<Font::TextObject,std::allocator<Font::TextObject>>>>>::_M_erase(
    (int)(this + 434),
    this[436]);
  result = v1 + 435;
  v1[436] = 0;
  v1[437] = (Font)(v1 + 435);
  v1[438] = (Font)(v1 + 435);
  v1[439] = 0;
  return result;
}


int __fastcall Font::getScaleFactor(Font *this)
{
  int result; // r0@3

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, =1.3333
  }
  if ( *((_BYTE *)this + 624) )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall Font::~Font(int a1)
{
  Font::~Font(a1);
}


__int64 __fastcall Font::getTranslationFactor(__int64 result)
{
  _R2 = dword_C88934;
  _ZF = *(_BYTE *)(HIDWORD(result) + 624) == 0;
  HIDWORD(result) = 0;
  if ( _ZF )
    _R2 = &dword_C88934[1];
  *(_DWORD *)result = 0;
  __asm
  {
    VLDR            S0, [R2]
    VSTR            S0, [R0,#4]
  }
  return result;
}


int __fastcall Font::drawTransformed(float a1, int a2, float a3, float a4, int a5, float a6, int a7, int a8, int a9, int a10)
{
  int v15; // r8@1
  int v16; // r5@1
  float v17; // r10@1
  int v22; // r7@7
  char v25; // [sp+20h] [bp-98h]@7
  int v26; // [sp+28h] [bp-90h]@7
  int v27; // [sp+2Ch] [bp-8Ch]@7
  int v28; // [sp+30h] [bp-88h]@7
  int v29; // [sp+34h] [bp-84h]@7
  int v30; // [sp+38h] [bp-80h]@7
  int v31; // [sp+3Ch] [bp-7Ch]@7
  int v32; // [sp+40h] [bp-78h]@7
  int v33; // [sp+44h] [bp-74h]@7
  int v34; // [sp+48h] [bp-70h]@7
  int v35; // [sp+4Ch] [bp-6Ch]@7
  int v36; // [sp+50h] [bp-68h]@7
  int v37; // [sp+54h] [bp-64h]@7
  int v38; // [sp+58h] [bp-60h]@7
  int v39; // [sp+5Ch] [bp-5Ch]@7
  int v40; // [sp+60h] [bp-58h]@7
  int v41; // [sp+64h] [bp-54h]@7
  int v42; // [sp+68h] [bp-50h]@7
  int v43; // [sp+6Ch] [bp-4Ch]@7
  int v44; // [sp+70h] [bp-48h]@7
  float v45; // [sp+74h] [bp-44h]@7

  __asm { VLDR            S20, [SP,#0xB8+arg_14] }
  _R7 = a4;
  __asm { VLDR            S0, =3.4028e38 }
  v15 = LODWORD(a3);
  v16 = a2;
  v17 = a1;
  __asm
  {
    VCMPE.F32       S20, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF || a9 == 1 )
    _R0 = Font::getLineLength(SLODWORD(a1), (int *)LODWORD(a3), 1065353216, 0);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
  else
    __asm { VLDR            S16, =0.0 }
    VLDR            S18, [SP,#0xB8+arg_C]
    VCMPE.F32       S16, S20
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VDIV.F32        S0, S20, S16
      VMUL.F32        S18, S0, S18
  MatrixStack::push((MatrixStack *)&v25, *(_DWORD *)(v16 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v25);
    VLDR            S0, [SP,#0xB8+arg_0]
    VMOV            S2, R7
    VLDR            S6, [R0,#8]
    VLDR            S10, [R0,#0x10]
    VLDR            S12, [R0,#0x14]
    VMUL.F32        S6, S6, S2
    VLDR            S14, [R0,#0x18]
    VMUL.F32        S10, S10, S0
    VLDR            S8, [R0,#0xC]
    VMUL.F32        S12, S12, S0
    VLDR            S1, [R0,#0x1C]
    VMUL.F32        S14, S14, S0
    VLDMIA          R0, {S3-S4}
    VMUL.F32        S0, S1, S0
    VMUL.F32        S4, S4, S2
    VMUL.F32        S3, S3, S2
    VMUL.F32        S2, S8, S2
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VADD.F32        S8, S10, S3
    VLDR            S10, [R0,#0x34]
    VADD.F32        S0, S0, S2
    VLDR            S2, [R0,#0x30]
    VADD.F32        S6, S6, S12
    VADD.F32        S4, S4, S10
    VADD.F32        S2, S8, S2
    VADD.F32        S0, S0, S14
    VSTR            S2, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S18
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
  v22 = MatrixStack::MatrixStackRef::operator->((int)&v25);
  __asm { VLDR            S0, [SP,#0xB8+arg_8] }
  v26 = 0;
  v27 = 0;
  v28 = 1065353216;
  __asm { VSTR            S0, [SP,#0xB8+var_44] }
  glm::rotate<float>((int)&v29, v22, (int)&v45, (int)&v26);
  *(_DWORD *)v22 = v29;
  *(_DWORD *)(v22 + 4) = v30;
  *(_DWORD *)(v22 + 8) = v31;
  *(_DWORD *)(v22 + 12) = v32;
  *(_DWORD *)(v22 + 16) = v33;
  *(_DWORD *)(v22 + 20) = v34;
  *(_DWORD *)(v22 + 24) = v35;
  *(_DWORD *)(v22 + 28) = v36;
  *(_DWORD *)(v22 + 32) = v37;
  *(_DWORD *)(v22 + 36) = v38;
  *(_DWORD *)(v22 + 40) = v39;
  *(_DWORD *)(v22 + 44) = v40;
  *(_DWORD *)(v22 + 48) = v41;
  *(_DWORD *)(v22 + 52) = v42;
  *(_DWORD *)(v22 + 56) = v43;
  *(_DWORD *)(v22 + 60) = v44;
  if ( a9 == 1 )
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v25);
      VMOV.F32        S0, #-0.5
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VLDR            S6, [R0,#0xC]
      VLDR            S8, [R0]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S0, S16, S0
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
  Font::drawCached(v17, v16, v15, 1065353216, 1065353216, SLODWORD(a6), 1, 0.0, 0, -1, 0, 0);
  Font::drawCached(v17, v16, v15, 0, 0, SLODWORD(a6), 0, 0.0, 0, -1, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v25);
}
