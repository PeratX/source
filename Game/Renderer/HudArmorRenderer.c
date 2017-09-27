

mce::MaterialPtr *__fastcall HudArmorRenderer::render(HudArmorRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  HudArmorRenderer *v6; // r10@1
  UIControl *v7; // r6@1
  ClientInstance *v8; // r9@1
  MinecraftUIRenderContext *v9; // r8@1
  ScreenRenderer *v10; // r0@1
  mce::TextureGroup *v11; // r5@2
  char *v12; // r0@2
  char *v13; // r0@3
  char *v14; // r0@4
  char *v15; // r0@5
  char *v16; // r0@6
  char *v17; // r0@7
  void *v18; // r7@9
  int v19; // r5@9
  Json::Value *v20; // r4@9
  Json::Value *v21; // r4@11
  AttributeInstance *v22; // r0@14
  int v24; // r0@14
  AttributeInstance *v25; // r0@14
  float v27; // r1@14
  int v33; // r0@16
  signed int v34; // r11@16
  float v37; // r1@16
  int v38; // r4@16
  int v39; // r0@16
  int v40; // r1@16
  int v41; // r8@16
  ShaderColor *v42; // r0@16
  void *v43; // r0@16
  unsigned int v44; // r7@17
  int v45; // r10@19
  void *v46; // r4@21
  void *v47; // r4@25
  void *v48; // r4@29
  Options *v50; // r0@34
  signed int v55; // r0@34
  int v56; // r1@36
  unsigned int v61; // r1@46
  unsigned int v62; // r0@48
  unsigned int v63; // r4@48
  char *v64; // r0@53
  char *v65; // r8@53
  char *v66; // r3@53
  int v67; // r1@53 OVERLAPPED
  __int64 *v68; // r2@53 OVERLAPPED
  __int64 *v69; // r0@53
  __int64 v70; // r5@54
  void *v71; // r0@55
  unsigned int v72; // r1@55
  unsigned int v73; // r1@56
  unsigned int v74; // r0@58
  unsigned int v75; // r5@58
  char *v76; // r0@63
  char *v77; // r4@63
  char *v78; // r3@63
  __int64 v79; // kr08_8@63
  __int64 *v80; // r0@63
  __int64 v81; // kr10_8@64
  void *v82; // r0@65
  char *v83; // r1@65
  int v84; // r5@67
  unsigned int v85; // r1@70
  unsigned int v86; // r0@72
  unsigned int v87; // r5@72
  char *v88; // r0@77
  char *v89; // r4@77
  char *v90; // r3@77
  __int64 v91; // kr18_8@77
  __int64 *v92; // r0@77
  __int64 v93; // kr20_8@78
  void *v94; // r0@79
  char *v95; // r1@79
  int v96; // r8@81
  int v97; // r8@85
  unsigned int *v104; // r2@103
  signed int v105; // r1@105
  unsigned int *v106; // r2@111
  signed int v107; // r1@113
  unsigned int *v108; // r2@115
  signed int v109; // r1@117
  unsigned int *v110; // r2@119
  signed int v111; // r1@121
  unsigned int *v112; // r2@123
  signed int v113; // r1@125
  unsigned int *v114; // r2@127
  signed int v115; // r1@129
  unsigned int *v116; // r2@131
  signed int v117; // r1@133
  int v118; // [sp+0h] [bp-150h]@0
  int v119; // [sp+Ch] [bp-144h]@32
  int v120; // [sp+10h] [bp-140h]@11
  UIControl *v121; // [sp+14h] [bp-13Ch]@53
  int v122; // [sp+18h] [bp-138h]@33
  ClientInstance *v123; // [sp+1Ch] [bp-134h]@14
  int v124; // [sp+20h] [bp-130h]@14
  char v125; // [sp+24h] [bp-12Ch]@89
  char v126; // [sp+34h] [bp-11Ch]@89
  void *v127; // [sp+44h] [bp-10Ch]@28
  char *v128; // [sp+48h] [bp-108h]@28
  char *v129; // [sp+4Ch] [bp-104h]@28
  void *v130; // [sp+50h] [bp-100h]@24
  char *v131; // [sp+54h] [bp-FCh]@24
  char *v132; // [sp+58h] [bp-F8h]@24
  void *ptr; // [sp+5Ch] [bp-F4h]@17
  char *v134; // [sp+60h] [bp-F0h]@17
  char *v135; // [sp+64h] [bp-ECh]@17
  int v136; // [sp+6Ch] [bp-E4h]@16
  char v137; // [sp+70h] [bp-E0h]@16
  int v138; // [sp+7Ch] [bp-D4h]@16
  signed int v139; // [sp+80h] [bp-D0h]@16
  signed int v140; // [sp+84h] [bp-CCh]@16
  int v141; // [sp+88h] [bp-C8h]@16
  char v142; // [sp+8Ch] [bp-C4h]@9
  char *v143; // [sp+A0h] [bp-B0h]@6
  char *v144; // [sp+A4h] [bp-ACh]@6
  int v145; // [sp+A8h] [bp-A8h]@6
  char v146; // [sp+ACh] [bp-A4h]@6
  char *v147; // [sp+C8h] [bp-88h]@4
  char *v148; // [sp+CCh] [bp-84h]@4
  int v149; // [sp+D0h] [bp-80h]@4
  char v150; // [sp+D4h] [bp-7Ch]@4
  char *v151; // [sp+F0h] [bp-60h]@2
  char *v152; // [sp+F4h] [bp-5Ch]@2
  int v153; // [sp+F8h] [bp-58h]@2
  char v154; // [sp+FCh] [bp-54h]@2

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (ScreenRenderer *)HudArmorRenderer::mHasLoadedTextures[0];
  if ( !HudArmorRenderer::mHasLoadedTextures[0] )
  {
    v11 = (mce::TextureGroup *)ClientInstance::getTextures(a3);
    sub_119C884((void **)&v151, "textures/ui/armor_empty");
    v152 = v151;
    v151 = (char *)&unk_28898CC;
    v153 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v154, v11, (int)&v152, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D89C4, (mce::TexturePtr *)&v154);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v154);
    v12 = v152 - 12;
    if ( (int *)(v152 - 12) != &dword_28898C0 )
    {
      v106 = (unsigned int *)(v152 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v107 = __ldrex(v106);
        while ( __strex(v107 - 1, v106) );
      }
      else
        v107 = (*v106)--;
      if ( v107 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    v13 = v151 - 12;
    if ( (int *)(v151 - 12) != &dword_28898C0 )
      v108 = (unsigned int *)(v151 - 4);
          v109 = __ldrex(v108);
        while ( __strex(v109 - 1, v108) );
        v109 = (*v108)--;
      if ( v109 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    sub_119C884((void **)&v147, "textures/ui/armor_half");
    v148 = v147;
    v147 = (char *)&unk_28898CC;
    v149 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v150, v11, (int)&v148, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D89DC, (mce::TexturePtr *)&v150);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v150);
    v14 = v148 - 12;
    if ( (int *)(v148 - 12) != &dword_28898C0 )
      v110 = (unsigned int *)(v148 - 4);
          v111 = __ldrex(v110);
        while ( __strex(v111 - 1, v110) );
        v111 = (*v110)--;
      if ( v111 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = v147 - 12;
    if ( (int *)(v147 - 12) != &dword_28898C0 )
      v112 = (unsigned int *)(v147 - 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    sub_119C884((void **)&v143, "textures/ui/armor_full");
    v144 = v143;
    v143 = (char *)&unk_28898CC;
    v145 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v146, v11, (int)&v144, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D89F4, (mce::TexturePtr *)&v146);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v146);
    v16 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v114 = (unsigned int *)(v144 - 4);
          v115 = __ldrex(v114);
        while ( __strex(v115 - 1, v114) );
        v115 = (*v114)--;
      if ( v115 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = v143 - 12;
    if ( (int *)(v143 - 12) != &dword_28898C0 )
      v116 = (unsigned int *)(v143 - 4);
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
        v117 = (*v116)--;
      if ( v117 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v10 = (ScreenRenderer *)HudArmorRenderer::mHasLoadedTextures;
    HudArmorRenderer::mHasLoadedTextures[0] = 1;
  }
  v18 = ScreenRenderer::singleton(v10);
  v19 = ClientInstance::getLocalPlayer(v8);
  RectangleArea::RectangleArea((RectangleArea *)&v142);
  v20 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
  if ( Json::Value::isNull(v20) || Json::Value::isObject(v20) != 1 )
    v120 = (int)v18;
  else
    v21 = (Json::Value *)Json::Value::operator[]((int)v20, "#use_heart_offset");
    if ( Json::Value::isBool(v21) == 1 )
      Json::Value::asBool(v21, 0);
  v22 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v19 + 1004))(
                               v19,
                               &SharedAttributes::ABSORPTION);
  _R7 = AttributeInstance::getCurrentValue(v22);
  v123 = v8;
  v24 = ClientInstance::getLocalPlayer(v8);
  v124 = (*(int (**)(void))(*(_DWORD *)v24 + 1012))();
  v25 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v19 + 1004))(
                               &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getMaxValue(v25);
  __asm
    VMOV            S0, R0
    VLDR            S2, =0.0
    VMOV            S4, R7
    VCVTR.S32.F32   S0, S0
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S4 }
    VCVT.F32.S32    S0, S0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  v33 = mce::Math::ceil(_R0, v27);
  v34 = v33;
  __asm { VLDR            S2, =0.1 }
  _R9 = v33 / 2;
    VMOV            S0, R9
    VMUL.F32        S0, S0, S2
  v38 = mce::Math::ceil(_R0, v37);
  v39 = MinecraftUIRenderContext::getScreenContext(v9);
  v40 = *((_DWORD *)v6 + 1);
  v41 = v39;
  v42 = *(ShaderColor **)(v39 + 48);
  v138 = 1065353216;
  v139 = 1065353216;
  v140 = 1065353216;
  v141 = v40;
  ShaderColor::setColor(v42, (const Color *)&v138);
  sub_119C884((void **)&v136, "ui_textured_and_glcolor");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)&v137,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v136);
  v43 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v136 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
    else
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  v44 = _R9;
  ptr = 0;
  v134 = 0;
  v135 = 0;
  if ( _R9 < 1 )
    v44 = 1;
  v45 = v38;
  if ( v44 >= 0x20000000 )
    sub_119C9C4("vector::reserve");
  if ( v44 )
    v46 = operator new(8 * v44);
    if ( ptr )
      operator delete(ptr);
    ptr = v46;
    v134 = (char *)v46;
    v135 = (char *)v46 + 8 * v44;
  v130 = 0;
  v131 = 0;
  v132 = 0;
    v47 = operator new(8 * v44);
    if ( v130 )
      operator delete(v130);
    v130 = v47;
    v131 = (char *)v47;
    v132 = (char *)v47 + 8 * v44;
  v127 = 0;
  v128 = 0;
  v129 = 0;
    v48 = operator new(8 * v44);
    if ( v127 )
      operator delete(v127);
    v127 = v48;
    v128 = (char *)v48;
    v129 = (char *)v48 + 8 * v44;
  v119 = v41;
  if ( v34 >= 2 )
    v122 = 10 * v45;
    do
      _R0 = UIControl::getPosition(v7);
      __asm
        VLDR            S0, [R0]
        VCVTR.S32.F32   S16, S0
      v50 = (Options *)ClientInstance::getOptions(v123);
      Options::getUIProfile(v50);
      _R2 = 1717986919;
      _R11 = _R9 - 1;
        VLDR            S0, [R0,#4]
        SMMUL.W         R2, R11, R2
        VCVTR.S32.F32   S0, S0
      v55 = -1;
      if ( _ZF )
        v55 = 1;
      v56 = 2 * _R11 | 1;
      __asm { VMOV            R3, S16 }
      _R10 = _R3 + 8 * (_R11 - 10 * ((_R2 >> 2) + (_R2 >> 31)));
        VMOV            R2, S0
        VMOV            S0, R10
        VCVT.F32.S32    S16, S0
      _R7 = _R2 - v122 * v55;
        VMOV            S0, R7
        VCVT.F32.S32    S18, S0
      if ( v56 >= v124 )
        if ( v56 == v124 )
        {
          if ( v131 == v132 )
          {
            v73 = (v131 - (_BYTE *)v130) >> 3;
            if ( !v73 )
              v73 = 1;
            v74 = v73 + ((v131 - (_BYTE *)v130) >> 3);
            v75 = v74;
            if ( 0 != v74 >> 29 )
              v75 = 0x1FFFFFFF;
            if ( v74 < v73 )
            if ( v75 >= 0x20000000 )
              sub_119C874();
            v76 = (char *)operator new(8 * v75);
            v77 = v76;
            v121 = v7;
            v78 = v76;
            v79 = *(_QWORD *)&v130;
            __asm
            {
              VSTR            S16, [R0]
              VSTR            S18, [R0,#4]
            }
            v80 = (__int64 *)v130;
            if ( _ZF )
              v82 = v130;
              v83 = v77;
            else
              do
              {
                v81 = *v80;
                ++v80;
                *(_QWORD *)v78 = v81;
                v78 += 8;
              }
              while ( (__int64 *)HIDWORD(v79) != v80 );
              v83 = &v77[((HIDWORD(v79) - 8 - v79) & 0xFFFFFFF8) + 8];
            v96 = (int)(v83 + 8);
            if ( v82 )
              operator delete(v82);
            v130 = v77;
            v131 = (char *)v96;
            v132 = &v77[8 * v75];
            goto LABEL_88;
          }
          __asm
            VSTR            S16, [R0]
            VSTR            S18, [R0,#4]
          v131 += 8;
        }
        else
          if ( v56 <= v124 || v56 > 20 )
            goto LABEL_89;
          if ( v128 == v129 )
            v85 = (v128 - (_BYTE *)v127) >> 3;
            if ( !v85 )
              v85 = 1;
            v86 = v85 + ((v128 - (_BYTE *)v127) >> 3);
            v87 = v86;
            if ( 0 != v86 >> 29 )
              v87 = 0x1FFFFFFF;
            if ( v86 < v85 )
            if ( v87 >= 0x20000000 )
            v88 = (char *)operator new(8 * v87);
            v89 = v88;
            v90 = v88;
            v91 = *(_QWORD *)&v127;
            v92 = (__int64 *)v127;
              v94 = v127;
              v95 = v89;
                v93 = *v92;
                ++v92;
                *(_QWORD *)v90 = v93;
                v90 += 8;
              while ( (__int64 *)HIDWORD(v91) != v92 );
              v95 = &v89[((HIDWORD(v91) - 8 - v91) & 0xFFFFFFF8) + 8];
            v97 = (int)(v95 + 8);
            if ( v94 )
              operator delete(v94);
            v127 = v89;
            v128 = (char *)v97;
            v129 = &v89[8 * v87];
          v128 += 8;
        if ( v134 == v135 )
          v61 = (v134 - (_BYTE *)ptr) >> 3;
          if ( !v61 )
            v61 = 1;
          v62 = v61 + ((v134 - (_BYTE *)ptr) >> 3);
          v63 = v62;
          if ( 0 != v62 >> 29 )
            v63 = 0x1FFFFFFF;
          if ( v62 < v61 )
          if ( v63 >= 0x20000000 )
            sub_119C874();
          v64 = (char *)operator new(8 * v63);
          v65 = v64;
          v121 = v7;
          v66 = v64;
          *(_QWORD *)&v67 = *(_QWORD *)&ptr;
          v69 = (__int64 *)ptr;
          if ( _ZF )
            v71 = ptr;
            v72 = (unsigned int)v65;
          else
            do
              v70 = *v69;
              ++v69;
              *(_QWORD *)v66 = v70;
              v66 += 8;
            while ( v68 != v69 );
            v72 = (unsigned int)&v65[(((unsigned int)v68 + -v67 - 8) & 0xFFFFFFF8) + 8];
          v84 = v72 + 8;
          if ( v71 )
            operator delete(v71);
          ptr = v65;
          v134 = (char *)v84;
          v135 = &v65[8 * v63];
LABEL_88:
          v7 = v121;
          goto LABEL_89;
        __asm
          VSTR            S16, [R0]
          VSTR            S18, [R0,#4]
        v134 += 8;
LABEL_89:
      __asm { VMOV            R1, S16 }
      _R0 = _R10 + 9;
        VMOV            R2, S18
        VMOV            S0, R0
      _R0 = _R7 + 9;
        VCVT.F32.S32    S0, S0
        VMOV            R3, S0
        VSTR            S0, [SP,#0x150+var_150]
      RectangleArea::RectangleArea(COERCE_FLOAT(&v126), _R1, _R2, _R3, v118);
      RectangleArea::unionRects((RectangleArea *)&v125, (const RectangleArea *)&v142, (int)&v126);
      RectangleArea::operator=((int)&v142, (int)&v125);
      _VF = __OFSUB__(_R9, 1);
      _ZF = _R9 == 1;
      _NF = _R9-- - 1 < 0;
    while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
  RectangleArea::operator=((int)a6, (int)&v142);
  ScreenRenderer::blitQuadBuffer(
    v120,
    (unsigned __int64 *)&ptr,
    1091567616,
    v119,
    (mce::TexturePtr *)&unk_27D89F4,
    &v137);
    (unsigned __int64 *)&v130,
    (mce::TexturePtr *)&unk_27D89DC,
    (unsigned __int64 *)&v127,
    (mce::TexturePtr *)&unk_27D89C4,
  if ( v127 )
    operator delete(v127);
  if ( v130 )
    operator delete(v130);
  if ( ptr )
    operator delete(ptr);
  return mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v137);
}


void __fastcall HudArmorRenderer::~HudArmorRenderer(HudArmorRenderer *this)
{
  HudArmorRenderer::~HudArmorRenderer(this);
}


void __fastcall HudArmorRenderer::~HudArmorRenderer(HudArmorRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


_QWORD *__fastcall HudArmorRenderer::HudArmorRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0290;
  return result;
}


int __fastcall HudArmorRenderer::clone(HudArmorRenderer *this)
{
  HudArmorRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI16HudArmorRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}
