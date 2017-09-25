

void __fastcall PolarBearRenderer::setupScale(int a1, int a2, int _R2)
{
  __asm
  {
    VLDR            S0, =1.2
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


void __fastcall PolarBearRenderer::~PolarBearRenderer(PolarBearRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall PolarBearRenderer::~PolarBearRenderer(PolarBearRenderer *this)
{
  PolarBearRenderer::~PolarBearRenderer(this);
}


void __fastcall PolarBearRenderer::setupScale(int a1, int a2, int _R2)
{
  PolarBearRenderer::setupScale(a1, a2, _R2);
}


_DWORD *__fastcall PolarBearRenderer::PolarBearRenderer(_DWORD *a1, mce::TextureGroup *a2, int *a3)
{
  mce::TextureGroup *v3; // r7@1
  int v4; // r6@1
  _DWORD *v5; // r8@1
  char *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  char *v13; // [sp+4h] [bp-44h]@1
  char *v14; // [sp+8h] [bp-40h]@1
  int v15; // [sp+Ch] [bp-3Ch]@1
  char v16; // [sp+10h] [bp-38h]@1
  int v17; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  *a3 = 0;
  v17 = v4;
  sub_119C884((void **)&v13, "textures/entity/polarbear");
  v14 = v13;
  v15 = 0;
  v13 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v16, v3, (int)&v14, 0);
  MobRenderer::MobRenderer((int)v5, &v17, (mce::TexturePtr *)&v16);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v16);
  v6 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *v5 = &off_26DBEA4;
  return v5;
}
