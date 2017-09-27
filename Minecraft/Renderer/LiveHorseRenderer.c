

void __fastcall LiveHorseRenderer::~LiveHorseRenderer(LiveHorseRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


_QWORD *__fastcall LiveHorseRenderer::LiveHorseRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0524;
  return result;
}


int __fastcall LiveHorseRenderer::clone(LiveHorseRenderer *this)
{
  LiveHorseRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI17LiveHorseRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall LiveHorseRenderer::~LiveHorseRenderer(LiveHorseRenderer *this)
{
  LiveHorseRenderer::~LiveHorseRenderer(this);
}


int __fastcall LiveHorseRenderer::render(LiveHorseRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r6@1
  ClientInstance *v7; // r11@1
  int v8; // r5@1
  GuiData *v9; // r7@1
  int v15; // r0@1
  __int64 v16; // r1@1
  ClientInputHandler *v24; // r0@1
  int v25; // r7@1
  Json::Value *v29; // r6@1
  Json::Value *v30; // r6@4
  signed int v31; // r6@7
  char *v32; // r0@7
  char *v33; // r0@8
  Entity *v34; // r0@10
  int v35; // r0@10
  int v36; // r0@10
  int v37; // r6@10
  float v38; // r1@14
  int v43; // r7@20
  int v44; // r0@20
  int v45; // r0@20
  int v46; // r4@20
  int v47; // r0@20
  int v48; // r5@20
  unsigned int *v50; // r2@24
  signed int v51; // r1@26
  unsigned int *v52; // r2@28
  signed int v53; // r1@30
  int v54; // [sp+8h] [bp-170h]@14
  int v55; // [sp+Ch] [bp-16Ch]@14
  int v56; // [sp+10h] [bp-168h]@14
  int v57; // [sp+14h] [bp-164h]@14
  __int64 v58; // [sp+18h] [bp-160h]@14
  char v59; // [sp+20h] [bp-158h]@20
  float v60; // [sp+84h] [bp-F4h]@20
  float v61; // [sp+88h] [bp-F0h]@16
  char *v62; // [sp+90h] [bp-E8h]@2
  char *v63; // [sp+94h] [bp-E4h]@5
  unsigned int v64; // [sp+98h] [bp-E0h]@1
  unsigned int v65; // [sp+9Ch] [bp-DCh]@1
  char v66; // [sp+A4h] [bp-D4h]@1
  char v67; // [sp+ACh] [bp-CCh]@1
  char v68; // [sp+B4h] [bp-C4h]@1
  char v69; // [sp+BCh] [bp-BCh]@1
  int v70; // [sp+CCh] [bp-ACh]@20
  int v71; // [sp+D0h] [bp-A8h]@20
  int v72; // [sp+D4h] [bp-A4h]@20
  int v73; // [sp+D8h] [bp-A0h]@20
  int v74; // [sp+DCh] [bp-9Ch]@20
  int v75; // [sp+E0h] [bp-98h]@20
  int v76; // [sp+E4h] [bp-94h]@20
  int v77; // [sp+E8h] [bp-90h]@20
  int v78; // [sp+ECh] [bp-8Ch]@20
  int v79; // [sp+F0h] [bp-88h]@20
  int v80; // [sp+F4h] [bp-84h]@20
  int v81; // [sp+F8h] [bp-80h]@20
  int v82; // [sp+FCh] [bp-7Ch]@20
  int v83; // [sp+100h] [bp-78h]@20
  int v84; // [sp+104h] [bp-74h]@20
  int v85; // [sp+108h] [bp-70h]@20
  int v86; // [sp+10Ch] [bp-6Ch]@20
  int v87; // [sp+110h] [bp-68h]@20
  int v88; // [sp+114h] [bp-64h]@20
  float v89; // [sp+118h] [bp-60h]@20
  char v90; // [sp+11Ch] [bp-5Ch]@5

  v6 = a4;
  v7 = a3;
  v8 = MinecraftUIRenderContext::getScreenContext(a2);
  v9 = *(GuiData **)(v8 + 24);
  UIControl::getAABB((UIControl *)&v69, (int)v6);
  RectangleArea::operator=((int)a6, (int)&v69);
  _R0 = GuiData::getScreenSizeData(v9);
  __asm
  {
    VLDR            S16, [R0,#0x10]
    VLDR            S24, [R0,#0x14]
  }
  MatrixStack::push((MatrixStack *)&v68, *(_DWORD *)(v8 + 16) + 32);
  v15 = MatrixStack::MatrixStackRef::operator->((int)&v68);
    VMOV.F32        S0, #2.0
    VDIV.F32        S2, S0, S16
    VDIV.F32        S0, S0, S24
    VSTR            S2, [R0]
  *(_DWORD *)(v15 + 12) = 0;
  *(_DWORD *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 4) = 0;
  *(_DWORD *)(v15 + 8) = 0;
  __asm { VSTR            S0, [R0,#0x14] }
  *(_DWORD *)(v15 + 32) = 0;
  *(_DWORD *)(v15 + 36) = 0;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = 0;
  *(_DWORD *)(v15 + 40) = -1157426576;
  *(_DWORD *)(v15 + 44) = 0;
  HIDWORD(v16) = 1065353216;
  *(_DWORD *)(v15 + 48) = -1082130432;
  *(_DWORD *)(v15 + 52) = -1082130432;
  LODWORD(v16) = -1082130430;
  *(_QWORD *)(v15 + 56) = v16;
  _R0 = UIControl::getPosition(v6);
  __asm { VLDR            S16, [R0] }
  __asm { VLDR            S20, [R0,#4] }
  _R4 = Mouse::getX(_R0);
  _R8 = (Mouse *)GuiData::getInvGuiScale(v9);
    VMOV            S0, R4
    VCVT.F32.S32    S18, S0
  _R4 = Mouse::getY(_R8);
  _R9 = GuiData::getInvGuiScale(v9);
    VCVT.F32.S32    S22, S0
  _R0 = UIControl::getSize(v6);
  __asm { VLDR            S26, [R0] }
  MatrixStack::pushIdentity((MatrixStack *)&v67, *(_DWORD *)(v8 + 16) + 16);
  MatrixStack::pushIdentity((MatrixStack *)&v66, *(_DWORD *)(v8 + 16));
  v24 = (ClientInputHandler *)ClientInstance::getInput(v7);
  ClientInputHandler::getCurrentInputMode(v24);
  v25 = ClientInstance::isARVRClient(v7);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v67);
    VSUB.F32        S0, S24, S20
    VLDR            S4, [R0,#8]
    VLDR            S6, [R0,#0xC]
    VLDR            S8, [R0,#0x10]
    VMUL.F32        S4, S4, S16
    VLDR            S10, [R0,#0x14]
    VMUL.F32        S6, S6, S16
    VLDR            S12, [R0,#0x18]
    VLDR            S14, [R0,#0x1C]
    VLDMIA          R0, {S1-S2}
    VMUL.F32        S10, S10, S0
    VMUL.F32        S2, S2, S16
    VLDR            S3, =-250.0
    VMUL.F32        S1, S1, S16
    VLDR            S5, [R0,#0x24]
    VMUL.F32        S8, S8, S0
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S12, S12, S0
    VMUL.F32        S0, S14, S0
    VMUL.F32        S14, S5, S3
    VMUL.F32        S5, S7, S3
    VLDR            S7, [R0,#0x28]
    VADD.F32        S2, S10, S2
    VLDR            S10, [R0,#0x2C]
    VADD.F32        S8, S8, S1
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VMUL.F32        S1, S7, S3
    VADD.F32        S0, S0, S6
    VMUL.F32        S10, S10, S3
    VADD.F32        S2, S2, S14
    VADD.F32        S6, S8, S5
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S0, S0, S10
    VLDR            S10, [R0,#0x34]
    VADD.F32        S2, S2, S10
    VADD.F32        S6, S6, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S4, S4, S12
    VADD.F32        S0, S0, S8
    VSTR            S6, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S26
    VSTR            S0, [R0]
    VLDR            S0, [R0,#4]
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
  v64 = -1;
  v65 = -1;
  v29 = (Json::Value *)(UIControl::getPropertyBag(v6) + 8);
  if ( PropertyBag::has(v29, 10, "#entity_id") != 1 )
    goto LABEL_42;
  sub_119C884((void **)&v62, (const char *)&unk_257BC67);
  if ( Json::Value::isNull(v29)
    || Json::Value::isObject(v29) != 1
    || (v30 = (Json::Value *)Json::Value::operator[]((int)v29, "#entity_id"), Json::Value::isString(v30) != 1) )
    v63 = v62;
    v62 = (char *)&unk_28898CC;
  else
    jsonValConversion<std::string>::as((int *)&v63, (int)&v90, (int)v30);
  v31 = Util::toInt<long long,(void *)0>((unsigned int *)&v63, &v64);
  v32 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    }
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v62 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  if ( !v31 )
LABEL_42:
    v34 = (Entity *)ClientInstance::getLocalPlayer(v7);
    v35 = Entity::getLevel(v34);
    v36 = Level::fetchEntity(v35, 0, v64, v65, 0);
    v37 = v36;
    if ( v36 && Entity::hasCategory(v36, 2) == 1 )
      __asm
      {
        VMOV            S0, R9
        VMOV.F32        S2, #1.0
        VMUL.F32        S0, S0, S22
        VMOV.F32        S4, S2
        VSUB.F32        S0, S0, S20
        VLDR            S20, =0.025
        VMUL.F32        S0, S0, S20
      }
      if ( _ZF )
        __asm { VMOVEQ.F32      S4, S0 }
      LODWORD(v38) = *(_QWORD *)(v37 + 120);
      v58 = *(_QWORD *)(v37 + 120);
      v55 = *(_DWORD *)(v37 + 3412);
      v54 = *(_DWORD *)(v37 + 3416);
      v57 = *(_DWORD *)(v37 + 3420);
      v56 = *(_DWORD *)(v37 + 3424);
      if ( v25 )
        __asm { VMOVNE.F32      S4, S2 }
      *(_DWORD *)(v37 + 120) = 0;
      *(_DWORD *)(v37 + 124) = 0;
      *(_DWORD *)(v37 + 3412) = 0;
      *(_DWORD *)(v37 + 3416) = 0;
      *(_DWORD *)(v37 + 3420) = 0;
      *(_DWORD *)(v37 + 3424) = 0;
      __asm { VMOV            R0, S4 }
      v61 = mce::Math::atan(_R0, v38);
      _R0 = mce::Radian::asFloat((mce::Radian *)&v61);
        VMOV            S0, R8
        VMOV.F32        S2, #3.0
        VMUL.F32        S0, S0, S18
        VSUB.F32        S0, S0, S16
        VLDR            S16, [R0]
        VMOV            R1, S4
      v60 = mce::Math::atan(_R1, *(float *)&_R1);
      _R0 = mce::Radian::asFloat((mce::Radian *)&v60);
      __asm { VLDR            S18, [R0] }
      v43 = MatrixStack::MatrixStackRef::operator->((int)&v67);
      __asm { VMOV.F32        S0, #20.0 }
      v70 = 1065353216;
      v71 = 0;
      v72 = 0;
        VMUL.F32        S16, S16, S0
        VMOV.F32        S0, #-20.0
        VSTR            S16, [SP,#0x178+var_60]
        VMUL.F32        S18, S18, S0
      glm::rotate<float>((int)&v73, v43, (int)&v89, (int)&v70);
      *(_DWORD *)v43 = v73;
      *(_DWORD *)(v43 + 4) = v74;
      *(_DWORD *)(v43 + 8) = v75;
      *(_DWORD *)(v43 + 12) = v76;
      *(_DWORD *)(v43 + 16) = v77;
      *(_DWORD *)(v43 + 20) = v78;
      *(_DWORD *)(v43 + 24) = v79;
      *(_DWORD *)(v43 + 28) = v80;
      *(_DWORD *)(v43 + 32) = v81;
      *(_DWORD *)(v43 + 36) = v82;
      *(_DWORD *)(v43 + 40) = v83;
      *(_DWORD *)(v43 + 44) = v84;
      *(_DWORD *)(v43 + 48) = v85;
      *(_DWORD *)(v43 + 52) = v86;
      *(_DWORD *)(v43 + 56) = v87;
      *(_DWORD *)(v43 + 60) = v88;
        VSTR            S18, [R9]
        VSTR            S18, [R4]
        VSTR            S18, [R10]
        VSTR            S18, [R8]
        VSTR            S16, [R6,#0x78]
        VSTR            S18, [R6,#0x7C]
      ScreenContextHelper::makeScreenContextAlphaOverride((UIScreenContext *)&v73, v8, 1.0);
      v44 = ClientInstance::getMinecraftGame(v7);
      BaseEntityRenderContext::BaseEntityRenderContext((int)&v59, (int)&v73, v7, v44);
      v45 = BaseEntityRenderContext::getEntityRenderDispatcher((BaseEntityRenderContext *)&v59);
      v46 = v45;
      v47 = EntityRenderDispatcher::getRenderer(v45, *(_DWORD *)(v37 + 248));
      v48 = v47;
      if ( v47 )
        *(_BYTE *)(v47 + 136) = 1;
        EntityRenderDispatcher::render(v46, (int)&v59, (Entity *)v37, (int)&Vec3::ZERO, (int)&Vec2::ZERO);
        *(_BYTE *)(v48 + 136) = 0;
      *(_DWORD *)(v37 + 3412) = v55;
      *(_DWORD *)(v37 + 3416) = v54;
      *(_QWORD *)(v37 + 120) = v58;
      *(_DWORD *)(v37 + 3420) = v57;
      *(_DWORD *)(v37 + 3424) = v56;
      BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v59);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v66);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v67);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v68);
}
