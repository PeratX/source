

int __fastcall EnchantingBookRenderer::~EnchantingBookRenderer(EnchantingBookRenderer *this)
{
  EnchantingBookRenderer *v1; // r4@1
  Model *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E0024;
  *((_DWORD *)this + 2) = &off_26E0064;
  *((_DWORD *)this + 12) = &off_26E5458;
  v2 = (EnchantingBookRenderer *)((char *)this + 48);
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)this + 1428));
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)v1 + 1208));
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)v1 + 988));
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)v1 + 768));
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)v1 + 548));
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)v1 + 328));
  ModelPart::~ModelPart((EnchantingBookRenderer *)((char *)v1 + 108));
  mce::MaterialPtr::~MaterialPtr((EnchantingBookRenderer *)((char *)v1 + 96));
  Model::~Model(v2);
  *((_DWORD *)v1 + 2) = &off_26DCC64;
  mce::MaterialPtr::~MaterialPtr((EnchantingBookRenderer *)((char *)v1 + 36));
  mce::MaterialPtr::~MaterialPtr((EnchantingBookRenderer *)((char *)v1 + 24));
  mce::MaterialPtr::~MaterialPtr((EnchantingBookRenderer *)((char *)v1 + 12));
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


void __fastcall EnchantingBookRenderer::~EnchantingBookRenderer(EnchantingBookRenderer *this)
{
  EnchantingBookRenderer::~EnchantingBookRenderer(this);
}


MinecraftUICustomRenderer *__fastcall EnchantingBookRenderer::EnchantingBookRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  EntityShaderManager::EntityShaderManager((_DWORD *)v1 + 2);
  *(_DWORD *)v1 = &off_26E0024;
  *((_DWORD *)v1 + 2) = &off_26E0064;
  EnchantingBookModel::EnchantingBookModel((MinecraftUICustomRenderer *)((char *)v1 + 48));
  *((_BYTE *)v1 + 1648) = 0;
  *((_DWORD *)v1 + 413) = 0;
  *((_DWORD *)v1 + 414) = 0;
  *((_DWORD *)v1 + 415) = 0;
  *((_DWORD *)v1 + 416) = 0;
  *((_DWORD *)v1 + 417) = 0;
  *((_DWORD *)v1 + 418) = 0;
  return v1;
}


