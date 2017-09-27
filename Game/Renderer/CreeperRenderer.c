

int __fastcall CreeperRenderer::setupScale(int a1, Creeper *a2, int a3, float a4)
{
  float v11; // r1@1
  int result; // r0@1

  _R4 = a3;
  _R0 = Creeper::getSwelling(a2, a4);
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
    VLDR            S8, =0.4
    VMOV            S6, R0
    VLDR            S10, =0.1
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S4, S0 }
    VCMPE.F32       S4, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S2 }
    VMUL.F32        S0, S4, S4
    VLDR            S4, =0.01
    VMUL.F32        S4, S16, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S4, S4, S6
    VMUL.F32        S6, S0, S8
    VLDR            S8, [R4]
    VMUL.F32        S0, S0, S10
    VADD.F32        S4, S4, S2
    VADD.F32        S6, S6, S2
    VADD.F32        S0, S0, S2
    VMUL.F32        S6, S6, S4
    VDIV.F32        S0, S0, S4
    VMUL.F32        S8, S6, S8
    VSTR            S8, [R4]
    VLDR            S8, [R4,#4]
    VSTR            S8, [R4,#4]
    VLDR            S2, [R4,#8]
    VMUL.F32        S2, S6, S2
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


int __fastcall CreeperRenderer::prepareArmor(int a1, int a2, Entity *this, int a4, float a5)
{
  Entity *v5; // r5@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r8@1
  unsigned int v9; // r0@1
  signed int v11; // r7@1
  char v16; // r6@5
  float v18; // [sp+10h] [bp-28h]@5
  signed int v19; // [sp+18h] [bp-20h]@5
  signed int v20; // [sp+1Ch] [bp-1Ch]@5

  v5 = this;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  v9 = Entity::isPowered(this);
  _ZF = v7 == 1;
  v11 = -1;
  if ( v7 == 1 )
    _ZF = v9 == 1;
  if ( _ZF )
  {
    _R0 = *((_DWORD *)v5 + 104);
    __asm { VLDR            S0, [SP,#0x38+arg_0] }
    v11 = 1;
    __asm
    {
      VLDR            S4, =0.01
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VADD.F32        S2, S2, S0
      VMUL.F32        S2, S2, S4
      VSTR            S2, [SP,#0x38+var_28]
      VSTR            S2, [SP,#0x38+var_24]
    }
    v19 = 1065353216;
    v20 = 1065353216;
    v16 = *((_BYTE *)v5 + 228);
    *((_BYTE *)v5 + 228) = 1;
    __asm { VSTR            S0, [SP,#0x38+var_2C] }
    EntityShaderManager::_setupShaderParameters(
      v6,
      v8,
      *(float *)&v5,
      COERCE_FLOAT(&Color::WHITE),
      (unsigned int)&Color::WHITE,
      (int)&v18,
      1056964608);
    *((_BYTE *)v5 + 228) = v16;
    *(_DWORD *)(*(_DWORD *)(v6 + 644) + 32) = v6 + 648;
  }
  return v11;
}


BaseEntityRenderer *__fastcall CreeperRenderer::~CreeperRenderer(CreeperRenderer *this)
{
  CreeperRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E6AF0;
  mce::TexturePtr::~TexturePtr((CreeperRenderer *)((char *)this + 648));
  v2 = *((_DWORD *)v1 + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  return j_j_j__ZN11MobRendererD2Ev_0(v1);
}


int __fastcall CreeperRenderer::CreeperRenderer(int a1, mce::TextureGroup *a2, int a3)
{
  mce::TextureGroup *v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  CreeperModel *v6; // r7@1
  char *v7; // r0@1
  char *v8; // r0@2
  void *v9; // r0@5
  CreeperModel *v10; // r6@6
  void *v11; // r0@6
  char *v12; // r0@7
  char *v13; // r0@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  char *v27; // [sp+8h] [bp-70h]@7
  char *v28; // [sp+Ch] [bp-6Ch]@7
  int v29; // [sp+10h] [bp-68h]@7
  int v30; // [sp+18h] [bp-60h]@6
  char v31; // [sp+1Ch] [bp-5Ch]@6
  char *v32; // [sp+28h] [bp-50h]@1
  char *v33; // [sp+2Ch] [bp-4Ch]@1
  int v34; // [sp+30h] [bp-48h]@1
  char v35; // [sp+34h] [bp-44h]@1
  int v36; // [sp+50h] [bp-28h]@1
  char v37; // [sp+54h] [bp-24h]@1
  CreeperModel *v38; // [sp+5Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v36, "geometry.creeper");
  GeometryGroup::getGeometry((GeometryPtr *)&v37, v4, (const void **)&v36);
  v6 = (CreeperModel *)operator new(0x564u);
  CreeperModel::CreeperModel(v6, (const GeometryPtr *)&v37, 0);
  v38 = v6;
  sub_21E94B4((void **)&v32, "textures/entity/creeper/creeper");
  v33 = v32;
  v32 = (char *)&unk_28898CC;
  v34 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v35, v3, (int)&v33, 0);
  MobRenderer::MobRenderer(v5, (int *)&v38, (mce::TexturePtr *)&v35);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v35);
  v7 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  v38 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v37);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v36 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  *(_DWORD *)v5 = &off_26E6AF0;
  sub_21E94B4((void **)&v30, "geometry.creeper.charged");
  GeometryGroup::getGeometry((GeometryPtr *)&v31, v4, (const void **)&v30);
  v10 = (CreeperModel *)operator new(0x564u);
  CreeperModel::CreeperModel(v10, (const GeometryPtr *)&v31, 1);
  *(_DWORD *)(v5 + 644) = v10;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v31);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v27, "textures/entity/creeper/creeper_armor");
  v28 = v27;
  v27 = (char *)&unk_28898CC;
  v29 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 648), v3, (int)&v28, 0);
  v12 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  MobRenderer::setArmor((MobRenderer *)v5, *(Model **)(v5 + 644));
  return v5;
}


void __fastcall CreeperRenderer::~CreeperRenderer(CreeperRenderer *this)
{
  CreeperRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E6AF0;
  mce::TexturePtr::~TexturePtr((CreeperRenderer *)((char *)this + 648));
  v2 = *((_DWORD *)v1 + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall CreeperRenderer::~CreeperRenderer(CreeperRenderer *this)
{
  CreeperRenderer::~CreeperRenderer(this);
}


int __fastcall CreeperRenderer::_getOverlayColor(CreeperRenderer *this, Entity *a2, float a3, float a4)
{
  Creeper *v4; // r6@1
  Entity *v5; // r7@1
  CreeperRenderer *v6; // r4@1
  float v13; // r2@3
  int result; // r0@3
  unsigned int v15; // r3@3

  v4 = (Creeper *)LODWORD(a3);
  v5 = a2;
  v6 = this;
  _R0 = Creeper::getSwelling((Creeper *)LODWORD(a3), a4);
  __asm
  {
    VMOV.F32        S0, #10.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  if ( _R0 & 1 && Creeper::getSwellDir(v4) > -1 )
    v13 = unk_283E614;
    result = HIDWORD(qword_283E618);
    v15 = qword_283E618;
    *(_DWORD *)v6 = Color::WHITE;
    *((float *)v6 + 1) = v13;
    *((_QWORD *)v6 + 1) = __PAIR__(result, v15);
  else
    result = EntityShaderManager::_getOverlayColor(v6, v5, *(float *)&v4);
  return result;
}
