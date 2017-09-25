

void __fastcall HudBubblesRenderer::~HudBubblesRenderer(HudBubblesRenderer *this)
{
  HudBubblesRenderer::~HudBubblesRenderer(this);
}


int __fastcall HudBubblesRenderer::clone(HudBubblesRenderer *this)
{
  HudBubblesRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI18HudBubblesRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


mce::MaterialPtr *__fastcall HudBubblesRenderer::render(HudBubblesRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  HudBubblesRenderer *v6; // r9@1
  UIControl *v7; // r6@1
  ClientInstance *v8; // r5@1
  MinecraftUIRenderContext *v9; // r10@1
  ScreenRenderer *v10; // r0@1
  mce::TextureGroup *v11; // r7@2
  char *v12; // r0@2
  char *v13; // r0@3
  char *v14; // r0@4
  char *v15; // r0@5
  void *v16; // r7@7
  int v17; // r0@7
  int v18; // r4@7
  mce::MaterialPtr *result; // r0@7
  UIControl *v20; // r11@8
  SynchedEntityData *v22; // r6@8
  int v27; // r4@8
  int v31; // r0@8
  int v32; // r1@8
  int v33; // r10@8
  ShaderColor *v34; // r0@8
  UIControl *v42; // r6@8
  void *v43; // r0@8
  int v44; // r7@9
  unsigned int v45; // r4@9
  void *v46; // r8@13
  void *v47; // r8@17
  int v49; // r4@21
  int v51; // r11@22
  unsigned int v54; // r1@28
  unsigned int v55; // r0@30
  unsigned int v56; // r5@30
  char *v57; // r0@35
  char *v58; // r4@35
  int v59; // r1@35 OVERLAPPED
  __int64 *v60; // r2@35 OVERLAPPED
  int v61; // r9@35
  char *v62; // r3@35
  __int64 *v63; // r0@35
  __int64 v64; // kr00_8@36
  void *v65; // r0@37
  unsigned int v66; // r1@37
  unsigned int v67; // r1@38
  unsigned int v68; // r0@40
  unsigned int v69; // r8@40
  _QWORD *v70; // r0@45
  __int64 v71; // r4@45
  int v72; // r1@45 OVERLAPPED
  __int64 *v73; // r2@45 OVERLAPPED
  _QWORD *v74; // r3@45
  __int64 *v75; // r0@45
  __int64 v76; // kr08_8@46
  void *v77; // r0@47
  int v78; // r1@47
  int v79; // r7@49
  unsigned int *v84; // r2@66
  signed int v85; // r1@68
  unsigned int *v86; // r2@70
  signed int v87; // r1@72
  unsigned int *v88; // r2@74
  signed int v89; // r1@76
  unsigned int *v90; // r2@78
  signed int v91; // r1@80
  unsigned int *v92; // r2@82
  signed int v93; // r1@84
  int v94; // [sp+0h] [bp-120h]@0
  int v95; // [sp+10h] [bp-110h]@20
  int v96; // [sp+14h] [bp-10Ch]@8
  int v97; // [sp+18h] [bp-108h]@9
  char v98; // [sp+20h] [bp-100h]@56
  char v99; // [sp+30h] [bp-F0h]@56
  void *v100; // [sp+40h] [bp-E0h]@16
  char *v101; // [sp+44h] [bp-DCh]@16
  char *v102; // [sp+48h] [bp-D8h]@16
  void *ptr; // [sp+4Ch] [bp-D4h]@9
  char *v104; // [sp+50h] [bp-D0h]@9
  char *v105; // [sp+54h] [bp-CCh]@9
  int v106; // [sp+5Ch] [bp-C4h]@8
  char v107; // [sp+60h] [bp-C0h]@8
  int v108; // [sp+6Ch] [bp-B4h]@8
  signed int v109; // [sp+70h] [bp-B0h]@8
  signed int v110; // [sp+74h] [bp-ACh]@8
  int v111; // [sp+78h] [bp-A8h]@8
  char v112; // [sp+7Ch] [bp-A4h]@8
  char *v113; // [sp+90h] [bp-90h]@4
  char *v114; // [sp+94h] [bp-8Ch]@4
  int v115; // [sp+98h] [bp-88h]@4
  char v116; // [sp+9Ch] [bp-84h]@4
  char *v117; // [sp+B8h] [bp-68h]@2
  char *v118; // [sp+BCh] [bp-64h]@2
  int v119; // [sp+C0h] [bp-60h]@2
  char v120; // [sp+C4h] [bp-5Ch]@2

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (ScreenRenderer *)HudBubblesRenderer::mHasLoadedTextures[0];
  if ( !HudBubblesRenderer::mHasLoadedTextures[0] )
  {
    v11 = (mce::TextureGroup *)ClientInstance::getTextures(a3);
    sub_DA7364((void **)&v117, "textures/ui/bubble");
    v118 = v117;
    v117 = (char *)&unk_28898CC;
    v119 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v120, v11, (int)&v118, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C65B4, (mce::TexturePtr *)&v120);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v120);
    v12 = v118 - 12;
    if ( (int *)(v118 - 12) != &dword_28898C0 )
    {
      v86 = (unsigned int *)(v118 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
      }
      else
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    }
    v13 = v117 - 12;
    if ( (int *)(v117 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v117 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    sub_DA7364((void **)&v113, "textures/ui/bubble_pop");
    v114 = v113;
    v113 = (char *)&unk_28898CC;
    v115 = 0;
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v116, v11, (int)&v114, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27C65CC, (mce::TexturePtr *)&v116);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v116);
    v14 = v114 - 12;
    if ( (int *)(v114 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v114 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v113 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    v10 = (ScreenRenderer *)HudBubblesRenderer::mHasLoadedTextures;
    HudBubblesRenderer::mHasLoadedTextures[0] = 1;
  }
  v16 = ScreenRenderer::singleton(v10);
  v17 = ClientInstance::getLocalPlayer(v8);
  v18 = v17;
  result = (mce::MaterialPtr *)Entity::getStatusFlag(v17, 33);
  if ( !result )
    v96 = (int)v16;
    RectangleArea::RectangleArea((RectangleArea *)&v112);
    v20 = v7;
    _R0 = UIControl::getPosition(v7);
    v22 = (SynchedEntityData *)(v18 + 176);
    __asm { VLDR            S16, [R0,#4] }
    v27 = SynchedEntityData::getShort((SynchedEntityData *)(v18 + 176), 7);
    _R7 = SynchedEntityData::getShort(v22, 43);
    _R5 = SynchedEntityData::getShort(v22, 7);
    _R8 = SynchedEntityData::getShort(v22, 43);
    v31 = MinecraftUIRenderContext::getScreenContext(v9);
    v32 = *((_DWORD *)v6 + 1);
    v33 = v31;
    v34 = *(ShaderColor **)(v31 + 48);
    v108 = 1065353216;
    v109 = 1065353216;
    v110 = 1065353216;
    v111 = v32;
    ShaderColor::setColor(v34, (const Color *)&v108);
    _R0 = v27 - 2;
    __asm
      VMOV.F32        S18, #10.0
      VMOV            S2, R7
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S18
      VDIV.F32        S0, S0, S2
      VMOV            R0, S0
    _R0 = ceilf(_R0);
      VMOV            S0, R5
      VMOV            S2, R8
      VMOV            S2, R0
      VCVTR.S32.F32   S2, S2
      VMOV            R9, S2
      VSUB.F32        S0, S0, S2
      VCVTR.S32.F32   S16, S16
      VCVTR.S32.F32   S18, S0
    sub_DA7364((void **)&v106, "ui_textured_and_glcolor");
    mce::MaterialPtr::MaterialPtr(
      (mce::MaterialPtr *)&v107,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
      &v106);
    __asm { VMOV            R4, S18 }
    v42 = v20;
    v43 = (void *)(v106 - 12);
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v106 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j_j__ZdlPv_9(v43);
    v44 = _R4 + _R9;
    _VF = __OFSUB__(_R4 + _R9, 1);
    _NF = _R4 + _R9 - 1 < 0;
    ptr = 0;
    v104 = 0;
    v45 = v44;
    v105 = 0;
    v97 = v44;
    if ( _NF ^ _VF )
      v45 = 1;
    if ( v45 >= 0x20000000 )
      sub_DA77B4("vector::reserve");
    if ( v45 )
      v46 = operator new(8 * v45);
      if ( ptr )
        operator delete(ptr);
      ptr = v46;
      v104 = (char *)v46;
      v105 = (char *)v46 + 8 * v45;
    v100 = 0;
    v101 = 0;
    v102 = 0;
      v47 = operator new(8 * v45);
      if ( v100 )
        operator delete(v100);
      v100 = v47;
      v101 = (char *)v47;
      v102 = (char *)v47 + 8 * v45;
    v95 = v33;
    if ( v44 >= 1 )
      __asm
        VMOV            R0, S16
        VCVT.F32.S32    S16, S16
      v49 = 0;
      _R0 += 9;
        VMOV            S0, R0
        VCVT.F32.S32    S18, S0
      do
        _R0 = UIControl::getPosition(v42);
        __asm { VLDR            S0, [R0] }
        v51 = v49 + 1;
        __asm
        {
          VCVTR.S32.F32   S0, S0
          VMOV            R0, S0
        }
        _R10 = _R0 - 8 * (v49 + 1);
          VMOV            S0, R10
          VCVT.F32.S32    S20, S0
        if ( _NF ^ _VF )
          if ( v104 == v105 )
          {
            v54 = (v104 - (_BYTE *)ptr) >> 3;
            if ( !v54 )
              v54 = 1;
            v55 = v54 + ((v104 - (_BYTE *)ptr) >> 3);
            v56 = v55;
            if ( 0 != v55 >> 29 )
              v56 = 0x1FFFFFFF;
            if ( v55 < v54 )
            if ( v56 >= 0x20000000 )
              sub_DA7414();
            v57 = (char *)operator new(8 * v56);
            v58 = v57;
            *(_QWORD *)&v59 = *(_QWORD *)&ptr;
            v61 = v44;
            v62 = v57;
            __asm
            {
              VSTR            S20, [R0]
              VSTR            S16, [R0,#4]
            }
            v63 = (__int64 *)ptr;
            if ( _ZF )
              v65 = ptr;
              v66 = (unsigned int)v58;
            else
              do
              {
                v64 = *v63;
                ++v63;
                *(_QWORD *)v62 = v64;
                v62 += 8;
              }
              while ( v60 != v63 );
              v66 = (unsigned int)&v58[(((unsigned int)v60 + -v59 - 8) & 0xFFFFFFF8) + 8];
            v79 = v66 + 8;
            if ( v65 )
              operator delete(v65);
            ptr = v58;
            v104 = (char *)v79;
            v44 = v61;
            v105 = &v58[8 * v56];
          }
          else
            v104 += 8;
        else if ( v101 == v102 )
          v67 = (v101 - (_BYTE *)v100) >> 3;
          if ( !v67 )
            v67 = 1;
          v68 = v67 + ((v101 - (_BYTE *)v100) >> 3);
          v69 = v68;
          if ( 0 != v68 >> 29 )
            v69 = 0x1FFFFFFF;
          if ( v68 < v67 )
          if ( v69 >= 0x20000000 )
            sub_DA7414();
          v70 = operator new(8 * v69);
          LODWORD(v71) = v70;
          *(_QWORD *)&v72 = *(_QWORD *)&v100;
          v74 = v70;
          __asm
            VSTR            S20, [R0]
            VSTR            S16, [R0,#4]
          v75 = (__int64 *)v100;
          if ( _ZF )
            v77 = v100;
            v78 = v71;
            do
              v76 = *v75;
              ++v75;
              *v74 = v76;
              ++v74;
            while ( v73 != v75 );
            v78 = (((unsigned int)v73 + -v72 - 8) & 0xFFFFFFF8) + v71 + 8;
          HIDWORD(v71) = v78 + 8;
          if ( v77 )
            operator delete(v77);
          *(_QWORD *)&v100 = v71;
          v102 = (char *)(v71 + 8 * v69);
          v44 = v97;
        else
          v101 += 8;
        __asm { VMOV            R1, S20 }
        _R0 = _R10 + 9;
          VMOV            R2, S16
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VMOV            R3, S0
          VSTR            S18, [SP,#0x120+var_120]
        RectangleArea::RectangleArea(COERCE_FLOAT(&v99), _R1, _R2, _R3, v94);
        RectangleArea::unionRects((RectangleArea *)&v98, (const RectangleArea *)&v112, (int)&v99);
        RectangleArea::operator=((int)&v112, (int)&v98);
        v49 = v51;
      while ( v51 < v44 );
    RectangleArea::operator=((int)a6, (int)&v112);
    ScreenRenderer::blitQuadBuffer(
      v96,
      (unsigned __int64 *)&ptr,
      1091567616,
      v95,
      (mce::TexturePtr *)&unk_27C65B4,
      &v107);
      (unsigned __int64 *)&v100,
      (mce::TexturePtr *)&unk_27C65CC,
    if ( v100 )
      operator delete(v100);
    if ( ptr )
      operator delete(ptr);
    result = mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v107);
  return result;
}


unsigned __int8 *__fastcall HudBubblesRenderer::reloadTexutres(HudBubblesRenderer *this)
{
  unsigned __int8 *result; // r0@1

  result = HudBubblesRenderer::mHasLoadedTextures;
  HudBubblesRenderer::mHasLoadedTextures[0] = 0;
  return result;
}


_QWORD *__fastcall HudBubblesRenderer::HudBubblesRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26D6BC8;
  return result;
}


void __fastcall HudBubblesRenderer::~HudBubblesRenderer(HudBubblesRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_3(v1);
}
