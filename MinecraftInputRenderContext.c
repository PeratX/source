

int __fastcall MinecraftInputRenderContext::setColor(MinecraftInputRenderContext *this, const Color *a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // lr@1
  char *v5; // r7@1

  v2 = *((_DWORD *)a2 + 1);
  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 3);
  v5 = (char *)this + 4;
  *(_DWORD *)v5 = *(_DWORD *)a2;
  *((_DWORD *)v5 + 1) = v2;
  *((_DWORD *)v5 + 2) = v3;
  *((_DWORD *)v5 + 3) = v4;
  return j_j_j__ZN11Tessellator5colorERK5Color(*((Tessellator **)this + 10), a2);
}


void __fastcall MinecraftInputRenderContext::render(MinecraftInputRenderContext *this)
{
  MinecraftInputRenderContext *v1; // r9@1
  int v2; // r1@1
  GuiData *v3; // r11@1
  ShaderColor *v4; // r0@1
  int v5; // r6@1
  mce::TextureGroup *v6; // r5@1
  char *v7; // r4@1
  char *v8; // r0@1
  char *v9; // r0@2
  int v10; // r6@3
  int v11; // r8@3
  float v18; // r5@5
  int v19; // r10@5
  unsigned int *v25; // r2@7
  signed int v26; // r1@9
  unsigned int *v27; // r2@11
  signed int v28; // r1@13
  int v29; // [sp+0h] [bp-A0h]@0
  char *v30; // [sp+20h] [bp-80h]@1
  char *v31; // [sp+24h] [bp-7Ch]@1
  int v32; // [sp+28h] [bp-78h]@1
  char v33; // [sp+2Ch] [bp-74h]@1
  int v34; // [sp+44h] [bp-5Ch]@1
  signed int v35; // [sp+48h] [bp-58h]@1
  signed int v36; // [sp+4Ch] [bp-54h]@1
  signed int v37; // [sp+50h] [bp-50h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  v3 = *(GuiData **)(v2 + 24);
  v4 = *(ShaderColor **)(v2 + 48);
  v34 = 1065353216;
  v35 = 1065353216;
  v36 = 1065353216;
  v37 = 1059481190;
  ShaderColor::setColor(v4, (const Color *)&v34);
  v5 = *((_DWORD *)v1 + 9);
  v6 = (mce::TextureGroup *)*((_DWORD *)v1 + 11);
  v7 = *(char **)(v5 + 40);
  sub_119C884((void **)&v30, "textures/gui/gui");
  v31 = v30;
  v30 = (char *)&unk_28898CC;
  v32 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v33, v6, (int)&v31, 0);
  Tessellator::draw(v7, v5, (int)&unk_27C86E8, (int)&v33);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v33);
  v8 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  v9 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v30 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v11 = *((_QWORD *)v1 + 3) >> 32;
  v10 = *((_QWORD *)v1 + 3);
  if ( v10 != v11 )
    __asm { VMOV.F32        S16, #0.5 }
    do
      _R0 = Font::getLineLength(*((_DWORD *)v1 + 5), (int *)(v10 + 32), 1065353216, 0);
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S18, S0
      }
      _R4 = Font::getTextHeight(*((_DWORD *)v1 + 5), (int *)(v10 + 32), 1065353216);
      v18 = *((float *)v1 + 5);
      v19 = *((_DWORD *)v1 + 9);
      _R0 = RectangleArea::centerX((RectangleArea *)v10);
      __asm { VMOV            S20, R0 }
      _R0 = GuiData::getInvGuiScale(v3);
        VMUL.F32        S2, S18, S16
        VMUL.F32        S0, S0, S20
        VSUB.F32        S18, S0, S2
        VMOV            S0, R4
        VCVT.F32.S32    S20, S0
      _R0 = RectangleArea::centerY((RectangleArea *)v10);
        VMOV            S22, R0
        VMOV            R4, S18
        VMUL.F32        S2, S20, S16
        VMUL.F32        S0, S0, S22
        VSUB.F32        S0, S0, S2
        VSTR            S0, [SP,#0xA0+var_A0]
      Font::draw(v18, v19, v10 + 32, _R4, v29, COERCE_FLOAT(v10 + 16), 0.0, 0, -1, 0);
      v10 += 36;
    while ( v11 != v10 );
}


char *__fastcall MinecraftInputRenderContext::drawText(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r12@1
  __int64 v5; // kr00_8@1
  int *v6; // r2@1
  __int64 v7; // kr08_8@2
  int v8; // r1@2
  int v9; // r3@2
  int v10; // r5@2
  int v11; // r2@2
  char *result; // r0@2

  v3 = a1;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 28);
  v6 = (int *)(a1 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    result = j_j_j__ZNSt6vectorIN27MinecraftInputRenderContext8TextItemESaIS1_EE19_M_emplace_back_auxIJRK13RectangleAreaR5ColorRKSsEEEvDpOT_(
               (unsigned __int64 *)(a1 + 24),
               a2,
               (int)v6,
               v4);
  }
  else
    v7 = *(_QWORD *)a2;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)v5 = v7;
    v8 = *v6;
    v9 = *(_DWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 16);
    v11 = v5 + 16;
    *(_DWORD *)v11 = v8;
    *(_DWORD *)(v11 + 4) = v9;
    *(_DWORD *)(v11 + 8) = v10;
    sub_119C854((int *)(v5 + 32), v4);
    result = (char *)(*(_DWORD *)(v3 + 28) + 36);
    *(_DWORD *)(v3 + 28) = result;
  return result;
}


