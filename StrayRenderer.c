

int __fastcall StrayRenderer::renderLayers(StrayRenderer *this, BaseEntityRenderContext *a2, Entity *a3, float a4, float a5, float a6, float a7, float a8)
{
  Entity *v12; // r4@1
  BaseEntityRenderContext *v13; // r8@1
  char v15; // r0@1
  int v16; // r1@1
  int v17; // r7@1
  int (__fastcall *v18)(int, int, Entity *, _DWORD); // r6@1
  int v19; // r0@1
  float v21; // [sp+0h] [bp-50h]@0
  float v22; // [sp+4h] [bp-4Ch]@0
  float v23; // [sp+8h] [bp-48h]@0
  float v24; // [sp+Ch] [bp-44h]@0

  __asm
  {
    VLDR            S18, [SP,#0x50+arg_0]
    VLDR            S16, [SP,#0x50+arg_4]
  }
  v12 = a3;
  __asm { VLDR            S20, [SP,#0x50+arg_8] }
  v13 = a2;
  __asm { VLDR            S22, [SP,#0x50+arg_C] }
  _R5 = this;
    VSTR            S18, [SP,#0x50+var_50]
    VSTR            S16, [SP,#0x50+var_4C]
    VSTR            S20, [SP,#0x50+var_48]
    VSTR            S22, [SP,#0x50+var_44]
  MobRenderer::renderLayers(this, a2, a3, a4, v21, v22, v23, v24);
  v15 = Entity::isBaby(v12);
  v16 = *((_DWORD *)_R5 + 180);
  *(_BYTE *)(v16 + 24) = v15;
  (*(void (__fastcall **)(int, Entity *, _DWORD, _DWORD))(*(_DWORD *)v16 + 68))(
    v16,
    v12,
    *(_QWORD *)((char *)_R5 + 180),
    *(_QWORD *)((char *)_R5 + 180) >> 32);
  v17 = *((_DWORD *)_R5 + 180);
  v18 = *(int (__fastcall **)(int, int, Entity *, _DWORD))(*(_DWORD *)v17 + 60);
  v19 = BaseEntityRenderContext::getScreenContext(v13);
    VLDR            S0, [R5,#0xB8]
    VSTR            S0, [SP,#0x50+var_50]
    VSTR            S18, [SP,#0x50+var_4C]
    VSTR            S16, [SP,#0x50+var_48]
    VSTR            S20, [SP,#0x50+var_44]
    VSTR            S22, [SP,#0x50+var_40]
  return v18(v17, v19, v12, *((_DWORD *)_R5 + 45));
}


void __fastcall StrayRenderer::~StrayRenderer(StrayRenderer *this)
{
  StrayRenderer::~StrayRenderer(this);
}


int __fastcall StrayRenderer::StrayRenderer(int a1, float a2, int a3, int a4, int a5, int a6, float a7)
{
  mce::TextureGroup *v7; // r6@1
  int v8; // r1@1
  int v9; // r4@1
  int v10; // r1@1
  int v11; // r1@1
  char *v16; // r0@7
  char *v17; // r0@8
  int v18; // r0@9
  char *v19; // r0@9
  char *v20; // r0@10
  unsigned int *v22; // r2@12
  signed int v23; // r1@14
  unsigned int *v24; // r2@16
  signed int v25; // r1@18
  unsigned int *v26; // r2@20
  signed int v27; // r1@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  int v30; // [sp+4h] [bp-64h]@0
  char *v31; // [sp+Ch] [bp-5Ch]@9
  char *v32; // [sp+10h] [bp-58h]@9
  int v33; // [sp+14h] [bp-54h]@9
  char v34; // [sp+18h] [bp-50h]@9
  char *v35; // [sp+34h] [bp-34h]@7
  char *v36; // [sp+38h] [bp-30h]@7
  int v37; // [sp+3Ch] [bp-2Ch]@7
  int v38; // [sp+40h] [bp-28h]@1
  int v39; // [sp+44h] [bp-24h]@1
  int v40; // [sp+48h] [bp-20h]@1

  v7 = (mce::TextureGroup *)LODWORD(a2);
  v8 = *(_DWORD *)a3;
  v9 = a1;
  *(_DWORD *)a3 = 0;
  v40 = v8;
  v10 = *(_DWORD *)a4;
  *(_DWORD *)a4 = 0;
  v39 = v10;
  v11 = *(_DWORD *)a5;
  *(_DWORD *)a5 = 0;
  __asm { VLDR            S0, [SP,#0x68+arg_8] }
  v38 = v11;
  __asm { VSTR            S0, [SP,#0x68+var_64] }
  SkeletonRenderer::SkeletonRenderer(a1, *(float *)&v7, &v40, &v39, &v38, v30);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  v38 = 0;
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  v39 = 0;
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v40 = 0;
  *(_DWORD *)v9 = &off_26DC2D8;
  sub_119C884((void **)&v35, "textures/entity/skeleton/stray_overlay");
  v36 = v35;
  v37 = 0;
  v35 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v9 + 696), v7, (int)&v36, 0);
  v16 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  }
  v17 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = *(_DWORD *)a6;
  *(_DWORD *)a6 = 0;
  *(_DWORD *)(v9 + 720) = v18;
  sub_119C884((void **)&v31, "textures/entity/skeleton/stray");
  v32 = v31;
  v33 = 0;
  v31 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v34, v7, (int)&v32, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v9 + 144), (mce::TexturePtr *)&v34);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v34);
  v19 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v32 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v31 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  *(_DWORD *)(*(_DWORD *)(v9 + 720) + 32) = v9 + 696;
  return v9;
}


void __fastcall StrayRenderer::~StrayRenderer(StrayRenderer *this)
{
  StrayRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DC2D8;
  v2 = *((_DWORD *)this + 180);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 180) = 0;
  mce::TexturePtr::~TexturePtr((StrayRenderer *)((char *)v1 + 696));
  *(_DWORD *)v1 = &off_26DC0B4;
  mce::TexturePtr::~TexturePtr((StrayRenderer *)((char *)v1 + 672));
  HumanoidMobRenderer::~HumanoidMobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall StrayRenderer::~StrayRenderer(StrayRenderer *this)
{
  StrayRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DC2D8;
  v2 = *((_DWORD *)this + 180);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 180) = 0;
  mce::TexturePtr::~TexturePtr((StrayRenderer *)((char *)v1 + 696));
  *(_DWORD *)v1 = &off_26DC0B4;
  mce::TexturePtr::~TexturePtr((StrayRenderer *)((char *)v1 + 672));
  return j_j_j__ZN19HumanoidMobRendererD2Ev(v1);
}
