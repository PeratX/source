

void __fastcall NameTagRenderer::render(NameTagRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r7@1
  NameTagRenderer *v7; // r4@1
  ClientInstance *v8; // r8@1
  MinecraftUIRenderContext *v9; // r5@1
  int v10; // r6@1
  Json::Value *v11; // r6@1
  Json::Value *v12; // r6@3
  char *v13; // r0@6
  char *v14; // r0@7
  _DWORD *v15; // r1@8
  size_t v16; // r2@8
  int v17; // r1@10
  void *v18; // r0@10
  int *v25; // r4@11
  int v26; // t1@11
  int v27; // r0@12
  int v29; // r0@14
  ScreenRenderer *v31; // r0@14
  void *v32; // r6@14
  int v33; // r0@14
  int v34; // r6@14
  int v35; // r0@14
  int v37; // ST00_4@14
  char *v38; // r0@14
  unsigned int *v39; // r2@16
  signed int v40; // r1@18
  unsigned int *v41; // r2@20
  signed int v42; // r1@22
  unsigned int *v43; // r2@24
  signed int v44; // r1@26
  unsigned int *v45; // r2@28
  signed int v46; // r1@30
  float v47; // [sp+0h] [bp-A8h]@0
  float v48; // [sp+4h] [bp-A4h]@0
  int v49; // [sp+1Ch] [bp-8Ch]@14
  signed int v50; // [sp+20h] [bp-88h]@14
  signed int v51; // [sp+24h] [bp-84h]@14
  signed int v52; // [sp+28h] [bp-80h]@14
  int v53; // [sp+2Ch] [bp-7Ch]@14
  int v54; // [sp+30h] [bp-78h]@14
  int v55; // [sp+34h] [bp-74h]@14
  int v56; // [sp+38h] [bp-70h]@14
  int v57; // [sp+3Ch] [bp-6Ch]@14
  float v59; // [sp+44h] [bp-64h]@14
  int v61; // [sp+4Ch] [bp-5Ch]@10
  char *v62; // [sp+54h] [bp-54h]@1
  char *v63; // [sp+58h] [bp-50h]@4
  void *s1; // [sp+5Ch] [bp-4Ch]@6
  char v65; // [sp+60h] [bp-48h]@4

  v6 = a4;
  v7 = this;
  v8 = a3;
  v9 = a2;
  v10 = UIControl::getPropertyBag(a4);
  sub_119C884((void **)&v62, (const char *)&unk_257BC67);
  v11 = (Json::Value *)(v10 + 8);
  if ( Json::Value::isNull(v11)
    || Json::Value::isObject(v11) != 1
    || (v12 = (Json::Value *)Json::Value::operator[]((int)v11, "#playername"), Json::Value::isString(v12) != 1) )
  {
    v63 = v62;
    v62 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v63, (int)&v65, (int)v12);
  I18n::get((int *)&s1, (int **)&v63);
  v13 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v62 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (_DWORD *)*((_DWORD *)v7 + 2);
  v16 = *((_DWORD *)s1 - 3);
  if ( v16 != *(v15 - 3) || memcmp(s1, v15, v16) )
    EntityInteraction::setInteractText((int *)v7 + 2, (int *)&s1);
    v17 = *(_DWORD *)(MinecraftUIRenderContext::getScreenContext(v9) + 56);
    UIProfanityContext::filterProfanityFromString();
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v7 + 3,
      &v61);
    v18 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v61 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      }
      else
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
  _R6 = UIControl::getPosition(v6);
  _R0 = UIControl::getSize(v6);
  __asm
    VLDR            S16, [R0]
    VLDR            S20, [R0,#4]
    VLDR            S18, [R6]
    VLDR            S22, [R6,#4]
  v26 = *((_DWORD *)v7 + 3);
  v25 = (int *)((char *)v7 + 12);
  if ( *(_DWORD *)(v26 - 12) )
    v27 = ClientInstance::getFont(v8);
    _R0 = Font::getLineLength(v27, v25, 1065353216, 0);
    _R0 = 0;
    VMOV            S0, R0
    VCVT.F32.S32    S24, S0
  v29 = ClientInstance::getFont(v8);
  _R6 = Font::getTextHeight(v29, v25, 1065353216);
  v31 = (ScreenRenderer *)RectangleArea::RectangleArea((RectangleArea *)&v57);
    VMOV.F32        S0, #0.5
    VMOV            S8, R6
    VMOV.F32        S6, #-1.0
    VCVT.F32.S32    S8, S8
    VMUL.F32        S2, S20, S0
    VMUL.F32        S4, S16, S0
    VMUL.F32        S10, S24, S0
    VMUL.F32        S0, S8, S0
    VADD.F32        S2, S22, S2
    VADD.F32        S4, S18, S4
    VADD.F32        S12, S4, S6
    VADD.F32        S6, S2, S6
    VADD.F32        S4, S10, S4
    VSUB.F32        S8, S12, S10
    VSUB.F32        S6, S6, S0
    VADD.F32        S0, S0, S2
    VSTR            S8, [SP,#0xA8+var_6C]
    VSTR            S6, [SP,#0xA8+var_64]
    VSTR            S4, [SP,#0xA8+var_68]
    VSTR            S0, [SP,#0xA8+var_60]
  v32 = ScreenRenderer::singleton(v31);
  v33 = MinecraftUIRenderContext::getScreenContext(v9);
    VLDR            S0, [SP,#0xA8+var_68]
    VLDR            S2, [SP,#0xA8+var_60]
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 1048576000;
    VSTR            S2, [SP,#0xA8+var_A4]
    VSTR            S0, [SP,#0xA8+var_A8]
  ScreenRenderer::fill(*(float *)&v32, *(float *)&v33, v57, v59, v47, v48, (const Color *)&v53);
  RectangleArea::operator=((int)a6, (int)&v57);
    VLDR            S16, [SP,#0xA8+var_6C]
    VLDR            S18, [SP,#0xA8+var_64]
  v34 = ClientInstance::getFont(v8);
  v35 = MinecraftUIRenderContext::getScreenContext(v9);
  __asm { VMOV.F32        S0, #1.0 }
  v49 = 1065353216;
  v50 = 1065353216;
  v51 = 1065353216;
  v52 = 1065353216;
    VADD.F32        S2, S18, S0
    VADD.F32        S0, S16, S0
    VMOV            R3, S0
    VSTR            S2, [SP,#0xA8+var_A8]
  Font::draw(*(float *)&v34, v35, (int)v25, _R3, v37, COERCE_FLOAT(&v49), 0.0, 0, -1, 0);
  v38 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)((char *)s1 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
}


int __fastcall NameTagRenderer::clone(NameTagRenderer *this)
{
  NameTagRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI15NameTagRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall NameTagRenderer::~NameTagRenderer(NameTagRenderer *this)
{
  NameTagRenderer::~NameTagRenderer(this);
}


NameTagRenderer *__fastcall NameTagRenderer::~NameTagRenderer(NameTagRenderer *this)
{
  NameTagRenderer *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E05A4;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  return v1;
}


MinecraftUICustomRenderer *__fastcall NameTagRenderer::NameTagRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E05A4;
  sub_119C884((void **)v1 + 2, "#playername");
  *((_DWORD *)v1 + 3) = &unk_28898CC;
  return v1;
}


void __fastcall NameTagRenderer::~NameTagRenderer(NameTagRenderer *this)
{
  NameTagRenderer *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E05A4;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  operator delete((void *)v1);
}


void __fastcall NameTagRenderer::render(NameTagRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  NameTagRenderer::render(this, a2, a3, a4, a5, a6);
}
