

signed __int64 __fastcall PlayerRenderer::renderRightHand(PlayerRenderer *this, BaseEntityRenderContext *a2, Player *a3)
{
  BaseEntityRenderContext *v3; // r10@1
  PlayerRenderer *v4; // r7@1
  Player *v5; // r6@1
  int v6; // r8@1
  SkinInfoData *v7; // r0@1
  int v8; // r5@1
  int v9; // r3@1
  SkinInfoData *v10; // r0@1
  SkinInfoData *v11; // r4@1
  int v12; // r0@1
  int v13; // r1@1
  __int64 v14; // r0@3
  unsigned __int64 v15; // r0@3
  __int64 v16; // r0@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = (SkinInfoData *)Player::getSkin(v5);
  v8 = PlayerRenderer::getModel(v4, v7);
  HumanoidModel::clearSkinAdjustments((HumanoidModel *)v8);
  *(_DWORD *)(v8 + 20) = 0;
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 64))(v8, 0, 0, 0);
  v9 = *((_DWORD *)v3 + 1);
  EntityShaderManager::_setupShaderParameters((int)v4, v6, *(float *)&v5);
  v10 = (SkinInfoData *)Player::getSkin(v5);
  v11 = v10;
  v12 = PlayerRenderer::getModel(v4, v10);
  v13 = v12 + 4308;
  if ( *((_BYTE *)v11 + 4) )
    v13 = v12 + 4320;
  *(_DWORD *)(v12 + 28) = v13;
  *(_DWORD *)(v8 + 32) = (*(int (__fastcall **)(PlayerRenderer *, Player *))(*(_DWORD *)v4 + 84))(v4, v5);
  LODWORD(v14) = v8 + 756;
  v15 = __PAIR__(v6, ModelPart::render(v14, v8, 1031798784, 0, 0));
  LODWORD(v16) = PlayerModel::getRightSleeve((PlayerModel *)v8);
  return __PAIR__(v6, ModelPart::render(v16, v8, 1031798784, 0, 0));
}


int __fastcall PlayerRenderer::getModel(PlayerRenderer *this, SkinInfoData *a2)
{
  SkinInfoData *v2; // r4@1
  PlayerRenderer *v3; // r5@1
  int v4; // r6@1
  int v5; // r6@2
  char *v6; // r0@2
  int v7; // r6@2
  void *v8; // r0@2
  int *v9; // r1@4
  int v10; // r6@5
  char *v11; // r0@5
  int v12; // r5@7
  void *v13; // r0@7
  PlayerModel *v14; // r5@8
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  PlayerModel *v20; // [sp+0h] [bp-48h]@8
  int v21; // [sp+8h] [bp-40h]@7
  char v22; // [sp+Ch] [bp-3Ch]@7
  char v23; // [sp+14h] [bp-34h]@5
  int v24; // [sp+20h] [bp-28h]@2
  char v25; // [sp+24h] [bp-24h]@2
  char v26; // [sp+2Ch] [bp-1Ch]@2
  int v27; // [sp+30h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  v4 = SkinInfoData::getVisualModel(a2);
  if ( !v4 )
  {
    v5 = *((_DWORD *)v3 + 169);
    v6 = SkinInfoData::getGeometryName(v2);
    GeometryGroup::tryGetGeometry((int)&v26, v5, (const void **)v6);
    v7 = *((_DWORD *)v3 + 169);
    sub_119C884((void **)&v24, "geometry.cape");
    GeometryGroup::getGeometry((GeometryPtr *)&v25, v7, (const void **)&v24);
    v8 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
    if ( !v27 )
      v9 = (int *)SkinInfoData::getGeometryData(v2);
      if ( *(_DWORD *)(*v9 - 12) )
        SkinGeometryGroup::loadModelPackFromString(*((_DWORD *)v3 + 169), v9, 0);
        v10 = *((_DWORD *)v3 + 169);
        v11 = SkinInfoData::getGeometryName(v2);
        GeometryGroup::tryGetGeometry((int)&v23, v10, (const void **)v11);
        GeometryPtr::operator=((GeometryPtr *)&v26, (GeometryPtr *)&v23);
        GeometryPtr::~GeometryPtr((GeometryPtr *)&v23);
      if ( !v27 )
        v12 = *((_DWORD *)v3 + 169);
        sub_119C884((void **)&v21, "geometry.humanoid.custom");
        GeometryGroup::getGeometry((GeometryPtr *)&v22, v12, (const void **)&v21);
        GeometryPtr::operator=((GeometryPtr *)&v26, (GeometryPtr *)&v22);
        GeometryPtr::~GeometryPtr((GeometryPtr *)&v22);
        v13 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
        {
          v18 = (unsigned int *)(v21 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v13);
        }
    v14 = (PlayerModel *)operator new(0x1F8Cu);
    PlayerModel::PlayerModel(v14, (const GeometryPtr *)&v26, (const GeometryPtr *)&v25);
    v20 = v14;
    SkinInfoData::setVisualModel((int)v2, (int *)&v20);
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
    v20 = 0;
    v4 = SkinInfoData::getVisualModel(v2);
    GeometryPtr::~GeometryPtr((GeometryPtr *)&v25);
    GeometryPtr::~GeometryPtr((GeometryPtr *)&v26);
  }
  return v4;
}


void __fastcall PlayerRenderer::setupPosition(int a1, int a2, int a3, int a4)
{
  PlayerRenderer::setupPosition(a1, a2, a3, a4);
}


int __fastcall PlayerRenderer::_updateAlphaTest(PlayerRenderer *this, SkinInfoData *a2)
{
  SkinInfoData *v2; // r4@1
  int result; // r0@1
  int v4; // r1@1

  v2 = a2;
  result = PlayerRenderer::getModel(this, a2);
  v4 = result + 4308;
  if ( *((_BYTE *)v2 + 4) )
    v4 = result + 4320;
  *(_DWORD *)(result + 28) = v4;
  return result;
}


int __fastcall PlayerRenderer::PlayerRenderer(float a1, mce::TextureGroup *a2, int a3, int *a4, int a5)
{
  int v5; // r5@1
  int v6; // r0@1
  mce::TextureGroup *v7; // r6@1
  int v8; // r4@1
  HumanoidModel *v9; // r7@1
  HumanoidModel *v10; // r7@1
  char *v15; // r0@1
  char *v16; // r0@2
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  int v22; // [sp+4h] [bp-54h]@0
  char *v23; // [sp+10h] [bp-48h]@1
  char *v24; // [sp+14h] [bp-44h]@1
  int v25; // [sp+18h] [bp-40h]@1
  char v26; // [sp+1Ch] [bp-3Ch]@1
  HumanoidModel *v27; // [sp+34h] [bp-24h]@1
  HumanoidModel *v28; // [sp+38h] [bp-20h]@1
  int v29; // [sp+3Ch] [bp-1Ch]@1

  v5 = LODWORD(a1);
  v6 = *a4;
  v7 = a2;
  v8 = a3;
  *a4 = 0;
  v29 = v6;
  v9 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v9, 1.0, 0.0, 64, 32);
  v28 = v9;
  v10 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v10, 0.5, 0.0, 64, 32);
  v27 = v10;
  sub_119C884((void **)&v23, "textures/entity/steve");
  v24 = v23;
  v23 = (char *)&unk_28898CC;
  v25 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v26, v7, (int)&v24, 0);
  __asm
  {
    VLDR            S0, [SP,#0x58+arg_0]
    VSTR            S0, [SP,#0x58+var_54]
  }
  HumanoidMobRenderer::HumanoidMobRenderer(v5, COERCE_FLOAT(&v29), (int *)&v28, &v27, (int)&v26, v22);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v26);
  v15 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 4))();
  v27 = 0;
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v28 = 0;
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  *(_DWORD *)v5 = &off_26DBE40;
  *(_DWORD *)(v5 + 672) = v7;
  *(_DWORD *)(v5 + 676) = v8;
  return v5;
}


