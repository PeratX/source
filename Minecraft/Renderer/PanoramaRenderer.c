

_QWORD *__fastcall PanoramaRenderer::PanoramaRenderer(_QWORD *a1, int a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@2
  signed int v7; // r0@5
  void *v8; // r0@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  int v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+Ch] [bp-1Ch]@1
  int v18; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  UICustomRenderer::UICustomRenderer(a1);
  *(_DWORD *)v3 = &off_26E05E4;
  *((_DWORD *)v3 + 2) = 0;
  v4 = (int)(v3 + 1);
  *(_BYTE *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  sub_119C884((void **)&v17, "rotation");
  sub_119C884((void **)&v16, "none");
  UIResolvedDef::getAsString(&v18, v2, (int **)&v17, &v16);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  if ( sub_119C9E8((const void **)&v18, "auto") )
    if ( sub_119C9E8((const void **)&v18, "gesture_x") )
      v7 = 0;
      v7 = 2;
  else
    v7 = 1;
  *(_DWORD *)v4 = v7;
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v3;
}


_BYTE *__fastcall PanoramaRenderer::clone(PanoramaRenderer *this, int a2)
{
  PanoramaRenderer *v2; // r4@1
  int v3; // r5@1
  _BYTE *v4; // r6@1
  _BYTE *result; // r0@1
  _BYTE *v6; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x18u);
  UICustomRenderer::UICustomRenderer(v4);
  *(_DWORD *)v4 = &off_26E05E4;
  v4[20] = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 4) = 0;
  v6 = v4;
  *((_DWORD *)v4 + 2) = *(_DWORD *)(v3 + 8);
  *((_DWORD *)v4 + 3) = *(_DWORD *)(v3 + 12);
  std::__shared_ptr<UICustomRenderer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<PanoramaRenderer,std::default_delete<std::default_delete>>(
    (int)v2,
    (int *)&v6);
  result = v6;
  if ( v6 )
    result = (_BYTE *)(*(int (**)(void))(*(_DWORD *)v6 + 4))();
  return result;
}


void __fastcall PanoramaRenderer::render(int a1, int a2, ClientInstance *a3, UIControl *a4)
{
  PanoramaRenderer::render(a1, a2, a3, a4);
}


