

BaseEntityRenderer *__fastcall SlimeRenderer::~SlimeRenderer(SlimeRenderer *this)
{
  SlimeRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DC118;
  mce::MaterialPtr::~MaterialPtr((SlimeRenderer *)((char *)this + 648));
  v2 = *((_DWORD *)v1 + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


int __fastcall SlimeRenderer::setupScale(int a1, Slime *a2, int a3, int a4)
{
  Slime *v4; // r6@1
  int result; // r0@1

  v4 = a2;
  _R5 = a4;
  _R4 = a3;
  _R7 = Slime::getSlimeSize(a2);
  _R0 = Slime::getSquishValue(v4);
  __asm { VMOV            S16, R0 }
  result = Slime::getOldSquishValue(v4);
  __asm
  {
    VMOV            S4, R7
    VMOV            S0, R0
    VMOV.F32        S2, #0.5
    VCVT.F32.S32    S4, S4
    VSUB.F32        S6, S16, S0
    VMOV            S8, R5
    VMOV.F32        S10, #1.0
    VMUL.F32        S2, S4, S2
    VMUL.F32        S6, S6, S8
    VADD.F32        S2, S2, S10
    VADD.F32        S0, S6, S0
    VLDR            S6, [R4]
    VDIV.F32        S0, S0, S2
    VADD.F32        S0, S0, S10
    VDIV.F32        S2, S10, S0
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


signed int __fastcall SlimeRenderer::prepareArmor(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a3 + 172))(a3) )
  {
    if ( v6 == 1 )
    {
      ShaderColor::setColor(*(ShaderColor **)(v5 + 48), (const Color *)&Color::WHITE);
    }
    else if ( !v6 )
      MobRenderer::setArmor((MobRenderer *)v4, *(Model **)(v4 + 644));
      return 1;
  }
  return -1;
}


void __fastcall SlimeRenderer::~SlimeRenderer(SlimeRenderer *this)
{
  SlimeRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DC118;
  mce::MaterialPtr::~MaterialPtr((SlimeRenderer *)((char *)this + 648));
  v2 = *((_DWORD *)v1 + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall SlimeRenderer::~SlimeRenderer(SlimeRenderer *this)
{
  SlimeRenderer::~SlimeRenderer(this);
}


int __fastcall SlimeRenderer::SlimeRenderer(int a1, mce::TextureGroup *a2, int *a3, int *a4)
{
  mce::TextureGroup *v4; // r7@1
  int v5; // r6@1
  int *v6; // r8@1
  int v7; // r4@1
  char *v8; // r0@1
  char *v9; // r0@2
  int v10; // r0@5
  void *v11; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+4h] [bp-4Ch]@5
  char *v20; // [sp+Ch] [bp-44h]@1
  char *v21; // [sp+10h] [bp-40h]@1
  int v22; // [sp+14h] [bp-3Ch]@1
  char v23; // [sp+18h] [bp-38h]@1
  int v24; // [sp+30h] [bp-20h]@1

  v4 = a2;
  v5 = *a3;
  v6 = a4;
  v7 = a1;
  *a3 = 0;
  v24 = v5;
  sub_119C884((void **)&v20, "textures/entity/slime/slime");
  v21 = v20;
  v22 = 0;
  v20 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v23, v4, (int)&v21, 0);
  MobRenderer::MobRenderer(v7, &v24, (mce::TexturePtr *)&v23);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v23);
  v8 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  v9 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  v24 = 0;
  *(_DWORD *)v7 = &off_26DC118;
  v10 = *v6;
  *v6 = 0;
  *(_DWORD *)(v7 + 644) = v10;
  sub_119C884((void **)&v19, "slime_outer");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v7 + 648),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v19);
  v11 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  *(_DWORD *)(*(_DWORD *)(v7 + 644) + 28) = v7 + 648;
  *(_DWORD *)(*(_DWORD *)(v7 + 644) + 32) = v7 + 144;
  return v7;
}
