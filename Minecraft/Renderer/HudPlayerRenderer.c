

_QWORD *__fastcall HudPlayerRenderer::HudPlayerRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0410;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 5) = 0;
  return result;
}


void __fastcall HudPlayerRenderer::~HudPlayerRenderer(HudPlayerRenderer *this)
{
  HudPlayerRenderer::~HudPlayerRenderer(this);
}


void __fastcall HudPlayerRenderer::~HudPlayerRenderer(HudPlayerRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E0410;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HudPlayerRenderer::~HudPlayerRenderer(HudPlayerRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E0410;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


signed int __fastcall HudPlayerRenderer::update(HudPlayerRenderer *this, ClientInstance *a2, UIControl *a3)
{
  ClientInstance *v3; // r5@1
  Mob *v5; // r6@1
  void *v7; // r8@8
  __int64 v8; // kr00_8@8
  signed int v9; // r7@9
  void *v10; // r0@14
  Minecraft *v15; // r0@18
  Timer *v16; // r0@18
  void *ptr; // [sp+0h] [bp-30h]@14
  int v19; // [sp+4h] [bp-2Ch]@14
  int v20; // [sp+8h] [bp-28h]@14
  void *v21; // [sp+Ch] [bp-24h]@8
  int v22; // [sp+10h] [bp-20h]@8

  v3 = a2;
  _R4 = this;
  v5 = (Mob *)ClientInstance::getLocalPlayer(a2);
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 312))() != 1 && (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 792))(v5) != 1 )
  {
    if ( Abilities::isFlying((Mob *)((char *)v5 + 4320)) != 1 && Mob::isGliding(v5) != 1 )
    {
      (*(void (__fastcall **)(void **, Mob *))(*(_DWORD *)v5 + 1048))(&v21, v5);
      v7 = v21;
      v8 = *(_QWORD *)((char *)_R4 + 12);
      if ( v22 - (_DWORD)v21 == HIDWORD(v8) - (_DWORD)v8 )
        v9 = memcmp(v21, (const void *)v8, v22 - (_DWORD)v21) != 0;
      else
        v9 = 1;
      if ( v7 )
        operator delete(v7);
      if ( v9 == 1 )
      {
        *((_DWORD *)_R4 + 2) = 1178304512;
        (*(void (__fastcall **)(void **, Mob *))(*(_DWORD *)v5 + 1048))(&ptr, v5);
        v10 = (void *)*((_DWORD *)_R4 + 3);
        *((_DWORD *)_R4 + 3) = ptr;
        ptr = 0;
        *((_DWORD *)_R4 + 4) = v19;
        v19 = 0;
        *((_DWORD *)_R4 + 5) = v20;
        v20 = 0;
        if ( v10 )
        {
          operator delete(v10);
          if ( ptr )
            operator delete(ptr);
        }
      }
        __asm
          VLDR            S0, [R4,#8]
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v15 = (Minecraft *)ClientInstance::getServerData(v3);
          v16 = (Timer *)Minecraft::getTimer(v15);
          _R0 = Timer::getTime(v16);
          __asm
          {
            VMOV            S0, R0
            VLDR            S2, [R4,#8]
            VSUB.F32        S0, S2, S0
            VSTR            S0, [R4,#8]
          }
    }
    else
      *((_DWORD *)_R4 + 2) = 1152319488;
  }
  else
    *((_DWORD *)_R4 + 2) = 1165623296;
  return 1;
}


int __fastcall HudPlayerRenderer::clone(HudPlayerRenderer *this)
{
  HudPlayerRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI17HudPlayerRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


int __fastcall HudPlayerRenderer::render(int result, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v10; // r10@1
  ClientInstance *v11; // r6@1
  int v18; // r7@2
  int v21; // r11@2
  int v22; // r8@2
  int v23; // r0@5
  EntityRenderDispatcher *v24; // r0@5
  int v25; // r6@5
  int v26; // r0@5
  int v27; // r7@5
  int v28; // [sp+8h] [bp-148h]@2
  int v29; // [sp+Ch] [bp-144h]@2
  char v30; // [sp+10h] [bp-140h]@7
  char v31; // [sp+20h] [bp-130h]@5
  char v32; // [sp+84h] [bp-CCh]@5
  char v33; // [sp+C0h] [bp-90h]@2
  int v34; // [sp+C8h] [bp-88h]@2
  int v35; // [sp+CCh] [bp-84h]@2
  int v36; // [sp+D0h] [bp-80h]@2
  int v37; // [sp+D4h] [bp-7Ch]@2
  int v38; // [sp+D8h] [bp-78h]@2
  int v39; // [sp+DCh] [bp-74h]@2
  int v40; // [sp+E0h] [bp-70h]@2
  int v41; // [sp+E4h] [bp-6Ch]@2
  int v42; // [sp+E8h] [bp-68h]@2
  int v43; // [sp+ECh] [bp-64h]@2
  int v44; // [sp+F0h] [bp-60h]@2
  int v45; // [sp+F4h] [bp-5Ch]@2
  int v46; // [sp+F8h] [bp-58h]@2
  int v47; // [sp+FCh] [bp-54h]@2
  int v48; // [sp+100h] [bp-50h]@2
  int v49; // [sp+104h] [bp-4Ch]@2
  int v50; // [sp+108h] [bp-48h]@2
  int v51; // [sp+10Ch] [bp-44h]@2
  int v52; // [sp+110h] [bp-40h]@2
  int v53; // [sp+114h] [bp-3Ch]@2

  __asm { VLDR            S0, [R0,#8] }
  v10 = a4;
  v11 = a3;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v29 = MinecraftUIRenderContext::getScreenContext(a2);
    _R5 = ClientInstance::getLocalPlayer(v11);
    MatrixStack::push((MatrixStack *)&v33, *(_DWORD *)(v29 + 16) + 16);
    _R0 = UIControl::getPosition(v10);
    __asm { VLDR            S16, [R0] }
    __asm { VLDR            S18, [R0,#4] }
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v33);
    __asm
    {
      VLDR            S0, [R0,#4]
      VLDR            S6, [R0,#0x10]
      VLDR            S8, [R0,#0x14]
      VMUL.F32        S0, S0, S16
      VLDR            S14, [R0]
      VMUL.F32        S6, S6, S18
      VLDR            S2, [R0,#8]
      VMUL.F32        S8, S8, S18
      VLDR            S4, [R0,#0xC]
      VMUL.F32        S14, S14, S16
      VLDR            S10, [R0,#0x18]
      VMUL.F32        S2, S2, S16
      VLDR            S12, [R0,#0x1C]
      VMUL.F32        S4, S4, S16
      VMUL.F32        S10, S10, S18
      VLDR            S1, =-50.0
      VMUL.F32        S12, S12, S18
      VLDR            S5, [R0,#0x20]
      VLDR            S3, [R0,#0x24]
      VADD.F32        S0, S8, S0
      VLDR            S8, [R0,#0x2C]
      VMUL.F32        S5, S5, S1
      VLDR            S7, [R0,#0x28]
      VADD.F32        S6, S6, S14
      VMUL.F32        S3, S3, S1
      VADD.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VMUL.F32        S14, S7, S1
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VMUL.F32        S8, S8, S1
      VADD.F32        S6, S6, S5
      VADD.F32        S0, S0, S3
      VADD.F32        S2, S2, S14
      VADD.F32        S4, S4, S8
      VLDR            S8, [R0,#0x30]
      VADD.F32        S6, S6, S8
      VLDR            S8, [R0,#0x3C]
      VADD.F32        S0, S0, S10
      VADD.F32        S2, S2, S12
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
    }
    _R0 = UIControl::getSize(v10);
      VLDR            S0, [R0]
      VNMUL.F32       S0, S16, S0
      VSTR            S0, [R0]
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
    v18 = MatrixStack::MatrixStackRef::operator->((int)&v33);
    v34 = 0;
    v35 = 0;
    v36 = 1065353216;
    v53 = 1127481344;
    glm::rotate<float>((int)&v37, v18, (int)&v53, (int)&v34);
    _R4 = _R5 + 3420;
    *(_DWORD *)v18 = v37;
    _R9 = _R5 + 3412;
    *(_DWORD *)(v18 + 4) = v38;
    *(_DWORD *)(v18 + 8) = v39;
    *(_DWORD *)(v18 + 12) = v40;
    *(_DWORD *)(v18 + 16) = v41;
    *(_DWORD *)(v18 + 20) = v42;
    *(_DWORD *)(v18 + 24) = v43;
    *(_DWORD *)(v18 + 28) = v44;
    *(_DWORD *)(v18 + 32) = v45;
    *(_DWORD *)(v18 + 36) = v46;
    *(_DWORD *)(v18 + 40) = v47;
    *(_DWORD *)(v18 + 44) = v48;
    *(_DWORD *)(v18 + 48) = v49;
    *(_DWORD *)(v18 + 52) = v50;
    *(_DWORD *)(v18 + 56) = v51;
    *(_DWORD *)(v18 + 60) = v52;
    v21 = *(_DWORD *)(_R5 + 3424);
    v22 = *(_DWORD *)(_R5 + 3416);
    v28 = *(_DWORD *)(_R5 + 124);
      VLDR            S16, [R4]
      VLDR            S18, [R9]
    *(_DWORD *)(_R5 + 3412) = -1045168128;
    *(_DWORD *)(_R5 + 3416) = -1045168128;
    if ( Entity::isRiding((Entity *)_R5) == 1 && *(_BYTE *)(Entity::getRide((Entity *)_R5) + 528) )
      __asm
      {
        VLDRNE          S0, =-90.0
        VLDRNE          S2, [R5,#0x7C]
        VADDNE.F32      S0, S2, S0
        VSTRNE          S0, [R5,#0x7C]
      }
      VLDR            S0, =-22.5
      VSUB.F32        S0, S0, S18
      VADD.F32        S0, S0, S16
      VSTR            S0, [R4]
    ScreenContextHelper::makeScreenContextAlphaOverride((UIScreenContext *)&v32, v29, 1.0);
    v23 = ClientInstance::getMinecraftGame(v11);
    BaseEntityRenderContext::BaseEntityRenderContext((int)&v31, (int)&v32, v11, v23);
    v24 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher((BaseEntityRenderContext *)&v31);
    v25 = (int)v24;
    v26 = EntityRenderDispatcher::getRenderer(v24, (Entity *)_R5);
    v27 = v26;
    if ( v26 )
      *(_BYTE *)(v26 + 136) = 1;
      EntityRenderDispatcher::render(v25, (int)&v31, (Entity *)_R5, (int)&Vec3::ZERO, (int)&Vec2::ZERO);
      *(_BYTE *)(v27 + 136) = 0;
    __asm { VSTR            S18, [R9] }
    *(_DWORD *)(_R5 + 3416) = v22;
    *(_DWORD *)(_R5 + 124) = v28;
    __asm { VSTR            S16, [R4] }
    *(_DWORD *)(_R5 + 3424) = v21;
    UIControl::getAABB((UIControl *)&v30, (int)v10);
    RectangleArea::operator=((int)a6, (int)&v30);
    BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v31);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v33);
  return result;
}