PlayerRenderer *__fastcall PlayerRenderer::renderLayers(PlayerRenderer *this, BaseEntityRenderContext *a2, Entity *a3, float a4, float a5, float a6, float a7, float a8)
{
  Entity *v8; // r5@1
  PlayerRenderer *v9; // r10@1
  int v10; // r4@1
  BaseEntityRenderContext *v11; // r9@1
  int v12; // r0@1
  SkinInfoData *v13; // r7@1
  PlayerRenderer *result; // r0@1
  int v15; // r0@2
  int v16; // r6@2
  int v18; // r0@9
  int v25; // r6@28
  int v27; // r4@30
  ItemInstance *v28; // r0@30
  __int64 v31; // r0@34
  char v33; // [sp+4h] [bp-FCh]@15
  int v34; // [sp+8h] [bp-F8h]@15
  int v35; // [sp+Ch] [bp-F4h]@15
  int v36; // [sp+10h] [bp-F0h]@15
  float v37; // [sp+14h] [bp-ECh]@15
  float v40; // [sp+20h] [bp-E0h]@9
  float v43; // [sp+2Ch] [bp-D4h]@9
  char v46; // [sp+38h] [bp-C8h]@9
  char v47; // [sp+40h] [bp-C0h]@9
  int v48; // [sp+58h] [bp-A8h]@30
  signed int v49; // [sp+5Ch] [bp-A4h]@30
  int v50; // [sp+60h] [bp-A0h]@30
  int v51; // [sp+64h] [bp-9Ch]@30
  int v52; // [sp+68h] [bp-98h]@30
  int v53; // [sp+6Ch] [bp-94h]@30
  int v54; // [sp+70h] [bp-90h]@30
  int v55; // [sp+74h] [bp-8Ch]@30
  int v56; // [sp+78h] [bp-88h]@30
  int v57; // [sp+7Ch] [bp-84h]@30
  int v58; // [sp+80h] [bp-80h]@30
  int v59; // [sp+84h] [bp-7Ch]@30
  int v60; // [sp+88h] [bp-78h]@30
  int v61; // [sp+8Ch] [bp-74h]@30
  int v62; // [sp+90h] [bp-70h]@30
  int v63; // [sp+94h] [bp-6Ch]@30
  int v64; // [sp+98h] [bp-68h]@30
  int v65; // [sp+9Ch] [bp-64h]@30
  int v66; // [sp+A0h] [bp-60h]@30
  int v67; // [sp+A4h] [bp-5Ch]@30

  v8 = a3;
  v9 = this;
  v10 = LODWORD(a4);
  v11 = a2;
  v12 = Player::getSkin(a3);
  v13 = (SkinInfoData *)v12;
  result = (PlayerRenderer *)(*(int (**)(void))(*(_DWORD *)v12 + 28))();
  if ( result )
  {
    v15 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v8 + 1028))(v8, 1);
    v16 = v15;
    result = (PlayerRenderer *)*(_BYTE *)(v15 + 15);
    _ZF = result == 0;
    if ( result )
    {
      result = *(PlayerRenderer **)v16;
      _ZF = *(_DWORD *)v16 == 0;
    }
    if ( _ZF
      || (result = (PlayerRenderer *)ItemInstance::isNull((ItemInstance *)v16)) != 0
      || (result = (PlayerRenderer *)*(_BYTE *)(v16 + 14)) == 0
      || (result = (PlayerRenderer *)ItemInstance::isArmorItem((ItemInstance *)v16), result != (PlayerRenderer *)1)
      || (result = (PlayerRenderer *)ArmorItem::isElytra(*(ArmorItem **)v16)) == 0 )
      PlayerRenderer::_getCapeTexturePtr(result, v13);
      mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v47, (const mce::TexturePtr *)&unk_27D0020);
      v18 = BaseEntityRenderContext::getWorldMatrix(v11);
      MatrixStack::push((MatrixStack *)&v46, v18);
      Player::getCapePos((Player *)&v43, *(float *)&v8, v10);
      Entity::getInterpolatedPosition((Entity *)&v40, *(float *)&v8, v10);
      __asm
      {
        VLDR            S0, [SP,#0x100+var_DC]
        VMOV.F32        S16, #-6.0
        VLDR            S2, [SP,#0x100+var_D0]
        VLDR            S18, =120.0
        VSUB.F32        S0, S2, S0
        VLDR            S2, =40.0
        VLDR            S22, [SP,#0x100+var_E0]
        VLDR            S24, [SP,#0x100+var_D8]
        VLDR            S26, [SP,#0x100+var_D4]
        VMOV.F32        S20, S16
        VLDR            S28, [SP,#0x100+var_CC]
        VMUL.F32        S0, S0, S2
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S18
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S20, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S20, S18 }
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v8 + 312))(v8);
        VMOV.F32        S0, #25.0
        VADD.F32        S0, S20, S0
      if ( !_ZF )
        __asm { VMOVNE.F32      S20, S0 }
      Entity::getRotation((Entity *)&v33, (int)v8);
      v35 = 0;
      v36 = v34;
      Vec3::directionFromRotation((int)&v37, COERCE_FLOAT(&v35));
        VSUB.F32        S0, S28, S24
        VSUB.F32        S2, S26, S22
        VMUL.F32        S6, S0, S0
        VMUL.F32        S4, S2, S2
        VADD.F32        S4, S6, S4
        VLDR            S6, =0.0001
        VSQRT.F32       S4, S4
        VCMPE.F32       S4, S6
      if ( _NF ^ _VF )
        _R1 = &Vec3::ZERO;
        _R0 = dword_2822498;
        __asm { VLDR            S4, [R1,#4] }
        _R1 = Vec3::ZERO;
      else
        __asm
        {
          VNEG.F32        S6, S0
          VNEG.F32        S8, S2
          VDIV.F32        S6, S6, S4
          VDIV.F32        S4, S8, S4
          VMOV            R1, S4
          VLDR            S4, =0.0
          VMOV            R0, S6
        }
        VLDR            S8, [SP,#0x100+var_E8]
        VMOV            S12, R1
        VLDR            S6, [SP,#0x100+var_EC]
        VABS.F32        S2, S2
        VMUL.F32        S4, S8, S4
        VLDR            S10, [SP,#0x100+var_E4]
        VMUL.F32        S6, S6, S12
        VMOV            S8, R0
        VABS.F32        S0, S0
        VMUL.F32        S8, S10, S8
        VLDR            S10, =50.0
        VMOV.F32        S22, S16
        VADD.F32        S4, S4, S6
        VLDR            S6, =0.0
        VADD.F32        S0, S0, S2
        VMOV.F32        S2, #1.0
        VADD.F32        S4, S4, S8
        VMOV.F32        S8, S6
        VMUL.F32        S0, S0, S10
        VCMPE.F32       S4, #0.0
        VCMPE.F32       S4, S2
        __asm { VMOVGT.F32      S8, S4 }
        __asm { VMOVGT.F32      S8, S2 }
        VLDR            S2, =90.0
        VMUL.F32        S0, S0, S8
        VCMPE.F32       S0, #0.0
        VCMPE.F32       S0, S2
        __asm { VMOVGT.F32      S6, S0 }
        __asm { VMOVGT.F32      S6, S2 }
        VADD.F32        S20, S6, S20
        VCMPE.F32       S20, S16
        __asm { VMOVGT.F32      S22, S20 }
      v25 = PlayerRenderer::getModel(v9, v13);
      PlayerModel::getCape((PlayerModel *)v25);
        VCMPE.F32       S20, S18
        VSUB.F32        S0, S16, S22
        VLDR            S2, =-126.0
      _R1 = &mce::Math::DEGRAD;
        __asm { VMOVGT.F32      S0, S2 }
        VLDR            S2, [R1]
        VSTR            S0, [R0,#0x24]
      *(_DWORD *)(v25 + 32) = &v47;
      v27 = MatrixStack::MatrixStackRef::operator->((int)&v46);
      v48 = 0;
      v49 = 1065353216;
      v50 = 0;
      v67 = 1127481344;
      glm::rotate<float>((int)&v51, v27, (int)&v67, (int)&v48);
      *(_DWORD *)v27 = v51;
      *(_DWORD *)(v27 + 4) = v52;
      *(_DWORD *)(v27 + 8) = v53;
      *(_DWORD *)(v27 + 12) = v54;
      *(_DWORD *)(v27 + 16) = v55;
      *(_DWORD *)(v27 + 20) = v56;
      *(_DWORD *)(v27 + 24) = v57;
      *(_DWORD *)(v27 + 28) = v58;
      *(_DWORD *)(v27 + 32) = v59;
      *(_DWORD *)(v27 + 36) = v60;
      *(_DWORD *)(v27 + 40) = v61;
      *(_DWORD *)(v27 + 44) = v62;
      *(_DWORD *)(v27 + 48) = v63;
      *(_DWORD *)(v27 + 52) = v64;
      *(_DWORD *)(v27 + 56) = v65;
      *(_DWORD *)(v27 + 60) = v66;
      v28 = (ItemInstance *)(*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v8 + 1028))(v8, 1);
      if ( !ItemInstance::isNull(v28) )
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v46);
          VLDR            S0, [R0,#0x14]
          VLDR            S8, [R0,#0x24]
          VLDR            S2, [R0,#0x18]
          VLDR            S10, [R0,#0x28]
          VADD.F32        S0, S8, S0
          VLDR            S4, [R0,#0x1C]
          VLDR            S12, [R0,#0x2C]
          VADD.F32        S2, S10, S2
          VLDR            S6, [R0,#0x20]
          VLDR            S14, [R0,#0x10]
          VADD.F32        S4, S12, S4
          VLDR            S8, =0.1
          VADD.F32        S6, S6, S14
          VLDR            S10, [R0,#0x34]
          VMUL.F32        S0, S0, S8
          VLDR            S12, [R0,#0x38]
          VLDR            S14, [R0,#0x3C]
          VMUL.F32        S2, S2, S8
          VMUL.F32        S4, S4, S8
          VMUL.F32        S6, S6, S8
          VLDR            S8, [R0,#0x30]
          VSUB.F32        S0, S10, S0
          VSUB.F32        S2, S12, S2
          VSUB.F32        S4, S14, S4
          VSUB.F32        S6, S8, S6
          VSTR            S6, [R0,#0x30]
          VSTR            S0, [R0,#0x34]
          VSTR            S2, [R0,#0x38]
          VSTR            S4, [R0,#0x3C]
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 312))(v8) == 1 )
          VLDR            S0, =0.1
          VLDR            S2, [R0,#0x14]
          VLDR            S4, [R0,#0x18]
          VLDR            S8, [R0,#0x10]
          VMUL.F32        S2, S2, S0
          VLDR            S6, [R0,#0x1C]
          VMUL.F32        S4, S4, S0
          VMUL.F32        S8, S8, S0
          VMUL.F32        S0, S6, S0
          VLDR            S6, [R0,#0x30]
          VSUB.F32        S2, S10, S2
          VSUB.F32        S4, S12, S4
          VSUB.F32        S6, S6, S8
          VSUB.F32        S0, S14, S0
          VSTR            S2, [R0,#0x34]
          VSTR            S4, [R0,#0x38]
          VSTR            S0, [R0,#0x3C]
      HIDWORD(v31) = BaseEntityRenderContext::getScreenContext(v11);
        VLDR            S0, [SP,#0x100+arg_C]
        VMOV            R2, S0
      LODWORD(v31) = v25;
      PlayerModel::renderCape(v31, _R2);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v46);
      result = mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v47);
  }
  return result;
}


signed int __fastcall PlayerRenderer::render(int a1, int a2, Player **a3)
{
  Player **v3; // r9@1
  int v4; // r6@1
  Player *v5; // r7@1
  int v6; // r8@1
  SkinInfoData *v7; // r0@1
  SkinInfoData *v8; // r5@1
  int v9; // r0@1
  int v10; // r1@1
  int v11; // r5@3
  char *v12; // r0@3

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  v7 = (SkinInfoData *)Player::getSkin(*a3);
  v8 = v7;
  v9 = PlayerRenderer::getModel((PlayerRenderer *)v4, v7);
  v10 = v9 + 4308;
  if ( *((_BYTE *)v8 + 4) )
    v10 = v9 + 4320;
  *(_DWORD *)(v9 + 28) = v10;
  v11 = PlayerRenderer::getModel((PlayerRenderer *)v4, v8);
  v12 = Mob::getOffhandSlot(v5);
  (*(void (__fastcall **)(int, int, Player *, char *))(*(_DWORD *)v4 + 88))(v4, v11, v5, v12);
  *(_DWORD *)(v11 + 4292) = *(_DWORD *)Player::getSkinAdjustments(v5);
  HumanoidModel::prepareSkinAdjustments((HumanoidModel *)v11);
  *(_DWORD *)(*(_DWORD *)(v4 + 648) + 4292) = *(_DWORD *)(v11 + 4292);
  *(_DWORD *)(*(_DWORD *)(v4 + 652) + 4292) = *(_DWORD *)(v11 + 4292);
  return j_j_j__ZN19HumanoidMobRenderer14renderInternalER23BaseEntityRenderContextR16EntityRenderDataR13HumanoidModel(
           v4,
           v6,
           v3,
           v11);
}


int __fastcall PlayerRenderer::setupRotations(int a1, Player *this, int a3, int a4, int a5, float a6)
{
  int v8; // r8@1
  int v9; // r9@1
  SkinInfoData *v10; // r0@1
  int v20; // r0@5
  __int64 v21; // r7@5
  int v22; // r0@5
  int result; // r0@5
  int v24; // r0@7
  int v25; // r0@7
  int v26; // r0@8
  Mob *v28; // r5@8
  int v30; // [sp+4h] [bp-8Ch]@0
  int v31; // [sp+10h] [bp-80h]@2
  signed int v32; // [sp+14h] [bp-7Ch]@2
  int v33; // [sp+18h] [bp-78h]@2
  int v34; // [sp+1Ch] [bp-74h]@2
  int v35; // [sp+20h] [bp-70h]@2
  int v36; // [sp+24h] [bp-6Ch]@2
  int v37; // [sp+28h] [bp-68h]@2
  int v38; // [sp+2Ch] [bp-64h]@2
  int v39; // [sp+30h] [bp-60h]@2
  int v40; // [sp+34h] [bp-5Ch]@2
  int v41; // [sp+38h] [bp-58h]@2
  int v42; // [sp+3Ch] [bp-54h]@2
  int v43; // [sp+40h] [bp-50h]@2
  int v44; // [sp+44h] [bp-4Ch]@2
  int v45; // [sp+48h] [bp-48h]@2
  int v46; // [sp+4Ch] [bp-44h]@2
  int v47; // [sp+50h] [bp-40h]@2
  int v48; // [sp+54h] [bp-3Ch]@2
  int v49; // [sp+58h] [bp-38h]@2
  int v50; // [sp+5Ch] [bp-34h]@2

  _R5 = this;
  _R6 = (PlayerRenderer *)a1;
  v8 = a4;
  v9 = a3;
  v10 = (SkinInfoData *)Player::getSkin(this);
  _R4 = a5;
  if ( *(_BYTE *)(PlayerRenderer::getModel(_R6, v10) + 4293) & 1 )
  {
    v31 = 0;
    v32 = 0;
    v50 = 1127481344;
    v33 = 1065353216;
    glm::rotate<float>((int)&v34, a5, (int)&v50, (int)&v31);
    __asm { VMOV.F32        S4, #-2.0 }
    *(_DWORD *)a5 = v34;
    *(_DWORD *)(a5 + 4) = v35;
    *(_DWORD *)(a5 + 8) = v36;
    *(_DWORD *)(a5 + 12) = v37;
    *(_DWORD *)(a5 + 16) = v38;
    *(_DWORD *)(a5 + 20) = v39;
    *(_DWORD *)(a5 + 24) = v40;
    *(_DWORD *)(a5 + 28) = v41;
    *(_DWORD *)(a5 + 32) = v42;
    *(_DWORD *)(a5 + 36) = v43;
    *(_DWORD *)(a5 + 40) = v44;
    *(_DWORD *)(a5 + 44) = v45;
    *(_DWORD *)(a5 + 48) = v46;
    *(_DWORD *)(a5 + 52) = v47;
    *(_DWORD *)(a5 + 56) = v48;
    *(_DWORD *)(a5 + 60) = v49;
    __asm
    {
      VLDR            S2, [R6,#0xC4]
      VLDR            S0, =180.0
    }
    v32 = 1065353216;
    __asm { VSUB.F32        S0, S0, S2 }
    v33 = 0;
      VMUL.F32        S0, S0, S4
      VSTR            S0, [SP,#0x90+var_34]
    _R0 = v38;
    _R1 = v39;
    _R2 = v40;
    __asm { VMOV            S12, R1 }
    _R3 = v41;
    __asm { VMOV            S14, R2 }
    __asm { VMOV            S1, R3 }
      VLDR            S8, =0.1
      VLDR            S10, [R5,#0x134]
      VLDR            S0, [SP,#0x90+var_44]
      VADD.F32        S8, S10, S8
      VLDR            S2, [SP,#0x90+var_40]
      VMOV            S10, R0
      VLDR            S4, [SP,#0x90+var_3C]
      VLDR            S6, [SP,#0x90+var_38]
      VMUL.F32        S10, S10, S8
      VMUL.F32        S12, S12, S8
      VMUL.F32        S14, S14, S8
      VMUL.F32        S8, S1, S8
      VSUB.F32        S0, S0, S10
      VSUB.F32        S2, S2, S12
      VSUB.F32        S4, S4, S14
      VSUB.F32        S6, S6, S8
      VSTR            S0, [R4,#0x30]
      VSTR            S2, [R4,#0x34]
      VSTR            S4, [R4,#0x38]
      VSTR            S6, [R4,#0x3C]
  }
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 316))(_R5) != 1
    || (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 784))(_R5) != 1 )
      VLDR            S16, [SP,#0x90+arg_4]
      VSTR            S16, [SP,#0x90+var_8C]
    HumanoidMobRenderer::setupRotations((int)_R6, *(float *)&_R5, v9, v8, a5, v30);
    result = Entity::isRiding(_R5);
    if ( result == 1 )
      v24 = Entity::getRide(_R5);
      v25 = (*(int (**)(void))(*(_DWORD *)v24 + 488))();
      result = EntityClassTree::isTypeInstanceOf(v25, 2118400);
      if ( result == 1 )
      {
        v26 = Entity::getRide(_R5);
        __asm { VMOV            R1, S16 }
        v28 = (Mob *)v26;
        _R0 = (*(int (**)(void))(*(_DWORD *)v26 + 1212))();
        __asm { VMOV            S16, R0 }
        if ( Mob::isJumping(v28) == 1 )
        {
          __asm
          {
            VCMPE.F32       S16, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !_ZF )
            __asm
            {
              VMOV.F32        S0, #0.25
              VLDR            S10, [R4,#0x20]
              VLDR            S12, [R4,#0x24]
              VLDR            S14, [R4,#0x28]
              VLDR            S2, =0.15
              VLDR            S4, [R4,#0x14]
              VLDR            S6, [R4,#0x18]
              VLDR            S3, [R4,#0x10]
              VMUL.F32        S4, S4, S2
              VLDR            S8, [R4,#0x1C]
              VMUL.F32        S12, S12, S0
              VLDR            S1, [R4,#0x2C]
              VMUL.F32        S3, S3, S2
              VMUL.F32        S6, S6, S2
              VMUL.F32        S14, S14, S0
              VMUL.F32        S10, S10, S0
              VMUL.F32        S2, S8, S2
              VMUL.F32        S0, S1, S0
              VADD.F32        S4, S12, S4
              VLDR            S12, [R4,#0x38]
              VADD.F32        S6, S14, S6
              VLDR            S14, [R4,#0x3C]
              VADD.F32        S8, S10, S3
              VLDR            S10, [R4,#0x34]
              VADD.F32        S0, S0, S2
              VLDR            S2, [R4,#0x30]
              VADD.F32        S4, S4, S10
              VADD.F32        S6, S6, S12
              VADD.F32        S2, S8, S2
              VADD.F32        S0, S0, S14
              VSTR            S2, [R4,#0x30]
              VSTR            S4, [R4,#0x34]
              VSTR            S6, [R4,#0x38]
              VSTR            S0, [R4,#0x3C]
            }
        }
        __asm
          VLDR            S0, =45.0
          VMUL.F32        S0, S16, S0
        v31 = 1065353216;
        v32 = 0;
        v33 = 0;
        __asm { VSTR            S0, [SP,#0x90+var_34] }
        glm::rotate<float>((int)&v34, a5, (int)&v50, (int)&v31);
        *(_DWORD *)a5 = v34;
        *(_DWORD *)(a5 + 4) = v35;
        *(_DWORD *)(a5 + 8) = v36;
        *(_DWORD *)(a5 + 12) = v37;
        *(_DWORD *)(a5 + 16) = v38;
        *(_DWORD *)(a5 + 20) = v39;
        *(_DWORD *)(a5 + 24) = v40;
        *(_DWORD *)(a5 + 28) = v41;
        *(_DWORD *)(a5 + 32) = v42;
        *(_DWORD *)(a5 + 36) = v43;
        *(_DWORD *)(a5 + 40) = v44;
        *(_DWORD *)(a5 + 44) = v45;
        *(_DWORD *)(a5 + 48) = v46;
        *(_DWORD *)(a5 + 52) = v47;
        *(_DWORD *)(a5 + 56) = v48;
        result = v49;
        *(_DWORD *)(a5 + 60) = v49;
      }
  else
    v20 = Player::getSleepRotation(_R5);
    LODWORD(v21) = 0;
    HIDWORD(v21) = 1065353216;
    v50 = v20;
    v22 = (*(int (__fastcall **)(PlayerRenderer *, Entity *))(*(_DWORD *)_R6 + 64))(_R6, _R5);
    v50 = v22;
    *(_QWORD *)&v31 = v21;
    v50 = 1132920832;
    result = v49;
  return result;
}


void __fastcall PlayerRenderer::~PlayerRenderer(PlayerRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = HumanoidMobRenderer::~HumanoidMobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall PlayerRenderer::setupPosition(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  float v15; // [sp+0h] [bp-20h]@3

  v4 = a2;
  v5 = a1;
  v6 = a4;
  _R7 = a3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 316))(a2) == 1
    && (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 784))(v4) )
  {
    _R1 = v4 + 4648;
    _R0 = v4 + 4656;
    __asm
    {
      VLDR            S0, [R7]
      VLDR            S6, [R1]
    }
    _R1 = v4 + 4652;
      VLDR            S10, [R0]
      VLDR            S4, [R7,#8]
      VADD.F32        S0, S6, S0
      VLDR            S8, [R1]
      VLDR            S2, [R7,#4]
      VADD.F32        S4, S10, S4
      VADD.F32        S2, S8, S2
      VSTR            S0, [SP,#0x20+var_20]
      VSTR            S2, [SP,#0x20+var_1C]
      VSTR            S4, [SP,#0x20+var_18]
    MobRenderer::setupPosition(v5, v4, (int)&v15, v6);
  }
  else
    j_j_j__ZNK11MobRenderer13setupPositionERK6EntityRK4Vec3R6Matrix(v5, v4, _R7, v6);
}


void *__fastcall PlayerRenderer::getSkinPtr(PlayerRenderer *this, Entity *a2)
{
  PlayerRenderer *v2; // r0@1

  v2 = (PlayerRenderer *)Player::getSkin(a2);
  PlayerRenderer::_getSkinPtr(v2, v2);
  return &unk_27D0008;
}


void *__fastcall PlayerRenderer::_getCapeTexturePtr(PlayerRenderer *this, SkinInfoData *a2)
{
  SkinInfoData *v2; // r4@1
  char v3; // r0@1
  mce::Texture *v4; // r0@4
  int v6; // [sp+0h] [bp-28h]@4

  v2 = a2;
  v3 = byte_27D0004[0];
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire(byte_27D0004) )
  {
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&unk_27D0020);
    _cxa_atexit(mce::TexturePtr::~TexturePtr);
    j___cxa_guard_release(byte_27D0004);
  }
  v4 = (mce::Texture *)(*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v2 + 28))(v2);
  mce::TexturePtr::makeTemporaryWrapper((mce::TexturePtr *)&v6, v4);
  mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D0020, (mce::TexturePtr *)&v6);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v6);
  return &unk_27D0020;
}


Model *__fastcall PlayerRenderer::prepareCarriedOffhandItem(PlayerRenderer *this, Model *a2, Mob *a3, const ItemInstance *a4)
{
  const ItemInstance *v4; // r5@1
  Model *v5; // r4@1
  PlayerRenderer *v6; // r6@1
  int v7; // r7@1
  signed int v8; // r0@3
  int v12; // r0@4
  int v13; // r6@6
  int v14; // r6@9
  int v15; // r0@12
  Model *result; // r0@22

  v4 = a4;
  v5 = a2;
  v6 = this;
  HumanoidMobRenderer::prepareCarriedOffhandItem(this, a2, a3, a4);
  v7 = *((_DWORD *)v6 + 162);
  if ( !*((_BYTE *)v4 + 15) )
  {
    __asm { VLDR            S18, =3.4028e38 }
    *(_DWORD *)(v7 + 4300) = 2139095039;
    *(_DWORD *)(*((_DWORD *)v6 + 163) + 4300) = 2139095039;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)v4 )
    v13 = *((_DWORD *)v6 + 163);
LABEL_10:
    __asm { VLDR            S16, =3.4028e38 }
    if ( *(_DWORD *)v4 )
    {
      if ( ItemInstance::isNull(v4) == 1 )
      {
        v15 = *((_BYTE *)v4 + 15);
      }
      else
        __asm
        {
          VMOV.F32        S0, #1.0
          VLDR            S16, =3.4028e38
        }
        if ( (unsigned __int8)*((_WORD *)v4 + 7) )
          __asm { VMOVNE.F32      S16, S0 }
    }
    goto LABEL_16;
  v8 = ItemInstance::isNull(v4);
  __asm { VLDR            S0, =3.4028e38 }
  if ( v8 == 1 )
    v12 = *((_BYTE *)v4 + 15);
  else
    __asm { VMOV.F32        S2, #1.0 }
    if ( (unsigned __int8)*((_WORD *)v4 + 7) )
      __asm { VMOVNE.F32      S0, S2 }
  __asm { VSTR            S0, [R1] }
  v14 = *((_DWORD *)v6 + 163);
  if ( !_ZF )
    goto LABEL_10;
  __asm { VLDR            S16, =3.4028e38 }
LABEL_16:
  __asm
    VLDR            S18, =3.4028e38
    VSTR            S16, [R1]
    _ZF = *(_DWORD *)v4 == 0;
  if ( !_ZF && !ItemInstance::isNull(v4) )
    __asm
      VMOV.F32        S0, #1.0
      VLDR            S18, =3.4028e38
    if ( *((_BYTE *)v4 + 14) )
      __asm { VMOVNE.F32      S18, S0 }
LABEL_22:
  result = (Model *)((char *)v5 + 4300);
  __asm { VSTR            S18, [R0] }
  return result;
}


int __fastcall PlayerRenderer::renderGui(int a1, int a2, SkinInfoData *a3, int a4, int a5, float a6, float a7)
{
  SkinInfoData *v7; // r6@1
  int v8; // r9@1
  int v9; // r8@1
  PlayerRenderer *v10; // r7@1
  int v11; // r5@1
  int v12; // r4@2
  int v18; // r0@3
  int v19; // r3@3
  int v20; // r2@3
  PlayerRenderer *v21; // r0@5
  int v23; // r4@6
  char v25; // [sp+Ch] [bp-8Ch]@6
  char v26; // [sp+24h] [bp-74h]@1
  int v27; // [sp+2Ch] [bp-6Ch]@2
  signed int v28; // [sp+30h] [bp-68h]@2
  int v29; // [sp+34h] [bp-64h]@2
  int v30; // [sp+38h] [bp-60h]@2
  int v31; // [sp+3Ch] [bp-5Ch]@2
  int v32; // [sp+40h] [bp-58h]@2
  int v33; // [sp+44h] [bp-54h]@2
  int v34; // [sp+48h] [bp-50h]@2
  int v35; // [sp+4Ch] [bp-4Ch]@2
  int v36; // [sp+50h] [bp-48h]@2
  int v37; // [sp+54h] [bp-44h]@2
  int v38; // [sp+58h] [bp-40h]@2
  int v39; // [sp+5Ch] [bp-3Ch]@2
  int v40; // [sp+60h] [bp-38h]@2
  int v41; // [sp+64h] [bp-34h]@2
  int v42; // [sp+68h] [bp-30h]@2
  int v43; // [sp+6Ch] [bp-2Ch]@2
  int v44; // [sp+70h] [bp-28h]@2
  int v45; // [sp+74h] [bp-24h]@2
  int v46; // [sp+78h] [bp-20h]@2

  v7 = a3;
  v8 = a2;
  v9 = a4;
  v10 = (PlayerRenderer *)a1;
  v11 = PlayerRenderer::getModel((PlayerRenderer *)a1, a3);
  PlayerRenderer::_getSkinPtr((PlayerRenderer *)v11, v7);
  *(_DWORD *)(v11 + 32) = &unk_27D0008;
  HumanoidModel::prepareSkinAdjustments((HumanoidModel *)v11);
  MatrixStack::push((MatrixStack *)&v26, *(_DWORD *)(v8 + 16) + 16);
  if ( *(_BYTE *)(v11 + 4293) & 1 )
  {
    v12 = MatrixStack::MatrixStackRef::operator->((int)&v26);
    v27 = 0;
    v28 = 0;
    v29 = 1065353216;
    v46 = 1127481344;
    glm::rotate<float>((int)&v30, v12, (int)&v46, (int)&v27);
    *(_DWORD *)v12 = v30;
    *(_DWORD *)(v12 + 4) = v31;
    *(_DWORD *)(v12 + 8) = v32;
    *(_DWORD *)(v12 + 12) = v33;
    *(_DWORD *)(v12 + 16) = v34;
    *(_DWORD *)(v12 + 20) = v35;
    *(_DWORD *)(v12 + 24) = v36;
    *(_DWORD *)(v12 + 28) = v37;
    *(_DWORD *)(v12 + 32) = v38;
    *(_DWORD *)(v12 + 36) = v39;
    *(_DWORD *)(v12 + 40) = v40;
    *(_DWORD *)(v12 + 44) = v41;
    *(_DWORD *)(v12 + 48) = v42;
    *(_DWORD *)(v12 + 52) = v43;
    *(_DWORD *)(v12 + 56) = v44;
    *(_DWORD *)(v12 + 60) = v45;
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v26);
    __asm
    {
      VMOV.F32        S0, #15.0
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S8, [R0,#0x10]
      VLDR            S6, [R0,#0x1C]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S6, S8
      VSUB.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    }
  }
  v18 = PlayerRenderer::getModel(v10, v7);
  v19 = *((_BYTE *)v7 + 4);
  v20 = v18 + 4308;
  __asm { VLDR            S0, [SP,#0x98+arg_8] }
  if ( !_ZF )
    v20 = v18 + 4320;
  __asm { VLDR            S2, [SP,#0x98+arg_4] }
  *(_DWORD *)(v18 + 28) = v20;
  __asm
    VSTR            S2, [SP,#0x98+var_94]
    VSTR            S0, [SP,#0x98+var_90]
  (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)v11 + 80))(v11, v8, 0, v9);
  v21 = (PlayerRenderer *)(*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v7 + 28))(v7);
  if ( v21 )
    PlayerRenderer::_getCapeTexturePtr(v21, v7);
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v25, (const mce::TexturePtr *)&unk_27D0020);
    PlayerModel::getCape((PlayerModel *)v11);
    __asm { VMOV.F32        S0, #-6.0 }
    _R1 = &mce::Math::DEGRAD;
      VLDR            S2, [R1]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x24]
    *(_DWORD *)(v11 + 32) = &v25;
    v23 = MatrixStack::MatrixStackRef::operator->((int)&v26);
    v28 = 1065353216;
    v29 = 0;
    glm::rotate<float>((int)&v30, v23, (int)&v46, (int)&v27);
    *(_DWORD *)v23 = v30;
    *(_DWORD *)(v23 + 4) = v31;
    *(_DWORD *)(v23 + 8) = v32;
    *(_DWORD *)(v23 + 12) = v33;
    *(_DWORD *)(v23 + 16) = v34;
    *(_DWORD *)(v23 + 20) = v35;
    *(_DWORD *)(v23 + 24) = v36;
    *(_DWORD *)(v23 + 28) = v37;
    *(_DWORD *)(v23 + 32) = v38;
    *(_DWORD *)(v23 + 36) = v39;
    *(_DWORD *)(v23 + 40) = v40;
    *(_DWORD *)(v23 + 44) = v41;
    *(_DWORD *)(v23 + 48) = v42;
    *(_DWORD *)(v23 + 52) = v43;
    *(_DWORD *)(v23 + 56) = v44;
    *(_DWORD *)(v23 + 60) = v45;
    PlayerModel::renderCape(__PAIR__(v8, v11), 1065353216);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v25);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v26);
}


Model *__fastcall PlayerRenderer::prepareCarriedItem(PlayerRenderer *this, Model *a2, Mob *a3, const ItemInstance *a4)
{
  const ItemInstance *v4; // r5@1
  Model *v5; // r4@1
  PlayerRenderer *v6; // r6@1
  int v7; // r7@1
  signed int v8; // r0@3
  int v12; // r0@4
  int v13; // r6@6
  int v14; // r6@9
  int v15; // r0@12
  Model *result; // r0@22

  v4 = a4;
  v5 = a2;
  v6 = this;
  HumanoidMobRenderer::prepareCarriedItem(this, a2, a3, a4);
  v7 = *((_DWORD *)v6 + 162);
  if ( !*((_BYTE *)v4 + 15) )
  {
    __asm { VLDR            S18, =3.4028e38 }
    *(_DWORD *)(v7 + 4304) = 2139095039;
    *(_DWORD *)(*((_DWORD *)v6 + 163) + 4304) = 2139095039;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)v4 )
    v13 = *((_DWORD *)v6 + 163);
LABEL_10:
    __asm { VLDR            S16, =3.4028e38 }
    if ( *(_DWORD *)v4 )
    {
      if ( ItemInstance::isNull(v4) == 1 )
      {
        v15 = *((_BYTE *)v4 + 15);
      }
      else
        __asm
        {
          VMOV.F32        S0, #1.0
          VLDR            S16, =3.4028e38
        }
        if ( (unsigned __int8)*((_WORD *)v4 + 7) )
          __asm { VMOVNE.F32      S16, S0 }
    }
    goto LABEL_16;
  v8 = ItemInstance::isNull(v4);
  __asm { VLDR            S0, =3.4028e38 }
  if ( v8 == 1 )
    v12 = *((_BYTE *)v4 + 15);
  else
    __asm { VMOV.F32        S2, #1.0 }
    if ( (unsigned __int8)*((_WORD *)v4 + 7) )
      __asm { VMOVNE.F32      S0, S2 }
  __asm { VSTR            S0, [R1] }
  v14 = *((_DWORD *)v6 + 163);
  if ( !_ZF )
    goto LABEL_10;
  __asm { VLDR            S16, =3.4028e38 }
LABEL_16:
  __asm
    VLDR            S18, =3.4028e38
    VSTR            S16, [R1]
    _ZF = *(_DWORD *)v4 == 0;
  if ( !_ZF && !ItemInstance::isNull(v4) )
    __asm
      VMOV.F32        S0, #1.0
      VLDR            S18, =3.4028e38
    if ( *((_BYTE *)v4 + 14) )
      __asm { VMOVNE.F32      S18, S0 }
LABEL_22:
  result = (Model *)((char *)v5 + 4304);
  __asm { VSTR            S18, [R0] }
  return result;
}


int __fastcall PlayerRenderer::renderHead(PlayerRenderer *this, BaseEntityRenderContext *a2, Player *a3, const Vec3 *a4)
{
  BaseEntityRenderContext *v4; // r7@1
  PlayerRenderer *v5; // r4@1
  const Vec3 *v6; // r5@1
  Player *v7; // r9@1
  int v8; // r8@1
  SkinInfoData *v9; // r0@1
  int v10; // r6@1
  int v11; // r3@1
  SkinInfoData *v12; // r0@1
  SkinInfoData *v13; // r7@1
  int v14; // r0@1
  int v15; // r1@1
  __int64 v16; // r10@3
  int v17; // ST08_4@3
  __int64 v25; // r0@3
  __int64 v26; // r0@3
  __int64 v27; // r0@3
  char v29; // [sp+Ch] [bp-74h]@3
  char v32; // [sp+28h] [bp-58h]@1

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = BaseEntityRenderContext::getScreenContext(a2);
  MatrixStack::push((MatrixStack *)&v32, *(_DWORD *)(v8 + 16) + 16);
  v9 = (SkinInfoData *)Player::getSkin(v7);
  v10 = PlayerRenderer::getModel(v5, v9);
  HumanoidModel::clearSkinAdjustments((HumanoidModel *)v10);
  v11 = *((_DWORD *)v4 + 1);
  EntityShaderManager::_setupShaderParameters((int)v5, v8, *(float *)&v7);
  v12 = (SkinInfoData *)Player::getSkin(v7);
  v13 = v12;
  v14 = PlayerRenderer::getModel(v5, v12);
  v15 = v14 + 4308;
  if ( *((_BYTE *)v13 + 4) )
    v15 = v14 + 4320;
  *(_DWORD *)(v14 + 28) = v15;
  v16 = *(_QWORD *)(v10 + 132);
  v17 = *(_DWORD *)(v10 + 140);
  _R0 = ModelPart::getOrigin((ModelPart *)(v10 + 96));
  __asm
  {
    VLDR            S18, [R0]
    VLDR            S20, [R0,#4]
    VLDR            S16, [R0,#8]
  }
  AABB::AABB((AABB *)&v29);
  ModelPart::expandAABB((ModelPart *)(v10 + 96), (AABB *)&v29);
    VLDR            S22, [SP,#0x80+var_70]
    VLDR            S24, [SP,#0x80+var_64]
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v32);
    VMOV.F32        S0, #0.5
    VLDR            S4, [R0,#8]
    VSUB.F32        S2, S24, S22
    VLDR            S6, [R0,#0xC]
    VLDR            S8, [R0,#0x10]
    VMUL.F32        S4, S4, S18
    VLDR            S10, [R0,#0x14]
    VMUL.F32        S6, S6, S18
    VLDR            S12, [R0,#0x18]
    VLDR            S14, [R0,#0x1C]
    VMUL.F32        S0, S2, S0
    VMOV.F32        S2, #-0.5
    VSUB.F32        S0, S0, S20
    VADD.F32        S0, S0, S2
    VLDMIA          R0, {S1-S2}
    VMUL.F32        S1, S1, S18
    VLDR            S3, [R0,#0x24]
    VMUL.F32        S2, S2, S18
    VLDR            S5, [R0,#0x20]
    VMUL.F32        S8, S8, S0
    VMUL.F32        S10, S10, S0
    VMUL.F32        S12, S12, S0
    VMUL.F32        S0, S14, S0
    VMUL.F32        S14, S3, S16
    VMUL.F32        S3, S5, S16
    VLDR            S5, [R0,#0x28]
    VSUB.F32        S8, S8, S1
    VSUB.F32        S2, S10, S2
    VLDR            S10, [R0,#0x2C]
    VSUB.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VMUL.F32        S1, S5, S16
    VSUB.F32        S0, S0, S6
    VMUL.F32        S10, S10, S16
    VSUB.F32        S6, S8, S3
    VLDR            S8, [R0,#0x30]
    VSUB.F32        S2, S2, S14
    VSUB.F32        S4, S4, S1
    VSUB.F32        S0, S0, S10
    VLDR            S10, [R0,#0x34]
    VADD.F32        S6, S8, S6
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S0, S8, S0
    VSTR            S6, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  *(_DWORD *)(v10 + 32) = (*(int (__fastcall **)(PlayerRenderer *, Player *))(*(_DWORD *)v5 + 84))(v5, v7);
  *(_DWORD *)(v10 + 132) = *(_DWORD *)v6;
  *(_DWORD *)(v10 + 136) = *((_DWORD *)v6 + 1);
  *(_DWORD *)(v10 + 140) = *((_DWORD *)v6 + 2);
  LODWORD(v25) = v10 + 96;
  v26 = __PAIR__(v8, ModelPart::render(v25, v10, 1065353216, 0, 0));
  *(_DWORD *)(v10 + 352) = *(_DWORD *)v6;
  *(_DWORD *)(v10 + 356) = *((_DWORD *)v6 + 1);
  *(_DWORD *)(v10 + 360) = *((_DWORD *)v6 + 2);
  LODWORD(v26) = v10 + 316;
  ModelPart::render(v26, v10, 1065353216, 0, 0);
  LODWORD(v27) = PlayerModel::getHelmet((PlayerModel *)v10);
  *(_DWORD *)(v27 + 36) = *(_DWORD *)v6;
  *(_DWORD *)(v27 + 40) = *((_DWORD *)v6 + 1);
  *(_DWORD *)(v27 + 44) = *((_DWORD *)v6 + 2);
  ModelPart::render(v27, v10, 1065353216, 0, 0);
  *(_QWORD *)(v10 + 132) = v16;
  *(_DWORD *)(v10 + 140) = v17;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v32);
}


void __fastcall PlayerRenderer::~PlayerRenderer(PlayerRenderer *this)
{
  PlayerRenderer::~PlayerRenderer(this);
}


int __fastcall PlayerRenderer::additionalRendering(__int64 this, Model *a2, Mob *a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
  Model *v13; // r10@1
  int v15; // r6@1
  void (__fastcall *v17)(int, Mob *, unsigned int *, int *); // r4@4
  int v18; // r0@4
  char *v19; // r0@4
  ItemInstance *v21; // r0@4
  int result; // r0@5
  char *v23; // r0@6
  char *v24; // r6@6
  int v26; // r0@11
  int v28; // r5@12
  int v30; // r0@13
  int v31; // r0@13
  __int64 v32; // kr00_8@13
  int v33; // r7@14
  int v35; // r5@21
  int v36; // r5@21
  int v38; // r5@23
  int v39; // r5@23
  signed int v40; // r0@23
  int v41; // r5@30
  int v45; // r5@30
  int v46; // r5@31
  int v47; // r5@31
  int v50; // r5@31
  int v51; // r5@32
  int v54; // r5@33
  int v55; // r5@33
  int v59; // r5@33
  ItemInHandRenderer *v60; // r0@36
  int v63; // r5@38
  int v64; // r5@38
  int v68; // r5@39
  int v69; // r5@39
  float v70; // [sp+0h] [bp-A8h]@0
  float v71; // [sp+4h] [bp-A4h]@0
  float v72; // [sp+8h] [bp-A0h]@0
  float v73; // [sp+Ch] [bp-9Ch]@0
  float v74; // [sp+10h] [bp-98h]@0
  float v75; // [sp+14h] [bp-94h]@0
  char v76; // [sp+18h] [bp-90h]@11
  unsigned int v77; // [sp+20h] [bp-88h]@4
  unsigned int v78; // [sp+28h] [bp-80h]@4
  int v79; // [sp+2Ch] [bp-7Ch]@12
  int v80; // [sp+30h] [bp-78h]@12
  int v81; // [sp+34h] [bp-74h]@12
  int v82; // [sp+38h] [bp-70h]@1
  float v83; // [sp+3Ch] [bp-6Ch]@1
  float v84; // [sp+40h] [bp-68h]@1
  float v85; // [sp+44h] [bp-64h]@1
  float v86; // [sp+48h] [bp-60h]@1
  __int64 v87; // [sp+4Ch] [bp-5Ch]@1
  float v88; // [sp+54h] [bp-54h]@1
  float v89; // [sp+58h] [bp-50h]@1
  float v90; // [sp+5Ch] [bp-4Ch]@1
  __int64 v91; // [sp+60h] [bp-48h]@1
  float v92; // [sp+68h] [bp-40h]@1
  float v93; // [sp+6Ch] [bp-3Ch]@1
  float v94; // [sp+70h] [bp-38h]@1
  int v95; // [sp+74h] [bp-34h]@1
  int v96; // [sp+7Ch] [bp-2Ch]@12

  __asm { VLDR            S6, [SP,#0xA8+arg_0] }
  _R9 = a3;
  __asm { VLDR            S0, [SP,#0xA8+arg_C] }
  v13 = a2;
  __asm { VLDR            S2, [SP,#0xA8+arg_8] }
  _R8 = HIDWORD(this);
  __asm { VLDR            S4, [SP,#0xA8+arg_4] }
  v15 = this;
  __asm
  {
    VLDR            S8, [SP,#0xA8+arg_10]
    VLDR            S10, [SP,#0xA8+arg_14]
    VSTR            S6, [SP,#0xA8+var_A8]
    VSTR            S4, [SP,#0xA8+var_A4]
    VSTR            S2, [SP,#0xA8+var_A0]
    VSTR            S0, [SP,#0xA8+var_9C]
    VSTR            S8, [SP,#0xA8+var_98]
    VSTR            S10, [SP,#0xA8+var_94]
  }
  HumanoidMobRenderer::additionalRendering(this, a2, a3, v70, v71, v72, v73, v74, v75);
  v82 = 1065353216;
  v85 = 0.0;
  v86 = 0.0;
  v83 = 0.0;
  v84 = 0.0;
  v88 = 0.0;
  v89 = 0.0;
  v87 = 1065353216LL;
  v90 = 0.0;
  v91 = 1065353216LL;
  v93 = 0.0;
  v94 = 0.0;
  v92 = 0.0;
  v95 = 1065353216;
  if ( *(_BYTE *)(v15 + 136) )
    *((_BYTE *)_R9 + 228) = 1;
    _R0 = (*(int (__fastcall **)(Model *))(*(_DWORD *)v13 + 76))(v13);
    __asm { VMOV            S0, R0 }
  else
    __asm { VLDR            S0, =0.0 }
    VLDR            S2, [R9,#0x13C]
    VADD.F32        S0, S0, S2
  v17 = *(void (__fastcall **)(int, Mob *, unsigned int *, int *))(*(_DWORD *)v15 + 48);
  v77 = 2147483648;
    VNEG.F32        S0, S0
    VSTR            S0, [SP,#0xA8+var_84]
  v78 = 2147483648;
  v17(v15, _R9, &v77, &v82);
  v18 = (*(int (__fastcall **)(int, Mob *, _DWORD))(*(_DWORD *)v15 + 60))(v15, _R9, *(_DWORD *)(_R8 + 4));
    VLDR            S0, [R8,#4]
    VSTR            S0, [SP,#0xA8+var_A4]
  (*(void (__fastcall **)(int, Mob *, int, _DWORD))(*(_DWORD *)v15 + 52))(v15, _R9, v18, *(_DWORD *)(v15 + 196));
    VLDR            S0, [SP,#0xA8+var_70]
    VSTR            S0, [SP,#0xA8+var_70]
    VLDR            S0, [SP,#0xA8+var_6C]
    VSTR            S0, [SP,#0xA8+var_6C]
    VLDR            S0, [SP,#0xA8+var_68]
    VSTR            S0, [SP,#0xA8+var_68]
    VLDR            S0, [SP,#0xA8+var_64]
    VSTR            S0, [SP,#0xA8+var_64]
    VLDR            S0, [SP,#0xA8+var_60]
    VSTR            S0, [SP,#0xA8+var_60]
    VLDR            S0, [SP,#0xA8+var_5C]
    VSTR            S0, [SP,#0xA8+var_5C]
    VLDR            S0, [SP,#0xA8+var_5C+4]
    VSTR            S0, [SP,#0xA8+var_5C+4]
    VLDR            S0, [SP,#0xA8+var_54]
    VSTR            S0, [SP,#0xA8+var_54]
  v19 = Entity::getEntityData(_R9);
  _R4 = SynchedEntityData::getFloat((SynchedEntityData *)v19, 39);
  (*(void (__fastcall **)(int, Mob *, int *, _DWORD))(*(_DWORD *)v15 + 68))(v15, _R9, &v82, *(_DWORD *)(_R8 + 4));
    VMOV.F32        S0, #-1.5
    VLDR            S4, [SP,#0xA8+var_5C]
    VMOV            S2, R4
    VLDR            S6, [SP,#0xA8+var_5C+4]
    VLDR            S8, [SP,#0xA8+var_54]
    VLDR            S10, [SP,#0xA8+var_3C]
    VLDR            S12, [SP,#0xA8+var_38]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.0078125
    VLDR            S2, [SP,#0xA8+var_60]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S6, S6, S0
    VMUL.F32        S0, S8, S0
    VLDR            S8, [SP,#0xA8+var_40]
    VADD.F32        S2, S8, S2
    VLDR            S8, [SP,#0xA8+var_34]
    VADD.F32        S4, S10, S4
    VADD.F32        S6, S12, S6
    VADD.F32        S0, S8, S0
    VSTR            S2, [SP,#0xA8+var_40]
    VSTR            S4, [SP,#0xA8+var_3C]
    VSTR            S6, [SP,#0xA8+var_38]
    VSTR            S0, [SP,#0xA8+var_34]
  ModelPart::translateTo((int)v13 + 756, (int)&v82, 1031798784);
    VMOV.F32        S16, #0.625
    VLDR            S6, [SP,#0xA8+var_60]
    VLDR            S8, [SP,#0xA8+var_50]
    VLDR            S2, [SP,#0xA8+var_6C]
    VLDR            S10, [SP,#0xA8+var_4C]
    VSUB.F32        S0, S8, S0
    VLDR            S8, [SP,#0xA8+var_5C]
    VSUB.F32        S2, S10, S2
    VLDR            S12, [SP,#0xA8+var_5C+4]
    VMUL.F32        S6, S6, S16
    VLDR            S4, [SP,#0xA8+var_68]
    VMUL.F32        S8, S8, S16
    VLDR            S10, [SP,#0xA8+var_48]
    VLDR            S14, =0.0625
    VMUL.F32        S12, S12, S16
    VSUB.F32        S4, S10, S4
    VLDR            S10, [SP,#0xA8+var_40]
    VLDR            S1, [SP,#0xA8+var_3C]
    VMUL.F32        S0, S0, S14
    VMUL.F32        S2, S2, S14
    VADD.F32        S6, S10, S6
    VLDR            S10, [SP,#0xA8+var_38]
    VADD.F32        S8, S1, S8
    VADD.F32        S10, S10, S12
    VMUL.F32        S4, S4, S14
    VADD.F32        S0, S6, S0
    VSTR            S0, [R0]
    VSTR            S2, [R0]
    VSTR            S4, [R0]
  v21 = (ItemInstance *)Player::getSelectedItem(_R9);
  if ( ItemInstance::getId(v21) != *(_WORD *)(Item::mBow + 18)
    || (result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R9 + 916))(_R9), result <= 0) )
    v23 = Mob::getOffhandSlot(_R9);
    v24 = v23;
    result = (unsigned __int8)v23[15];
    _ZF = result == 0;
    if ( result )
    {
      result = *(_DWORD *)v24;
      _ZF = *(_DWORD *)v24 == 0;
    }
    if ( !_ZF )
      result = ItemInstance::isNull((ItemInstance *)v24);
      if ( !result )
      {
        result = (unsigned __int8)v24[14];
        if ( v24[14] )
        {
          v26 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)_R8);
          MatrixStack::push((MatrixStack *)&v76, v26);
          if ( Entity::isBaby(_R9) == 1 )
          {
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            __asm
            {
              VMOV.F32        S0, #0.125
              VLDR            S2, [R0,#0x14]
              VLDR            S4, [R0,#0x18]
              VLDR            S8, [R0,#0x10]
              VLDR            S6, [R0,#0x1C]
              VLDR            S10, [R0,#0x34]
              VLDR            S12, [R0,#0x38]
              VLDR            S14, [R0,#0x3C]
              VMUL.F32        S2, S2, S0
              VMUL.F32        S4, S4, S0
              VMUL.F32        S8, S8, S0
              VMUL.F32        S0, S6, S0
              VLDR            S6, [R0,#0x30]
              VSUB.F32        S2, S10, S2
              VSUB.F32        S4, S12, S4
              VSUB.F32        S6, S6, S8
              VSUB.F32        S0, S14, S0
              VSTR            S6, [R0,#0x30]
              VSTR            S2, [R0,#0x34]
              VSTR            S4, [R0,#0x38]
              VSTR            S0, [R0,#0x3C]
            }
            v28 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            v79 = -1082130432;
            v80 = 0;
            v81 = 0;
            v96 = -1046478848;
            glm::rotate<float>((int)&v82, v28, (int)&v96, (int)&v79);
            *(_DWORD *)v28 = v82;
            *(float *)(v28 + 4) = v83;
            *(float *)(v28 + 8) = v84;
            *(float *)(v28 + 12) = v85;
            *(float *)(v28 + 16) = v86;
            *(_QWORD *)(v28 + 20) = v87;
            *(float *)(v28 + 28) = v88;
            *(float *)(v28 + 32) = v89;
            *(float *)(v28 + 36) = v90;
            *(_QWORD *)(v28 + 40) = v91;
            *(float *)(v28 + 48) = v92;
            *(float *)(v28 + 52) = v93;
            *(float *)(v28 + 56) = v94;
            *(_DWORD *)(v28 + 60) = v95;
              VMOV.F32        S0, #0.5
              VLDR            S2, [R0]
              VSTR            S2, [R0]
              VLDR            S2, [R0,#4]
              VSTR            S2, [R0,#4]
              VLDR            S2, [R0,#8]
              VSTR            S2, [R0,#8]
              VLDR            S2, [R0,#0xC]
              VSTR            S2, [R0,#0xC]
              VLDR            S2, [R0,#0x10]
              VSTR            S2, [R0,#0x10]
              VSTR            S2, [R0,#0x14]
              VLDR            S2, [R0,#0x18]
              VSTR            S2, [R0,#0x18]
              VLDR            S2, [R0,#0x1C]
              VSTR            S2, [R0,#0x1C]
              VLDR            S2, [R0,#0x20]
              VSTR            S2, [R0,#0x20]
              VLDR            S2, [R0,#0x24]
              VSTR            S2, [R0,#0x24]
              VLDR            S2, [R0,#0x28]
              VSTR            S2, [R0,#0x28]
              VLDR            S2, [R0,#0x2C]
              VMUL.F32        S0, S2, S0
              VSTR            S0, [R0,#0x2C]
          }
          v30 = MatrixStack::MatrixStackRef::operator*((int)&v76);
          ModelPart::translateTo((int)v13 + 976, v30, 1031798784);
          v31 = MatrixStack::MatrixStackRef::operator*((int)&v76);
          ModelPart::translateTo((int)v13 + 1856, v31, 1031798784);
          v32 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 >> 32 )
            v33 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(HIDWORD(v32) + 4)]);
          else
            v33 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v32 + 60))(v32);
          if ( BlockTessellator::canRender(v33) == 1 )
              VMOV.F32        S16, #0.1875
              VLDR            S0, =0.03125
            if ( HIDWORD(v32) == Block::mWoolCarpet )
              __asm { VMOVEQ.F32      S16, S0 }
            if ( HIDWORD(v32) == Block::mTopSnow )
              VMOV.F32        S0, #-0.3125
              VMUL.F32        S2, S2, S16
              VLDR            S8, [R0,#0x20]
              VMUL.F32        S4, S4, S16
              VLDR            S10, [R0,#0x24]
              VMUL.F32        S6, S6, S16
              VLDR            S12, [R0,#0x28]
              VLDR            S1, [R0,#0x10]
              VLDR            S14, [R0,#0x2C]
              VMUL.F32        S10, S10, S0
              VMUL.F32        S12, S12, S0
              VMUL.F32        S0, S14, S0
              VMUL.F32        S1, S1, S16
              VADD.F32        S2, S10, S2
              VADD.F32        S4, S12, S4
              VADD.F32        S0, S0, S6
              VADD.F32        S8, S8, S1
              VADD.F32        S2, S2, S10
              VADD.F32        S4, S4, S12
              VADD.F32        S0, S0, S14
              VADD.F32        S6, S8, S6
            v35 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            v79 = 1065353216;
            v96 = 1128792064;
            glm::rotate<float>((int)&v82, v35, (int)&v96, (int)&v79);
            *(_DWORD *)v35 = v82;
            *(float *)(v35 + 4) = v83;
            *(float *)(v35 + 8) = v84;
            *(float *)(v35 + 12) = v85;
            *(float *)(v35 + 16) = v86;
            *(_QWORD *)(v35 + 20) = v87;
            *(float *)(v35 + 28) = v88;
            *(float *)(v35 + 32) = v89;
            *(float *)(v35 + 36) = v90;
            *(_QWORD *)(v35 + 40) = v91;
            *(float *)(v35 + 48) = v92;
            *(float *)(v35 + 52) = v93;
            *(float *)(v35 + 56) = v94;
            *(_DWORD *)(v35 + 60) = v95;
            v36 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            v79 = 0;
            v80 = 1065353216;
            v96 = 1110704128;
            glm::rotate<float>((int)&v82, v36, (int)&v96, (int)&v79);
            *(_DWORD *)v36 = v82;
            *(float *)(v36 + 4) = v83;
            *(float *)(v36 + 8) = v84;
            *(float *)(v36 + 12) = v85;
            *(float *)(v36 + 16) = v86;
            *(_QWORD *)(v36 + 20) = v87;
            *(float *)(v36 + 28) = v88;
            *(float *)(v36 + 32) = v89;
            *(float *)(v36 + 36) = v90;
            *(_QWORD *)(v36 + 40) = v91;
            *(float *)(v36 + 48) = v92;
            *(float *)(v36 + 52) = v93;
            *(float *)(v36 + 56) = v94;
            *(_DWORD *)(v36 + 60) = v95;
              VMOV.F32        S0, #0.375
            if ( _ZF )
              v51 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v79 = 0;
              v80 = -1082130432;
              v81 = 0;
              v96 = 1119092736;
              glm::rotate<float>((int)&v82, v51, (int)&v96, (int)&v79);
              *(_DWORD *)v51 = v82;
              *(float *)(v51 + 4) = v83;
              *(float *)(v51 + 8) = v84;
              *(float *)(v51 + 12) = v85;
              *(float *)(v51 + 16) = v86;
              *(_QWORD *)(v51 + 20) = v87;
              *(float *)(v51 + 28) = v88;
              *(float *)(v51 + 32) = v89;
              *(float *)(v51 + 36) = v90;
              *(_QWORD *)(v51 + 40) = v91;
              *(float *)(v51 + 48) = v92;
              *(float *)(v51 + 52) = v93;
              *(float *)(v51 + 56) = v94;
              *(_DWORD *)(v51 + 60) = v95;
              _R0 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              __asm
              {
                VMOV.F32        S0, #0.25
                VLDR            S8, [R0,#0xC]
                VMOV.F32        S2, #-0.5
                VLDR            S10, [R0,#0x10]
                VLDR            S12, [R0,#0x14]
                VMOV.F32        S5, #-0.75
                VLDR            S14, [R0,#0x18]
                VLDR            S6, [R0,#8]
                VLDR            S1, [R0,#0x1C]
                VLDMIA          R0, {S3-S4}
                VMUL.F32        S8, S8, S0
                VMUL.F32        S3, S3, S0
                VLDR            S7, [R0,#0x20]
                VMUL.F32        S10, S10, S2
                VMUL.F32        S4, S4, S0
                VMUL.F32        S12, S12, S2
                VMUL.F32        S0, S6, S0
                VLDR            S6, [R0,#0x24]
                VMUL.F32        S14, S14, S2
                VMUL.F32        S2, S1, S2
                VMUL.F32        S1, S7, S5
                VLDR            S7, [R0,#0x28]
                VSUB.F32        S10, S10, S3
                VMUL.F32        S6, S6, S5
                VSUB.F32        S4, S12, S4
                VLDR            S12, [R0,#0x2C]
                VMUL.F32        S3, S7, S5
                VSUB.F32        S0, S14, S0
                VSUB.F32        S2, S2, S8
                VMUL.F32        S12, S12, S5
                VADD.F32        S8, S10, S1
                VLDR            S10, [R0,#0x34]
                VADD.F32        S4, S4, S6
                VLDR            S6, [R0,#0x30]
                VADD.F32        S0, S0, S3
                VADD.F32        S2, S2, S12
                VLDR            S12, [R0,#0x38]
                VADD.F32        S6, S8, S6
                VLDR            S8, [R0,#0x3C]
                VADD.F32        S4, S4, S10
                VADD.F32        S0, S0, S12
                VADD.F32        S2, S2, S8
                VSTR            S6, [R0,#0x30]
                VSTR            S4, [R0,#0x34]
                VSTR            S0, [R0,#0x38]
                VSTR            S2, [R0,#0x3C]
              }
            else if ( v33 == 81 )
              v38 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v79 = 1065353216;
              v80 = 0;
              v96 = 1110704128;
              glm::rotate<float>((int)&v82, v38, (int)&v96, (int)&v79);
              *(_DWORD *)v38 = v82;
              *(float *)(v38 + 4) = v83;
              *(float *)(v38 + 8) = v84;
              *(float *)(v38 + 12) = v85;
              *(float *)(v38 + 16) = v86;
              *(_QWORD *)(v38 + 20) = v87;
              *(float *)(v38 + 28) = v88;
              *(float *)(v38 + 32) = v89;
              *(float *)(v38 + 36) = v90;
              *(_QWORD *)(v38 + 40) = v91;
              *(float *)(v38 + 48) = v92;
              *(float *)(v38 + 52) = v93;
              *(float *)(v38 + 56) = v94;
              *(_DWORD *)(v38 + 60) = v95;
              v39 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v40 = 1106247680;
              v81 = 1065353216;
              goto LABEL_35;
LABEL_36:
            v60 = (ItemInHandRenderer *)BaseEntityRenderContext::getItemInHandRenderer((BaseEntityRenderContext *)_R8);
            ItemInHandRenderer::renderItem(
              v60,
              (BaseEntityRenderContext *)_R8,
              _R9,
              (const ItemInstance *)v24,
              0,
              1,
              0);
            return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v76);
          if ( (_DWORD)v32 == Item::mBow )
            v46 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            v96 = 1127481344;
            glm::rotate<float>((int)&v82, v46, (int)&v96, (int)&v79);
            *(_DWORD *)v46 = v82;
            *(float *)(v46 + 4) = v83;
            *(float *)(v46 + 8) = v84;
            *(float *)(v46 + 12) = v85;
            *(float *)(v46 + 16) = v86;
            *(_QWORD *)(v46 + 20) = v87;
            *(float *)(v46 + 28) = v88;
            *(float *)(v46 + 32) = v89;
            *(float *)(v46 + 36) = v90;
            *(_QWORD *)(v46 + 40) = v91;
            *(float *)(v46 + 48) = v92;
            *(float *)(v46 + 52) = v93;
            *(float *)(v46 + 56) = v94;
            *(_DWORD *)(v46 + 60) = v95;
            v47 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            glm::rotate<float>((int)&v82, v47, (int)&v96, (int)&v79);
            *(_DWORD *)v47 = v82;
            *(float *)(v47 + 4) = v83;
            *(float *)(v47 + 8) = v84;
            *(float *)(v47 + 12) = v85;
            *(float *)(v47 + 16) = v86;
            *(_QWORD *)(v47 + 20) = v87;
            *(float *)(v47 + 28) = v88;
            *(float *)(v47 + 32) = v89;
            *(float *)(v47 + 36) = v90;
            *(_QWORD *)(v47 + 40) = v91;
            *(float *)(v47 + 48) = v92;
            *(float *)(v47 + 52) = v93;
            *(float *)(v47 + 56) = v94;
            *(_DWORD *)(v47 + 60) = v95;
              VLDR            S0, =0.17812
              VMUL.F32        S1, S1, S0
              VLDR            S3, =-0.33437
              VMUL.F32        S8, S8, S3
              VMUL.F32        S10, S10, S3
              VMUL.F32        S12, S12, S3
              VMUL.F32        S6, S14, S3
              VADD.F32        S0, S6, S0
              VLDR            S0, [R0]
              VMUL.F32        S0, S0, S16
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
            v50 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            v96 = 1117782016;
            glm::rotate<float>((int)&v82, v50, (int)&v96, (int)&v79);
            *(_DWORD *)v50 = v82;
            *(float *)(v50 + 4) = v83;
            *(float *)(v50 + 8) = v84;
            *(float *)(v50 + 12) = v85;
            *(float *)(v50 + 16) = v86;
            *(_QWORD *)(v50 + 20) = v87;
            *(float *)(v50 + 28) = v88;
            *(float *)(v50 + 32) = v89;
            *(float *)(v50 + 36) = v90;
            *(_QWORD *)(v50 + 40) = v91;
            *(float *)(v50 + 48) = v92;
            *(float *)(v50 + 52) = v93;
            *(float *)(v50 + 56) = v94;
            *(_DWORD *)(v50 + 60) = v95;
            v39 = MatrixStack::MatrixStackRef::operator->((int)&v76);
          else if ( (_DWORD)v32 == Item::mFishingRod || (_DWORD)v32 == Item::mCarrotOnAStick )
            v54 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            glm::rotate<float>((int)&v82, v54, (int)&v96, (int)&v79);
            *(_DWORD *)v54 = v82;
            *(float *)(v54 + 4) = v83;
            *(float *)(v54 + 8) = v84;
            *(float *)(v54 + 12) = v85;
            *(float *)(v54 + 16) = v86;
            *(_QWORD *)(v54 + 20) = v87;
            *(float *)(v54 + 28) = v88;
            *(float *)(v54 + 32) = v89;
            *(float *)(v54 + 36) = v90;
            *(_QWORD *)(v54 + 40) = v91;
            *(float *)(v54 + 48) = v92;
            *(float *)(v54 + 52) = v93;
            *(float *)(v54 + 56) = v94;
            *(_DWORD *)(v54 + 60) = v95;
            v55 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            v96 = -1049624576;
            glm::rotate<float>((int)&v82, v55, (int)&v96, (int)&v79);
            *(_DWORD *)v55 = v82;
            *(float *)(v55 + 4) = v83;
            *(float *)(v55 + 8) = v84;
            *(float *)(v55 + 12) = v85;
            *(float *)(v55 + 16) = v86;
            *(_QWORD *)(v55 + 20) = v87;
            *(float *)(v55 + 28) = v88;
            *(float *)(v55 + 32) = v89;
            *(float *)(v55 + 36) = v90;
            *(_QWORD *)(v55 + 40) = v91;
            *(float *)(v55 + 48) = v92;
            *(float *)(v55 + 52) = v93;
            *(float *)(v55 + 56) = v94;
            *(_DWORD *)(v55 + 60) = v95;
              VLDR            S0, =0.1
              VLDR            S4, [R0,#8]
              VLDR            S6, [R0,#0xC]
              VLDR            S3, =0.265
              VLDR            S10, [R0,#0x14]
              VLDR            S12, [R0,#0x18]
              VLDR            S14, [R0,#0x1C]
              VLDMIA          R0, {S1-S2}
            v59 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            glm::rotate<float>((int)&v82, v59, (int)&v96, (int)&v79);
            *(_DWORD *)v59 = v82;
            *(float *)(v59 + 4) = v83;
            *(float *)(v59 + 8) = v84;
            *(float *)(v59 + 12) = v85;
            *(float *)(v59 + 16) = v86;
            *(_QWORD *)(v59 + 20) = v87;
            *(float *)(v59 + 28) = v88;
            *(float *)(v59 + 32) = v89;
            *(float *)(v59 + 36) = v90;
            *(_QWORD *)(v59 + 40) = v91;
            *(float *)(v59 + 48) = v92;
            *(float *)(v59 + 52) = v93;
            *(float *)(v59 + 56) = v94;
            *(_DWORD *)(v59 + 60) = v95;
            if ( (_DWORD)v32 == Item::mTotem )
                VMOV.F32        S0, #0.34375
                VMOV.F32        S2, #0.125
                VMOV.F32        S5, #-0.25
                VADD.F32        S10, S10, S3
                VADD.F32        S4, S12, S4
                VADD.F32        S0, S14, S0
                VMOV.F32        S0, #0.375
                VLDR            S2, [R0]
                VMUL.F32        S2, S2, S0
                VSTR            S2, [R0]
                VLDR            S2, [R0,#4]
                VSTR            S2, [R0,#4]
                VLDR            S2, [R0,#8]
                VSTR            S2, [R0,#8]
                VLDR            S2, [R0,#0xC]
                VSTR            S2, [R0,#0xC]
                VLDR            S2, [R0,#0x10]
                VSTR            S2, [R0,#0x10]
                VLDR            S2, [R0,#0x14]
                VSTR            S2, [R0,#0x14]
                VLDR            S2, [R0,#0x18]
                VSTR            S2, [R0,#0x18]
                VLDR            S2, [R0,#0x1C]
                VSTR            S2, [R0,#0x1C]
                VLDR            S2, [R0,#0x20]
                VSTR            S2, [R0,#0x20]
                VLDR            S2, [R0,#0x24]
                VSTR            S2, [R0,#0x24]
                VLDR            S2, [R0,#0x28]
                VSTR            S2, [R0,#0x28]
                VLDR            S2, [R0,#0x2C]
                VMUL.F32        S0, S2, S0
                VSTR            S0, [R0,#0x2C]
              v68 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v96 = 1108082688;
              glm::rotate<float>((int)&v82, v68, (int)&v96, (int)&v79);
              *(_DWORD *)v68 = v82;
              *(float *)(v68 + 4) = v83;
              *(float *)(v68 + 8) = v84;
              *(float *)(v68 + 12) = v85;
              *(float *)(v68 + 16) = v86;
              *(_QWORD *)(v68 + 20) = v87;
              *(float *)(v68 + 28) = v88;
              *(float *)(v68 + 32) = v89;
              *(float *)(v68 + 36) = v90;
              *(_QWORD *)(v68 + 40) = v91;
              *(float *)(v68 + 48) = v92;
              *(float *)(v68 + 52) = v93;
              *(float *)(v68 + 56) = v94;
              *(_DWORD *)(v68 + 60) = v95;
              v69 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v96 = -1031274496;
              glm::rotate<float>((int)&v82, v69, (int)&v96, (int)&v79);
              *(_DWORD *)v69 = v82;
              *(float *)(v69 + 4) = v83;
              *(float *)(v69 + 8) = v84;
              *(float *)(v69 + 12) = v85;
              *(float *)(v69 + 16) = v86;
              *(_QWORD *)(v69 + 20) = v87;
              *(float *)(v69 + 28) = v88;
              *(float *)(v69 + 32) = v89;
              *(float *)(v69 + 36) = v90;
              *(_QWORD *)(v69 + 40) = v91;
              *(float *)(v69 + 48) = v92;
              *(float *)(v69 + 52) = v93;
              *(float *)(v69 + 56) = v94;
              *(_DWORD *)(v69 + 60) = v95;
              v40 = 1109393408;
            if ( !(_DWORD)v32 || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v32 + 88))(v32) != 1 )
                VMOV.F32        S2, #0.3125
                VLDR            S8, [R0]
                VLDR            S10, [R0,#4]
                VMOV.F32        S9, #0.1875
                VLDR            S6, [R0,#0x20]
                VLDR            S1, [R0,#0x10]
                VLDR            S12, [R0,#8]
                VSUB.F32        S6, S1, S6
                VLDR            S0, [R0,#0x24]
                VLDR            S7, [R0,#0x14]
                VLDR            S4, [R0,#0x28]
                VLDR            S3, [R0,#0x18]
                VMUL.F32        S8, S8, S2
                VLDR            S14, [R0,#0xC]
                VSUB.F32        S0, S7, S0
                VLDR            S5, [R0,#0x1C]
                VSUB.F32        S4, S3, S4
                VLDR            S1, [R0,#0x2C]
                VMUL.F32        S2, S14, S2
                VLDR            S14, [R0,#0x34]
                VSUB.F32        S1, S5, S1
                VLDR            S3, [R0,#0x30]
                VADD.F32        S10, S14, S10
                VLDR            S14, [R0,#0x38]
                VADD.F32        S8, S3, S8
                VLDR            S3, [R0,#0x3C]
                VMUL.F32        S0, S0, S9
                VMUL.F32        S6, S6, S9
                VADD.F32        S12, S14, S12
                VMUL.F32        S4, S4, S9
                VMUL.F32        S14, S1, S9
                VADD.F32        S2, S3, S2
                VADD.F32        S0, S10, S0
                VADD.F32        S2, S2, S14
                VSTR            S0, [R0,#0x34]
                VSTR            S4, [R0,#0x38]
              v63 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v96 = 1114636288;
              glm::rotate<float>((int)&v82, v63, (int)&v96, (int)&v79);
              *(_DWORD *)v63 = v82;
              *(float *)(v63 + 4) = v83;
              *(float *)(v63 + 8) = v84;
              *(float *)(v63 + 12) = v85;
              *(float *)(v63 + 16) = v86;
              *(_QWORD *)(v63 + 20) = v87;
              *(float *)(v63 + 28) = v88;
              *(float *)(v63 + 32) = v89;
              *(float *)(v63 + 36) = v90;
              *(_QWORD *)(v63 + 40) = v91;
              *(float *)(v63 + 48) = v92;
              *(float *)(v63 + 52) = v93;
              *(float *)(v63 + 56) = v94;
              *(_DWORD *)(v63 + 60) = v95;
              v64 = MatrixStack::MatrixStackRef::operator->((int)&v76);
              v96 = -1028390912;
              glm::rotate<float>((int)&v82, v64, (int)&v96, (int)&v79);
              *(_DWORD *)v64 = v82;
              *(float *)(v64 + 4) = v83;
              *(float *)(v64 + 8) = v84;
              *(float *)(v64 + 12) = v85;
              *(float *)(v64 + 16) = v86;
              *(_QWORD *)(v64 + 20) = v87;
              *(float *)(v64 + 28) = v88;
              *(float *)(v64 + 32) = v89;
              *(float *)(v64 + 36) = v90;
              *(_QWORD *)(v64 + 40) = v91;
              *(float *)(v64 + 48) = v92;
              *(float *)(v64 + 52) = v93;
              *(float *)(v64 + 56) = v94;
              *(_DWORD *)(v64 + 60) = v95;
              v40 = 1101004800;
            v41 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            glm::rotate<float>((int)&v82, v41, (int)&v96, (int)&v79);
            *(_DWORD *)v41 = v82;
            *(float *)(v41 + 4) = v83;
            *(float *)(v41 + 8) = v84;
            *(float *)(v41 + 12) = v85;
            *(float *)(v41 + 16) = v86;
            *(_QWORD *)(v41 + 20) = v87;
            *(float *)(v41 + 28) = v88;
            *(float *)(v41 + 32) = v89;
            *(float *)(v41 + 36) = v90;
            *(_QWORD *)(v41 + 40) = v91;
            *(float *)(v41 + 48) = v92;
            *(float *)(v41 + 52) = v93;
            *(float *)(v41 + 56) = v94;
            *(_DWORD *)(v41 + 60) = v95;
            v45 = MatrixStack::MatrixStackRef::operator->((int)&v76);
            glm::rotate<float>((int)&v82, v45, (int)&v96, (int)&v79);
            *(_DWORD *)v45 = v82;
            *(float *)(v45 + 4) = v83;
            *(float *)(v45 + 8) = v84;
            *(float *)(v45 + 12) = v85;
            *(float *)(v45 + 16) = v86;
            *(_QWORD *)(v45 + 20) = v87;
            *(float *)(v45 + 28) = v88;
            *(float *)(v45 + 32) = v89;
            *(float *)(v45 + 36) = v90;
            *(_QWORD *)(v45 + 40) = v91;
            *(float *)(v45 + 48) = v92;
            *(float *)(v45 + 52) = v93;
            *(float *)(v45 + 56) = v94;
            *(_DWORD *)(v45 + 60) = v95;
          v40 = 1110704128;
          v79 = 0;
          v80 = 1065353216;
          v81 = 0;
LABEL_35:
          v96 = v40;
          glm::rotate<float>((int)&v82, v39, (int)&v96, (int)&v79);
          *(_DWORD *)v39 = v82;
          *(float *)(v39 + 4) = v83;
          *(float *)(v39 + 8) = v84;
          *(float *)(v39 + 12) = v85;
          *(float *)(v39 + 16) = v86;
          *(_QWORD *)(v39 + 20) = v87;
          *(float *)(v39 + 28) = v88;
          *(float *)(v39 + 32) = v89;
          *(float *)(v39 + 36) = v90;
          *(_QWORD *)(v39 + 40) = v91;
          *(float *)(v39 + 48) = v92;
          *(float *)(v39 + 52) = v93;
          *(float *)(v39 + 56) = v94;
          *(_DWORD *)(v39 + 60) = v95;
          goto LABEL_36;
        }
      }
  return result;
}


void *__fastcall PlayerRenderer::_getSkinPtr(PlayerRenderer *this, SkinInfoData *a2)
{
  SkinInfoData *v2; // r4@1
  char v3; // r0@1
  mce::Texture *v4; // r0@4
  int v6; // [sp+0h] [bp-28h]@4

  v2 = a2;
  v3 = byte_27D0000;
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D0000) )
  {
    mce::TexturePtr::TexturePtr((mce::TexturePtr *)&unk_27D0008);
    _cxa_atexit(mce::TexturePtr::~TexturePtr);
    j___cxa_guard_release((unsigned int *)&byte_27D0000);
  }
  v4 = (mce::Texture *)(*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v2 + 12))(v2);
  mce::TexturePtr::makeTemporaryWrapper((mce::TexturePtr *)&v6, v4);
  mce::TexturePtr::operator=((mce::TexturePtr *)&unk_27D0008, (mce::TexturePtr *)&v6);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v6);
  return &unk_27D0008;
}


signed __int64 __fastcall PlayerRenderer::renderLeftHand(PlayerRenderer *this, BaseEntityRenderContext *a2, Player *a3)
{
  BaseEntityRenderContext *v3; // r10@1
  PlayerRenderer *v4; // r7@1
  Player *v5; // r6@1
  int v6; // r8@1
  SkinInfoData *v7; // r0@1
  int v8; // r5@1
  int v9; // r3@1
  SkinInfoData *v10; // r0@1
  SkinInfoData *v11; // r4@1
  int v12; // r0@1
  int v13; // r1@1
  __int64 v14; // r0@3
  unsigned __int64 v15; // r0@3
  __int64 v16; // r0@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = (SkinInfoData *)Player::getSkin(v5);
  v8 = PlayerRenderer::getModel(v4, v7);
  HumanoidModel::clearSkinAdjustments((HumanoidModel *)v8);
  *(_DWORD *)(v8 + 20) = 0;
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 64))(v8, 0, 0, 0);
  v9 = *((_DWORD *)v3 + 1);
  EntityShaderManager::_setupShaderParameters((int)v4, v6, *(float *)&v5);
  v10 = (SkinInfoData *)Player::getSkin(v5);
  v11 = v10;
  v12 = PlayerRenderer::getModel(v4, v10);
  v13 = v12 + 4308;
  if ( *((_BYTE *)v11 + 4) )
    v13 = v12 + 4320;
  *(_DWORD *)(v12 + 28) = v13;
  *(_DWORD *)(v8 + 32) = (*(int (__fastcall **)(PlayerRenderer *, Player *))(*(_DWORD *)v4 + 84))(v4, v5);
  LODWORD(v14) = v8 + 976;
  v15 = __PAIR__(v6, ModelPart::render(v14, v8, 1031798784, 0, 0));
  LODWORD(v16) = PlayerModel::getLeftSleeve((PlayerModel *)v8);
  return __PAIR__(v6, ModelPart::render(v16, v8, 1031798784, 0, 0));
}


signed int __fastcall PlayerRenderer::getSneakingHeightOffset(PlayerRenderer *this)
{
  return 1045220557;
}
