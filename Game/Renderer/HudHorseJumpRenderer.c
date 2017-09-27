

mce::MaterialPtr *__fastcall HudHorseJumpRenderer::render(HudHorseJumpRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  HudHorseJumpRenderer *v6; // r9@1
  UIControl *v7; // r4@1
  ClientInstance *v8; // r7@1
  MinecraftUIRenderContext *v9; // r8@1
  ScreenRenderer *v10; // r0@1
  mce::TextureGroup *v11; // r5@2
  char *v12; // r0@2
  char *v13; // r0@3
  char *v14; // r0@4
  char *v15; // r0@5
  void *v16; // r10@7
  LocalPlayer *v17; // r0@7
  LocalPlayer *v18; // r6@7
  mce::MaterialPtr *result; // r0@11
  int v25; // r0@15
  int v28; // r0@16
  int v29; // r1@16
  ShaderColor *v30; // r0@16
  void *v31; // r0@16
  BackwardsCompatTextureInfo *v32; // r0@18
  BackwardsCompatTextureInfo *v33; // r6@18
  int v40; // r0@20
  __int64 v45; // ST08_8@20
  BackwardsCompatTextureInfo *v46; // r0@21
  BackwardsCompatTextureInfo *v47; // r7@21
  int v53; // r0@23
  int v59; // ST00_4@23
  unsigned int *v60; // r2@25
  signed int v61; // r1@27
  unsigned int *v62; // r2@29
  signed int v63; // r1@31
  unsigned int *v64; // r2@33
  signed int v65; // r1@35
  unsigned int *v66; // r2@37
  signed int v67; // r1@39
  unsigned int *v68; // r2@41
  signed int v69; // r1@43
  void *v70; // [sp+20h] [bp-F8h]@0
  void *v71; // [sp+20h] [bp-F8h]@20
  int v72; // [sp+24h] [bp-F4h]@0
  int v73; // [sp+24h] [bp-F4h]@20
  int v74; // [sp+28h] [bp-F0h]@0
  int v75; // [sp+28h] [bp-F0h]@20
  MinecraftUIRenderContext *v76; // [sp+2Ch] [bp-ECh]@16
  MinecraftUIRenderContext *v77; // [sp+2Ch] [bp-ECh]@20
  int v78; // [sp+30h] [bp-E8h]@20
  int v79; // [sp+44h] [bp-D4h]@16
  char v80; // [sp+48h] [bp-D0h]@16
  int v81; // [sp+54h] [bp-C4h]@16
  signed int v82; // [sp+58h] [bp-C0h]@16
  signed int v83; // [sp+5Ch] [bp-BCh]@16
  int v84; // [sp+60h] [bp-B8h]@16
  char *v85; // [sp+68h] [bp-B0h]@4
  char *v86; // [sp+6Ch] [bp-ACh]@4
  int v87; // [sp+70h] [bp-A8h]@4
  char v88; // [sp+74h] [bp-A4h]@4
  char *v89; // [sp+90h] [bp-88h]@2
  char *v90; // [sp+94h] [bp-84h]@2
  int v91; // [sp+98h] [bp-80h]@2
  char v92; // [sp+9Ch] [bp-7Ch]@2

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (ScreenRenderer *)HudHorseJumpRenderer::mHasLoadedTextures[0];
  if ( !HudHorseJumpRenderer::mHasLoadedTextures[0] )
  {
    v11 = (mce::TextureGroup *)ClientInstance::getTextures(a3);
    sub_119C884((void **)&v89, "textures/ui/horse_jump_empty");
    v90 = v89;
    v89 = (char *)&unk_28898CC;
    v91 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v92, v11, (int)&v90, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8D34, (mce::TexturePtr *)&v92);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v92);
    v12 = v90 - 12;
    if ( (int *)(v90 - 12) != &dword_28898C0 )
    {
      v60 = (unsigned int *)(v90 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      }
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    v13 = v89 - 12;
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v89 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    sub_119C884((void **)&v85, "textures/ui/horse_jump_full");
    v86 = v85;
    v85 = (char *)&unk_28898CC;
    v87 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v88, v11, (int)&v86, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D8D4C, (mce::TexturePtr *)&v88);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v88);
    v14 = v86 - 12;
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v86 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = v85 - 12;
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v85 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v10 = (ScreenRenderer *)HudHorseJumpRenderer::mHasLoadedTextures;
    HudHorseJumpRenderer::mHasLoadedTextures[0] = 1;
  }
  v16 = ScreenRenderer::singleton(v10);
  v17 = (LocalPlayer *)ClientInstance::getLocalPlayer(v8);
  v18 = v17;
  _R0 = LocalPlayer::getJumpRidingScale(v17);
  __asm
    VMOV            S0, R0
    VLDR            S18, =0.0
    VMOV.F32        S16, #1.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S18, S16 }
  result = (mce::MaterialPtr *)*((_DWORD *)v18 + 128);
  if ( result )
    result = (mce::MaterialPtr *)(*(int (**)(void))(*(_DWORD *)result + 384))();
    if ( result == (mce::MaterialPtr *)1 )
      __asm
        VCMPE.F32       S18, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF)
        || (v25 = ClientInstance::getLocalPlayer(v8),
            result = (mce::MaterialPtr *)(*(int (**)(void))(*(_DWORD *)v25 + 652))(),
            result == (mce::MaterialPtr *)1) )
        _R0 = UIControl::getPosition(v7);
        __asm { VLDR            S20, [R0] }
        __asm { VLDR            S24, [R0,#4] }
        ClientInstance::isVRClient(v8);
        v28 = MinecraftUIRenderContext::getScreenContext(v9);
        v29 = *((_DWORD *)v6 + 1);
        v30 = *(ShaderColor **)(v28 + 48);
        v81 = 1065353216;
        v82 = 1065353216;
        v83 = 1065353216;
        v84 = v29;
        ShaderColor::setColor(v30, (const Color *)&v81);
        __asm
        {
          VLDR            S0, =182.0
          VCVTR.S32.F32   S20, S20
          VMUL.F32        S0, S18, S0
          VCVTR.S32.F32   S22, S0
          VCVTR.S32.F32   S18, S24
        }
        sub_119C884((void **)&v79, "ui_textured_and_glcolor");
        v76 = v9;
        mce::MaterialPtr::MaterialPtr(
          (mce::MaterialPtr *)&v80,
          (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
          &v79);
        v31 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v68 = (unsigned int *)(v79 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
          }
          else
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v31);
        if ( mce::TexturePtr::hasBackwardsCompatInfo((mce::TexturePtr *)&unk_27D8D34) == 1 )
          v32 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)&unk_27D8D34);
          v33 = v32;
          _R0 = BackwardsCompatTextureInfo::getUV(v32);
          __asm
            VLDR            S0, [R0]
            VCVTR.S32.F32   S24, S0
          _R0 = BackwardsCompatTextureInfo::getUV(v33);
            VLDR            S0, [R0,#4]
            VCVTR.S32.F32   S26, S0
          _R0 = BackwardsCompatTextureInfo::getBaseUVSize(v33);
          __asm { VLDR            S28, [R0] }
            VMOV            R7, S24
            VMOV            R9, S26
            VDIV.F32        S24, S16, S0
            VDIV.F32        S26, S16, S28
        else
          __asm { VLDR            S24, =0.2 }
          _R7 = 0;
          __asm { VLDR            S26, =0.0054945 }
          _R9 = 0;
        v40 = MinecraftUIRenderContext::getScreenContext(v9);
          VMOV            R11, S20
          VMOV            R5, S22
          VMOV            R8, S18
        _R6 = _R11 - 90;
          VSTR            S26, [SP,#0x118+var_F8]
          VSTR            S24, [SP,#0x118+var_F4]
        LODWORD(v45) = _R9;
        HIDWORD(v45) = 182 - HIDWORD(_R4);
        ScreenRenderer::blit(
          (int)v16,
          v40,
          (int)&unk_27D8D34,
          _R11 - 90 + HIDWORD(_R4),
          _R8,
          _R7 + HIDWORD(_R4),
          v45,
          5LL,
          0.0,
          COERCE_FLOAT(&v80),
          v70,
          v72,
          v74,
          (int)v76,
          v78);
        if ( mce::TexturePtr::hasBackwardsCompatInfo((mce::TexturePtr *)&unk_27D8D4C) == 1 )
          v46 = (BackwardsCompatTextureInfo *)mce::TexturePtr::getBackwardsCompatInfo((mce::TexturePtr *)&unk_27D8D34);
          v47 = v46;
          _R0 = BackwardsCompatTextureInfo::getUV(v46);
            VCVTR.S32.F32   S20, S0
          _R0 = BackwardsCompatTextureInfo::getUV(v47);
            VCVTR.S32.F32   S22, S0
          _R0 = BackwardsCompatTextureInfo::getBaseUVSize(v47);
          __asm { VLDR            S24, [R0] }
            VMOV            R7, S20
            VMOV            R4, S22
            VDIV.F32        S20, S16, S0
            VDIV.F32        S16, S16, S24
          __asm { VLDR            S20, =0.2 }
          __asm { VLDR            S16, =0.0054945 }
          LODWORD(_R4) = 0;
        v53 = MinecraftUIRenderContext::getScreenContext(v77);
          VSTR            S16, [SP,#0x118+var_F8]
          VSTR            S20, [SP,#0x118+var_F4]
          v53,
          (int)&unk_27D8D4C,
          _R11 - 90,
          _R7,
          _R4,
          v71,
          v73,
          v75,
          (int)v77,
        __asm { VMOV            S0, R6 }
        _R0 = _R11 + 92;
          VCVT.F32.S32    S0, S0
          VMOV            S4, R0
        _R0 = _R8 + 5;
          VCVT.F32.S32    S2, S18
          VCVT.F32.S32    S4, S4
          VMOV            R1, S0
          VMOV            S0, R0
          VMOV            R2, S2
          VMOV            R3, S4
          VSTR            S0, [SP,#0x118+var_118]
        RectangleArea::RectangleArea(COERCE_FLOAT(&v78), _R1, _R2, _R3, v59);
        RectangleArea::operator=((int)a6, (int)&v78);
        result = mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v80);
  return result;
}


_QWORD *__fastcall HudHorseJumpRenderer::HudHorseJumpRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0390;
  return result;
}


int __fastcall HudHorseJumpRenderer::clone(HudHorseJumpRenderer *this)
{
  HudHorseJumpRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI20HudHorseJumpRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall HudHorseJumpRenderer::~HudHorseJumpRenderer(HudHorseJumpRenderer *this)
{
  HudHorseJumpRenderer::~HudHorseJumpRenderer(this);
}


void __fastcall HudHorseJumpRenderer::~HudHorseJumpRenderer(HudHorseJumpRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}
