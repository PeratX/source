

int __fastcall HudCursorRenderer::~HudCursorRenderer(HudCursorRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E02D0;
  v2 = (HudCursorRenderer *)((char *)this + 8);
  mce::TexturePtr::~TexturePtr((HudCursorRenderer *)((char *)this + 20));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


int __fastcall HudCursorRenderer::clone(HudCursorRenderer *this)
{
  HudCursorRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI17HudCursorRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


MinecraftUICustomRenderer *__fastcall HudCursorRenderer::HudCursorRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E02D0;
  sub_119C884((void **)&v6, "ui_crosshair");
  mce::MaterialPtr::MaterialPtr(
    (MinecraftUICustomRenderer *)((char *)v1 + 8),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v6);
  v2 = (void *)(v6 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  mce::TexturePtr::TexturePtr((MinecraftUICustomRenderer *)((char *)v1 + 20));
  return v1;
}


void __fastcall HudCursorRenderer::~HudCursorRenderer(HudCursorRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E02D0;
  v2 = (HudCursorRenderer *)((char *)this + 8);
  mce::TexturePtr::~TexturePtr((HudCursorRenderer *)((char *)this + 20));
  mce::MaterialPtr::~MaterialPtr(v2);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HudCursorRenderer::render(HudCursorRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r7@1
  HudCursorRenderer *v7; // r11@1
  UIControl *v8; // r6@1
  MinecraftUIRenderContext *v9; // r10@1
  int result; // r0@1
  Options *v11; // r0@2
  mce::TextureGroup *v12; // r5@4
  char *v13; // r0@4
  char *v14; // r0@5
  Player *v15; // r0@6
  void *v16; // r0@6
  int v17; // r5@6
  int v18; // r4@6
  Player *v19; // r0@6
  int v20; // r8@6
  ClientInputHandler *v21; // r0@6
  GuiData *v28; // r0@11
  int v30; // r0@11
  int v34; // ST00_4@11
  unsigned int *v35; // r2@19
  signed int v36; // r1@21
  unsigned int *v37; // r2@23
  signed int v38; // r1@25
  void *v39; // [sp+Ch] [bp-E4h]@3
  char v40; // [sp+10h] [bp-E0h]@11
  float v41; // [sp+20h] [bp-D0h]@11
  signed int v42; // [sp+28h] [bp-C8h]@11
  signed int v43; // [sp+2Ch] [bp-C4h]@11
  int v44; // [sp+30h] [bp-C0h]@6
  int v45; // [sp+38h] [bp-B8h]@16
  void *v46; // [sp+54h] [bp-9Ch]@14
  void *ptr; // [sp+64h] [bp-8Ch]@12
  char *v48; // [sp+80h] [bp-70h]@4
  char *v49; // [sp+84h] [bp-6Ch]@4
  int v50; // [sp+88h] [bp-68h]@4
  char v51; // [sp+8Ch] [bp-64h]@4

  v6 = a3;
  v7 = this;
  v8 = a4;
  v9 = a2;
  result = ClientInstance::isARVRClient(a3);
  if ( !result )
  {
    v11 = (Options *)ClientInstance::getOptions(v6);
    result = Options::getHideHud(v11);
    if ( !result )
    {
      v39 = ScreenRenderer::singleton(0);
      if ( !mce::TexturePtr::get((HudCursorRenderer *)((char *)v7 + 20)) )
      {
        v12 = (mce::TextureGroup *)ClientInstance::getTextures(v6);
        sub_119C884((void **)&v48, "textures/ui/cross_hair");
        v49 = v48;
        v48 = (char *)&unk_28898CC;
        v50 = 0;
        mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v51, v12, (int)&v49, 0);
        mce::TexturePtr::operator=((HudCursorRenderer *)((char *)v7 + 20), (mce::TexturePtr *)&v51);
        mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v51);
        v13 = v49 - 12;
        if ( (int *)(v49 - 12) != &dword_28898C0 )
        {
          v35 = (unsigned int *)(v49 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          }
          else
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v13);
        }
        v14 = v48 - 12;
        if ( (int *)(v48 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v48 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v14);
      }
      v15 = (Player *)ClientInstance::getLocalPlayer(v6);
      v16 = Player::getSelectedItem(v15);
      ItemInstance::ItemInstance((ItemInstance *)&v44, (int)v16);
      v17 = v44;
      v18 = Item::mBow;
      v19 = (Player *)ClientInstance::getLocalPlayer(v6);
      v20 = *(_DWORD *)Player::getItemInUse(v19);
      v21 = (ClientInputHandler *)ClientInstance::getInput(v6);
      if ( ClientInputHandler::useFreeformPickDirection(v21) != 1 )
        goto LABEL_37;
      _ZF = v17 == v18;
      if ( v17 == v18 )
        _ZF = v17 == v20;
      if ( _ZF )
LABEL_37:
        _R0 = UIControl::getSize(v8);
        __asm { VLDR            S16, [R0] }
        __asm { VLDR            S18, [R0,#4] }
        v28 = (GuiData *)ClientInstance::getGuiData(v6);
        _R0 = GuiData::getScreenSizeData(v28);
        __asm
          VLDR            S0, [R0,#0x10]
          VMOV.F32        S4, #0.5
          VLDR            S2, [R0,#0x14]
          VSUB.F32        S0, S0, S16
          VMUL.F32        S20, S0, S4
          VSUB.F32        S0, S2, S18
          VCVTR.S32.F32   S2, S20
          VMUL.F32        S22, S0, S4
          VSTR            S2, [SP,#0xF0+var_D0]
          VCVTR.S32.F32   S0, S22
          VSTR            S0, [SP,#0xF0+var_CC]
        v42 = 16;
        v43 = 16;
        v30 = MinecraftUIRenderContext::getScreenContext(v9);
        ScreenRenderer::blit((int)v39, v30, (HudCursorRenderer *)((char *)v7 + 20), (int)&v41, (int)v7 + 8);
          VMOV            R1, S20
          VADD.F32        S0, S20, S16
          VMOV            R2, S22
          VMOV            R3, S0
          VADD.F32        S0, S22, S18
          VSTR            S0, [SP,#0xF0+var_F0]
        RectangleArea::RectangleArea(COERCE_FLOAT(&v40), _R1, _R2, _R3, v34);
        RectangleArea::operator=((int)a6, (int)&v40);
      if ( ptr )
        operator delete(ptr);
      if ( v46 )
        operator delete(v46);
      result = v45;
      if ( v45 )
        result = (*(int (**)(void))(*(_DWORD *)v45 + 4))();
    }
  }
  return result;
}


void __fastcall HudCursorRenderer::~HudCursorRenderer(HudCursorRenderer *this)
{
  HudCursorRenderer::~HudCursorRenderer(this);
}
