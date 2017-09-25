

int __fastcall LivePlayerRenderer::_setupPlayerRenderGliding(int a1, int a2, mce::Camera *this, int a4, float a5, float a6)
{
  int result; // r0@4
  int v26; // [sp+0h] [bp-68h]@2
  int v27; // [sp+4h] [bp-64h]@2
  int v28; // [sp+8h] [bp-60h]@2
  int v29; // [sp+Ch] [bp-5Ch]@2
  int v30; // [sp+10h] [bp-58h]@2
  int v31; // [sp+14h] [bp-54h]@2
  int v32; // [sp+18h] [bp-50h]@2
  int v33; // [sp+1Ch] [bp-4Ch]@2
  int v34; // [sp+20h] [bp-48h]@2
  int v35; // [sp+24h] [bp-44h]@2
  int v36; // [sp+28h] [bp-40h]@2
  int v37; // [sp+2Ch] [bp-3Ch]@2
  int v38; // [sp+30h] [bp-38h]@2
  int v39; // [sp+34h] [bp-34h]@2
  int v40; // [sp+38h] [bp-30h]@2
  int v41; // [sp+3Ch] [bp-2Ch]@2
  int v42; // [sp+40h] [bp-28h]@2
  int v43; // [sp+44h] [bp-24h]@2
  int v44; // [sp+48h] [bp-20h]@2
  int v45; // [sp+4Ch] [bp-1Ch]@2

  __asm
  {
    VLDR            S0, =0.6
    VLDR            S2, [SP,#0x68+arg_4]
  }
  _R5 = a4;
  _R4 = a2;
  __asm { VMUL.F32        S16, S2, S0 }
  _R0 = mce::Camera::getForwardVector(this);
    VLDR            S6, [R0,#8]
    VMOV            S0, R5
    VLDR            S4, [SP,#0x68+arg_0]
    VLDR            S2, [R4]
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S6, =50.0
      VMUL.F32        S2, S2, S0
      VLDR            S12, [R4,#0x10]
      VADD.F32        S4, S4, S6
      VLDR            S6, [R4,#4]
      VLDR            S10, [R4,#0xC]
      VLDR            S14, [R4,#0x14]
      VMUL.F32        S6, S6, S0
      VLDR            S3, [R4,#0x18]
      VMUL.F32        S10, S10, S0
      VLDR            S8, [R4,#8]
      VLDR            S5, [R4,#0x1C]
      VMUL.F32        S0, S8, S0
      VLDR            S1, =-200.0
      VMUL.F32        S12, S12, S4
      VLDR            S7, [R4,#0x20]
      VMUL.F32        S14, S14, S4
      VLDR            S8, [R4,#0x24]
      VMUL.F32        S3, S3, S4
      VMUL.F32        S4, S5, S4
      VMUL.F32        S5, S7, S1
      VLDR            S7, [R4,#0x28]
      VMUL.F32        S8, S8, S1
      VADD.F32        S2, S12, S2
      VLDR            S12, [R4,#0x2C]
      VADD.F32        S6, S14, S6
      VMUL.F32        S14, S7, S1
      VADD.F32        S0, S3, S0
      VADD.F32        S4, S4, S10
      VLDR            S10, [R4,#0x34]
      VMUL.F32        S12, S12, S1
      VADD.F32        S2, S2, S5
      VADD.F32        S6, S6, S8
      VLDR            S8, [R4,#0x30]
      VADD.F32        S0, S0, S14
      VADD.F32        S4, S4, S12
      VLDR            S12, [R4,#0x38]
      VADD.F32        S2, S2, S8
      VLDR            S8, [R4,#0x3C]
      VADD.F32        S6, S6, S10
      VADD.F32        S0, S0, S12
      VADD.F32        S4, S4, S8
      VSTR            S2, [R4,#0x30]
      VSTR            S6, [R4,#0x34]
      VSTR            S0, [R4,#0x38]
      VSTR            S4, [R4,#0x3C]
    }
  else
      VMOV.F32        S6, #-10.0
    v26 = 0;
    v27 = 0;
    v28 = 1065353216;
    v45 = 1127481344;
    glm::rotate<float>((int)&v29, _R4, (int)&v45, (int)&v26);
    *(_DWORD *)_R4 = v29;
    *(_DWORD *)(_R4 + 4) = v30;
    *(_DWORD *)(_R4 + 8) = v31;
    *(_DWORD *)(_R4 + 12) = v32;
    *(_DWORD *)(_R4 + 16) = v33;
    *(_DWORD *)(_R4 + 20) = v34;
    *(_DWORD *)(_R4 + 24) = v35;
    *(_DWORD *)(_R4 + 28) = v36;
    *(_DWORD *)(_R4 + 32) = v37;
    *(_DWORD *)(_R4 + 36) = v38;
    *(_DWORD *)(_R4 + 40) = v39;
    *(_DWORD *)(_R4 + 44) = v40;
    *(_DWORD *)(_R4 + 48) = v41;
    *(_DWORD *)(_R4 + 52) = v42;
    *(_DWORD *)(_R4 + 56) = v43;
    *(_DWORD *)(_R4 + 60) = v44;
  v26 = 1065353216;
  v27 = 0;
  v28 = 0;
  v45 = 1092616192;
  glm::rotate<float>((int)&v29, _R4, (int)&v45, (int)&v26);
  _R0 = v29;
  *(_DWORD *)_R4 = v29;
  _R1 = v30;
  *(_DWORD *)(_R4 + 4) = v30;
  __asm { VMOV            S0, R0 }
  _R2 = v31;
  *(_DWORD *)(_R4 + 8) = v31;
  __asm { VMOV            S2, R1 }
  _R0 = v32;
  __asm { VNMUL.F32       S0, S16, S0 }
  *(_DWORD *)(_R4 + 12) = v32;
  __asm { VMOV            S4, R2 }
  _R1 = v33;
  __asm { VNMUL.F32       S2, S16, S2 }
  *(_DWORD *)(_R4 + 16) = v33;
  __asm { VMOV            S6, R0 }
  _R0 = v34;
  __asm { VNMUL.F32       S4, S16, S4 }
  *(_DWORD *)(_R4 + 20) = v34;
  __asm { VMOV            S8, R1 }
  _R2 = v35;
  __asm { VNMUL.F32       S6, S16, S6 }
  *(_DWORD *)(_R4 + 24) = v35;
  __asm { VMOV            S10, R0 }
  _R0 = v36;
  __asm { VMUL.F32        S8, S8, S16 }
  *(_DWORD *)(_R4 + 28) = v36;
  __asm { VMOV            S12, R2 }
  _R1 = v37;
  __asm { VMUL.F32        S10, S10, S16 }
  *(_DWORD *)(_R4 + 32) = v37;
  __asm { VMOV            S14, R0 }
  _R0 = v38;
  __asm { VMUL.F32        S12, S12, S16 }
  *(_DWORD *)(_R4 + 36) = v38;
  __asm { VMOV            S1, R1 }
  _R2 = v39;
  __asm { VMUL.F32        S14, S14, S16 }
  *(_DWORD *)(_R4 + 40) = v39;
  __asm { VMOV            S3, R0 }
  _R0 = v40;
    VMUL.F32        S1, S1, S16
    VMOV            S5, R2
  *(_DWORD *)(_R4 + 44) = v40;
    VMUL.F32        S3, S3, S16
    VMOV            S7, R0
  *(_DWORD *)(_R4 + 48) = v41;
    VMUL.F32        S5, S5, S16
    VMUL.F32        S7, S7, S16
  *(_DWORD *)(_R4 + 52) = v42;
  *(_DWORD *)(_R4 + 56) = v43;
  result = v44;
  *(_DWORD *)(_R4 + 60) = v44;
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
    VSTR            S6, [R4,#0xC]
    VSTR            S8, [R4,#0x10]
    VSTR            S10, [R4,#0x14]
    VSTR            S12, [R4,#0x18]
    VSTR            S14, [R4,#0x1C]
    VSTR            S1, [R4,#0x20]
    VSTR            S3, [R4,#0x24]
    VSTR            S5, [R4,#0x28]
    VSTR            S7, [R4,#0x2C]
  return result;
}


void __fastcall LivePlayerRenderer::~LivePlayerRenderer(LivePlayerRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall LivePlayerRenderer::render(LivePlayerRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r10@1
  ClientInstance *v7; // r9@1
  int v8; // r8@1
  const GuiData *v9; // r5@1
  int v20; // r0@4
  float v21; // r1@4
  int v22; // r0@5
  int v23; // r2@5
  int v24; // r11@6
  int v27; // r4@6
  int v30; // r0@9
  int v31; // r0@9
  EntityRenderDispatcher *v32; // r0@9
  int v33; // r0@9
  int v34; // r4@9
  signed int v35; // r0@10
  int *v36; // r8@11
  int v38; // r4@13
  int v39; // r0@14
  int v40; // r10@14
  __int64 v41; // kr10_8@15
  int v42; // r5@15
  int v43; // r11@15
  int v44; // r6@15
  int v45; // r9@15
  char *v47; // r0@15
  int v48; // r0@15
  int v49; // r0@18
  int v51; // [sp+0h] [bp-1B8h]@0
  int v52; // [sp+0h] [bp-1B8h]@1
  int v53; // [sp+4h] [bp-1B4h]@1
  int v54; // [sp+10h] [bp-1A8h]@10
  int v55; // [sp+14h] [bp-1A4h]@10
  UIControl *v56; // [sp+18h] [bp-1A0h]@10
  int v57; // [sp+1Ch] [bp-19Ch]@10
  int v58; // [sp+20h] [bp-198h]@6
  int v59; // [sp+24h] [bp-194h]@6
  int v60; // [sp+28h] [bp-190h]@6
  int v61; // [sp+2Ch] [bp-18Ch]@6
  int v62; // [sp+30h] [bp-188h]@6
  int v63; // [sp+34h] [bp-184h]@12
  float x; // [sp+38h] [bp-180h]@12
  int v65; // [sp+3Ch] [bp-17Ch]@15
  int *v66; // [sp+40h] [bp-178h]@11
  EntityRenderDispatcher *v67; // [sp+44h] [bp-174h]@9
  char v68; // [sp+48h] [bp-170h]@18
  char v69; // [sp+58h] [bp-160h]@15
  char v70; // [sp+64h] [bp-154h]@9
  char v71; // [sp+C8h] [bp-F0h]@9
  float v72; // [sp+104h] [bp-B4h]@6
  float v73; // [sp+108h] [bp-B0h]@1
  float v74; // [sp+10Ch] [bp-ACh]@1
  char v75; // [sp+110h] [bp-A8h]@1
  int v76; // [sp+118h] [bp-A0h]@6
  int v77; // [sp+11Ch] [bp-9Ch]@6
  int v78; // [sp+120h] [bp-98h]@6
  int v79; // [sp+124h] [bp-94h]@6
  int v80; // [sp+128h] [bp-90h]@6
  int v81; // [sp+12Ch] [bp-8Ch]@6
  int v82; // [sp+130h] [bp-88h]@6
  int v83; // [sp+134h] [bp-84h]@6
  int v84; // [sp+138h] [bp-80h]@6
  int v85; // [sp+13Ch] [bp-7Ch]@6
  int v86; // [sp+140h] [bp-78h]@6
  int v87; // [sp+144h] [bp-74h]@6
  int v88; // [sp+148h] [bp-70h]@6
  int v89; // [sp+14Ch] [bp-6Ch]@6
  int v90; // [sp+150h] [bp-68h]@6
  int v91; // [sp+154h] [bp-64h]@6
  int v92; // [sp+158h] [bp-60h]@6
  int v93; // [sp+15Ch] [bp-5Ch]@6
  int v94; // [sp+160h] [bp-58h]@6
  float v95; // [sp+164h] [bp-54h]@6

  v6 = a4;
  v7 = a3;
  v8 = MinecraftUIRenderContext::getScreenContext(a2);
  v9 = *(const GuiData **)(v8 + 24);
  MatrixStack::push((MatrixStack *)&v75, *(_DWORD *)(v8 + 16) + 16);
  _R0 = UIControl::getPosition(v6);
  __asm { VLDR            S16, [R0] }
  __asm
  {
    VMOV            R4, S16
    VLDR            S16, [R0,#4]
    VSTR            S16, [SP,#0x1B8+var_1B8]
  }
  LivePlayerRenderer::_getMousePosition(
    (LivePlayerRenderer *)&v53,
    &v74,
    (ClientInstance *)&v73,
    *(float *)&_R4,
    *(float *)&v51,
    v9,
    v7,
    v6);
  _R5 = ClientInstance::getLocalPlayer(v7);
  _R0 = UIControl::getSize(v6);
  __asm { VLDR            S18, [R0] }
    VLDR            S0, [R0,#4]
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S18, S0 }
  if ( Mob::isGliding((Mob *)_R5) == 1 )
    v20 = MatrixStack::MatrixStackRef::operator*((int)&v75);
    __asm
    {
      VSTR            S16, [SP,#0x1B8+var_1B8]
      VSTR            S18, [SP,#0x1B8+var_1B4]
    }
    LivePlayerRenderer::_setupPlayerRenderGliding(
      v20,
      *(mce::Camera **)(v8 + 16),
      _R4,
      *(float *)&v52,
      *(float *)&v53);
  else
    v22 = MatrixStack::MatrixStackRef::operator*((int)&v75);
    LivePlayerRenderer::_setupPlayerRender(*(float *)&v22, *(float *)&v22, v23, _R4, v52, v53);
    VLDR            S22, =0.025
    VLDR            S0, [SP,#0x1B8+var_B0]
  v24 = *(_QWORD *)(_R5 + 120);
  __asm { VMUL.F32        S0, S0, S22 }
  v62 = *(_QWORD *)(_R5 + 120) >> 32;
  v59 = *(_DWORD *)(_R5 + 3412);
  v58 = *(_DWORD *)(_R5 + 3416);
  v61 = *(_DWORD *)(_R5 + 3420);
  v60 = *(_DWORD *)(_R5 + 3424);
  __asm { VMOV            R0, S0 }
  v72 = mce::Math::atan(_R0, v21);
  _R0 = mce::Radian::asFloat((mce::Radian *)&v72);
  v27 = MatrixStack::MatrixStackRef::operator->((int)&v75);
  __asm { VMOV.F32        S16, #-20.0 }
  v76 = 1065353216;
  v77 = 0;
  v78 = 0;
    VMUL.F32        S24, S18, S16
    VSTR            S24, [SP,#0x1B8+var_54]
  glm::rotate<float>((int)&v79, v27, (int)&v95, (int)&v76);
  *(_DWORD *)v27 = v79;
  *(_DWORD *)(v27 + 4) = v80;
  *(_DWORD *)(v27 + 8) = v81;
  *(_DWORD *)(v27 + 12) = v82;
  *(_DWORD *)(v27 + 16) = v83;
  *(_DWORD *)(v27 + 20) = v84;
  *(_DWORD *)(v27 + 24) = v85;
  *(_DWORD *)(v27 + 28) = v86;
  *(_DWORD *)(v27 + 32) = v87;
  *(_DWORD *)(v27 + 36) = v88;
  *(_DWORD *)(v27 + 40) = v89;
  *(_DWORD *)(v27 + 44) = v90;
  *(_DWORD *)(v27 + 48) = v91;
  *(_DWORD *)(v27 + 52) = v92;
  *(_DWORD *)(v27 + 56) = v93;
  *(_DWORD *)(v27 + 60) = v94;
    VLDR            S0, [SP,#0x1B8+var_AC]
    VMUL.F32        S0, S0, S22
    VMOV            R0, S0
  _R0 = atanf(_R0);
    VMOV.F32        S0, #20.0
    VLDR            S4, =40.0
    VMOV            S2, R0
    VMUL.F32        S20, S2, S4
    VMUL.F32        S18, S2, S0
    VSTR            S18, [R6]
    VSTR            S18, [R7]
    VSTR            S20, [R5,#0x7C]
  if ( Entity::isRiding((Entity *)_R5) == 1 && *(_BYTE *)(Entity::getRide((Entity *)_R5) + 528) )
      VLDRNE          S0, =-90.0
      VLDRNE          S2, [R5,#0x7C]
      VADDNE.F32      S0, S2, S0
      VSTRNE          S0, [R5,#0x7C]
  __asm { VSTR            S24, [R5,#0x78] }
  v30 = *(_DWORD *)(_R5 + 124);
  *(_DWORD *)(_R5 + 3420) = v30;
  *(_DWORD *)(_R5 + 3424) = v30;
  ScreenContextHelper::makeScreenContextAlphaOverride((UIScreenContext *)&v71, v8, 1.0);
  v31 = ClientInstance::getMinecraftGame(v7);
  BaseEntityRenderContext::BaseEntityRenderContext((int)&v70, (int)&v71, v7, v31);
  v32 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher((BaseEntityRenderContext *)&v70);
  v67 = v32;
  v33 = EntityRenderDispatcher::getRenderer(v32, (Entity *)_R5);
  v34 = v33;
  if ( v33 )
    *(_BYTE *)(v33 + 136) = 1;
    EntityRenderDispatcher::render((int)v67, (int)&v70, (Entity *)_R5, (int)&Vec3::ZERO, (int)&Vec2::ZERO);
    v35 = Entity::isRide((Entity *)_R5);
    v54 = v34;
    v55 = v24;
    v56 = v6;
    v57 = _R5;
    if ( v35 == 1 )
      v36 = (int *)*(_QWORD *)(v57 + 476);
      v66 = (int *)(*(_QWORD *)(v57 + 476) >> 32);
      if ( v36 != v66 )
      {
        __asm
        {
          VLDR            S0, [SP,#0x1B8+var_B0]
          VMUL.F32        S0, S0, S22
          VMOV            R0, S0
        }
        x = _R0;
        v63 = (int)&Vec2::ZERO;
        do
          v38 = *v36;
          if ( Entity::hasType(*v36, 256) == 1 )
          {
            v39 = EntityRenderDispatcher::getRenderer(v67, (Entity *)v38);
            v40 = v39;
            if ( v39 )
            {
              *(_BYTE *)(v39 + 136) = 1;
              v41 = *(_QWORD *)(v38 + 120);
              v65 = *(_QWORD *)(v38 + 120);
              v42 = *(_DWORD *)(v38 + 3412);
              v43 = *(_DWORD *)(v38 + 3416);
              v44 = *(_DWORD *)(v38 + 3420);
              v45 = *(_DWORD *)(v38 + 3424);
              __asm
              {
                VSTR            S18, [R0]
                VSTR            S20, [R4,#0x7C]
              }
              _R0 = atanf(x);
                VMOV            S0, R0
                VMUL.F32        S0, S0, S16
                VSTR            S0, [R4,#0x78]
                VSTR            S20, [R0]
              v47 = Entity::getEntityData((Entity *)v38);
              SynchedEntityData::getVec3((SynchedEntityData *)&v69, (int)v47, 0x39u);
              EntityRenderDispatcher::render((int)v67, (int)&v70, (Entity *)v38, (int)&v69, v63);
              *(_BYTE *)(v40 + 136) = 0;
              v48 = v65;
              *(_DWORD *)(v38 + 3412) = v42;
              *(_DWORD *)(v38 + 3416) = v43;
              *(_DWORD *)(v38 + 124) = HIDWORD(v41);
              *(_DWORD *)(v38 + 120) = v48;
              *(_DWORD *)(v38 + 3420) = v44;
              *(_DWORD *)(v38 + 3424) = v45;
            }
          }
          ++v36;
        while ( v66 != v36 );
      }
    _R5 = v57;
    *(_BYTE *)(v54 + 136) = 0;
    v6 = v56;
    v24 = v55;
  *(_DWORD *)(_R5 + 3412) = v59;
  *(_DWORD *)(_R5 + 3416) = v58;
  v49 = v62;
  *(_DWORD *)(_R5 + 120) = v24;
  *(_DWORD *)(_R5 + 124) = v49;
  *(_DWORD *)(_R5 + 3420) = v61;
  *(_DWORD *)(_R5 + 3424) = v60;
  UIControl::getAABB((UIControl *)&v68, (int)v6);
  RectangleArea::operator=((int)a6, (int)&v68);
  BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v70);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v75);
}


void __fastcall LivePlayerRenderer::~LivePlayerRenderer(LivePlayerRenderer *this)
{
  LivePlayerRenderer::~LivePlayerRenderer(this);
}


int __fastcall LivePlayerRenderer::clone(LivePlayerRenderer *this)
{
  LivePlayerRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI18LivePlayerRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


_QWORD *__fastcall LivePlayerRenderer::LivePlayerRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0564;
  return result;
}


int __fastcall LivePlayerRenderer::_setupPlayerRender(float a1, float a2, int a3, int _R3, int a5, int a6)
{
  int result; // r0@1
  int v12; // [sp+0h] [bp-58h]@1
  int v13; // [sp+4h] [bp-54h]@1
  int v14; // [sp+8h] [bp-50h]@1
  float v15; // [sp+Ch] [bp-4Ch]@1
  int v27; // [sp+3Ch] [bp-1Ch]@1
  int v28; // [sp+40h] [bp-18h]@1
  int v29; // [sp+44h] [bp-14h]@1
  int v30; // [sp+48h] [bp-10h]@1
  int v31; // [sp+4Ch] [bp-Ch]@1

  _R4 = a2;
  __asm
  {
    VMOV            S8, R3
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
    VLDR            S10, [SP,#0x58+arg_0]
    VMUL.F32        S0, S0, S8
    VLDR            S12, [R4,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S14, [R4,#0x10]
    VLDR            S4, [R4,#8]
    VMUL.F32        S12, S12, S10
    VLDR            S6, [R4,#0xC]
    VMUL.F32        S14, S14, S10
    VLDR            S3, [R4,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R4,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S1, =-50.0
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R4,#0x20]
    VLDR            S8, [R4,#0x24]
    VMUL.F32        S5, S7, S1
    VLDR            S7, [R4,#0x28]
    VADD.F32        S0, S14, S0
    VADD.F32        S2, S12, S2
    VLDR            S12, [R4,#0x2C]
    VMUL.F32        S8, S8, S1
    VMUL.F32        S14, S7, S1
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R4,#0x34]
    VMUL.F32        S12, S12, S1
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R4,#0x30]
    VADD.F32        S4, S4, S14
    VADD.F32        S6, S6, S12
    VLDR            S12, [R4,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R4,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R4,#0x30]
    VSTR            S2, [R4,#0x34]
    VSTR            S4, [R4,#0x38]
    VSTR            S6, [R4,#0x3C]
  }
  v12 = 0;
  v13 = 0;
  v14 = 1065353216;
  v31 = 1127481344;
  glm::rotate<float>((int)&v15, SLODWORD(a2), (int)&v31, (int)&v12);
    VLDR            S0, [SP,#0x58+arg_4]
    VLDR            S2, [SP,#0x58+var_24]
    VLDR            S4, [SP,#0x58+var_4C]
    VLDR            S6, [SP,#0x58+var_48]
    VMUL.F32        S2, S2, S0
    VLDR            S8, [SP,#0x58+var_44]
    VNMUL.F32       S4, S0, S4
    VLDR            S12, [SP,#0x58+var_28]
    VNMUL.F32       S6, S0, S6
    VLDR            S14, [SP,#0x58+var_2C]
    VNMUL.F32       S8, S0, S8
    VLDR            S1, [SP,#0x58+var_30]
    VMUL.F32        S12, S12, S0
    VLDR            S3, [SP,#0x58+var_34]
    VMUL.F32        S14, S14, S0
    VLDR            S5, [SP,#0x58+var_20]
    VMUL.F32        S1, S1, S0
    VLDR            S7, [SP,#0x58+var_38]
    VMUL.F32        S3, S3, S0
    VLDR            S9, [SP,#0x58+var_3C]
    VMUL.F32        S5, S5, S0
    VLDR            S10, [SP,#0x58+var_40]
    VMUL.F32        S7, S7, S0
    VMUL.F32        S9, S9, S0
    VNMUL.F32       S0, S0, S10
  *(_DWORD *)(LODWORD(_R4) + 48) = v27;
  *(_DWORD *)(LODWORD(_R4) + 52) = v28;
  *(_DWORD *)(LODWORD(_R4) + 56) = v29;
  result = v30;
  *(_DWORD *)(LODWORD(_R4) + 60) = v30;
    VSTR            S4, [R4]
    VSTR            S6, [R4,#4]
    VSTR            S8, [R4,#8]
    VSTR            S0, [R4,#0xC]
    VSTR            S9, [R4,#0x10]
    VSTR            S7, [R4,#0x14]
    VSTR            S3, [R4,#0x18]
    VSTR            S1, [R4,#0x1C]
    VSTR            S14, [R4,#0x20]
    VSTR            S12, [R4,#0x24]
    VSTR            S2, [R4,#0x28]
    VSTR            S5, [R4,#0x2C]
  return result;
}


char *__fastcall LivePlayerRenderer::_getMousePosition(LivePlayerRenderer *this, float *a2, ClientInstance *a3, float a4, float a5, const GuiData *a6, const ClientInstance *a7, const UIControl *a8)
{
  Mob *v11; // r0@1
  Mouse *v12; // r0@1
  Json::Value *v21; // r7@2
  Json::Value *v22; // r7@4
  ClientInputHandler *v23; // r0@6
  char *result; // r0@9

  _R7 = a4;
  _R4 = a3;
  _R5 = a2;
  v11 = (Mob *)ClientInstance::getLocalPlayer(a7);
  v12 = (Mouse *)Mob::isGliding(v11);
  if ( v12 == (Mouse *)1 )
  {
LABEL_12:
    result = 0;
    *(_DWORD *)_R5 = 0;
    *(_DWORD *)_R4 = 0;
    return result;
  }
  __asm
    VMOV            S16, R7
    VLDR            S18, [SP,#0x38+arg_0]
  _R0 = Mouse::getX(v12);
    VMOV            S0, R0
    VCVT.F32.S32    S20, S0
  _R0 = (Mouse *)GuiData::getInvGuiScale(a6);
    VMUL.F32        S0, S20, S0
    VSTR            S0, [R5]
  _R0 = Mouse::getY(_R0);
  _R0 = GuiData::getInvGuiScale(a6);
    VSTR            S0, [R4]
  v21 = (Json::Value *)(UIControl::getPropertyBag(a8) + 8);
  if ( Json::Value::isNull(v21)
    || Json::Value::isObject(v21) != 1
    || (v22 = (Json::Value *)Json::Value::operator[]((int)v21, "#look_at_cursor"), Json::Value::isBool(v22) != 1)
    || Json::Value::asBool(v22, 0) != 1
    || (v23 = (ClientInputHandler *)ClientInstance::getInput(a7), ClientInputHandler::getCurrentInputMode(v23) != 1) )
    __asm { VLDR            S0, =0.0 }
  else
    __asm
    {
      VLDR            S0, [R5]
      VSUB.F32        S0, S16, S0
      VSTR            S0, [R5]
      VLDR            S0, [R4]
      VSUB.F32        S0, S18, S0
    }
  __asm { VSTR            S0, [R4] }
  result = (char *)ClientInstance::isARVRClient(a7);
  if ( result == (char *)1 )
    if ( *(_BYTE *)(ClientInstance::getGameRenderer(a7) + 812) )
      _R0 = ClientInstance::getGameRenderer(a7);
      __asm
      {
        VMOV.F32        S0, #0.5
        VLDR            S2, [R0,#0x180]
        VLDR            S4, [R0,#0x184]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S4, S4, S0
        VADD.F32        S20, S2, S0
        VADD.F32        S22, S4, S0
      }
      result = GuiData::getScreenSizeData(a6);
        VLDR            S0, [R0,#0x10]
        VLDR            S2, [R0,#0x14]
        VMUL.F32        S0, S0, S20
        VMUL.F32        S2, S2, S22
        VSUB.F32        S0, S16, S0
        VSUB.F32        S2, S18, S2
        VSTR            S0, [R5]
        VSTR            S2, [R4]
      return result;
    goto LABEL_12;
  return result;
}