void __fastcall PanoramaRenderer::render(int a1, int a2, ClientInstance *a3, UIControl *a4)
{
  UIControl *v4; // r5@1
  ClientInstance *v6; // r6@1
  int v11; // r4@3
  Json::Value *v12; // r4@5
  char *v13; // r1@6
  char *v14; // r0@8
  int v15; // r1@9
  int v16; // r4@10
  const char *v17; // r7@10
  Json::Value *v18; // r4@10
  Json::Value *v19; // r4@12
  char *v20; // r1@13
  char *v21; // r0@15
  mce::TextureGroup *v22; // r6@16
  signed int v23; // r0@16
  char *v24; // r0@16
  char *v25; // r0@17
  char v26; // r0@18
  int v27; // r4@21
  SpriteComponent *v28; // r9@22
  mce::Texture *v30; // r0@24
  int v32; // r7@26
  Json::Value *v33; // r4@26
  signed int v34; // r0@26
  Json::Value *v35; // r4@28
  int v37; // r4@30
  const char *v38; // r7@30
  Json::Value *v39; // r4@30
  signed int v40; // r0@30
  Json::Value *v41; // r4@32
  int v43; // r4@34
  int v44; // r5@34
  const char *v45; // r4@34
  Json::Value *v46; // r5@34
  signed int v47; // r0@35
  Json::Value *v48; // r4@37
  _BYTE *v52; // r0@56
  void *v53; // r0@58
  unsigned int *v54; // r2@60
  signed int v55; // r1@62
  unsigned int *v56; // r2@64
  signed int v57; // r1@66
  unsigned int *v58; // r2@68
  signed int v59; // r1@70
  unsigned int *v60; // r2@72
  signed int v61; // r1@74
  unsigned int *v62; // r2@76
  signed int v63; // r1@78
  unsigned int *v64; // r2@80
  signed int v65; // r1@82
  float v66; // [sp+0h] [bp-C0h]@55
  int v67; // [sp+4h] [bp-BCh]@55
  float v68; // [sp+8h] [bp-B8h]@51
  char v69; // [sp+10h] [bp-B0h]@34
  const char *v70; // [sp+14h] [bp-ACh]@34
  int v71; // [sp+18h] [bp-A8h]@34
  int v72; // [sp+1Ch] [bp-A4h]@34
  const char *v73; // [sp+20h] [bp-A0h]@34
  char v74; // [sp+24h] [bp-9Ch]@30
  const char *v75; // [sp+28h] [bp-98h]@30
  int v76; // [sp+2Ch] [bp-94h]@30
  char *v77; // [sp+30h] [bp-90h]@16
  char *v78; // [sp+34h] [bp-8Ch]@16
  int v79; // [sp+38h] [bp-88h]@16
  char v80; // [sp+3Ch] [bp-84h]@16
  _BYTE *v81; // [sp+58h] [bp-68h]@10
  char v82; // [sp+5Ch] [bp-64h]@10
  const char *v83; // [sp+60h] [bp-60h]@10
  _BYTE *v84; // [sp+64h] [bp-5Ch]@13
  _DWORD *v85; // [sp+6Ch] [bp-54h]@3
  _DWORD *v86; // [sp+70h] [bp-50h]@6
  char v87; // [sp+74h] [bp-4Ch]@6
  char v88; // [sp+78h] [bp-48h]@13

  v4 = a4;
  _R8 = a1;
  v6 = a3;
  _R0 = UIControl::getSize(a4);
  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S0, [R0]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    return;
  _R0 = UIControl::getSize(v4);
    VLDR            S0, [R0,#4]
  v11 = UIControl::getPropertyBag(v4);
  sub_119C884((void **)&v85, (const char *)&unk_257BC67);
  if ( Json::Value::isNull((Json::Value *)(v11 + 8))
    || Json::Value::isObject((Json::Value *)(v11 + 8)) != 1
    || (v12 = (Json::Value *)Json::Value::operator[](v11 + 8, "#texture"), Json::Value::isString(v12) != 1) )
    v86 = v85;
    v13 = (char *)&unk_28898CC;
    v85 = &unk_28898CC;
  else
    jsonValConversion<std::string>::as((int *)&v86, (int)&v87, (int)v12);
    v13 = (char *)v85;
  v14 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
    }
    else
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (int)v86;
  if ( *(v86 - 3) )
    v16 = UIControl::getPropertyBag(v4);
    gsl::basic_string_span<char const,-1>::remove_z<21u>((int)&v82, (int)"#texture_file_system");
    sub_119C884((void **)&v81, (const char *)&unk_257BC67);
    v17 = v83;
    v18 = (Json::Value *)(v16 + 8);
    if ( Json::Value::isNull(v18)
      || Json::Value::isObject(v18) != 1
      || (v19 = (Json::Value *)Json::Value::operator[]((int)v18, v17), Json::Value::isString(v19) != 1) )
      v84 = v81;
      v20 = (char *)&unk_28898CC;
      v81 = &unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v84, (int)&v88, (int)v19);
      v20 = v81;
    v21 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
      }
      else
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v22 = (mce::TextureGroup *)ClientInstance::getTextures(v6);
    sub_119C854((int *)&v77, (int *)&v86);
    v23 = ResourceUtil::pathFromString(*((_DWORD *)v84 - 3), v84);
    v78 = v77;
    v79 = v23;
    v77 = (char *)&unk_28898CC;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v80, v22, (int)&v78, 0);
    v24 = v78 - 12;
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v78 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    v25 = v77 - 12;
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v77 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    v26 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
    __dmb();
    if ( !(v26 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
      type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
    v27 = type_id<UIComponent,SpriteComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v4, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
      v28 = *(SpriteComponent **)(*((_DWORD *)v4 + 27) + 4 * UIControl::_getComponentIndex(v4, v27));
      v28 = 0;
    _KR00_8 = *(_QWORD *)UIControl::getSize(v4);
    v30 = (mce::Texture *)mce::TexturePtr::operator->((int)&v80);
    _R0 = mce::Texture::getDescription(v30);
    __asm
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VCVT.F32.U32    S18, S2
      VCVT.F32.U32    S16, S0
    if ( !*(_BYTE *)(_R8 + 20) )
      __asm
        VMOV            S0, R6
        VMOV            S2, R10
        VDIV.F32        S0, S18, S0
        VMUL.F32        S0, S0, S2
        VMOV.F32        S2, #0.5
        VSUB.F32        S0, S16, S0
        VSTR            S0, [R8,#0xC]
      *(_BYTE *)(_R8 + 20) = 1;
    v32 = UIControl::getPropertyBag(v4);
    v33 = (Json::Value *)(v32 + 8);
    v34 = Json::Value::isNull((Json::Value *)(v32 + 8));
    __asm { VLDR            S20, =0.0 }
    if ( !v34 && Json::Value::isObject(v33) == 1 )
      v35 = (Json::Value *)Json::Value::operator[]((int)v33, "#uv_offset_x");
      if ( Json::Value::isNumeric(v35) == 1 )
        _R0 = Json::Value::asFloat(v35, 0.0);
        __asm { VMOV            S20, R0 }
    v76 = 0;
    UIPropertyBag::set<int>(v32, 12, "#uv_offset_x", &v76);
    v37 = UIControl::getPropertyBag(v4);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v74, (int)"#gesture_mouse_delta_x");
    v38 = v75;
    v39 = (Json::Value *)(v37 + 8);
    v40 = Json::Value::isNull(v39);
    __asm { VLDR            S22, =0.0 }
    if ( !v40 && Json::Value::isObject(v39) == 1 )
      v41 = (Json::Value *)Json::Value::operator[]((int)v39, v38);
      if ( Json::Value::isNumeric(v41) == 1 )
        _R0 = Json::Value::asFloat(v41, 0.0);
        __asm { VMOV            S22, R0 }
    v43 = UIControl::getPropertyBag(v4);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v72, (int)"#gesture_mouse_delta_x");
    v71 = 0;
    UIPropertyBag::set<float>(v43, v72, v73, (int)&v71);
    v44 = UIControl::getPropertyBag(v4);
    gsl::basic_string_span<char const,-1>::remove_z<23u>((int)&v69, (int)"#scroll_button_release");
    v45 = v70;
    v46 = (Json::Value *)(v44 + 8);
    if ( Json::Value::isNull(v46) )
      v47 = 0;
    else if ( Json::Value::isObject(v46) == 1 )
      v48 = (Json::Value *)Json::Value::operator[]((int)v46, v45);
      if ( Json::Value::isBool(v48) == 1 )
        v47 = Json::Value::asBool(v48, 0);
        v47 = 0;
      VMOV            S0, R6
      VMOV            S2, R10
      VDIV.F32        S4, S0, S18
      VMUL.F32        S6, S4, S16
      VCMPE.F32       S6, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_56;
      VCMPE.F32       S20, #0.0
    if ( _ZF )
        VLDR            S6, [R8,#0x10]
        VCMPE.F32       S6, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        goto LABEL_113;
        VNMUL.F32       S8, S22, S6
        VCMPE.F32       S8, #0.0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        if ( !(_NF ^ _VF) )
          goto LABEL_48;
        __asm
        {
          VNEG.F32        S6, S22
          VMUL.F32        S6, S4, S6
        }
LABEL_113:
          VMUL.F32        S8, S22, S4
          VSUB.F32        S6, S6, S8
      __asm { VSTR            S6, [R8,#0x10] }
      __asm { VLDR            S6, =0.0 }
      *(_DWORD *)(_R8 + 16) = 0;
LABEL_48:
    if ( v47 == 1 )
      __asm { VADD.F32        S4, S6, S20 }
        VMOV.F32        S8, #-15.0
        VMUL.F32        S4, S4, S8
        VMUL.F32        S4, S4, S22
        VADD.F32        S4, S4, S20
      VDIV.F32        S0, S18, S0
      VLDR            S8, [R8,#0xC]
      VMUL.F32        S0, S0, S2
      VADD.F32        S4, S4, S8
      VSTR            S4, [R8,#0xC]
      VLDR            S4, =0.95
      VMUL.F32        S4, S6, S4
      VSTR            S4, [R8,#0x10]
      VSTR            S0, [SP,#0xC0+var_B8]
      VSTR            S18, [SP,#0xC0+var_B4]
    SpriteComponent::setUVSize((int)v28, (int)&v68);
    __asm { VLDR            S18, [R8,#0xC] }
    _R0 = SpriteComponent::getUVSize(v28);
      VCMPE.F32       S18, #0.0
      VLDR            S2, [R0]
      VSUB.F32        S2, S16, S2
      VLDR            S0, =0.0
      VCMPE.F32       S18, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S18 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S2 }
      VSTR            S0, [R8,#0xC]
      VSTR            S0, [SP,#0xC0+var_C0]
    v67 = 0;
    SpriteComponent::setUV((int)v28, (int)&v66);
LABEL_56:
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v80);
    v52 = v84 - 12;
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v84 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v52);
    v15 = (int)v86;
  v53 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v15 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v53);
}


void __fastcall PanoramaRenderer::~PanoramaRenderer(PanoramaRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)UICustomRenderer::~UICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


_QWORD *__fastcall PanoramaRenderer::PanoramaRenderer(_QWORD *a1)
{
  _QWORD *result; // r0@1

  result = UICustomRenderer::UICustomRenderer(a1);
  *(_DWORD *)result = &off_26E05E4;
  *((_BYTE *)result + 20) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  return result;
}


void __fastcall PanoramaRenderer::~PanoramaRenderer(PanoramaRenderer *this)
{
  PanoramaRenderer::~PanoramaRenderer(this);
}
