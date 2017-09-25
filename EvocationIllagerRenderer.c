

BaseEntityRenderer *__fastcall EvocationIllagerRenderer::~EvocationIllagerRenderer(EvocationIllagerRenderer *this)
{
  MobRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB4A8;
  mce::TexturePtr::~TexturePtr((EvocationIllagerRenderer *)((char *)this + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall EvocationIllagerRenderer::~EvocationIllagerRenderer(EvocationIllagerRenderer *this)
{
  MobRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB4A8;
  mce::TexturePtr::~TexturePtr((EvocationIllagerRenderer *)((char *)this + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall EvocationIllagerRenderer::EvocationIllagerRenderer(int a1, mce::TextureGroup *a2, int *a3)
{
  mce::TextureGroup *v3; // r5@1
  int v4; // r6@1
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

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  *a3 = 0;
  v26 = v4;
  sub_119C884((void **)&v22, "textures/entity/illager/evoker");
  v23 = v22;
  v24 = 0;
  v22 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v25, v3, (int)&v23, 0);
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
  *(_DWORD *)v5 = &off_26DB4A8;
  sub_119C884((void **)&v19, "textures/entity/illager/evoker");
  v20 = v19;
  v21 = 0;
  v19 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 644), v3, (int)&v20, 0);
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
  *(_DWORD *)(*(_DWORD *)(v5 + 140) + 32) = v5 + 644;
  return v5;
}


void __fastcall EvocationIllagerRenderer::setupScale(int a1, int a2, int _R2)
{
  EvocationIllagerRenderer::setupScale(a1, a2, _R2);
}


void __fastcall EvocationIllagerRenderer::setupScale(int a1, int a2, int _R2)
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


void __fastcall EvocationIllagerRenderer::~EvocationIllagerRenderer(EvocationIllagerRenderer *this)
{
  EvocationIllagerRenderer::~EvocationIllagerRenderer(this);
}
