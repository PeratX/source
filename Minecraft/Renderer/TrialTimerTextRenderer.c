

void __fastcall TrialTimerTextRenderer::~TrialTimerTextRenderer(TrialTimerTextRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E07F0;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  operator delete((void *)v1);
}


void __fastcall TrialTimerTextRenderer::render(TrialTimerTextRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  TrialTimerTextRenderer::render(this, a2, a3, a4, a5, a6);
}


void *__fastcall TrialTimerTextRenderer::clone(TrialTimerTextRenderer *this)
{
  TrialTimerTextRenderer *v1; // r5@1
  void *v2; // r4@1
  void *result; // r0@1
  void *v4; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = operator new(0xCu);
  MinecraftUICustomRenderer::MinecraftUICustomRenderer((MinecraftUICustomRenderer *)v2);
  *(_DWORD *)v2 = &off_26E07F0;
  sub_119C854((int *)v2 + 2, (int *)&Util::EMPTY_STRING);
  v4 = v2;
  std::__shared_ptr<UICustomRenderer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<TrialTimerTextRenderer,std::default_delete<std::default_delete>>(
    (int)v1,
    (int *)&v4);
  result = v4;
  if ( v4 )
    result = (void *)(*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


MinecraftUICustomRenderer *__fastcall TrialTimerTextRenderer::~TrialTimerTextRenderer(TrialTimerTextRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E07F0;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  return v1;
}


MinecraftUICustomRenderer *__fastcall TrialTimerTextRenderer::TrialTimerTextRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E07F0;
  sub_119C854((int *)v1 + 2, (int *)&Util::EMPTY_STRING);
  return v1;
}


void __fastcall TrialTimerTextRenderer::render(TrialTimerTextRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  MinecraftUIRenderContext *v6; // r8@1
  ClientInstance *v7; // r5@1
  UIControl *v8; // r6@1
  _DWORD *v9; // r0@1
  int *v10; // r7@1
  size_t v11; // r2@1
  void *v12; // r0@3
  void *v13; // r0@4
  Level *v14; // r0@5
  __int64 v22; // r2@7
  int v28; // r0@7
  int v30; // r0@7
  int v32; // r5@7
  int v33; // r0@7
  int v37; // ST00_4@7
  void *v38; // r0@7
  unsigned int *v39; // r2@9
  signed int v40; // r1@11
  unsigned int *v41; // r2@17
  signed int v42; // r1@19
  unsigned int *v43; // r2@21
  signed int v44; // r1@23
  int v45; // [sp+0h] [bp-88h]@0
  char v46; // [sp+1Ch] [bp-6Ch]@7
  int v47; // [sp+2Ch] [bp-5Ch]@7
  int v48; // [sp+34h] [bp-54h]@3
  int v49; // [sp+38h] [bp-50h]@3

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v10 = (int *)((char *)this + 8);
  v9 = (_DWORD *)*((_DWORD *)this + 2);
  v11 = *(v9 - 3);
  if ( v11 == *((_DWORD *)Util::EMPTY_STRING - 3) && !memcmp(v9, Util::EMPTY_STRING, v11) )
  {
    sub_119C884((void **)&v48, "trial.pauseScreen.remainingTime");
    I18n::get(&v49, (int **)&v48);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v10, &v49);
    v12 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
    {
      v41 = (unsigned int *)(v49 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    v13 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v48 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
  }
  v14 = (Level *)ClientInstance::getLevel(v7);
  _R0 = 108000 - *(_DWORD *)Level::getCurrentTick(v14);
  _R1 = 458129845;
  if ( _R0 <= 0 )
    _R0 = 0;
  __asm { SMMUL.W         R1, R0, R1 }
  LODWORD(v22) = ((signed int)_R1 >> 7) + (_R1 >> 31);
  _R0 = _R0 - 1200 * v22;
  _R1 = 1717986919;
  __asm { SMMUL.W         R0, R0, R1 }
  HIDWORD(v22) = ((signed int)_R0 >> 3) + (_R0 >> 31);
  Util::format((Util *)&v47, (const char *)*v10, v22);
  _R7 = UIControl::getPosition(v8);
  _R0 = UIControl::getSize(v8);
  __asm
    VLDR            S18, [R7]
    VLDR            S20, [R7,#4]
    VLDR            S22, [R0]
    VLDR            S24, [R0,#4]
  v28 = ClientInstance::getFont(v7);
  _R0 = Font::getLineLength(v28, &v47, 1065353216, 0);
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  v30 = ClientInstance::getFont(v7);
  _R0 = Font::getTextHeight(v30, &v47, 1065353216);
    VCVT.F32.S32    S26, S0
  v32 = ClientInstance::getFont(v7);
  v33 = MinecraftUIRenderContext::getScreenContext(v6);
    VMOV.F32        S0, #-0.5
    VADD.F32        S18, S22, S18
    VADD.F32        S20, S24, S20
    VMUL.F32        S0, S26, S0
    VSUB.F32        S2, S18, S16
    VADD.F32        S0, S20, S0
    VMOV            R3, S2
    VSTR            S0, [SP,#0x88+var_88]
  Font::drawTransformed(
    *(float *)&v32,
    v33,
    COERCE_FLOAT(&v47),
    _R3,
    v45,
    COERCE_FLOAT(&Color::WHITE),
    0,
    1065353216,
    2139095039);
    VMOV            R1, S20
    VADD.F32        S0, S16, S18
    VMOV            R3, S0
    VADD.F32        S0, S26, S20
  RectangleArea::RectangleArea(COERCE_FLOAT(&v46), _R1, _R1, _R3, v37);
  RectangleArea::operator=((int)a6, (int)&v46);
  v38 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
}


void __fastcall TrialTimerTextRenderer::~TrialTimerTextRenderer(TrialTimerTextRenderer *this)
{
  TrialTimerTextRenderer::~TrialTimerTextRenderer(this);
}
