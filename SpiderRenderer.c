

int __fastcall SpiderRenderer::SpiderRenderer(int a1, int *a2, mce::TextureGroup *a3)
{
  int v3; // r6@1
  mce::TextureGroup *v4; // r5@1
  int v5; // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  char *v8; // r0@5
  char *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  char *v19; // [sp+8h] [bp-50h]@5
  char *v20; // [sp+Ch] [bp-4Ch]@5
  int v21; // [sp+10h] [bp-48h]@5
  char *v22; // [sp+18h] [bp-40h]@1
  char *v23; // [sp+1Ch] [bp-3Ch]@1
  int v24; // [sp+20h] [bp-38h]@1
  char v25; // [sp+24h] [bp-34h]@1
  int v26; // [sp+3Ch] [bp-1Ch]@1

  v3 = *a2;
  v4 = a3;
  v5 = a1;
  *a2 = 0;
  v26 = v3;
  sub_119C884((void **)&v22, "textures/entity/spider/spider");
  v23 = v22;
  v24 = 0;
  v22 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v25, v4, (int)&v23, 0);
  MobRenderer::MobRenderer(v5, &v26, (mce::TexturePtr *)&v25);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v25);
  v6 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  v26 = 0;
  *(_DWORD *)v5 = &off_26DC218;
  sub_119C884((void **)&v19, "textures/entity/spider/cave_spider");
  v20 = v19;
  v21 = 0;
  v19 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 644), v4, (int)&v20, 0);
  v8 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  return v5;
}


int __fastcall SpiderRenderer::setupScale(int a1, int a2, int a3)
{
  int result; // r0@1

  _R4 = a3;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 1200))(a2);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R4]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4]
    VLDR            S2, [R4,#4]
    VSTR            S2, [R4,#4]
    VLDR            S2, [R4,#8]
    VSTR            S2, [R4,#8]
    VLDR            S2, [R4,#0xC]
    VSTR            S2, [R4,#0xC]
    VLDR            S2, [R4,#0x10]
    VSTR            S2, [R4,#0x10]
    VLDR            S2, [R4,#0x14]
    VSTR            S2, [R4,#0x14]
    VLDR            S2, [R4,#0x18]
    VSTR            S2, [R4,#0x18]
    VLDR            S2, [R4,#0x1C]
    VSTR            S2, [R4,#0x1C]
    VLDR            S2, [R4,#0x20]
    VSTR            S2, [R4,#0x20]
    VLDR            S2, [R4,#0x24]
    VSTR            S2, [R4,#0x24]
    VLDR            S2, [R4,#0x28]
    VSTR            S2, [R4,#0x28]
    VLDR            S2, [R4,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x2C]
  }
  return result;
}


BaseEntityRenderer *__fastcall SpiderRenderer::~SpiderRenderer(SpiderRenderer *this)
{
  MobRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC218;
  mce::TexturePtr::~TexturePtr((SpiderRenderer *)((char *)this + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


signed int __fastcall SpiderRenderer::getFlipDegrees(SpiderRenderer *this, const Mob *a2)
{
  return 1127481344;
}


void __fastcall SpiderRenderer::~SpiderRenderer(SpiderRenderer *this)
{
  SpiderRenderer::~SpiderRenderer(this);
}


int __fastcall SpiderRenderer::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // r1@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 140);
  v7 = (*(int (**)(void))(**(_DWORD **)a3 + 1204))();
  v8 = v4 + 644;
  if ( !v7 )
    v8 = v4 + 144;
  return MobRenderer::renderModel(v4, v5, v3, v6, v8);
}


void __fastcall SpiderRenderer::~SpiderRenderer(SpiderRenderer *this)
{
  MobRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC218;
  mce::TexturePtr::~TexturePtr((SpiderRenderer *)((char *)this + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
