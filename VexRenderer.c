

void __fastcall VexRenderer::setupScale(int a1, int a2, int _R2)
{
  VexRenderer::setupScale(a1, a2, _R2);
}


void __fastcall VexRenderer::setupScale(int a1, int a2, int _R2)
{
  __asm
  {
    VLDR            S0, =0.4
    VLDR            S2, [R2]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R2]
    VLDR            S2, [R2,#4]
    VSTR            S2, [R2,#4]
    VLDR            S2, [R2,#8]
    VSTR            S2, [R2,#8]
    VLDR            S2, [R2,#0xC]
    VSTR            S2, [R2,#0xC]
    VLDR            S2, [R2,#0x10]
    VSTR            S2, [R2,#0x10]
    VLDR            S2, [R2,#0x14]
    VSTR            S2, [R2,#0x14]
    VLDR            S2, [R2,#0x18]
    VSTR            S2, [R2,#0x18]
    VLDR            S2, [R2,#0x1C]
    VSTR            S2, [R2,#0x1C]
    VLDR            S2, [R2,#0x20]
    VSTR            S2, [R2,#0x20]
    VLDR            S2, [R2,#0x24]
    VSTR            S2, [R2,#0x24]
    VLDR            S2, [R2,#0x28]
    VSTR            S2, [R2,#0x28]
    VLDR            S2, [R2,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R2,#0x2C]
  }
}


void __fastcall VexRenderer::~VexRenderer(VexRenderer *this)
{
  VexRenderer::~VexRenderer(this);
}


int __fastcall VexRenderer::VexRenderer(int a1, mce::TextureGroup *a2, int *a3)
{
  int v3; // r4@1
  int v4; // r0@1
  mce::TextureGroup *v5; // r5@1
  HumanoidModel *v6; // r6@1
  HumanoidModel *v7; // r6@1
  char *v8; // r0@1
  char *v9; // r0@2
  char *v10; // r0@9
  char *v11; // r0@10
  char *v12; // r0@11
  char *v13; // r0@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  char *v27; // [sp+10h] [bp-68h]@11
  char *v28; // [sp+14h] [bp-64h]@11
  int v29; // [sp+18h] [bp-60h]@11
  char *v30; // [sp+20h] [bp-58h]@9
  char *v31; // [sp+24h] [bp-54h]@9
  int v32; // [sp+28h] [bp-50h]@9
  char *v33; // [sp+30h] [bp-48h]@1
  char *v34; // [sp+34h] [bp-44h]@1
  int v35; // [sp+38h] [bp-40h]@1
  char v36; // [sp+3Ch] [bp-3Ch]@1
  HumanoidModel *v37; // [sp+54h] [bp-24h]@1
  HumanoidModel *v38; // [sp+58h] [bp-20h]@1
  int v39; // [sp+5Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = *a3;
  v5 = a2;
  *a3 = 0;
  v39 = v4;
  v6 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v6, 1.0, 0.0, 64, 32);
  v38 = v6;
  v7 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v7, 0.5, 0.0, 64, 32);
  v37 = v7;
  sub_119C884((void **)&v33, "textures/entity/vex/vex");
  v34 = v33;
  v33 = (char *)&unk_28898CC;
  v35 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v36, v5, (int)&v34, 0);
  HumanoidMobRenderer::HumanoidMobRenderer(v3, COERCE_FLOAT(&v39), (int *)&v38, &v37, (int)&v36, 1056964608);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v36);
  v8 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v34 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  v9 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v33 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v37 = 0;
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  v38 = 0;
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  v39 = 0;
  *(_DWORD *)v3 = &off_26DC444;
  sub_119C884((void **)&v30, "textures/entity/vex/vex");
  v31 = v30;
  v32 = 0;
  v30 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 672), v5, (int)&v31, 0);
  v10 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v27, "textures/entity/vex/vex_charging");
  v28 = v27;
  v27 = (char *)&unk_28898CC;
  v29 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 696), v5, (int)&v28, 0);
  v12 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  *(_DWORD *)(*(_DWORD *)(v3 + 140) + 32) = v3 + 672;
  return v3;
}


BaseEntityRenderer *__fastcall VexRenderer::~VexRenderer(VexRenderer *this)
{
  VexRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC444;
  mce::TexturePtr::~TexturePtr((VexRenderer *)((char *)this + 696));
  mce::TexturePtr::~TexturePtr((VexRenderer *)((char *)v1 + 672));
  return j_j_j__ZN19HumanoidMobRendererD2Ev(v1);
}


int __fastcall VexRenderer::getSkinPtr(VexRenderer *this, Entity *a2)
{
  VexRenderer *v2; // r4@1
  int v3; // r0@1
  int v4; // r1@1

  v2 = this;
  v3 = Entity::getStatusFlag((int)a2, 41);
  v4 = (int)v2 + 672;
  if ( v3 )
    v4 = (int)v2 + 696;
  return v4;
}


void __fastcall VexRenderer::~VexRenderer(VexRenderer *this)
{
  VexRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC444;
  mce::TexturePtr::~TexturePtr((VexRenderer *)((char *)this + 696));
  mce::TexturePtr::~TexturePtr((VexRenderer *)((char *)v1 + 672));
  HumanoidMobRenderer::~HumanoidMobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