int __fastcall EnchantingBookRenderer::clone(EnchantingBookRenderer *this)
{
  EnchantingBookRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI22EnchantingBookRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall EnchantingBookRenderer::~EnchantingBookRenderer(EnchantingBookRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)EnchantingBookRenderer::~EnchantingBookRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall EnchantingBookRenderer::render(EnchantingBookRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  EnchantingBookRenderer *v6; // r10@1
  UIControl *v7; // r11@1
  ClientInstance *v8; // r9@1
  signed int v9; // r7@1
  Minecraft *v10; // r0@1
  int v11; // r1@1
  Json::Value *v12; // r6@1
  Json::Value *v13; // r6@3
  Random *v22; // r6@10
  unsigned int v23; // r5@10
  int v33; // r5@25
  int v37; // r5@25
  int v38; // r5@25
  float v41; // r1@25
  float v44; // r1@25
  mce::TextureGroup *v46; // r7@33
  char *v47; // r0@33
  char *v48; // r0@34
  int v49; // r4@35
  unsigned int *v53; // r2@36
  signed int v54; // r1@38
  unsigned int *v55; // r2@40
  signed int v56; // r1@42
  int v57; // [sp+0h] [bp-110h]@1
  int v58; // [sp+4h] [bp-10Ch]@0
  char v59; // [sp+10h] [bp-100h]@15
  int v60; // [sp+18h] [bp-F8h]@1
  int v61; // [sp+1Ch] [bp-F4h]@1
  char *v62; // [sp+24h] [bp-ECh]@33
  char *v63; // [sp+28h] [bp-E8h]@33
  int v64; // [sp+2Ch] [bp-E4h]@33
  char v65; // [sp+30h] [bp-E0h]@33
  char v66; // [sp+48h] [bp-C8h]@25
  char v67; // [sp+50h] [bp-C0h]@1
  int v68; // [sp+60h] [bp-B0h]@25
  signed int v69; // [sp+64h] [bp-ACh]@25
  int v70; // [sp+68h] [bp-A8h]@25
  int v71; // [sp+6Ch] [bp-A4h]@25
  int v72; // [sp+70h] [bp-A0h]@25
  int v73; // [sp+74h] [bp-9Ch]@25
  int v74; // [sp+78h] [bp-98h]@25
  int v75; // [sp+7Ch] [bp-94h]@25
  int v76; // [sp+80h] [bp-90h]@25
  int v77; // [sp+84h] [bp-8Ch]@25
  int v78; // [sp+88h] [bp-88h]@25
  int v79; // [sp+8Ch] [bp-84h]@25
  int v80; // [sp+90h] [bp-80h]@25
  int v81; // [sp+94h] [bp-7Ch]@25
  int v82; // [sp+98h] [bp-78h]@25
  int v83; // [sp+9Ch] [bp-74h]@25
  int v84; // [sp+A0h] [bp-70h]@25
  int v85; // [sp+A4h] [bp-6Ch]@25
  int v86; // [sp+A8h] [bp-68h]@25
  int v87; // [sp+ACh] [bp-64h]@25

  v6 = this;
  v7 = a4;
  v8 = a3;
  v61 = MinecraftUIRenderContext::getScreenContext(a2);
  UIControl::getAABB((UIControl *)&v67, (int)v7);
  RectangleArea::operator=((int)a6, (int)&v67);
  v9 = 0;
  EntityShaderManager::_setupShaderParameters((int)v6 + 8, v61, 1065353216, (int)&Color::NIL, 0);
  v10 = (Minecraft *)ClientInstance::getServerData(v8);
  v60 = Minecraft::getLastTimestep(v10, v11);
  v12 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
  if ( !Json::Value::isNull(v12) )
  {
    if ( Json::Value::isObject(v12) == 1 )
    {
      v13 = (Json::Value *)Json::Value::operator[]((int)v12, "#open");
      if ( Json::Value::isBool(v13) == 1 )
        v9 = Json::Value::asBool(v13, 0);
      else
        v9 = 0;
    }
    else
      v9 = 0;
  }
  if ( v9 == *((_BYTE *)v6 + 1648) )
    _R0 = *((_DWORD *)v6 + 413);
    _R1 = (int)v6 + 1660;
    _R8 = (int)v6 + 1652;
    __asm
      VLDR            S2, [R1]
      VMOV            S0, R0
  else
    __asm { VMOV.F32        S16, #1.0 }
    __asm { VMOV.F32        S18, #-1.0 }
    _R4 = (int)v6 + 1660;
    do
      v22 = (Random *)(ClientInstance::getLocalPlayer(v8) + 552);
      v23 = Random::_genRandInt32(v22) & 3;
      _R0 = v23 - (Random::_genRandInt32(v22) & 3);
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R4]
        VADD.F32        S2, S0, S2
        VADD.F32        S4, S2, S16
        VSTR            S2, [R4]
        VLDR            S0, [R8]
        VCMPE.F32       S0, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        break;
        VADD.F32        S4, S2, S18
    while ( !(_NF ^ _VF) );
    __asm { VMOV            R0, S0 }
  __asm
    VLDR            S4, =-0.2
    VLDR            S24, =0.2
    VSUB.F32        S2, S2, S0
    VMOV.F32        S6, S4
  v59 = v9;
  if ( !_ZF )
    __asm { VMOVNE.F32      S6, S24 }
  *((_DWORD *)v6 + 414) = _R0;
  _R0 = *((_DWORD *)v6 + 417);
    VMOV.F32        S18, #1.0
    VLDR            S16, =0.0
  _R4 = (int)v6 + 1668;
    VMOV            S8, R0
    VADD.F32        S6, S8, S6
    VLDR            S8, =0.4
    VMUL.F32        S2, S2, S8
    VMOV.F32        S8, S16
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S6 }
    VCMPE.F32       S6, S18
    VLDR            S6, =0.9
    __asm { VMOVGT.F32      S4, S2 }
    VCMPE.F32       S2, S24
    __asm { VMOVGT.F32      S8, S18 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S4, S24 }
  *((_DWORD *)v6 + 418) = _R0;
  _R0 = (int)v6 + 1664;
    VSTR            S8, [R4]
    VLDR            S2, [R0]
    VSUB.F32        S4, S4, S2
    VMUL.F32        S4, S4, S6
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VSTR            S2, [R0]
    VSTR            S0, [R8]
  _R0 = UIControl::getPosition(v7);
  __asm { VLDR            S20, [R0] }
  __asm { VLDR            S22, [R0,#4] }
  MatrixStack::push((MatrixStack *)&v66, *(_DWORD *)(v61 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v66);
    VLDR            S0, [R0,#4]
    VLDR            S6, [R0,#0x10]
    VLDR            S8, [R0,#0x14]
    VMUL.F32        S0, S0, S20
    VLDR            S14, [R0]
    VMUL.F32        S6, S6, S22
    VLDR            S2, [R0,#8]
    VMUL.F32        S8, S8, S22
    VLDR            S4, [R0,#0xC]
    VMUL.F32        S14, S14, S20
    VLDR            S10, [R0,#0x18]
    VMUL.F32        S2, S2, S20
    VLDR            S12, [R0,#0x1C]
    VMUL.F32        S4, S4, S20
    VMUL.F32        S10, S10, S22
    VLDR            S1, =-100.0
    VMUL.F32        S12, S12, S22
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
  _R0 = UIControl::getSize(v7);
    VLDR            S0, [R0]
    VNMUL.F32       S0, S20, S0
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
  v33 = MatrixStack::MatrixStackRef::operator->((int)&v66);
  v68 = 1065353216;
  v69 = 0;
  v70 = 0;
  v87 = 1101004800;
  _R6 = (int)v6 + 1672;
  glm::rotate<float>((int)&v71, v33, (int)&v87, (int)&v68);
  *(_DWORD *)v33 = v71;
  *(_DWORD *)(v33 + 4) = v72;
  *(_DWORD *)(v33 + 8) = v73;
  *(_DWORD *)(v33 + 12) = v74;
  *(_DWORD *)(v33 + 16) = v75;
  *(_DWORD *)(v33 + 20) = v76;
  *(_DWORD *)(v33 + 24) = v77;
  *(_DWORD *)(v33 + 28) = v78;
  *(_DWORD *)(v33 + 32) = v79;
  *(_DWORD *)(v33 + 36) = v80;
  *(_DWORD *)(v33 + 40) = v81;
  *(_DWORD *)(v33 + 44) = v82;
  *(_DWORD *)(v33 + 48) = v83;
  *(_DWORD *)(v33 + 52) = v84;
  *(_DWORD *)(v33 + 56) = v85;
  *(_DWORD *)(v33 + 60) = v86;
    VLDR            S20, [R6]
    VLDR            S26, [R4]
  _R1 = v60;
    VLDR            S2, =0.1
    VLDR            S4, [R0]
    VMOV            D0, R1, R2
    VLDR            S6, [R0,#4]
    VLDR            S14, [R0,#0x14]
    VCVT.F32.F64    S22, D0
    VSUB.F32        S0, S26, S20
    VLDR            S1, [R0,#0x10]
    VMOV.F32        S26, #0.25
    VLDR            S8, [R0,#8]
    VLDR            S10, [R0,#0xC]
    VLDR            S3, [R0,#0x18]
    VLDR            S5, [R0,#0x1C]
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S0, S0, S22
    VADD.F32        S20, S0, S20
    VSUB.F32        S28, S18, S20
    VMUL.F32        S0, S28, S24
    VMUL.F32        S2, S28, S2
    VMUL.F32        S12, S28, S26
    VMUL.F32        S4, S4, S0
    VMUL.F32        S1, S1, S2
    VMUL.F32        S6, S6, S0
    VMUL.F32        S14, S14, S2
    VMUL.F32        S10, S10, S0
    VMUL.F32        S0, S8, S0
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S3, S3, S2
    VMUL.F32        S2, S5, S2
    VMUL.F32        S5, S7, S12
    VADD.F32        S4, S1, S4
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S0, S3, S0
    VADD.F32        S2, S2, S10
    VMUL.F32        S12, S14, S12
    VADD.F32        S4, S4, S5
    VADD.F32        S0, S0, S1
    VADD.F32        S6, S6, S10
    VADD.F32        S0, S0, S12
    VADD.F32        S2, S2, S8
    VSTR            S4, [R0,#0x30]
    VSTR            S6, [R0,#0x34]
    VSTR            S0, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
  v37 = MatrixStack::MatrixStackRef::operator->((int)&v66);
    VLDR            S0, =-90.0
    VMUL.F32        S2, S28, S0
  v68 = 0;
  v69 = 1065353216;
    VSTR            S0, [SP,#0x110+var_64]
  glm::rotate<float>((int)&v71, v37, (int)&v87, (int)&v68);
  *(_DWORD *)v37 = v71;
  *(_DWORD *)(v37 + 4) = v72;
  *(_DWORD *)(v37 + 8) = v73;
  *(_DWORD *)(v37 + 12) = v74;
  *(_DWORD *)(v37 + 16) = v75;
  *(_DWORD *)(v37 + 20) = v76;
  *(_DWORD *)(v37 + 24) = v77;
  *(_DWORD *)(v37 + 28) = v78;
  *(_DWORD *)(v37 + 32) = v79;
  *(_DWORD *)(v37 + 36) = v80;
  *(_DWORD *)(v37 + 40) = v81;
  *(_DWORD *)(v37 + 44) = v82;
  *(_DWORD *)(v37 + 48) = v83;
  *(_DWORD *)(v37 + 52) = v84;
  *(_DWORD *)(v37 + 56) = v85;
  *(_DWORD *)(v37 + 60) = v86;
  v38 = MatrixStack::MatrixStackRef::operator->((int)&v66);
  v87 = 1127481344;
  _R4 = (int)v6 + 1656;
  glm::rotate<float>((int)&v71, v38, (int)&v87, (int)&v68);
  *(_DWORD *)v38 = v71;
  *(_DWORD *)(v38 + 4) = v72;
  *(_DWORD *)(v38 + 8) = v73;
  *(_DWORD *)(v38 + 12) = v74;
  *(_DWORD *)(v38 + 16) = v75;
  *(_DWORD *)(v38 + 20) = v76;
  *(_DWORD *)(v38 + 24) = v77;
  *(_DWORD *)(v38 + 28) = v78;
  *(_DWORD *)(v38 + 32) = v79;
  *(_DWORD *)(v38 + 36) = v80;
  *(_DWORD *)(v38 + 40) = v81;
  *(_DWORD *)(v38 + 44) = v82;
  *(_DWORD *)(v38 + 48) = v83;
  *(_DWORD *)(v38 + 52) = v84;
  *(_DWORD *)(v38 + 56) = v85;
  *(_DWORD *)(v38 + 60) = v86;
    VLDR            S0, [R4]
    VLDR            S2, [R8]
    VMUL.F32        S2, S2, S22
    VADD.F32        S28, S2, S0
    VADD.F32        S24, S28, S26
    VMOV            R0, S24
  _R5 = mce::Math::floor(_R0, v41);
    VMOV.F32        S0, #0.75
    VADD.F32        S26, S28, S0
    VMOV            R0, S26
  _R0 = mce::Math::floor(_R0, v44);
    VMOV            S0, R0
    VLDR            S4, =1.6
    VMOV            S2, R5
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSUB.F32        S0, S26, S0
    VSUB.F32        S2, S24, S2
    VMOV.F32        S24, S16
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VLDR            S4, =-0.3
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S4
    VCMPE.F32       S0, #0.0
    VCMPE.F32       S2, #0.0
    __asm { VMOVGT.F32      S24, S0 }
    VCMPE.F32       S0, S18
    __asm { VMOVGT.F32      S16, S2 }
    VCMPE.F32       S2, S18
    __asm { VMOVGT.F32      S24, S18 }
    __asm { VMOVGT.F32      S16, S18 }
  v46 = (mce::TextureGroup *)ClientInstance::getTextures(v8);
  sub_119C884((void **)&v62, "textures/entity/enchanting_table_book");
  v63 = v62;
  v62 = (char *)&unk_28898CC;
  v64 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v65, v46, (int)&v63, 0);
  v47 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  v48 = v62 - 12;
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v62 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = *((_DWORD *)v6 + 20);
  __asm { VMOV            R2, S22 }
  *((_DWORD *)v6 + 20) = &v65;
    VMOV            R3, S16
    VSTR            S20, [SP,#0x110+var_10C]
    VSTR            S24, [SP,#0x110+var_110]
  EnchantingBookModel::render((int)v6 + 48, *(float *)&v61, _R2, _R3, v57, v58, 0, 1031798784);
  *((_DWORD *)v6 + 20) = v49;
  *((_BYTE *)v6 + 1648) = v59;
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v65);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v66);
}