void __fastcall MinecraftInputRenderContext::render(MinecraftInputRenderContext *this)
{
  MinecraftInputRenderContext::render(this);
}


_DWORD *__fastcall MinecraftInputRenderContext::MinecraftInputRenderContext(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r6@1
  Tessellator *v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  *a1 = &off_26D90E8;
  ScreenRenderer::ScreenRenderer();
  *v4 = &off_26D90C8;
  v4[3] = 0;
  v4[4] = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[5] = v5;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[9] = v7;
  v8 = *(Tessellator **)(v7 + 40);
  v4[10] = v8;
  v4[11] = v6;
  Tessellator::begin(v8, 0, 0);
  return v4;
}


void __fastcall MinecraftInputRenderContext::~MinecraftInputRenderContext(MinecraftInputRenderContext *this)
{
  MinecraftInputRenderContext *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D90C8;
  v3 = *((_QWORD *)this + 3) >> 32;
  v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 32);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v2 += 36;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 6);
  }
  if ( v2 )
    operator delete((void *)v2);
  InputRenderContext::~InputRenderContext(v1);
  operator delete((void *)v1);
}


int __fastcall MinecraftInputRenderContext::measureText(RectangleArea *a1, int a2, int a3, int *a4)
{
  RectangleArea *v4; // r4@1
  GuiData *v6; // r6@1
  int result; // r0@6

  v4 = a1;
  _R8 = a3;
  v6 = *(GuiData **)(*(_DWORD *)(a2 + 36) + 24);
  if ( *(_DWORD *)(*a4 - 12) )
  {
    _R0 = Font::getLineLength(*(_DWORD *)(a2 + 20), a4, 1065353216, 0);
    if ( _R0 < 40 )
      _R0 = 40;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
  }
  else
    __asm { VLDR            S16, =0.0 }
  _R7 = GuiData::getGuiScale(v6);
  _R5 = GuiData::getGuiScale(v6);
  RectangleArea::RectangleArea(v4);
  __asm
    VMOV.F32        S18, #10.0
    VMOV            S0, R7
    VMOV            S2, R5
    VMUL.F32        S0, S0, S16
    VMOV.F32        S4, #-0.5
    VMUL.F32        S2, S2, S18
    VADD.F32        S0, S2, S0
    VMUL.F32        S2, S0, S4
    VLDR            S4, [R8]
    VADD.F32        S2, S4, S2
    VSTR            S2, [R4]
    VSTR            S0, [R4,#4]
    VLDR            S16, [R8,#4]
  _R0 = GuiData::getGuiScale(v6);
    VMOV            S0, R0
    VMUL.F32        S0, S0, S18
    VSUB.F32        S0, S16, S0
    VSTR            S0, [R4,#8]
  result = GuiData::getGuiScale(v6);
    VADD.F32        S0, S0, S16
    VSTR            S0, [R4,#0xC]
  return result;
}


int __fastcall MinecraftInputRenderContext::drawRect(MinecraftInputRenderContext *this, const RectangleArea *a2, int a3, int a4, int a5, int a6)
{
  int v11; // [sp+0h] [bp-18h]@0
  int v12; // [sp+4h] [bp-14h]@0

  __asm
  {
    VLDR            S0, [SP,#0x18+arg_4]
    VLDR            S2, [SP,#0x18+arg_0]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [SP,#0x18+var_14]
    VSTR            S2, [SP,#0x18+var_18]
  }
  return BaseScreen::drawRectangleArea(
           *((float *)this + 9),
           *(float *)&a2,
           *(float *)&a3,
           *(float *)&a4,
           v11,
           v12,
           998244352,
           998244352);
}


MinecraftInputRenderContext *__fastcall MinecraftInputRenderContext::~MinecraftInputRenderContext(MinecraftInputRenderContext *this)
{
  MinecraftInputRenderContext *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r1@11
  void *v7; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D90C8;
  v3 = *((_QWORD *)this + 3) >> 32;
  v2 = *((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(_DWORD *)(v2 + 32);
      v7 = (void *)(v6 - 12);
      if ( (int *)(v6 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v2 += 36;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 6);
  }
  if ( v2 )
    operator delete((void *)v2);
  InputRenderContext::~InputRenderContext(v1);
  return v1;
}


void __fastcall MinecraftInputRenderContext::~MinecraftInputRenderContext(MinecraftInputRenderContext *this)
{
  MinecraftInputRenderContext::~MinecraftInputRenderContext(this);
}
