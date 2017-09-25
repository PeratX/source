

void __fastcall LavaSlimeRenderer::~LavaSlimeRenderer(LavaSlimeRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


_DWORD *__fastcall LavaSlimeRenderer::LavaSlimeRenderer(_DWORD *a1, mce::TextureGroup *a2, int *a3)
{
  mce::TextureGroup *v3; // r6@1
  int v4; // r5@1
  _DWORD *v5; // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  char *v13; // [sp+8h] [bp-40h]@1
  char *v14; // [sp+Ch] [bp-3Ch]@1
  int v15; // [sp+10h] [bp-38h]@1
  char v16; // [sp+14h] [bp-34h]@1
  int v17; // [sp+2Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  *a3 = 0;
  v17 = v4;
  sub_119C884((void **)&v13, "textures/entity/slime/magmacube");
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
  *v5 = &off_26DB99C;
  return v5;
}


int __fastcall LavaSlimeRenderer::setupScale(int a1, Slime *a2, int a3, int a4)
{
  Slime *v4; // r6@1
  int result; // r0@1

  v4 = a2;
  _R5 = a4;
  _R4 = a3;
  _R7 = Slime::getSlimeSize(a2);
  _R0 = Slime::getOldSquishValue(v4);
  __asm { VMOV            S16, R0 }
  result = Slime::getSquishValue(v4);
  __asm
  {
    VMOV            S0, R0
    VMOV            S4, R7
    VMOV.F32        S2, #0.5
    VCVT.F32.S32    S4, S4
    VSUB.F32        S0, S0, S16
    VMOV            S6, R5
    VMOV.F32        S8, #1.0
    VMUL.F32        S2, S4, S2
    VMUL.F32        S0, S0, S6
    VLDR            S6, [R4]
    VADD.F32        S2, S2, S8
    VADD.F32        S0, S0, S16
    VDIV.F32        S0, S0, S2
    VADD.F32        S0, S0, S8
    VDIV.F32        S2, S8, S0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VMUL.F32        S6, S2, S6
    VSTR            S6, [R4]
    VLDR            S6, [R4,#4]
    VSTR            S6, [R4,#4]
    VLDR            S6, [R4,#8]
    VSTR            S6, [R4,#8]
    VLDR            S6, [R4,#0xC]
    VMUL.F32        S6, S6, S2
    VSTR            S6, [R4,#0xC]
    VLDR            S4, [R4,#0x10]
    VMUL.F32        S4, S4, S0
    VSTR            S4, [R4,#0x10]
    VLDR            S4, [R4,#0x14]
    VSTR            S4, [R4,#0x14]
    VLDR            S4, [R4,#0x18]
    VSTR            S4, [R4,#0x18]
    VLDR            S4, [R4,#0x1C]
    VMUL.F32        S0, S4, S0
    VSTR            S0, [R4,#0x1C]
    VLDR            S0, [R4,#0x20]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x20]
    VLDR            S0, [R4,#0x24]
    VSTR            S0, [R4,#0x24]
    VLDR            S0, [R4,#0x28]
    VSTR            S0, [R4,#0x28]
    VLDR            S0, [R4,#0x2C]
    VSTR            S0, [R4,#0x2C]
  }
  return result;
}


void __fastcall LavaSlimeRenderer::~LavaSlimeRenderer(LavaSlimeRenderer *this)
{
  LavaSlimeRenderer::~LavaSlimeRenderer(this);
}
