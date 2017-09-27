

int __fastcall WitherBossRenderer::prepareArmor(int a1, int a2, WitherBoss *this, int a4, float a5)
{
  WitherBoss *v5; // r5@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r8@1
  signed int v9; // r0@1
  float v10; // r1@1
  signed int v12; // r7@1
  char v19; // r6@5
  float v21; // [sp+10h] [bp-38h]@5
  signed int v22; // [sp+18h] [bp-30h]@5
  signed int v23; // [sp+1Ch] [bp-2Ch]@5

  v5 = this;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  v9 = WitherBoss::isPowered(this);
  _ZF = v7 == 1;
  v12 = -1;
  if ( v7 == 1 )
    _ZF = v9 == 1;
  if ( _ZF )
  {
    _R0 = *((_DWORD *)v5 + 104);
    __asm
    {
      VLDR            S16, [SP,#0x48+arg_0]
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
      VLDR            S0, =0.02
      VMUL.F32        S0, S18, S0
      VMOV            R0, S0
    }
    _R0 = mce::Math::cos(_R0, v10);
      VMOV.F32        S0, #3.0
      VLDR            S4, =0.01
      VMOV            S2, R0
    v12 = 1;
    v19 = *((_BYTE *)v5 + 228);
    *((_BYTE *)v5 + 228) = 1;
      VMUL.F32        S0, S2, S0
      VMUL.F32        S2, S18, S4
      VSTR            S0, [SP,#0x48+var_38]
      VSTR            S2, [SP,#0x48+var_34]
    v22 = 1065353216;
    v23 = 1065353216;
    __asm { VSTR            S16, [SP,#0x48+var_3C] }
    EntityShaderManager::_setupShaderParameters(
      v6,
      v8,
      *(float *)&v5,
      COERCE_FLOAT(&Color::WHITE),
      (unsigned int)&Color::WHITE,
      (int)&v21,
      1065353216);
    *((_BYTE *)v5 + 228) = v19;
    *(_DWORD *)(*(_DWORD *)(v6 + 644) + 32) = v6 + 648;
  }
  return v12;
}


int __fastcall WitherBossRenderer::setupScale(int a1, WitherBoss *a2, int a3, float a4)
{
  float v11; // r1@1
  int result; // r0@1

  _R4 = a3;
  _R0 = WitherBoss::getSwellAmount(a2, a4);
  __asm
  {
    VLDR            S0, =100.0
    VMOV            S16, R0
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  }
  result = mce::Math::sin(_R0, v11);
    VCMPE.F32       S16, #0.0
    VLDR            S0, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S2, #1.0
    VMOV.F32        S4, S16
    VLDR            S6, =0.4
    VMOV            S8, R0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S4, S0 }
    VCMPE.F32       S4, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S2 }
    VMUL.F32        S0, S4, S4
    VLDR            S4, =0.01
    VMUL.F32        S4, S16, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S4, S4, S8
    VLDR            S8, =0.1
    VMUL.F32        S6, S0, S6
    VMUL.F32        S0, S0, S8
    VLDR            S8, [R4]
    VADD.F32        S4, S4, S2
    VADD.F32        S6, S6, S2
    VADD.F32        S0, S0, S2
    VADD.F32        S6, S6, S6
    VDIV.F32        S0, S0, S4
    VMUL.F32        S6, S4, S6
    VADD.F32        S0, S0, S0
    VMUL.F32        S8, S6, S8
    VSTR            S8, [R4]
    VLDR            S2, [R4,#4]
    VMUL.F32        S2, S6, S2
    VSTR            S2, [R4,#4]
    VLDR            S2, [R4,#8]
    VSTR            S2, [R4,#8]
    VLDR            S2, [R4,#0xC]
    VSTR            S2, [R4,#0xC]
    VLDR            S2, [R4,#0x10]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x10]
    VLDR            S2, [R4,#0x14]
    VSTR            S2, [R4,#0x14]
    VLDR            S2, [R4,#0x18]
    VSTR            S2, [R4,#0x18]
    VLDR            S2, [R4,#0x1C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x1C]
    VLDR            S0, [R4,#0x20]
    VMUL.F32        S0, S0, S6
    VSTR            S0, [R4,#0x20]
    VLDR            S0, [R4,#0x24]
    VSTR            S0, [R4,#0x24]
    VLDR            S0, [R4,#0x28]
    VSTR            S0, [R4,#0x28]
    VLDR            S0, [R4,#0x2C]
    VSTR            S0, [R4,#0x2C]
  return result;
}


void __fastcall WitherBossRenderer::~WitherBossRenderer(WitherBossRenderer *this)
{
  WitherBossRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DC630;
  mce::TexturePtr::~TexturePtr((WitherBossRenderer *)((char *)this + 696));
  mce::TexturePtr::~TexturePtr((WitherBossRenderer *)((char *)v1 + 672));
  mce::TexturePtr::~TexturePtr((WitherBossRenderer *)((char *)v1 + 648));
  v2 = *((_DWORD *)v1 + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall WitherBossRenderer::~WitherBossRenderer(WitherBossRenderer *this)
{
  WitherBossRenderer::~WitherBossRenderer(this);
}


int __fastcall WitherBossRenderer::render(int a1, BaseEntityRenderContext *a2, WitherBoss **a3)
{
  WitherBoss **v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  int v13; // r3@4
  int v14; // r0@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  _R0 = WitherBoss::getInvulnerableTicks(*a3);
  if ( _R0 < 1 )
    goto LABEL_9;
  if ( _R0 > 80 )
    goto LABEL_10;
  _R1 = 1717986919;
  __asm { SMMUL.W         R0, R0, R1 }
  if ( (signed int)(((signed int)_R0 >> 1) + (_R0 >> 31)) % 2 != 1 )
  {
LABEL_10:
    v13 = *(_DWORD *)(v4 + 140);
    v14 = v4 + 696;
  }
  else
LABEL_9:
    v14 = v4 + 672;
  return MobRenderer::renderModel(v4, v5, (int)v3, v13, v14);
}


int __fastcall WitherBossRenderer::_getOverlayColor(WitherBossRenderer *this, Entity *a2, float a3)
{
  WitherBoss *v3; // r5@1
  WitherBossRenderer *v4; // r4@1
  Entity *v5; // r7@1
  float v6; // r2@2
  unsigned int v7; // r0@2
  unsigned int v8; // r3@2
  int result; // r0@2

  v3 = (WitherBoss *)LODWORD(a3);
  v4 = this;
  v5 = a2;
  if ( WitherBoss::getInvulnerableTicks((WitherBoss *)LODWORD(a3)) <= 0 )
  {
    result = EntityShaderManager::_getOverlayColor(v4, v5, *(float *)&v3);
  }
  else
    v6 = unk_283E614;
    v7 = HIDWORD(qword_283E618);
    v8 = qword_283E618;
    *(_DWORD *)v4 = Color::WHITE;
    *((float *)v4 + 1) = v6;
    *((_QWORD *)v4 + 1) = __PAIR__(v7, v8);
    result = WitherBoss::getOverlayAlpha(v3);
    *((_DWORD *)v4 + 3) = result;
  return result;
}


int __fastcall WitherBossRenderer::WitherBossRenderer(int a1, mce::TextureGroup *a2, int a3)
{
  mce::TextureGroup *v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  WitherBossModel *v6; // r7@1
  char *v7; // r0@1
  char *v8; // r0@2
  void *v9; // r0@5
  WitherBossModel *v10; // r6@6
  void *v11; // r0@6
  char *v12; // r0@7
  char *v13; // r0@8
  char *v14; // r0@9
  char *v15; // r0@10
  char *v16; // r0@11
  char *v17; // r0@12
  unsigned int *v19; // r2@14
  signed int v20; // r1@16
  unsigned int *v21; // r2@18
  signed int v22; // r1@20
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  unsigned int *v33; // r2@42
  signed int v34; // r1@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  char *v39; // [sp+4h] [bp-94h]@11
  char *v40; // [sp+8h] [bp-90h]@11
  int v41; // [sp+Ch] [bp-8Ch]@11
  char *v42; // [sp+14h] [bp-84h]@9
  char *v43; // [sp+18h] [bp-80h]@9
  int v44; // [sp+1Ch] [bp-7Ch]@9
  char *v45; // [sp+24h] [bp-74h]@7
  char *v46; // [sp+28h] [bp-70h]@7
  int v47; // [sp+2Ch] [bp-6Ch]@7
  int v48; // [sp+34h] [bp-64h]@6
  char v49; // [sp+38h] [bp-60h]@6
  char *v50; // [sp+44h] [bp-54h]@1
  char *v51; // [sp+48h] [bp-50h]@1
  int v52; // [sp+4Ch] [bp-4Ch]@1
  char v53; // [sp+50h] [bp-48h]@1
  int v54; // [sp+6Ch] [bp-2Ch]@1
  char v55; // [sp+70h] [bp-28h]@1
  WitherBossModel *v56; // [sp+78h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_119C884((void **)&v54, "geometry.witherBoss");
  GeometryGroup::getGeometry((GeometryPtr *)&v55, v4, (const void **)&v54);
  v6 = (WitherBossModel *)operator new(0x564u);
  WitherBossModel::WitherBossModel(v6, (const GeometryPtr *)&v55, 0);
  v56 = v6;
  sub_119C884((void **)&v50, "textures/entity/wither_boss/wither");
  v51 = v50;
  v50 = (char *)&unk_28898CC;
  v52 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v53, v3, (int)&v51, 0);
  MobRenderer::MobRenderer(v5, (int *)&v56, (mce::TexturePtr *)&v53);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v53);
  v7 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v50 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v56 )
    (*(void (**)(void))(*(_DWORD *)v56 + 4))();
  v56 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v55);
  v9 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v54 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  *(_DWORD *)v5 = &off_26DC630;
  sub_119C884((void **)&v48, "geometry.witherBoss.armor");
  GeometryGroup::getGeometry((GeometryPtr *)&v49, v4, (const void **)&v48);
  v10 = (WitherBossModel *)operator new(0x564u);
  WitherBossModel::WitherBossModel(v10, (const GeometryPtr *)&v49, 1);
  *(_DWORD *)(v5 + 644) = v10;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v49);
  v11 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v48 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v45, "textures/entity/wither_boss/wither_armor");
  v46 = v45;
  v45 = (char *)&unk_28898CC;
  v47 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 648), v3, (int)&v46, 0);
  v12 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v46 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v45 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v42, "textures/entity/wither_boss/wither");
  v43 = v42;
  v42 = (char *)&unk_28898CC;
  v44 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 672), v3, (int)&v43, 0);
  v14 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v43 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v42 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v39, "textures/entity/wither_boss/wither_invulnerable");
  v40 = v39;
  v39 = (char *)&unk_28898CC;
  v41 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 696), v3, (int)&v40, 0);
  v16 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v40 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v39 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  MobRenderer::setArmor((MobRenderer *)v5, *(Model **)(v5 + 644));
  return v5;
}


BaseEntityRenderer *__fastcall WitherBossRenderer::~WitherBossRenderer(WitherBossRenderer *this)
{
  WitherBossRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DC630;
  mce::TexturePtr::~TexturePtr((WitherBossRenderer *)((char *)this + 696));
  mce::TexturePtr::~TexturePtr((WitherBossRenderer *)((char *)v1 + 672));
  mce::TexturePtr::~TexturePtr((WitherBossRenderer *)((char *)v1 + 648));
  v2 = *((_DWORD *)v1 + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  return j_j_j__ZN11MobRendererD2Ev(v1);
}
