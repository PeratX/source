

int __fastcall SkeletonRenderer::render(int a1, BaseEntityRenderContext *a2, Skeleton **a3)
{
  Skeleton **v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  int v6; // r0@1
  int v7; // r1@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Skeleton::getSkeletonType(*a3);
  v7 = v4 + 144;
  if ( v6 == 1 )
    v7 = v4 + 672;
  return MobRenderer::renderModel(v4, v5, (int)v3, *(_DWORD *)(v4 + 140), v7);
}


BaseEntityRenderer *__fastcall SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)
{
  HumanoidMobRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC0B4;
  mce::TexturePtr::~TexturePtr((SkeletonRenderer *)((char *)this + 672));
  return j_j_j__ZN19HumanoidMobRendererD2Ev(v1);
}


void __fastcall SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)
{
  HumanoidMobRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC0B4;
  mce::TexturePtr::~TexturePtr((SkeletonRenderer *)((char *)this + 672));
  HumanoidMobRenderer::~HumanoidMobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall SkeletonRenderer::SkeletonRenderer(int a1, float a2, int *a3, int *a4, int *a5, int a6)
{
  mce::TextureGroup *v6; // r5@1
  int v7; // r1@1
  int v8; // r4@1
  int v9; // r1@1
  int v10; // r6@1
  char *v15; // r0@1
  char *v16; // r0@2
  char *v17; // r0@9
  char *v18; // r0@10
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  unsigned int *v22; // r2@16
  signed int v23; // r1@18
  unsigned int *v24; // r2@20
  signed int v25; // r1@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  int v28; // [sp+4h] [bp-64h]@0
  char *v29; // [sp+10h] [bp-58h]@9
  char *v30; // [sp+14h] [bp-54h]@9
  int v31; // [sp+18h] [bp-50h]@9
  char *v32; // [sp+20h] [bp-48h]@1
  char *v33; // [sp+24h] [bp-44h]@1
  int v34; // [sp+28h] [bp-40h]@1
  char v35; // [sp+2Ch] [bp-3Ch]@1
  int v36; // [sp+44h] [bp-24h]@1
  int v37; // [sp+48h] [bp-20h]@1
  int v38; // [sp+4Ch] [bp-1Ch]@1

  v6 = (mce::TextureGroup *)LODWORD(a2);
  v7 = *a3;
  v8 = a1;
  *a3 = 0;
  v38 = v7;
  v9 = *a4;
  *a4 = 0;
  v37 = v9;
  v10 = *a5;
  *a5 = 0;
  v36 = v10;
  sub_119C884((void **)&v32, "textures/entity/skeleton/skeleton");
  v33 = v32;
  v34 = 0;
  v32 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v35, v6, (int)&v33, 0);
  __asm
  {
    VLDR            S0, [SP,#0x68+arg_4]
    VSTR            S0, [SP,#0x68+var_64]
  }
  HumanoidMobRenderer::HumanoidMobRenderer(v8, COERCE_FLOAT(&v38), &v37, &v36, (int)&v35, v28);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v35);
  v15 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v32 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  v36 = 0;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v37 = 0;
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  v38 = 0;
  *(_DWORD *)v8 = &off_26DC0B4;
  sub_119C884((void **)&v29, "textures/entity/skeleton/wither_skeleton");
  v30 = v29;
  v31 = 0;
  v29 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v8 + 672), v6, (int)&v30, 0);
  v17 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v30 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v29 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  return v8;
}


void __fastcall SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)
{
  SkeletonRenderer::~SkeletonRenderer(this);
}
