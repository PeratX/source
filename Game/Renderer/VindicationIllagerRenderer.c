

void __fastcall VindicationIllagerRenderer::~VindicationIllagerRenderer(VindicationIllagerRenderer *this)
{
  VindicationIllagerRenderer::~VindicationIllagerRenderer(this);
}


int __fastcall VindicationIllagerRenderer::additionalRendering(VindicationIllagerRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Mob *v10; // r4@1
  VindicationIllagerRenderer *v11; // r7@1
  Model *v12; // r5@1
  BaseEntityRenderContext *v13; // r6@1
  int result; // r0@1

  v10 = a4;
  v11 = this;
  v12 = a3;
  v13 = a2;
  result = Entity::isAngry(a4);
  if ( result == 1 )
    result = j_j_j__ZN19HumanoidMobRenderer19additionalRenderingER23BaseEntityRenderContextR5ModelR3Mobffffff(
               __PAIR__((unsigned int)v13, (unsigned int)v11),
               v12,
               v10,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10);
  return result;
}


void __fastcall VindicationIllagerRenderer::setupScale(int a1, int a2, int _R2)
{
  VindicationIllagerRenderer::setupScale(a1, a2, _R2);
}


int __fastcall VindicationIllagerRenderer::VindicationIllagerRenderer(int a1, mce::TextureGroup *a2, int *a3, int *a4, int *a5)
{
  mce::TextureGroup *v5; // r5@1
  int v6; // r1@1
  int v7; // r4@1
  int v8; // r1@1
  int v9; // r6@1
  char *v10; // r0@1
  char *v11; // r0@2
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  char *v17; // [sp+10h] [bp-48h]@1
  char *v18; // [sp+14h] [bp-44h]@1
  int v19; // [sp+18h] [bp-40h]@1
  char v20; // [sp+1Ch] [bp-3Ch]@1
  int v21; // [sp+34h] [bp-24h]@1
  int v22; // [sp+38h] [bp-20h]@1
  int v23; // [sp+3Ch] [bp-1Ch]@1

  v5 = a2;
  v6 = *a3;
  v7 = a1;
  *a3 = 0;
  v23 = v6;
  v8 = *a4;
  *a4 = 0;
  v22 = v8;
  v9 = *a5;
  *a5 = 0;
  v21 = v9;
  sub_119C884((void **)&v17, "textures/entity/vindicator");
  v18 = v17;
  v19 = 0;
  v17 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v20, v5, (int)&v18, 0);
  HumanoidMobRenderer::HumanoidMobRenderer(v7, COERCE_FLOAT(&v23), &v22, &v21, (int)&v20, 1056964608);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v20);
  v10 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v21 = 0;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v22 = 0;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  *(_DWORD *)v7 = &off_26DC56C;
  *(_DWORD *)(v7 + 672) = 0;
  *(_DWORD *)(v7 + 676) = 0;
  *(_DWORD *)(v7 + 680) = 0;
  return v7;
}


BaseEntityRenderer *__fastcall VindicationIllagerRenderer::~VindicationIllagerRenderer(VindicationIllagerRenderer *this)
{
  VindicationIllagerRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DC56C;
  v3 = (char *)(*((_QWORD *)this + 84) >> 32);
  v2 = (char *)*((_QWORD *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 168);
  }
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN19HumanoidMobRendererD2Ev(v1);
}


void __fastcall VindicationIllagerRenderer::~VindicationIllagerRenderer(VindicationIllagerRenderer *this)
{
  VindicationIllagerRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DC56C;
  v3 = (char *)(*((_QWORD *)this + 84) >> 32);
  v2 = (char *)*((_QWORD *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 168);
  }
  if ( v2 )
    operator delete(v2);
  HumanoidMobRenderer::~HumanoidMobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall VindicationIllagerRenderer::setupScale(int a1, int a2, int _R2)
{
  __asm
  {
    VMOV.F32        S0, #0.9375
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
